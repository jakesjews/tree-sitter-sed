#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 32
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 28
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 6
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 6

enum ts_symbol_identifiers {
  aux_sym_blank_token1 = 1,
  anon_sym_COMMA = 2,
  sym_number = 3,
  sym_last = 4,
  sym_command = 5,
  aux_sym_payload_token1 = 6,
  aux_sym_payload_token2 = 7,
  anon_sym_w = 8,
  anon_sym_COLON = 9,
  sym_label_reference = 10,
  sym_meta_directive = 11,
  sym_file_path = 12,
  sym_regex_address = 13,
  sym_substitute_body = 14,
  sym_substitute_flags = 15,
  sym_translit_body = 16,
  sym_command_payload = 17,
  sym_text_block = 18,
  sym_source_file = 19,
  sym_blank = 20,
  sym_command_line = 21,
  sym_address_range = 22,
  sym_address = 23,
  sym_payload = 24,
  sym_substitute_command = 25,
  sym_label_definition = 26,
  aux_sym_source_file_repeat1 = 27,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_blank_token1] = "blank_token1",
  [anon_sym_COMMA] = ",",
  [sym_number] = "number",
  [sym_last] = "last",
  [sym_command] = "command",
  [aux_sym_payload_token1] = "payload_token1",
  [aux_sym_payload_token2] = "payload_token2",
  [anon_sym_w] = "w",
  [anon_sym_COLON] = ":",
  [sym_label_reference] = "label_reference",
  [sym_meta_directive] = "meta_directive",
  [sym_file_path] = "file_path",
  [sym_regex_address] = "regex_address",
  [sym_substitute_body] = "substitute_body",
  [sym_substitute_flags] = "substitute_flags",
  [sym_translit_body] = "translit_body",
  [sym_command_payload] = "command_payload",
  [sym_text_block] = "text_block",
  [sym_source_file] = "source_file",
  [sym_blank] = "blank",
  [sym_command_line] = "command_line",
  [sym_address_range] = "address_range",
  [sym_address] = "address",
  [sym_payload] = "payload",
  [sym_substitute_command] = "substitute_command",
  [sym_label_definition] = "label_definition",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_blank_token1] = aux_sym_blank_token1,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_number] = sym_number,
  [sym_last] = sym_last,
  [sym_command] = sym_command,
  [aux_sym_payload_token1] = aux_sym_payload_token1,
  [aux_sym_payload_token2] = aux_sym_payload_token2,
  [anon_sym_w] = anon_sym_w,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_label_reference] = sym_label_reference,
  [sym_meta_directive] = sym_meta_directive,
  [sym_file_path] = sym_file_path,
  [sym_regex_address] = sym_regex_address,
  [sym_substitute_body] = sym_substitute_body,
  [sym_substitute_flags] = sym_substitute_flags,
  [sym_translit_body] = sym_translit_body,
  [sym_command_payload] = sym_command_payload,
  [sym_text_block] = sym_text_block,
  [sym_source_file] = sym_source_file,
  [sym_blank] = sym_blank,
  [sym_command_line] = sym_command_line,
  [sym_address_range] = sym_address_range,
  [sym_address] = sym_address,
  [sym_payload] = sym_payload,
  [sym_substitute_command] = sym_substitute_command,
  [sym_label_definition] = sym_label_definition,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_blank_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_last] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_payload_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_payload_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_w] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_label_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_meta_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_file_path] = {
    .visible = true,
    .named = true,
  },
  [sym_regex_address] = {
    .visible = true,
    .named = true,
  },
  [sym_substitute_body] = {
    .visible = true,
    .named = true,
  },
  [sym_substitute_flags] = {
    .visible = true,
    .named = true,
  },
  [sym_translit_body] = {
    .visible = true,
    .named = true,
  },
  [sym_command_payload] = {
    .visible = true,
    .named = true,
  },
  [sym_text_block] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_blank] = {
    .visible = true,
    .named = true,
  },
  [sym_command_line] = {
    .visible = true,
    .named = true,
  },
  [sym_address_range] = {
    .visible = true,
    .named = true,
  },
  [sym_address] = {
    .visible = true,
    .named = true,
  },
  [sym_payload] = {
    .visible = true,
    .named = true,
  },
  [sym_substitute_command] = {
    .visible = true,
    .named = true,
  },
  [sym_label_definition] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_command = 1,
  field_name = 2,
  field_payload = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_command] = "command",
  [field_name] = "name",
  [field_payload] = "payload",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_command, 0},
  [1] =
    {field_command, 0},
    {field_payload, 1},
  [3] =
    {field_name, 1},
  [4] =
    {field_command, 1},
  [5] =
    {field_command, 1},
    {field_payload, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
};

