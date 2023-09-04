#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 84
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 34
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  sym_invalid_token = 1,
  anon_sym_POUNDdefine = 2,
  anon_sym_DQUOTE = 3,
  aux_sym_include_path_token1 = 4,
  anon_sym_DQUOTE2 = 5,
  anon_sym_POUNDinclude = 6,
  sym_comment = 7,
  anon_sym_LTglobal_GT = 8,
  anon_sym_LTmaster_GT = 9,
  anon_sym_LTgroup_GT = 10,
  anon_sym_LTregion_GT = 11,
  aux_sym_special_token1 = 12,
  sym_variable = 13,
  sym_identifier = 14,
  anon_sym_EQ = 15,
  sym_literal = 16,
  sym_document = 17,
  sym__statement = 18,
  sym_define = 19,
  sym_include_path = 20,
  sym_include = 21,
  sym_global = 22,
  sym_master = 23,
  sym_group = 24,
  sym_region = 25,
  sym_special = 26,
  sym_opcode = 27,
  aux_sym_document_repeat1 = 28,
  aux_sym_document_repeat2 = 29,
  aux_sym_document_repeat3 = 30,
  aux_sym_document_repeat4 = 31,
  aux_sym_document_repeat5 = 32,
  aux_sym_document_repeat6 = 33,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_invalid_token] = "invalid_token",
  [anon_sym_POUNDdefine] = "#define",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_include_path_token1] = "include_path_token1",
  [anon_sym_DQUOTE2] = "\"",
  [anon_sym_POUNDinclude] = "#include",
  [sym_comment] = "comment",
  [anon_sym_LTglobal_GT] = "header",
  [anon_sym_LTmaster_GT] = "header",
  [anon_sym_LTgroup_GT] = "header",
  [anon_sym_LTregion_GT] = "header",
  [aux_sym_special_token1] = "header",
  [sym_variable] = "variable",
  [sym_identifier] = "identifier",
  [anon_sym_EQ] = "=",
  [sym_literal] = "literal",
  [sym_document] = "document",
  [sym__statement] = "_statement",
  [sym_define] = "define",
  [sym_include_path] = "include_path",
  [sym_include] = "include",
  [sym_global] = "global",
  [sym_master] = "master",
  [sym_group] = "group",
  [sym_region] = "region",
  [sym_special] = "special",
  [sym_opcode] = "opcode",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_document_repeat2] = "document_repeat2",
  [aux_sym_document_repeat3] = "document_repeat3",
  [aux_sym_document_repeat4] = "document_repeat4",
  [aux_sym_document_repeat5] = "document_repeat5",
  [aux_sym_document_repeat6] = "document_repeat6",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_invalid_token] = sym_invalid_token,
  [anon_sym_POUNDdefine] = anon_sym_POUNDdefine,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_include_path_token1] = aux_sym_include_path_token1,
  [anon_sym_DQUOTE2] = anon_sym_DQUOTE,
  [anon_sym_POUNDinclude] = anon_sym_POUNDinclude,
  [sym_comment] = sym_comment,
  [anon_sym_LTglobal_GT] = anon_sym_LTglobal_GT,
  [anon_sym_LTmaster_GT] = anon_sym_LTglobal_GT,
  [anon_sym_LTgroup_GT] = anon_sym_LTglobal_GT,
  [anon_sym_LTregion_GT] = anon_sym_LTglobal_GT,
  [aux_sym_special_token1] = anon_sym_LTglobal_GT,
  [sym_variable] = sym_variable,
  [sym_identifier] = sym_identifier,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_literal] = sym_literal,
  [sym_document] = sym_document,
  [sym__statement] = sym__statement,
  [sym_define] = sym_define,
  [sym_include_path] = sym_include_path,
  [sym_include] = sym_include,
  [sym_global] = sym_global,
  [sym_master] = sym_master,
  [sym_group] = sym_group,
  [sym_region] = sym_region,
  [sym_special] = sym_special,
  [sym_opcode] = sym_opcode,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_document_repeat2] = aux_sym_document_repeat2,
  [aux_sym_document_repeat3] = aux_sym_document_repeat3,
  [aux_sym_document_repeat4] = aux_sym_document_repeat4,
  [aux_sym_document_repeat5] = aux_sym_document_repeat5,
  [aux_sym_document_repeat6] = aux_sym_document_repeat6,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_invalid_token] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUNDdefine] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_include_path_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDinclude] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LTglobal_GT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LTmaster_GT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LTgroup_GT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LTregion_GT] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_special_token1] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_define] = {
    .visible = true,
    .named = true,
  },
  [sym_include_path] = {
    .visible = true,
    .named = true,
  },
  [sym_include] = {
    .visible = true,
    .named = true,
  },
  [sym_global] = {
    .visible = true,
    .named = true,
  },
  [sym_master] = {
    .visible = true,
    .named = true,
  },
  [sym_group] = {
    .visible = true,
    .named = true,
  },
  [sym_region] = {
    .visible = true,
    .named = true,
  },
  [sym_special] = {
    .visible = true,
    .named = true,
  },
  [sym_opcode] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_document_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_document_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_document_repeat4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_document_repeat5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_document_repeat6] = {
    .visible = false,
    .named = false,
  },
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
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(67);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '#') ADVANCE(116);
      if (lookahead == '$') ADVANCE(160);
      if (lookahead == '/') ADVANCE(101);
      if (lookahead == '<') ADVANCE(113);
      if (lookahead == '=') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(64)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(78);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(85);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(82);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(76);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(5)
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(77);
      END_STATE();
    case 7:
      if (lookahead == '>') ADVANCE(94);
      END_STATE();
    case 8:
      if (lookahead == '>') ADVANCE(90);
      END_STATE();
    case 9:
      if (lookahead == '>') ADVANCE(86);
      END_STATE();
    case 10:
      if (lookahead == '>') ADVANCE(88);
      END_STATE();
    case 11:
      if (lookahead == '>') ADVANCE(92);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(56);
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 15:
      if (lookahead == 'b') ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(31);
      if (lookahead == 'g') ADVANCE(36);
      if (lookahead == 'm') ADVANCE(12);
      if (lookahead == 'r') ADVANCE(22);
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(38);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(57);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(26);
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(33);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(25);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 29:
      if (lookahead == 'f') ADVANCE(34);
      END_STATE();
    case 30:
      if (lookahead == 'f') ADVANCE(27);
      END_STATE();
    case 31:
      if (lookahead == 'f') ADVANCE(30);
      END_STATE();
    case 32:
      if (lookahead == 'g') ADVANCE(35);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(7);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(46);
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(7);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 41:
      if (lookahead == 'm') ADVANCE(51);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(43);
      if (lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 51:
      if (lookahead == 'p') ADVANCE(40);
      END_STATE();
    case 52:
      if (lookahead == 'p') ADVANCE(8);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 56:
      if (lookahead == 's') ADVANCE(59);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 60:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 61:
      if (lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 62:
      if (lookahead == 'v') ADVANCE(23);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 64:
      if (eof) ADVANCE(67);
      if (lookahead == '"') ADVANCE(71);
      if (lookahead == '#') ADVANCE(116);
      if (lookahead == '$') ADVANCE(160);
      if (lookahead == '/') ADVANCE(101);
      if (lookahead == '<') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(64)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(161);
      END_STATE();
    case 65:
      if (eof) ADVANCE(67);
      if (lookahead == '"') ADVANCE(70);
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '$') ADVANCE(63);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '<') ADVANCE(16);
      if (lookahead == '=') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(66)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 66:
      if (eof) ADVANCE(67);
      if (lookahead == '"') ADVANCE(70);
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '$') ADVANCE(63);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '<') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(66)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_POUNDdefine);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_POUNDdefine);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(161);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(161);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_include_path_token1);
      if (lookahead == '"') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_include_path_token1);
      if (lookahead == '*') ADVANCE(75);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(77);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_include_path_token1);
      if (lookahead == '*') ADVANCE(74);
      if (lookahead == '/') ADVANCE(77);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '"') ADVANCE(4);
      if (lookahead != 0) ADVANCE(75);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_include_path_token1);
      if (lookahead == '*') ADVANCE(74);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '"') ADVANCE(4);
      if (lookahead != 0) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_include_path_token1);
      if (lookahead == '/') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_include_path_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(161);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_POUNDinclude);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_POUNDinclude);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(161);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '=') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(161);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_LTglobal_GT);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_LTglobal_GT);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(161);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_LTmaster_GT);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_LTmaster_GT);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(161);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_LTgroup_GT);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_LTgroup_GT);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(161);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_LTregion_GT);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_LTregion_GT);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(161);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_special_token1);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_special_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(161);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(161);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(161);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_invalid_token);
      if (lookahead == '*') ADVANCE(103);
      if (lookahead == '/') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(161);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_invalid_token);
      if (lookahead == '*') ADVANCE(102);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '=') ADVANCE(4);
      if (lookahead != 0) ADVANCE(103);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_invalid_token);
      if (lookahead == '*') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '=') ADVANCE(4);
      if (lookahead != 0) ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_invalid_token);
      if (lookahead == '>') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(161);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_invalid_token);
      if (lookahead == '>') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(161);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_invalid_token);
      if (lookahead == '>') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(161);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_invalid_token);
      if (lookahead == '>') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(161);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_invalid_token);
      if (lookahead == '>') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(161);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_invalid_token);
      if (lookahead == 'a') ADVANCE(153);
      if (lookahead == 'i') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(161);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_invalid_token);
      if (lookahead == 'a') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(161);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_invalid_token);
      if (lookahead == 'a') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(161);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_invalid_token);
      if (lookahead == 'b') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(161);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_invalid_token);
      if (lookahead == 'c') ADVANCE(145);
      if (lookahead == 'e') ADVANCE(128);
      if (lookahead == 'g') ADVANCE(133);
      if (lookahead == 'm') ADVANCE(109);
      if (lookahead == 'r') ADVANCE(119);
      if (lookahead == 's') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(161);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_invalid_token);
      if (lookahead == 'c') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(161);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_invalid_token);
      if (lookahead == 'c') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(161);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_invalid_token);
      if (lookahead == 'd') ADVANCE(123);
      if (lookahead == 'i') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(161);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_invalid_token);
      if (lookahead == 'd') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(161);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_invalid_token);
      if (lookahead == 'd') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(161);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_invalid_token);
      if (lookahead == 'e') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(161);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_invalid_token);
      if (lookahead == 'e') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(161);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_invalid_token);
      if (lookahead == 'e') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(161);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_invalid_token);
      if (lookahead == 'e') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(161);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_invalid_token);
      if (lookahead == 'e') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(161);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_invalid_token);
      if (lookahead == 'e') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(161);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_invalid_token);
      if (lookahead == 'e') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(161);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_invalid_token);
      if (lookahead == 'f') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(161);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_invalid_token);
      if (lookahead == 'f') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(161);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_invalid_token);
      if (lookahead == 'f') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(161);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_invalid_token);
      if (lookahead == 'g') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(161);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_invalid_token);
      if (lookahead == 'i') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(161);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_invalid_token);
      if (lookahead == 'i') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(161);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_invalid_token);
      if (lookahead == 'i') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(161);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_invalid_token);
      if (lookahead == 'l') ADVANCE(143);
      if (lookahead == 'r') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(161);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_invalid_token);
      if (lookahead == 'l') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(161);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_invalid_token);
      if (lookahead == 'l') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(161);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_invalid_token);
      if (lookahead == 'l') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(161);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_invalid_token);
      if (lookahead == 'l') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(161);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_invalid_token);
      if (lookahead == 'm') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(161);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_invalid_token);
      if (lookahead == 'n') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(161);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_invalid_token);
      if (lookahead == 'n') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(161);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_invalid_token);
      if (lookahead == 'n') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(161);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_invalid_token);
      if (lookahead == 'n') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(161);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_invalid_token);
      if (lookahead == 'o') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(161);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_invalid_token);
      if (lookahead == 'o') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(161);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_invalid_token);
      if (lookahead == 'o') ADVANCE(140);
      if (lookahead == 'u') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(161);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_invalid_token);
      if (lookahead == 'o') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(161);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_invalid_token);
      if (lookahead == 'o') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(161);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_invalid_token);
      if (lookahead == 'p') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(161);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_invalid_token);
      if (lookahead == 'p') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(161);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_invalid_token);
      if (lookahead == 'r') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(161);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_invalid_token);
      if (lookahead == 'r') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(161);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_invalid_token);
      if (lookahead == 'r') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(161);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_invalid_token);
      if (lookahead == 's') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(161);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_invalid_token);
      if (lookahead == 't') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(161);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_invalid_token);
      if (lookahead == 't') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(161);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_invalid_token);
      if (lookahead == 't') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(161);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_invalid_token);
      if (lookahead == 'u') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(161);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_invalid_token);
      if (lookahead == 'u') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(161);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_invalid_token);
      if (lookahead == 'v') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(161);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_invalid_token);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(161);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_invalid_token);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(161);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 65},
  [2] = {.lex_state = 65},
  [3] = {.lex_state = 65},
  [4] = {.lex_state = 65},
  [5] = {.lex_state = 65},
  [6] = {.lex_state = 65},
  [7] = {.lex_state = 65},
  [8] = {.lex_state = 65},
  [9] = {.lex_state = 65},
  [10] = {.lex_state = 65},
  [11] = {.lex_state = 65},
  [12] = {.lex_state = 65},
  [13] = {.lex_state = 65},
  [14] = {.lex_state = 65},
  [15] = {.lex_state = 65},
  [16] = {.lex_state = 65},
  [17] = {.lex_state = 65},
  [18] = {.lex_state = 65},
  [19] = {.lex_state = 65},
  [20] = {.lex_state = 65},
  [21] = {.lex_state = 65},
  [22] = {.lex_state = 65},
  [23] = {.lex_state = 65},
  [24] = {.lex_state = 65},
  [25] = {.lex_state = 65},
  [26] = {.lex_state = 65},
  [27] = {.lex_state = 65},
  [28] = {.lex_state = 65},
  [29] = {.lex_state = 65},
  [30] = {.lex_state = 65},
  [31] = {.lex_state = 65},
  [32] = {.lex_state = 65},
  [33] = {.lex_state = 65},
  [34] = {.lex_state = 65},
  [35] = {.lex_state = 65},
  [36] = {.lex_state = 65},
  [37] = {.lex_state = 65},
  [38] = {.lex_state = 65},
  [39] = {.lex_state = 65},
  [40] = {.lex_state = 65},
  [41] = {.lex_state = 65},
  [42] = {.lex_state = 65},
  [43] = {.lex_state = 65},
  [44] = {.lex_state = 65},
  [45] = {.lex_state = 65},
  [46] = {.lex_state = 65},
  [47] = {.lex_state = 65},
  [48] = {.lex_state = 65},
  [49] = {.lex_state = 65},
  [50] = {.lex_state = 65},
  [51] = {.lex_state = 65},
  [52] = {.lex_state = 65},
  [53] = {.lex_state = 65},
  [54] = {.lex_state = 65},
  [55] = {.lex_state = 65},
  [56] = {.lex_state = 65},
  [57] = {.lex_state = 65},
  [58] = {.lex_state = 65},
  [59] = {.lex_state = 65},
  [60] = {.lex_state = 65},
  [61] = {.lex_state = 65},
  [62] = {.lex_state = 65},
  [63] = {.lex_state = 65},
  [64] = {.lex_state = 65},
  [65] = {.lex_state = 65},
  [66] = {.lex_state = 65},
  [67] = {.lex_state = 65},
  [68] = {.lex_state = 65},
  [69] = {.lex_state = 65},
  [70] = {.lex_state = 65},
  [71] = {.lex_state = 65},
  [72] = {.lex_state = 65},
  [73] = {.lex_state = 65},
  [74] = {.lex_state = 65},
  [75] = {.lex_state = 65},
  [76] = {.lex_state = 65},
  [77] = {.lex_state = 65, .external_lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 65},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 65},
  [82] = {.lex_state = 65, .external_lex_state = 1},
  [83] = {.lex_state = 65, .external_lex_state = 1},
};

