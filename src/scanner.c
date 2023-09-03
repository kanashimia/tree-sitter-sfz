#include "tree_sitter/parser.h"

enum {
  LITERAL
};

void *tree_sitter_sfz_external_scanner_create() { return NULL; }
void tree_sitter_sfz_external_scanner_destroy(void *p) {}
void tree_sitter_sfz_external_scanner_reset(void *p) {}
unsigned tree_sitter_sfz_external_scanner_serialize(void *p, char *buffer) { return 0; }
void tree_sitter_sfz_external_scanner_deserialize(void *p, const char *b, unsigned n) {}

bool tree_sitter_sfz_external_scanner_scan(
  void *payload,
  TSLexer *lexer,
  const bool *valid_symbols
) {
  if (valid_symbols[LITERAL]) {
    lexer->mark_end(lexer);

    if(lexer->lookahead == '$') {
      return false;
    }

    while (lexer->lookahead != '\n' && !lexer->eof(lexer)) {
      switch (lexer->lookahead) {
        case '/':
          lexer->mark_end(lexer);
          lexer->advance(lexer, false);
          if(lexer->lookahead == '/' || lexer->lookahead == '*') {
            return true;
          }
          break;
        case ' ':
          lexer->mark_end(lexer);
          lexer->advance(lexer, false);
          if(lexer->lookahead == '#' || lexer->lookahead == '<') {
            return true;
          }
          break;
        case '=':
          return true;
          break;
        default:
          lexer->advance(lexer, false);
      }
    }

    lexer->mark_end(lexer);

    lexer->result_symbol = LITERAL;
    return true;
  }

  return false;
}

