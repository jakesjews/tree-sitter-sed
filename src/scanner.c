
#include <tree_sitter/parser.h>
#include <ctype.h>
#include <string.h>
enum TokenType { REGEX_ADDRESS, SUBSTITUTE_BODY, SUBSTITUTE_FLAGS, TRANSLIT_BODY, COMMAND_PAYLOAD, TEXT_BLOCK };

static void adv_cont(TSLexer *lx){
  if(lx->lookahead=='\\'){
    lx->advance(lx,false);
    if(lx->lookahead=='\r') lx->advance(lx,false);
    if(lx->lookahead=='\n') lx->advance(lx,false);
    return;
  }
  lx->advance(lx,false);
}

static bool scan_regex(TSLexer *lx){
  int d=lx->lookahead;
  if(isspace(d)||isalnum(d)||d=='\\'||d==0) return false;
  adv_cont(lx);
  for(;;){
    if(lx->lookahead=='\\'){ adv_cont(lx); continue;}
    if(lx->lookahead==d){ adv_cont(lx); break;}
    if (lx->lookahead == 0 || lx->lookahead == '\n') return false;
    adv_cont(lx);
  }
  lx->mark_end(lx);
  lx->result_symbol=REGEX_ADDRESS;
  return true;
}

static bool scan_sub_body(TSLexer *lx){
  int d=lx->lookahead;
  if(d=='\n'||d=='\\'||d==0||isalnum(d)||isspace(d)) return false;
  adv_cont(lx);
  int seen=0;
  while(seen<2){
    if(lx->lookahead=='\\'){ adv_cont(lx); continue;}
    if(lx->lookahead==d){ adv_cont(lx); ++seen; continue;}
    if (lx->lookahead == 0 || lx->lookahead == '\n') return false;
    adv_cont(lx);
  }
  lx->mark_end(lx);
  lx->result_symbol=SUBSTITUTE_BODY;
  return true;
}

static bool scan_sub_flags(TSLexer *lx){
  if(!strchr("gipmwI", lx->lookahead)) return false;
  while(strchr("gipmwI", lx->lookahead)) lx->advance(lx,false);
  lx->mark_end(lx);
  lx->result_symbol=SUBSTITUTE_FLAGS;
  return true;
}

static bool scan_translit(TSLexer *lx){
  int d=lx->lookahead;
  if(d=='\n'||d=='\\'||d==0||isalnum(d)||isspace(d)) return false;
  adv_cont(lx);
  int seen=0;
  while(seen<2){
    if(lx->lookahead=='\\'){ adv_cont(lx); continue;}
    if(lx->lookahead==d){ adv_cont(lx); ++seen; continue;}
    if (lx->lookahead == 0 || lx->lookahead == '\n') return false;
    adv_cont(lx);
  }
  lx->mark_end(lx);
  lx->result_symbol=TRANSLIT_BODY;
  return true;
}

static bool scan_payload(TSLexer *lx){
  if(lx->lookahead=='\n'||lx->lookahead=='\r') return false;
  while(lx->lookahead!=0){
    if(lx->lookahead=='\n') break;
    adv_cont(lx);
  }
  lx->mark_end(lx);
  lx->result_symbol=COMMAND_PAYLOAD;
  return true;
}

static bool scan_text(TSLexer *lx){
  while(lx->lookahead==' '||lx->lookahead=='\t') lx->advance(lx,false);
  if(lx->lookahead!='\\') return false;
  adv_cont(lx);
  char prev=0;
  for(;;){
    if (lx->lookahead == 0 || lx->lookahead == '\n') return false;
    if(lx->lookahead=='\n'&&prev!='\\') break;
    prev=lx->lookahead;
    adv_cont(lx);
  }
  lx->mark_end(lx);
  lx->result_symbol=TEXT_BLOCK;
  return true;
}

void *tree_sitter_sed_external_scanner_create(){return NULL;}
void tree_sitter_sed_external_scanner_destroy(void*){}
unsigned tree_sitter_sed_external_scanner_serialize(void*,char*){return 0;}
void tree_sitter_sed_external_scanner_deserialize(void*,const char*,unsigned){}

bool tree_sitter_sed_external_scanner_scan(void*,TSLexer *lx,const bool *valid){
  if(valid[REGEX_ADDRESS] && scan_regex(lx)) return true;
  if(valid[SUBSTITUTE_BODY] && scan_sub_body(lx)) return true;
  if(valid[SUBSTITUTE_FLAGS] && scan_sub_flags(lx)) return true;
  if(valid[TRANSLIT_BODY] && scan_translit(lx)) return true;
  if(valid[COMMAND_PAYLOAD] && scan_payload(lx)) return true;
  if(valid[TEXT_BLOCK] && scan_text(lx)) return true;
  return false;
}