enum {
  ts_external_token_literal = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_literal] = sym_literal,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_literal] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_invalid_token] = ACTIONS(1),
    [anon_sym_POUNDdefine] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE2] = ACTIONS(1),
    [anon_sym_POUNDinclude] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LTglobal_GT] = ACTIONS(1),
    [anon_sym_LTmaster_GT] = ACTIONS(1),
    [anon_sym_LTgroup_GT] = ACTIONS(1),
    [anon_sym_LTregion_GT] = ACTIONS(1),
    [aux_sym_special_token1] = ACTIONS(1),
    [sym_variable] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_literal] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(81),
    [sym__statement] = STATE(2),
    [sym_define] = STATE(2),
    [sym_include] = STATE(2),
    [sym_global] = STATE(68),
    [sym_master] = STATE(54),
    [sym_group] = STATE(31),
    [sym_region] = STATE(19),
    [sym_special] = STATE(9),
    [sym_opcode] = STATE(2),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_document_repeat2] = STATE(9),
    [aux_sym_document_repeat3] = STATE(19),
    [aux_sym_document_repeat4] = STATE(31),
    [aux_sym_document_repeat5] = STATE(54),
    [aux_sym_document_repeat6] = STATE(68),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_POUNDdefine] = ACTIONS(7),
    [anon_sym_POUNDinclude] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LTglobal_GT] = ACTIONS(13),
    [anon_sym_LTmaster_GT] = ACTIONS(15),
    [anon_sym_LTgroup_GT] = ACTIONS(17),
    [anon_sym_LTregion_GT] = ACTIONS(19),
    [aux_sym_special_token1] = ACTIONS(21),
    [sym_identifier] = ACTIONS(23),
  },
  [2] = {
    [sym__statement] = STATE(14),
    [sym_define] = STATE(14),
    [sym_include] = STATE(14),
    [sym_global] = STATE(71),
    [sym_master] = STATE(48),
    [sym_group] = STATE(27),
    [sym_region] = STATE(20),
    [sym_special] = STATE(10),
    [sym_opcode] = STATE(14),
    [aux_sym_document_repeat1] = STATE(14),
    [aux_sym_document_repeat2] = STATE(10),
    [aux_sym_document_repeat3] = STATE(20),
    [aux_sym_document_repeat4] = STATE(27),
    [aux_sym_document_repeat5] = STATE(48),
    [aux_sym_document_repeat6] = STATE(71),
    [ts_builtin_sym_end] = ACTIONS(25),
    [anon_sym_POUNDdefine] = ACTIONS(7),
    [anon_sym_POUNDinclude] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LTglobal_GT] = ACTIONS(13),
    [anon_sym_LTmaster_GT] = ACTIONS(15),
    [anon_sym_LTgroup_GT] = ACTIONS(17),
    [anon_sym_LTregion_GT] = ACTIONS(19),
    [aux_sym_special_token1] = ACTIONS(21),
    [sym_identifier] = ACTIONS(23),
  },
  [3] = {
    [sym__statement] = STATE(4),
    [sym_define] = STATE(4),
    [sym_include] = STATE(4),
    [sym_master] = STATE(65),
    [sym_group] = STATE(45),
    [sym_region] = STATE(25),
    [sym_special] = STATE(15),
    [sym_opcode] = STATE(4),
    [aux_sym_document_repeat1] = STATE(4),
    [aux_sym_document_repeat2] = STATE(15),
    [aux_sym_document_repeat3] = STATE(25),
    [aux_sym_document_repeat4] = STATE(45),
    [aux_sym_document_repeat5] = STATE(65),
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_POUNDdefine] = ACTIONS(7),
    [anon_sym_POUNDinclude] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LTglobal_GT] = ACTIONS(27),
    [anon_sym_LTmaster_GT] = ACTIONS(15),
    [anon_sym_LTgroup_GT] = ACTIONS(17),
    [anon_sym_LTregion_GT] = ACTIONS(19),
    [aux_sym_special_token1] = ACTIONS(21),
    [sym_identifier] = ACTIONS(23),
  },
  [4] = {
    [sym__statement] = STATE(14),
    [sym_define] = STATE(14),
    [sym_include] = STATE(14),
    [sym_master] = STATE(66),
    [sym_group] = STATE(44),
    [sym_region] = STATE(23),
    [sym_special] = STATE(13),
    [sym_opcode] = STATE(14),
    [aux_sym_document_repeat1] = STATE(14),
    [aux_sym_document_repeat2] = STATE(13),
    [aux_sym_document_repeat3] = STATE(23),
    [aux_sym_document_repeat4] = STATE(44),
    [aux_sym_document_repeat5] = STATE(66),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_POUNDdefine] = ACTIONS(7),
    [anon_sym_POUNDinclude] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LTglobal_GT] = ACTIONS(29),
    [anon_sym_LTmaster_GT] = ACTIONS(15),
    [anon_sym_LTgroup_GT] = ACTIONS(17),
    [anon_sym_LTregion_GT] = ACTIONS(19),
    [aux_sym_special_token1] = ACTIONS(21),
    [sym_identifier] = ACTIONS(23),
  },
  [5] = {
    [sym__statement] = STATE(14),
    [sym_define] = STATE(14),
    [sym_include] = STATE(14),
    [sym_group] = STATE(57),
    [sym_region] = STATE(38),
    [sym_special] = STATE(21),
    [sym_opcode] = STATE(14),
    [aux_sym_document_repeat1] = STATE(14),
    [aux_sym_document_repeat2] = STATE(21),
    [aux_sym_document_repeat3] = STATE(38),
    [aux_sym_document_repeat4] = STATE(57),
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_POUNDdefine] = ACTIONS(7),
    [anon_sym_POUNDinclude] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LTglobal_GT] = ACTIONS(31),
    [anon_sym_LTmaster_GT] = ACTIONS(31),
    [anon_sym_LTgroup_GT] = ACTIONS(17),
    [anon_sym_LTregion_GT] = ACTIONS(19),
    [aux_sym_special_token1] = ACTIONS(21),
    [sym_identifier] = ACTIONS(23),
  },
  [6] = {
    [sym__statement] = STATE(5),
    [sym_define] = STATE(5),
    [sym_include] = STATE(5),
    [sym_group] = STATE(60),
    [sym_region] = STATE(33),
    [sym_special] = STATE(22),
    [sym_opcode] = STATE(5),
    [aux_sym_document_repeat1] = STATE(5),
    [aux_sym_document_repeat2] = STATE(22),
    [aux_sym_document_repeat3] = STATE(33),
    [aux_sym_document_repeat4] = STATE(60),
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_POUNDdefine] = ACTIONS(7),
    [anon_sym_POUNDinclude] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LTglobal_GT] = ACTIONS(33),
    [anon_sym_LTmaster_GT] = ACTIONS(33),
    [anon_sym_LTgroup_GT] = ACTIONS(17),
    [anon_sym_LTregion_GT] = ACTIONS(19),
    [aux_sym_special_token1] = ACTIONS(21),
    [sym_identifier] = ACTIONS(23),
  },
  [7] = {
    [sym__statement] = STATE(8),
    [sym_define] = STATE(8),
    [sym_include] = STATE(8),
    [sym_region] = STATE(53),
    [sym_special] = STATE(29),
    [sym_opcode] = STATE(8),
    [aux_sym_document_repeat1] = STATE(8),
    [aux_sym_document_repeat2] = STATE(29),
    [aux_sym_document_repeat3] = STATE(53),
    [ts_builtin_sym_end] = ACTIONS(35),
    [anon_sym_POUNDdefine] = ACTIONS(7),
    [anon_sym_POUNDinclude] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LTglobal_GT] = ACTIONS(35),
    [anon_sym_LTmaster_GT] = ACTIONS(35),
    [anon_sym_LTgroup_GT] = ACTIONS(35),
    [anon_sym_LTregion_GT] = ACTIONS(19),
    [aux_sym_special_token1] = ACTIONS(21),
    [sym_identifier] = ACTIONS(23),
  },
  [8] = {
    [sym__statement] = STATE(14),
    [sym_define] = STATE(14),
    [sym_include] = STATE(14),
    [sym_region] = STATE(47),
    [sym_special] = STATE(30),
    [sym_opcode] = STATE(14),
    [aux_sym_document_repeat1] = STATE(14),
    [aux_sym_document_repeat2] = STATE(30),
    [aux_sym_document_repeat3] = STATE(47),
    [ts_builtin_sym_end] = ACTIONS(37),
    [anon_sym_POUNDdefine] = ACTIONS(7),
    [anon_sym_POUNDinclude] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LTglobal_GT] = ACTIONS(37),
    [anon_sym_LTmaster_GT] = ACTIONS(37),
    [anon_sym_LTgroup_GT] = ACTIONS(37),
    [anon_sym_LTregion_GT] = ACTIONS(19),
    [aux_sym_special_token1] = ACTIONS(21),
    [sym_identifier] = ACTIONS(23),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LTglobal_GT,
    ACTIONS(15), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(17), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(19), 1,
      anon_sym_LTregion_GT,
    ACTIONS(21), 1,
      aux_sym_special_token1,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    STATE(20), 2,
      sym_region,
      aux_sym_document_repeat3,
    STATE(27), 2,
      sym_group,
      aux_sym_document_repeat4,
    STATE(41), 2,
      sym_special,
      aux_sym_document_repeat2,
    STATE(48), 2,
      sym_master,
      aux_sym_document_repeat5,
    STATE(71), 2,
      sym_global,
      aux_sym_document_repeat6,
  [42] = 12,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LTglobal_GT,
    ACTIONS(15), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(17), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(19), 1,
      anon_sym_LTregion_GT,
    ACTIONS(21), 1,
      aux_sym_special_token1,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    STATE(18), 2,
      sym_region,
      aux_sym_document_repeat3,
    STATE(26), 2,
      sym_group,
      aux_sym_document_repeat4,
    STATE(41), 2,
      sym_special,
      aux_sym_document_repeat2,
    STATE(55), 2,
      sym_master,
      aux_sym_document_repeat5,
    STATE(69), 2,
      sym_global,
      aux_sym_document_repeat6,
  [84] = 8,
    ACTIONS(7), 1,
      anon_sym_POUNDdefine,
    ACTIONS(9), 1,
      anon_sym_POUNDinclude,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym_special_token1,
    ACTIONS(23), 1,
      sym_identifier,
    STATE(46), 2,
      sym_special,
      aux_sym_document_repeat2,
    ACTIONS(41), 5,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
      anon_sym_LTgroup_GT,
      anon_sym_LTregion_GT,
    STATE(14), 5,
      sym__statement,
      sym_define,
      sym_include,
      sym_opcode,
      aux_sym_document_repeat1,
  [118] = 8,
    ACTIONS(7), 1,
      anon_sym_POUNDdefine,
    ACTIONS(9), 1,
      anon_sym_POUNDinclude,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym_special_token1,
    ACTIONS(23), 1,
      sym_identifier,
    STATE(43), 2,
      sym_special,
      aux_sym_document_repeat2,
    ACTIONS(43), 5,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
      anon_sym_LTgroup_GT,
      anon_sym_LTregion_GT,
    STATE(11), 5,
      sym__statement,
      sym_define,
      sym_include,
      sym_opcode,
      aux_sym_document_repeat1,
  [152] = 10,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(17), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(19), 1,
      anon_sym_LTregion_GT,
    ACTIONS(21), 1,
      aux_sym_special_token1,
    ACTIONS(45), 2,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
    STATE(24), 2,
      sym_region,
      aux_sym_document_repeat3,
    STATE(40), 2,
      sym_group,
      aux_sym_document_repeat4,
    STATE(41), 2,
      sym_special,
      aux_sym_document_repeat2,
    STATE(61), 2,
      sym_master,
      aux_sym_document_repeat5,
  [188] = 6,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_POUNDdefine,
    ACTIONS(52), 1,
      anon_sym_POUNDinclude,
    ACTIONS(55), 1,
      sym_identifier,
    STATE(14), 5,
      sym__statement,
      sym_define,
      sym_include,
      sym_opcode,
      aux_sym_document_repeat1,
    ACTIONS(47), 6,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
      anon_sym_LTgroup_GT,
      anon_sym_LTregion_GT,
      aux_sym_special_token1,
  [216] = 10,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(17), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(19), 1,
      anon_sym_LTregion_GT,
    ACTIONS(21), 1,
      aux_sym_special_token1,
    ACTIONS(29), 2,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
    STATE(23), 2,
      sym_region,
      aux_sym_document_repeat3,
    STATE(41), 2,
      sym_special,
      aux_sym_document_repeat2,
    STATE(44), 2,
      sym_group,
      aux_sym_document_repeat4,
    STATE(66), 2,
      sym_master,
      aux_sym_document_repeat5,
  [252] = 6,
    ACTIONS(7), 1,
      anon_sym_POUNDdefine,
    ACTIONS(9), 1,
      anon_sym_POUNDinclude,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(23), 1,
      sym_identifier,
    STATE(14), 5,
      sym__statement,
      sym_define,
      sym_include,
      sym_opcode,
      aux_sym_document_repeat1,
    ACTIONS(58), 6,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
      anon_sym_LTgroup_GT,
      anon_sym_LTregion_GT,
      aux_sym_special_token1,
  [280] = 6,
    ACTIONS(7), 1,
      anon_sym_POUNDdefine,
    ACTIONS(9), 1,
      anon_sym_POUNDinclude,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(23), 1,
      sym_identifier,
    STATE(16), 5,
      sym__statement,
      sym_define,
      sym_include,
      sym_opcode,
      aux_sym_document_repeat1,
    ACTIONS(60), 6,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
      anon_sym_LTgroup_GT,
      anon_sym_LTregion_GT,
      aux_sym_special_token1,
  [308] = 10,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LTglobal_GT,
    ACTIONS(15), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(17), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(19), 1,
      anon_sym_LTregion_GT,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    STATE(28), 2,
      sym_group,
      aux_sym_document_repeat4,
    STATE(50), 2,
      sym_region,
      aux_sym_document_repeat3,
    STATE(51), 2,
      sym_master,
      aux_sym_document_repeat5,
    STATE(70), 2,
      sym_global,
      aux_sym_document_repeat6,
  [343] = 10,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LTglobal_GT,
    ACTIONS(15), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(17), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(19), 1,
      anon_sym_LTregion_GT,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    STATE(27), 2,
      sym_group,
      aux_sym_document_repeat4,
    STATE(48), 2,
      sym_master,
      aux_sym_document_repeat5,
    STATE(50), 2,
      sym_region,
      aux_sym_document_repeat3,
    STATE(71), 2,
      sym_global,
      aux_sym_document_repeat6,
  [378] = 10,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LTglobal_GT,
    ACTIONS(15), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(17), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(19), 1,
      anon_sym_LTregion_GT,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    STATE(26), 2,
      sym_group,
      aux_sym_document_repeat4,
    STATE(50), 2,
      sym_region,
      aux_sym_document_repeat3,
    STATE(55), 2,
      sym_master,
      aux_sym_document_repeat5,
    STATE(69), 2,
      sym_global,
      aux_sym_document_repeat6,
  [413] = 8,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(19), 1,
      anon_sym_LTregion_GT,
    ACTIONS(21), 1,
      aux_sym_special_token1,
    STATE(34), 2,
      sym_region,
      aux_sym_document_repeat3,
    STATE(41), 2,
      sym_special,
      aux_sym_document_repeat2,
    STATE(56), 2,
      sym_group,
      aux_sym_document_repeat4,
    ACTIONS(64), 3,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
  [443] = 8,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(19), 1,
      anon_sym_LTregion_GT,
    ACTIONS(21), 1,
      aux_sym_special_token1,
    STATE(38), 2,
      sym_region,
      aux_sym_document_repeat3,
    STATE(41), 2,
      sym_special,
      aux_sym_document_repeat2,
    STATE(57), 2,
      sym_group,
      aux_sym_document_repeat4,
    ACTIONS(31), 3,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
  [473] = 8,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(17), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(19), 1,
      anon_sym_LTregion_GT,
    ACTIONS(45), 2,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
    STATE(40), 2,
      sym_group,
      aux_sym_document_repeat4,
    STATE(50), 2,
      sym_region,
      aux_sym_document_repeat3,
    STATE(61), 2,
      sym_master,
      aux_sym_document_repeat5,
  [502] = 8,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(17), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(19), 1,
      anon_sym_LTregion_GT,
    ACTIONS(66), 2,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
    STATE(42), 2,
      sym_group,
      aux_sym_document_repeat4,
    STATE(50), 2,
      sym_region,
      aux_sym_document_repeat3,
    STATE(63), 2,
      sym_master,
      aux_sym_document_repeat5,
  [531] = 8,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(17), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(19), 1,
      anon_sym_LTregion_GT,
    ACTIONS(29), 2,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
    STATE(44), 2,
      sym_group,
      aux_sym_document_repeat4,
    STATE(50), 2,
      sym_region,
      aux_sym_document_repeat3,
    STATE(66), 2,
      sym_master,
      aux_sym_document_repeat5,
  [560] = 8,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LTglobal_GT,
    ACTIONS(15), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(17), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    STATE(51), 2,
      sym_master,
      aux_sym_document_repeat5,
    STATE(58), 2,
      sym_group,
      aux_sym_document_repeat4,
    STATE(70), 2,
      sym_global,
      aux_sym_document_repeat6,
  [588] = 8,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LTglobal_GT,
    ACTIONS(15), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(17), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    STATE(55), 2,
      sym_master,
      aux_sym_document_repeat5,
    STATE(58), 2,
      sym_group,
      aux_sym_document_repeat4,
    STATE(69), 2,
      sym_global,
      aux_sym_document_repeat6,
  [616] = 8,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LTglobal_GT,
    ACTIONS(15), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(17), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
    STATE(49), 2,
      sym_master,
      aux_sym_document_repeat5,
    STATE(58), 2,
      sym_group,
      aux_sym_document_repeat4,
    STATE(72), 2,
      sym_global,
      aux_sym_document_repeat6,
  [644] = 6,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LTregion_GT,
    ACTIONS(21), 1,
      aux_sym_special_token1,
    STATE(41), 2,
      sym_special,
      aux_sym_document_repeat2,
    STATE(47), 2,
      sym_region,
      aux_sym_document_repeat3,
    ACTIONS(37), 4,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
      anon_sym_LTgroup_GT,
  [668] = 6,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LTregion_GT,
    ACTIONS(21), 1,
      aux_sym_special_token1,
    STATE(41), 2,
      sym_special,
      aux_sym_document_repeat2,
    STATE(52), 2,
      sym_region,
      aux_sym_document_repeat3,
    ACTIONS(70), 4,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
      anon_sym_LTgroup_GT,
  [692] = 8,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LTglobal_GT,
    ACTIONS(15), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(17), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    STATE(48), 2,
      sym_master,
      aux_sym_document_repeat5,
    STATE(58), 2,
      sym_group,
      aux_sym_document_repeat4,
    STATE(71), 2,
      sym_global,
      aux_sym_document_repeat6,
  [720] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(72), 9,
      ts_builtin_sym_end,
      anon_sym_POUNDdefine,
      anon_sym_POUNDinclude,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
      anon_sym_LTgroup_GT,
      anon_sym_LTregion_GT,
      aux_sym_special_token1,
      sym_identifier,
  [735] = 6,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(19), 1,
      anon_sym_LTregion_GT,
    STATE(50), 2,
      sym_region,
      aux_sym_document_repeat3,
    STATE(57), 2,
      sym_group,
      aux_sym_document_repeat4,
    ACTIONS(31), 3,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
  [758] = 6,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(19), 1,
      anon_sym_LTregion_GT,
    STATE(50), 2,
      sym_region,
      aux_sym_document_repeat3,
    STATE(59), 2,
      sym_group,
      aux_sym_document_repeat4,
    ACTIONS(74), 3,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
  [781] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(76), 9,
      ts_builtin_sym_end,
      anon_sym_POUNDdefine,
      anon_sym_POUNDinclude,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
      anon_sym_LTgroup_GT,
      anon_sym_LTregion_GT,
      aux_sym_special_token1,
      sym_identifier,
  [796] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(78), 9,
      ts_builtin_sym_end,
      anon_sym_POUNDdefine,
      anon_sym_POUNDinclude,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
      anon_sym_LTgroup_GT,
      anon_sym_LTregion_GT,
      aux_sym_special_token1,
      sym_identifier,
  [811] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(80), 9,
      ts_builtin_sym_end,
      anon_sym_POUNDdefine,
      anon_sym_POUNDinclude,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
      anon_sym_LTgroup_GT,
      anon_sym_LTregion_GT,
      aux_sym_special_token1,
      sym_identifier,
  [826] = 6,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(19), 1,
      anon_sym_LTregion_GT,
    STATE(50), 2,
      sym_region,
      aux_sym_document_repeat3,
    STATE(56), 2,
      sym_group,
      aux_sym_document_repeat4,
    ACTIONS(64), 3,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
  [849] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(82), 9,
      ts_builtin_sym_end,
      anon_sym_POUNDdefine,
      anon_sym_POUNDinclude,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
      anon_sym_LTgroup_GT,
      anon_sym_LTregion_GT,
      aux_sym_special_token1,
      sym_identifier,
  [864] = 6,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(17), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(66), 2,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
    STATE(58), 2,
      sym_group,
      aux_sym_document_repeat4,
    STATE(63), 2,
      sym_master,
      aux_sym_document_repeat5,
  [886] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(86), 1,
      aux_sym_special_token1,
    STATE(41), 2,
      sym_special,
      aux_sym_document_repeat2,
    ACTIONS(84), 5,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
      anon_sym_LTgroup_GT,
      anon_sym_LTregion_GT,
  [904] = 6,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(17), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(89), 2,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
    STATE(58), 2,
      sym_group,
      aux_sym_document_repeat4,
    STATE(62), 2,
      sym_master,
      aux_sym_document_repeat5,
  [926] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym_special_token1,
    STATE(41), 2,
      sym_special,
      aux_sym_document_repeat2,
    ACTIONS(41), 5,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
      anon_sym_LTgroup_GT,
      anon_sym_LTregion_GT,
  [944] = 6,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(17), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(45), 2,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
    STATE(58), 2,
      sym_group,
      aux_sym_document_repeat4,
    STATE(61), 2,
      sym_master,
      aux_sym_document_repeat5,
  [966] = 6,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(17), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(29), 2,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
    STATE(58), 2,
      sym_group,
      aux_sym_document_repeat4,
    STATE(66), 2,
      sym_master,
      aux_sym_document_repeat5,
  [988] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym_special_token1,
    STATE(41), 2,
      sym_special,
      aux_sym_document_repeat2,
    ACTIONS(91), 5,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
      anon_sym_LTgroup_GT,
      anon_sym_LTregion_GT,
  [1006] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LTregion_GT,
    STATE(50), 2,
      sym_region,
      aux_sym_document_repeat3,
    ACTIONS(70), 4,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
      anon_sym_LTgroup_GT,
  [1023] = 6,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LTglobal_GT,
    ACTIONS(15), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    STATE(64), 2,
      sym_master,
      aux_sym_document_repeat5,
    STATE(69), 2,
      sym_global,
      aux_sym_document_repeat6,
  [1044] = 6,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LTglobal_GT,
    ACTIONS(15), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    STATE(64), 2,
      sym_master,
      aux_sym_document_repeat5,
    STATE(73), 2,
      sym_global,
      aux_sym_document_repeat6,
  [1065] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_LTregion_GT,
    STATE(50), 2,
      sym_region,
      aux_sym_document_repeat3,
    ACTIONS(95), 4,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
      anon_sym_LTgroup_GT,
  [1082] = 6,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LTglobal_GT,
    ACTIONS(15), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
    STATE(64), 2,
      sym_master,
      aux_sym_document_repeat5,
    STATE(72), 2,
      sym_global,
      aux_sym_document_repeat6,
  [1103] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LTregion_GT,
    STATE(50), 2,
      sym_region,
      aux_sym_document_repeat3,
    ACTIONS(100), 4,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
      anon_sym_LTgroup_GT,
  [1120] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LTregion_GT,
    STATE(50), 2,
      sym_region,
      aux_sym_document_repeat3,
    ACTIONS(37), 4,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
      anon_sym_LTgroup_GT,
  [1137] = 6,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LTglobal_GT,
    ACTIONS(15), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    STATE(64), 2,
      sym_master,
      aux_sym_document_repeat5,
    STATE(71), 2,
      sym_global,
      aux_sym_document_repeat6,
  [1158] = 6,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LTglobal_GT,
    ACTIONS(15), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    STATE(64), 2,
      sym_master,
      aux_sym_document_repeat5,
    STATE(70), 2,
      sym_global,
      aux_sym_document_repeat6,
  [1179] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LTgroup_GT,
    STATE(58), 2,
      sym_group,
      aux_sym_document_repeat4,
    ACTIONS(74), 3,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
  [1195] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LTgroup_GT,
    STATE(58), 2,
      sym_group,
      aux_sym_document_repeat4,
    ACTIONS(64), 3,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
  [1211] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_LTgroup_GT,
    STATE(58), 2,
      sym_group,
      aux_sym_document_repeat4,
    ACTIONS(102), 3,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
  [1227] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LTgroup_GT,
    STATE(58), 2,
      sym_group,
      aux_sym_document_repeat4,
    ACTIONS(107), 3,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
  [1243] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LTgroup_GT,
    STATE(58), 2,
      sym_group,
      aux_sym_document_repeat4,
    ACTIONS(31), 3,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
  [1259] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(66), 2,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
    STATE(64), 2,
      sym_master,
      aux_sym_document_repeat5,
  [1274] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(109), 2,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
    STATE(64), 2,
      sym_master,
      aux_sym_document_repeat5,
  [1289] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(89), 2,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
    STATE(64), 2,
      sym_master,
      aux_sym_document_repeat5,
  [1304] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(111), 2,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
    STATE(64), 2,
      sym_master,
      aux_sym_document_repeat5,
  [1319] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(29), 2,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
    STATE(64), 2,
      sym_master,
      aux_sym_document_repeat5,
  [1334] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(45), 2,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
    STATE(64), 2,
      sym_master,
      aux_sym_document_repeat5,
  [1349] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
    ACTIONS(118), 1,
      anon_sym_LTglobal_GT,
    STATE(67), 2,
      sym_global,
      aux_sym_document_repeat6,
  [1363] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LTglobal_GT,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    STATE(67), 2,
      sym_global,
      aux_sym_document_repeat6,
  [1377] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LTglobal_GT,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    STATE(67), 2,
      sym_global,
      aux_sym_document_repeat6,
  [1391] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LTglobal_GT,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
    STATE(67), 2,
      sym_global,
      aux_sym_document_repeat6,
  [1405] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LTglobal_GT,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    STATE(67), 2,
      sym_global,
      aux_sym_document_repeat6,
  [1419] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LTglobal_GT,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    STATE(67), 2,
      sym_global,
      aux_sym_document_repeat6,
  [1433] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LTglobal_GT,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    STATE(67), 2,
      sym_global,
      aux_sym_document_repeat6,
  [1447] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_DQUOTE,
    STATE(35), 1,
      sym_include_path,
  [1457] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(125), 1,
      sym_variable,
    ACTIONS(127), 1,
      anon_sym_EQ,
  [1467] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_EQ,
  [1474] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(131), 1,
      sym_literal,
  [1481] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_DQUOTE2,
  [1488] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(135), 1,
      sym_variable,
  [1495] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      aux_sym_include_path_token1,
  [1502] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(139), 1,
      ts_builtin_sym_end,
  [1509] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(141), 1,
      sym_literal,
  [1516] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(143), 1,
      sym_literal,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 42,
  [SMALL_STATE(11)] = 84,
  [SMALL_STATE(12)] = 118,
  [SMALL_STATE(13)] = 152,
  [SMALL_STATE(14)] = 188,
  [SMALL_STATE(15)] = 216,
  [SMALL_STATE(16)] = 252,
  [SMALL_STATE(17)] = 280,
  [SMALL_STATE(18)] = 308,
  [SMALL_STATE(19)] = 343,
  [SMALL_STATE(20)] = 378,
  [SMALL_STATE(21)] = 413,
  [SMALL_STATE(22)] = 443,
  [SMALL_STATE(23)] = 473,
  [SMALL_STATE(24)] = 502,
  [SMALL_STATE(25)] = 531,
  [SMALL_STATE(26)] = 560,
  [SMALL_STATE(27)] = 588,
  [SMALL_STATE(28)] = 616,
  [SMALL_STATE(29)] = 644,
  [SMALL_STATE(30)] = 668,
  [SMALL_STATE(31)] = 692,
  [SMALL_STATE(32)] = 720,
  [SMALL_STATE(33)] = 735,
  [SMALL_STATE(34)] = 758,
  [SMALL_STATE(35)] = 781,
  [SMALL_STATE(36)] = 796,
  [SMALL_STATE(37)] = 811,
  [SMALL_STATE(38)] = 826,
  [SMALL_STATE(39)] = 849,
  [SMALL_STATE(40)] = 864,
  [SMALL_STATE(41)] = 886,
  [SMALL_STATE(42)] = 904,
  [SMALL_STATE(43)] = 926,
  [SMALL_STATE(44)] = 944,
  [SMALL_STATE(45)] = 966,
  [SMALL_STATE(46)] = 988,
  [SMALL_STATE(47)] = 1006,
  [SMALL_STATE(48)] = 1023,
  [SMALL_STATE(49)] = 1044,
  [SMALL_STATE(50)] = 1065,
  [SMALL_STATE(51)] = 1082,
  [SMALL_STATE(52)] = 1103,
  [SMALL_STATE(53)] = 1120,
  [SMALL_STATE(54)] = 1137,
  [SMALL_STATE(55)] = 1158,
  [SMALL_STATE(56)] = 1179,
  [SMALL_STATE(57)] = 1195,
  [SMALL_STATE(58)] = 1211,
  [SMALL_STATE(59)] = 1227,
  [SMALL_STATE(60)] = 1243,
  [SMALL_STATE(61)] = 1259,
  [SMALL_STATE(62)] = 1274,
  [SMALL_STATE(63)] = 1289,
  [SMALL_STATE(64)] = 1304,
  [SMALL_STATE(65)] = 1319,
  [SMALL_STATE(66)] = 1334,
  [SMALL_STATE(67)] = 1349,
  [SMALL_STATE(68)] = 1363,
  [SMALL_STATE(69)] = 1377,
  [SMALL_STATE(70)] = 1391,
  [SMALL_STATE(71)] = 1405,
  [SMALL_STATE(72)] = 1419,
  [SMALL_STATE(73)] = 1433,
  [SMALL_STATE(74)] = 1447,
  [SMALL_STATE(75)] = 1457,
  [SMALL_STATE(76)] = 1467,
  [SMALL_STATE(77)] = 1474,
  [SMALL_STATE(78)] = 1481,
  [SMALL_STATE(79)] = 1488,
  [SMALL_STATE(80)] = 1495,
  [SMALL_STATE(81)] = 1502,
  [SMALL_STATE(82)] = 1509,
  [SMALL_STATE(83)] = 1516,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global, 2),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_master, 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_master, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 2),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_region, 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_region, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global, 3),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(79),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(74),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(75),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special, 2),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_master, 3),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global, 4),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 4),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 3),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opcode, 4),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_master, 4),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_path, 3),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opcode, 3),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define, 3),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(17),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global, 5),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_region, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 5),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat3, 2),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat3, 2), SHIFT_REPEAT(12),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 4),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat4, 2),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat4, 2), SHIFT_REPEAT(7),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_master, 5),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global, 6),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat5, 2),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat5, 2), SHIFT_REPEAT(6),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat6, 2),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat6, 2), SHIFT_REPEAT(3),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 6),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [139] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_sfz_external_scanner_create(void);
void tree_sitter_sfz_external_scanner_destroy(void *);
bool tree_sitter_sfz_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_sfz_external_scanner_serialize(void *, char *);
void tree_sitter_sfz_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_sfz(void) {
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_invalid_token,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_sfz_external_scanner_create,
      tree_sitter_sfz_external_scanner_destroy,
      tree_sitter_sfz_external_scanner_scan,
      tree_sitter_sfz_external_scanner_serialize,
      tree_sitter_sfz_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
