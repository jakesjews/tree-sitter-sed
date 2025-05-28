
const LABEL_RE = /[A-Za-z0-9_]+/;
module.exports = grammar({
  name: 'sed',
  externals: $ => [
    $.regex_address,
    $.substitute_body,
    $.substitute_flags,
    $.translit_body,
    $.command_payload,
    $.text_block,
  ],
  extras: $ => [ /\s+/ ],
  rules: {
    source_file: $ => repeat(choice($.command_line,$.blank,$.label_definition,$.meta_directive)),
    blank:_=>/\r?\n/,
    command_line:$=>seq(optional($.address_range),field('command',$.command),optional(field('payload',$.payload)),/\r?\n/),
    address_range:$=>seq($.address,optional(seq(',',$.address))),
    address:$=>choice($.number,$.last,$.regex_address),
    number:_=>/\d+/,
    last:_=>/\$/,
    command:_=>token(/[abcdeghHilnNpPrstwxyyzq:=]/),

    payload:$=>choice(
      $.substitute_command,
      $.translit_body,
      $.text_block,
      seq(/[rRw]/,$.file_path),
      seq(/[btT]/,optional($.label_reference)),
      $.command_payload
    ),

    substitute_command:$=>seq($.substitute_body,optional($.substitute_flags),optional(seq('w',$.file_path))),

    label_definition:$=>seq(':',field('name',$.label_reference),/\r?\n/),
    label_reference:_=>token(LABEL_RE),
    meta_directive: _ => token(seq(
      /--[A-Za-z0-9_.=-]+|-[A-Za-z][A-Za-z0-9_.=-]*/,  // accepts 1-dash long opts
      /[^\r\n]*/,
      /\r?\n/
    )),
    file_path:_=>token(/[A-Za-z0-9_./-]+/),
  }
});