static TSCharacterRange sym_command_character_set_1[] = {
  {':', ':'}, {'=', '='}, {'H', 'H'}, {'N', 'N'}, {'P', 'P'}, {'a', 'e'}, {'g', 'i'}, {'l', 'l'},
  {'n', 'n'}, {'p', 't'}, {'w', 'z'},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(14);
      ADVANCE_MAP(
        '$', 21,
        ',', 19,
        '-', 9,
        ':', 26,
        'R', 23,
        'T', 24,
        'r', 22,
        'w', 25,
        'b', 22,
        't', 22,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (set_contains(sym_command_character_set_1, 11, lookahead)) ADVANCE(22);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(28);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '$') ADVANCE(21);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == ':') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (set_contains(sym_command_character_set_1, 11, lookahead)) ADVANCE(22);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '\n', 16,
        '\r', 5,
        'R', 23,
        'r', 23,
        'w', 23,
        'T', 24,
        'b', 24,
        't', 24,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(5);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == 'w') ADVANCE(25);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(6);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead == '\r') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 8:
      if (lookahead == ',') ADVANCE(19);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (set_contains(sym_command_character_set_1, 11, lookahead)) ADVANCE(22);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 10:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 11:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 12:
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 13:
      if (eof) ADVANCE(14);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '$') ADVANCE(21);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == ':') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (set_contains(sym_command_character_set_1, 11, lookahead)) ADVANCE(22);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_blank_token1);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '\r') ADVANCE(4);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_blank_token1);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '\r') ADVANCE(5);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_blank_token1);
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '\r') ADVANCE(6);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_blank_token1);
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead == '\r') ADVANCE(7);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_last);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_command);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_payload_token1);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_payload_token2);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_w);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_label_reference);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_meta_directive);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_file_path);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 13, .external_lex_state = 2},
  [2] = {.lex_state = 13, .external_lex_state = 2},
  [3] = {.lex_state = 13, .external_lex_state = 2},
  [4] = {.lex_state = 5, .external_lex_state = 3},
  [5] = {.lex_state = 5, .external_lex_state = 3},
  [6] = {.lex_state = 13, .external_lex_state = 2},
  [7] = {.lex_state = 13, .external_lex_state = 2},
  [8] = {.lex_state = 13, .external_lex_state = 2},
  [9] = {.lex_state = 13, .external_lex_state = 2},
  [10] = {.lex_state = 13, .external_lex_state = 2},
  [11] = {.lex_state = 13, .external_lex_state = 2},
  [12] = {.lex_state = 0, .external_lex_state = 2},
  [13] = {.lex_state = 6, .external_lex_state = 4},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 13},
  [19] = {.lex_state = 13},
  [20] = {.lex_state = 10},
  [21] = {.lex_state = 10},
  [22] = {.lex_state = 13},
  [23] = {.lex_state = 13},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 13},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 10},
  [29] = {.lex_state = 13},
  [30] = {.lex_state = 11},
  [31] = {.lex_state = 13},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_last] = ACTIONS(1),
    [sym_command] = ACTIONS(1),
    [aux_sym_payload_token1] = ACTIONS(1),
    [aux_sym_payload_token2] = ACTIONS(1),
    [anon_sym_w] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_meta_directive] = ACTIONS(1),
    [sym_regex_address] = ACTIONS(1),
    [sym_substitute_body] = ACTIONS(1),
    [sym_substitute_flags] = ACTIONS(1),
    [sym_translit_body] = ACTIONS(1),
    [sym_command_payload] = ACTIONS(1),
    [sym_text_block] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(25),
    [sym_blank] = STATE(2),
    [sym_command_line] = STATE(2),
    [sym_address_range] = STATE(24),
    [sym_address] = STATE(14),
    [sym_label_definition] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_blank_token1] = ACTIONS(5),
    [sym_number] = ACTIONS(7),
    [sym_last] = ACTIONS(7),
    [sym_command] = ACTIONS(9),
    [anon_sym_COLON] = ACTIONS(11),
    [sym_meta_directive] = ACTIONS(13),
    [sym_regex_address] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(5), 1,
      aux_sym_blank_token1,
    ACTIONS(9), 1,
      sym_command,
    ACTIONS(11), 1,
      anon_sym_COLON,
    ACTIONS(15), 1,
      sym_regex_address,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      sym_meta_directive,
    STATE(14), 1,
      sym_address,
    STATE(24), 1,
      sym_address_range,
    ACTIONS(7), 2,
      sym_number,
      sym_last,
    STATE(3), 4,
      sym_blank,
      sym_command_line,
      sym_label_definition,
      aux_sym_source_file_repeat1,
  [35] = 10,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      aux_sym_blank_token1,
    ACTIONS(29), 1,
      sym_command,
    ACTIONS(32), 1,
      anon_sym_COLON,
    ACTIONS(35), 1,
      sym_meta_directive,
    ACTIONS(38), 1,
      sym_regex_address,
    STATE(14), 1,
      sym_address,
    STATE(24), 1,
      sym_address_range,
    ACTIONS(26), 2,
      sym_number,
      sym_last,
    STATE(3), 4,
      sym_blank,
      sym_command_line,
      sym_label_definition,
      aux_sym_source_file_repeat1,
  [70] = 7,
    ACTIONS(41), 1,
      aux_sym_blank_token1,
    ACTIONS(43), 1,
      aux_sym_payload_token1,
    ACTIONS(45), 1,
      aux_sym_payload_token2,
    ACTIONS(47), 1,
      sym_substitute_body,
    STATE(23), 1,
      sym_substitute_command,
    STATE(26), 1,
      sym_payload,
    ACTIONS(49), 3,
      sym_translit_body,
      sym_command_payload,
      sym_text_block,
  [94] = 7,
    ACTIONS(43), 1,
      aux_sym_payload_token1,
    ACTIONS(45), 1,
      aux_sym_payload_token2,
    ACTIONS(47), 1,
      sym_substitute_body,
    ACTIONS(51), 1,
      aux_sym_blank_token1,
    STATE(18), 1,
      sym_payload,
    STATE(23), 1,
      sym_substitute_command,
    ACTIONS(49), 3,
      sym_translit_body,
      sym_command_payload,
      sym_text_block,
  [118] = 2,
    ACTIONS(53), 3,
      sym_regex_address,
      ts_builtin_sym_end,
      aux_sym_blank_token1,
    ACTIONS(55), 5,
      sym_number,
      sym_last,
      sym_command,
      anon_sym_COLON,
      sym_meta_directive,
  [131] = 2,
    ACTIONS(57), 3,
      sym_regex_address,
      ts_builtin_sym_end,
      aux_sym_blank_token1,
    ACTIONS(59), 5,
      sym_number,
      sym_last,
      sym_command,
      anon_sym_COLON,
      sym_meta_directive,
  [144] = 2,
    ACTIONS(61), 3,
      sym_regex_address,
      ts_builtin_sym_end,
      aux_sym_blank_token1,
    ACTIONS(63), 5,
      sym_number,
      sym_last,
      sym_command,
      anon_sym_COLON,
      sym_meta_directive,
  [157] = 2,
    ACTIONS(65), 3,
      sym_regex_address,
      ts_builtin_sym_end,
      aux_sym_blank_token1,
    ACTIONS(67), 5,
      sym_number,
      sym_last,
      sym_command,
      anon_sym_COLON,
      sym_meta_directive,
  [170] = 2,
    ACTIONS(69), 3,
      sym_regex_address,
      ts_builtin_sym_end,
      aux_sym_blank_token1,
    ACTIONS(71), 5,
      sym_number,
      sym_last,
      sym_command,
      anon_sym_COLON,
      sym_meta_directive,
  [183] = 2,
    ACTIONS(73), 3,
      sym_regex_address,
      ts_builtin_sym_end,
      aux_sym_blank_token1,
    ACTIONS(75), 5,
      sym_number,
      sym_last,
      sym_command,
      anon_sym_COLON,
      sym_meta_directive,
  [196] = 2,
    STATE(27), 1,
      sym_address,
    ACTIONS(15), 3,
      sym_regex_address,
      sym_number,
      sym_last,
  [205] = 3,
    ACTIONS(77), 1,
      aux_sym_blank_token1,
    ACTIONS(79), 1,
      anon_sym_w,
    ACTIONS(81), 1,
      sym_substitute_flags,
  [215] = 2,
    ACTIONS(83), 1,
      anon_sym_COMMA,
    ACTIONS(85), 1,
      sym_command,
  [222] = 1,
    ACTIONS(87), 2,
      anon_sym_COMMA,
      sym_command,
  [227] = 2,
    ACTIONS(89), 1,
      aux_sym_blank_token1,
    ACTIONS(91), 1,
      sym_label_reference,
  [234] = 2,
    ACTIONS(93), 1,
      aux_sym_blank_token1,
    ACTIONS(95), 1,
      anon_sym_w,
  [241] = 1,
    ACTIONS(97), 1,
      aux_sym_blank_token1,
  [245] = 1,
    ACTIONS(99), 1,
      aux_sym_blank_token1,
  [249] = 1,
    ACTIONS(101), 1,
      sym_file_path,
  [253] = 1,
    ACTIONS(103), 1,
      sym_file_path,
  [257] = 1,
    ACTIONS(105), 1,
      aux_sym_blank_token1,
  [261] = 1,
    ACTIONS(89), 1,
      aux_sym_blank_token1,
  [265] = 1,
    ACTIONS(107), 1,
      sym_command,
  [269] = 1,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
  [273] = 1,
    ACTIONS(111), 1,
      aux_sym_blank_token1,
  [277] = 1,
    ACTIONS(113), 1,
      sym_command,
  [281] = 1,
    ACTIONS(115), 1,
      sym_file_path,
  [285] = 1,
    ACTIONS(117), 1,
      aux_sym_blank_token1,
  [289] = 1,
    ACTIONS(119), 1,
      sym_label_reference,
  [293] = 1,
    ACTIONS(121), 1,
      aux_sym_blank_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 35,
  [SMALL_STATE(4)] = 70,
  [SMALL_STATE(5)] = 94,
  [SMALL_STATE(6)] = 118,
  [SMALL_STATE(7)] = 131,
  [SMALL_STATE(8)] = 144,
  [SMALL_STATE(9)] = 157,
  [SMALL_STATE(10)] = 170,
  [SMALL_STATE(11)] = 183,
  [SMALL_STATE(12)] = 196,
  [SMALL_STATE(13)] = 205,
  [SMALL_STATE(14)] = 215,
  [SMALL_STATE(15)] = 222,
  [SMALL_STATE(16)] = 227,
  [SMALL_STATE(17)] = 234,
  [SMALL_STATE(18)] = 241,
  [SMALL_STATE(19)] = 245,
  [SMALL_STATE(20)] = 249,
  [SMALL_STATE(21)] = 253,
  [SMALL_STATE(22)] = 257,
  [SMALL_STATE(23)] = 261,
  [SMALL_STATE(24)] = 265,
  [SMALL_STATE(25)] = 269,
  [SMALL_STATE(26)] = 273,
  [SMALL_STATE(27)] = 277,
  [SMALL_STATE(28)] = 281,
  [SMALL_STATE(29)] = 285,
  [SMALL_STATE(30)] = 289,
  [SMALL_STATE(31)] = 293,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_line, 4, 0, 5),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_line, 4, 0, 5),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blank, 1, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blank, 1, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_line, 3, 0, 4),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_line, 3, 0, 4),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_definition, 3, 0, 3),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_definition, 3, 0, 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_line, 3, 0, 2),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_line, 3, 0, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_line, 2, 0, 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_line, 2, 0, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substitute_command, 1, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address_range, 1, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 1, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_payload, 1, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substitute_command, 2, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_payload, 2, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [109] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address_range, 3, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substitute_command, 3, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substitute_command, 4, 0, 0),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_regex_address = 0,
  ts_external_token_substitute_body = 1,
  ts_external_token_substitute_flags = 2,
  ts_external_token_translit_body = 3,
  ts_external_token_command_payload = 4,
  ts_external_token_text_block = 5,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_regex_address] = sym_regex_address,
  [ts_external_token_substitute_body] = sym_substitute_body,
  [ts_external_token_substitute_flags] = sym_substitute_flags,
  [ts_external_token_translit_body] = sym_translit_body,
  [ts_external_token_command_payload] = sym_command_payload,
  [ts_external_token_text_block] = sym_text_block,
};

static const bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_regex_address] = true,
    [ts_external_token_substitute_body] = true,
    [ts_external_token_substitute_flags] = true,
    [ts_external_token_translit_body] = true,
    [ts_external_token_command_payload] = true,
    [ts_external_token_text_block] = true,
  },
  [2] = {
    [ts_external_token_regex_address] = true,
  },
  [3] = {
    [ts_external_token_substitute_body] = true,
    [ts_external_token_translit_body] = true,
    [ts_external_token_command_payload] = true,
    [ts_external_token_text_block] = true,
  },
  [4] = {
    [ts_external_token_substitute_flags] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_sed_external_scanner_create(void);
void tree_sitter_sed_external_scanner_destroy(void *);
bool tree_sitter_sed_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_sed_external_scanner_serialize(void *, char *);
void tree_sitter_sed_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_sed(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_sed_external_scanner_create,
      tree_sitter_sed_external_scanner_destroy,
      tree_sitter_sed_external_scanner_scan,
      tree_sitter_sed_external_scanner_serialize,
      tree_sitter_sed_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
