#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 81
#define LARGE_STATE_COUNT 11
#define SYMBOL_COUNT 34
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  sym_define_name = 1,
  sym_define_value = 2,
  anon_sym_POUNDdefine = 3,
  sym_include_path = 4,
  anon_sym_POUNDinclude = 5,
  sym_comment = 6,
  anon_sym_LTglobal_GT = 7,
  anon_sym_LTmaster_GT = 8,
  anon_sym_LTgroup_GT = 9,
  anon_sym_LTregion_GT = 10,
  aux_sym_special_token1 = 11,
  anon_sym_EQ = 12,
  aux_sym_opcode_name_token1 = 13,
  sym_opcode_fragment = 14,
  sym_opcode_value = 15,
  sym_document = 16,
  sym__statement = 17,
  sym_macro = 18,
  sym_define = 19,
  sym_include = 20,
  sym_global = 21,
  sym_master = 22,
  sym_group = 23,
  sym_region = 24,
  sym_special = 25,
  sym_opcode = 26,
  sym_opcode_name = 27,
  aux_sym_document_repeat1 = 28,
  aux_sym_document_repeat2 = 29,
  aux_sym_document_repeat3 = 30,
  aux_sym_document_repeat4 = 31,
  aux_sym_document_repeat5 = 32,
  aux_sym_document_repeat6 = 33,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_define_name] = "define_name",
  [sym_define_value] = "define_value",
  [anon_sym_POUNDdefine] = "#define",
  [sym_include_path] = "include_path",
  [anon_sym_POUNDinclude] = "#include",
  [sym_comment] = "comment",
  [anon_sym_LTglobal_GT] = "header",
  [anon_sym_LTmaster_GT] = "header",
  [anon_sym_LTgroup_GT] = "header",
  [anon_sym_LTregion_GT] = "header",
  [aux_sym_special_token1] = "header",
  [anon_sym_EQ] = "=",
  [aux_sym_opcode_name_token1] = "opcode_name_token1",
  [sym_opcode_fragment] = "opcode_fragment",
  [sym_opcode_value] = "opcode_value",
  [sym_document] = "document",
  [sym__statement] = "_statement",
  [sym_macro] = "macro",
  [sym_define] = "define",
  [sym_include] = "include",
  [sym_global] = "global",
  [sym_master] = "master",
  [sym_group] = "group",
  [sym_region] = "region",
  [sym_special] = "special",
  [sym_opcode] = "opcode",
  [sym_opcode_name] = "opcode_name",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_document_repeat2] = "document_repeat2",
  [aux_sym_document_repeat3] = "document_repeat3",
  [aux_sym_document_repeat4] = "document_repeat4",
  [aux_sym_document_repeat5] = "document_repeat5",
  [aux_sym_document_repeat6] = "document_repeat6",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_define_name] = sym_define_name,
  [sym_define_value] = sym_define_value,
  [anon_sym_POUNDdefine] = anon_sym_POUNDdefine,
  [sym_include_path] = sym_include_path,
  [anon_sym_POUNDinclude] = anon_sym_POUNDinclude,
  [sym_comment] = sym_comment,
  [anon_sym_LTglobal_GT] = anon_sym_LTglobal_GT,
  [anon_sym_LTmaster_GT] = anon_sym_LTglobal_GT,
  [anon_sym_LTgroup_GT] = anon_sym_LTglobal_GT,
  [anon_sym_LTregion_GT] = anon_sym_LTglobal_GT,
  [aux_sym_special_token1] = anon_sym_LTglobal_GT,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_opcode_name_token1] = aux_sym_opcode_name_token1,
  [sym_opcode_fragment] = sym_opcode_fragment,
  [sym_opcode_value] = sym_opcode_value,
  [sym_document] = sym_document,
  [sym__statement] = sym__statement,
  [sym_macro] = sym_macro,
  [sym_define] = sym_define,
  [sym_include] = sym_include,
  [sym_global] = sym_global,
  [sym_master] = sym_master,
  [sym_group] = sym_group,
  [sym_region] = sym_region,
  [sym_special] = sym_special,
  [sym_opcode] = sym_opcode,
  [sym_opcode_name] = sym_opcode_name,
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
  [sym_define_name] = {
    .visible = true,
    .named = true,
  },
  [sym_define_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUNDdefine] = {
    .visible = true,
    .named = false,
  },
  [sym_include_path] = {
    .visible = true,
    .named = true,
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_opcode_name_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_opcode_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_opcode_value] = {
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
  [sym_macro] = {
    .visible = true,
    .named = true,
  },
  [sym_define] = {
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
  [sym_opcode_name] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(73);
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == '$') ADVANCE(66);
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '<') ADVANCE(19);
      if (lookahead == '=') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(70)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(78);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '$') ADVANCE(67);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(81);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(80);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(8)
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(93);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(7);
      END_STATE();
    case 10:
      if (lookahead == '>') ADVANCE(86);
      END_STATE();
    case 11:
      if (lookahead == '>') ADVANCE(84);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(82);
      END_STATE();
    case 13:
      if (lookahead == '>') ADVANCE(83);
      END_STATE();
    case 14:
      if (lookahead == '>') ADVANCE(85);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(59);
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 18:
      if (lookahead == 'b') ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(51);
      if (lookahead == 'e') ADVANCE(34);
      if (lookahead == 'g') ADVANCE(39);
      if (lookahead == 'm') ADVANCE(15);
      if (lookahead == 'r') ADVANCE(25);
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(41);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(60);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(36);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(28);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 32:
      if (lookahead == 'f') ADVANCE(37);
      END_STATE();
    case 33:
      if (lookahead == 'f') ADVANCE(30);
      END_STATE();
    case 34:
      if (lookahead == 'f') ADVANCE(33);
      END_STATE();
    case 35:
      if (lookahead == 'g') ADVANCE(38);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(10);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(49);
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(10);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 44:
      if (lookahead == 'm') ADVANCE(54);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(46);
      if (lookahead == 'u') ADVANCE(56);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 54:
      if (lookahead == 'p') ADVANCE(43);
      END_STATE();
    case 55:
      if (lookahead == 'p') ADVANCE(11);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 59:
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 63:
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 64:
      if (lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 65:
      if (lookahead == 'v') ADVANCE(26);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 68:
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '/') ADVANCE(7);
      END_STATE();
    case 69:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1);
      END_STATE();
    case 70:
      if (eof) ADVANCE(73);
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == '$') ADVANCE(67);
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '<') ADVANCE(19);
      if (lookahead == '=') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(70)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 71:
      if (eof) ADVANCE(73);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == '$') ADVANCE(66);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '<') ADVANCE(19);
      if (lookahead == '=') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(72)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 72:
      if (eof) ADVANCE(73);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '<') ADVANCE(19);
      if (lookahead == '=') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(72)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_define_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_define_value);
      if (lookahead == '-') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_define_value);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_POUNDdefine);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_include_path);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_POUNDinclude);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LTglobal_GT);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LTmaster_GT);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LTgroup_GT);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LTregion_GT);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_special_token1);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_opcode_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_opcode_fragment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_opcode_value);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_opcode_value);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(7);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_opcode_value);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '=') ADVANCE(7);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_opcode_value);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(93);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(7);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 71},
  [2] = {.lex_state = 71},
  [3] = {.lex_state = 71},
  [4] = {.lex_state = 71},
  [5] = {.lex_state = 71},
  [6] = {.lex_state = 71},
  [7] = {.lex_state = 71},
  [8] = {.lex_state = 71},
  [9] = {.lex_state = 71},
  [10] = {.lex_state = 71},
  [11] = {.lex_state = 71},
  [12] = {.lex_state = 71},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 71},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 71},
  [33] = {.lex_state = 71},
  [34] = {.lex_state = 71},
  [35] = {.lex_state = 71},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 71},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 8},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_define_name] = ACTIONS(1),
    [sym_define_value] = ACTIONS(1),
    [anon_sym_POUNDdefine] = ACTIONS(1),
    [sym_include_path] = ACTIONS(1),
    [anon_sym_POUNDinclude] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LTglobal_GT] = ACTIONS(1),
    [anon_sym_LTmaster_GT] = ACTIONS(1),
    [anon_sym_LTgroup_GT] = ACTIONS(1),
    [anon_sym_LTregion_GT] = ACTIONS(1),
    [aux_sym_special_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_opcode_name_token1] = ACTIONS(1),
    [sym_opcode_fragment] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(74),
    [sym__statement] = STATE(2),
    [sym_macro] = STATE(2),
    [sym_define] = STATE(33),
    [sym_include] = STATE(33),
    [sym_global] = STATE(67),
    [sym_master] = STATE(54),
    [sym_group] = STATE(27),
    [sym_region] = STATE(19),
    [sym_special] = STATE(15),
    [sym_opcode] = STATE(2),
    [sym_opcode_name] = STATE(78),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_document_repeat2] = STATE(15),
    [aux_sym_document_repeat3] = STATE(19),
    [aux_sym_document_repeat4] = STATE(27),
    [aux_sym_document_repeat5] = STATE(54),
    [aux_sym_document_repeat6] = STATE(67),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_POUNDdefine] = ACTIONS(7),
    [anon_sym_POUNDinclude] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LTglobal_GT] = ACTIONS(11),
    [anon_sym_LTmaster_GT] = ACTIONS(13),
    [anon_sym_LTgroup_GT] = ACTIONS(15),
    [anon_sym_LTregion_GT] = ACTIONS(17),
    [aux_sym_special_token1] = ACTIONS(19),
    [aux_sym_opcode_name_token1] = ACTIONS(21),
  },
  [2] = {
    [sym__statement] = STATE(12),
    [sym_macro] = STATE(12),
    [sym_define] = STATE(33),
    [sym_include] = STATE(33),
    [sym_global] = STATE(71),
    [sym_master] = STATE(48),
    [sym_group] = STATE(26),
    [sym_region] = STATE(18),
    [sym_special] = STATE(13),
    [sym_opcode] = STATE(12),
    [sym_opcode_name] = STATE(78),
    [aux_sym_document_repeat1] = STATE(12),
    [aux_sym_document_repeat2] = STATE(13),
    [aux_sym_document_repeat3] = STATE(18),
    [aux_sym_document_repeat4] = STATE(26),
    [aux_sym_document_repeat5] = STATE(48),
    [aux_sym_document_repeat6] = STATE(71),
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_POUNDdefine] = ACTIONS(7),
    [anon_sym_POUNDinclude] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LTglobal_GT] = ACTIONS(11),
    [anon_sym_LTmaster_GT] = ACTIONS(13),
    [anon_sym_LTgroup_GT] = ACTIONS(15),
    [anon_sym_LTregion_GT] = ACTIONS(17),
    [aux_sym_special_token1] = ACTIONS(19),
    [aux_sym_opcode_name_token1] = ACTIONS(21),
  },
  [3] = {
    [sym__statement] = STATE(12),
    [sym_macro] = STATE(12),
    [sym_define] = STATE(33),
    [sym_include] = STATE(33),
    [sym_master] = STATE(61),
    [sym_group] = STATE(45),
    [sym_region] = STATE(23),
    [sym_special] = STATE(17),
    [sym_opcode] = STATE(12),
    [sym_opcode_name] = STATE(78),
    [aux_sym_document_repeat1] = STATE(12),
    [aux_sym_document_repeat2] = STATE(17),
    [aux_sym_document_repeat3] = STATE(23),
    [aux_sym_document_repeat4] = STATE(45),
    [aux_sym_document_repeat5] = STATE(61),
    [ts_builtin_sym_end] = ACTIONS(25),
    [anon_sym_POUNDdefine] = ACTIONS(7),
    [anon_sym_POUNDinclude] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LTglobal_GT] = ACTIONS(25),
    [anon_sym_LTmaster_GT] = ACTIONS(13),
    [anon_sym_LTgroup_GT] = ACTIONS(15),
    [anon_sym_LTregion_GT] = ACTIONS(17),
    [aux_sym_special_token1] = ACTIONS(19),
    [aux_sym_opcode_name_token1] = ACTIONS(21),
  },
  [4] = {
    [sym__statement] = STATE(3),
    [sym_macro] = STATE(3),
    [sym_define] = STATE(33),
    [sym_include] = STATE(33),
    [sym_master] = STATE(64),
    [sym_group] = STATE(39),
    [sym_region] = STATE(24),
    [sym_special] = STATE(16),
    [sym_opcode] = STATE(3),
    [sym_opcode_name] = STATE(78),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_document_repeat2] = STATE(16),
    [aux_sym_document_repeat3] = STATE(24),
    [aux_sym_document_repeat4] = STATE(39),
    [aux_sym_document_repeat5] = STATE(64),
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_POUNDdefine] = ACTIONS(7),
    [anon_sym_POUNDinclude] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LTglobal_GT] = ACTIONS(27),
    [anon_sym_LTmaster_GT] = ACTIONS(13),
    [anon_sym_LTgroup_GT] = ACTIONS(15),
    [anon_sym_LTregion_GT] = ACTIONS(17),
    [aux_sym_special_token1] = ACTIONS(19),
    [aux_sym_opcode_name_token1] = ACTIONS(21),
  },
  [5] = {
    [sym__statement] = STATE(6),
    [sym_macro] = STATE(6),
    [sym_define] = STATE(33),
    [sym_include] = STATE(33),
    [sym_group] = STATE(59),
    [sym_region] = STATE(38),
    [sym_special] = STATE(22),
    [sym_opcode] = STATE(6),
    [sym_opcode_name] = STATE(78),
    [aux_sym_document_repeat1] = STATE(6),
    [aux_sym_document_repeat2] = STATE(22),
    [aux_sym_document_repeat3] = STATE(38),
    [aux_sym_document_repeat4] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_POUNDdefine] = ACTIONS(7),
    [anon_sym_POUNDinclude] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LTglobal_GT] = ACTIONS(29),
    [anon_sym_LTmaster_GT] = ACTIONS(29),
    [anon_sym_LTgroup_GT] = ACTIONS(15),
    [anon_sym_LTregion_GT] = ACTIONS(17),
    [aux_sym_special_token1] = ACTIONS(19),
    [aux_sym_opcode_name_token1] = ACTIONS(21),
  },
  [6] = {
    [sym__statement] = STATE(12),
    [sym_macro] = STATE(12),
    [sym_define] = STATE(33),
    [sym_include] = STATE(33),
    [sym_group] = STATE(57),
    [sym_region] = STATE(36),
    [sym_special] = STATE(21),
    [sym_opcode] = STATE(12),
    [sym_opcode_name] = STATE(78),
    [aux_sym_document_repeat1] = STATE(12),
    [aux_sym_document_repeat2] = STATE(21),
    [aux_sym_document_repeat3] = STATE(36),
    [aux_sym_document_repeat4] = STATE(57),
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_POUNDdefine] = ACTIONS(7),
    [anon_sym_POUNDinclude] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LTglobal_GT] = ACTIONS(31),
    [anon_sym_LTmaster_GT] = ACTIONS(31),
    [anon_sym_LTgroup_GT] = ACTIONS(15),
    [anon_sym_LTregion_GT] = ACTIONS(17),
    [aux_sym_special_token1] = ACTIONS(19),
    [aux_sym_opcode_name_token1] = ACTIONS(21),
  },
  [7] = {
    [sym__statement] = STATE(12),
    [sym_macro] = STATE(12),
    [sym_define] = STATE(33),
    [sym_include] = STATE(33),
    [sym_region] = STATE(53),
    [sym_special] = STATE(29),
    [sym_opcode] = STATE(12),
    [sym_opcode_name] = STATE(78),
    [aux_sym_document_repeat1] = STATE(12),
    [aux_sym_document_repeat2] = STATE(29),
    [aux_sym_document_repeat3] = STATE(53),
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_POUNDdefine] = ACTIONS(7),
    [anon_sym_POUNDinclude] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LTglobal_GT] = ACTIONS(33),
    [anon_sym_LTmaster_GT] = ACTIONS(33),
    [anon_sym_LTgroup_GT] = ACTIONS(33),
    [anon_sym_LTregion_GT] = ACTIONS(17),
    [aux_sym_special_token1] = ACTIONS(19),
    [aux_sym_opcode_name_token1] = ACTIONS(21),
  },
  [8] = {
    [sym__statement] = STATE(7),
    [sym_macro] = STATE(7),
    [sym_define] = STATE(33),
    [sym_include] = STATE(33),
    [sym_region] = STATE(52),
    [sym_special] = STATE(31),
    [sym_opcode] = STATE(7),
    [sym_opcode_name] = STATE(78),
    [aux_sym_document_repeat1] = STATE(7),
    [aux_sym_document_repeat2] = STATE(31),
    [aux_sym_document_repeat3] = STATE(52),
    [ts_builtin_sym_end] = ACTIONS(35),
    [anon_sym_POUNDdefine] = ACTIONS(7),
    [anon_sym_POUNDinclude] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LTglobal_GT] = ACTIONS(35),
    [anon_sym_LTmaster_GT] = ACTIONS(35),
    [anon_sym_LTgroup_GT] = ACTIONS(35),
    [anon_sym_LTregion_GT] = ACTIONS(17),
    [aux_sym_special_token1] = ACTIONS(19),
    [aux_sym_opcode_name_token1] = ACTIONS(21),
  },
  [9] = {
    [sym__statement] = STATE(12),
    [sym_macro] = STATE(12),
    [sym_define] = STATE(33),
    [sym_include] = STATE(33),
    [sym_special] = STATE(44),
    [sym_opcode] = STATE(12),
    [sym_opcode_name] = STATE(78),
    [aux_sym_document_repeat1] = STATE(12),
    [aux_sym_document_repeat2] = STATE(44),
    [ts_builtin_sym_end] = ACTIONS(37),
    [anon_sym_POUNDdefine] = ACTIONS(7),
    [anon_sym_POUNDinclude] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LTglobal_GT] = ACTIONS(37),
    [anon_sym_LTmaster_GT] = ACTIONS(37),
    [anon_sym_LTgroup_GT] = ACTIONS(37),
    [anon_sym_LTregion_GT] = ACTIONS(37),
    [aux_sym_special_token1] = ACTIONS(19),
    [aux_sym_opcode_name_token1] = ACTIONS(21),
  },
  [10] = {
    [sym__statement] = STATE(9),
    [sym_macro] = STATE(9),
    [sym_define] = STATE(33),
    [sym_include] = STATE(33),
    [sym_special] = STATE(43),
    [sym_opcode] = STATE(9),
    [sym_opcode_name] = STATE(78),
    [aux_sym_document_repeat1] = STATE(9),
    [aux_sym_document_repeat2] = STATE(43),
    [ts_builtin_sym_end] = ACTIONS(39),
    [anon_sym_POUNDdefine] = ACTIONS(7),
    [anon_sym_POUNDinclude] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LTglobal_GT] = ACTIONS(39),
    [anon_sym_LTmaster_GT] = ACTIONS(39),
    [anon_sym_LTgroup_GT] = ACTIONS(39),
    [anon_sym_LTregion_GT] = ACTIONS(39),
    [aux_sym_special_token1] = ACTIONS(19),
    [aux_sym_opcode_name_token1] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_POUNDdefine,
    ACTIONS(9), 1,
      anon_sym_POUNDinclude,
    ACTIONS(21), 1,
      aux_sym_opcode_name_token1,
    STATE(78), 1,
      sym_opcode_name,
    STATE(33), 2,
      sym_define,
      sym_include,
    STATE(14), 4,
      sym__statement,
      sym_macro,
      sym_opcode,
      aux_sym_document_repeat1,
    ACTIONS(41), 6,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
      anon_sym_LTgroup_GT,
      anon_sym_LTregion_GT,
      aux_sym_special_token1,
  [34] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_POUNDdefine,
    ACTIONS(48), 1,
      anon_sym_POUNDinclude,
    ACTIONS(51), 1,
      aux_sym_opcode_name_token1,
    STATE(78), 1,
      sym_opcode_name,
    STATE(33), 2,
      sym_define,
      sym_include,
    STATE(12), 4,
      sym__statement,
      sym_macro,
      sym_opcode,
      aux_sym_document_repeat1,
    ACTIONS(43), 6,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
      anon_sym_LTgroup_GT,
      anon_sym_LTregion_GT,
      aux_sym_special_token1,
  [68] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LTglobal_GT,
    ACTIONS(13), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(15), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(17), 1,
      anon_sym_LTregion_GT,
    ACTIONS(19), 1,
      aux_sym_special_token1,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    STATE(20), 2,
      sym_region,
      aux_sym_document_repeat3,
    STATE(30), 2,
      sym_group,
      aux_sym_document_repeat4,
    STATE(41), 2,
      sym_special,
      aux_sym_document_repeat2,
    STATE(50), 2,
      sym_master,
      aux_sym_document_repeat5,
    STATE(70), 2,
      sym_global,
      aux_sym_document_repeat6,
  [110] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_POUNDdefine,
    ACTIONS(9), 1,
      anon_sym_POUNDinclude,
    ACTIONS(21), 1,
      aux_sym_opcode_name_token1,
    STATE(78), 1,
      sym_opcode_name,
    STATE(33), 2,
      sym_define,
      sym_include,
    STATE(12), 4,
      sym__statement,
      sym_macro,
      sym_opcode,
      aux_sym_document_repeat1,
    ACTIONS(56), 6,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
      anon_sym_LTgroup_GT,
      anon_sym_LTregion_GT,
      aux_sym_special_token1,
  [144] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LTglobal_GT,
    ACTIONS(13), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(15), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(17), 1,
      anon_sym_LTregion_GT,
    ACTIONS(19), 1,
      aux_sym_special_token1,
    ACTIONS(23), 1,
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
    STATE(48), 2,
      sym_master,
      aux_sym_document_repeat5,
    STATE(71), 2,
      sym_global,
      aux_sym_document_repeat6,
  [186] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(15), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(17), 1,
      anon_sym_LTregion_GT,
    ACTIONS(19), 1,
      aux_sym_special_token1,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
    STATE(23), 2,
      sym_region,
      aux_sym_document_repeat3,
    STATE(41), 2,
      sym_special,
      aux_sym_document_repeat2,
    STATE(45), 2,
      sym_group,
      aux_sym_document_repeat4,
    STATE(61), 2,
      sym_master,
      aux_sym_document_repeat5,
  [222] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(15), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(17), 1,
      anon_sym_LTregion_GT,
    ACTIONS(19), 1,
      aux_sym_special_token1,
    ACTIONS(58), 2,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
    STATE(25), 2,
      sym_region,
      aux_sym_document_repeat3,
    STATE(41), 2,
      sym_special,
      aux_sym_document_repeat2,
    STATE(42), 2,
      sym_group,
      aux_sym_document_repeat4,
    STATE(63), 2,
      sym_master,
      aux_sym_document_repeat5,
  [258] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LTglobal_GT,
    ACTIONS(13), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(15), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(17), 1,
      anon_sym_LTregion_GT,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    STATE(30), 2,
      sym_group,
      aux_sym_document_repeat4,
    STATE(49), 2,
      sym_region,
      aux_sym_document_repeat3,
    STATE(50), 2,
      sym_master,
      aux_sym_document_repeat5,
    STATE(70), 2,
      sym_global,
      aux_sym_document_repeat6,
  [293] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LTglobal_GT,
    ACTIONS(13), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(15), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(17), 1,
      anon_sym_LTregion_GT,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    STATE(26), 2,
      sym_group,
      aux_sym_document_repeat4,
    STATE(48), 2,
      sym_master,
      aux_sym_document_repeat5,
    STATE(49), 2,
      sym_region,
      aux_sym_document_repeat3,
    STATE(71), 2,
      sym_global,
      aux_sym_document_repeat6,
  [328] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LTglobal_GT,
    ACTIONS(13), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(15), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(17), 1,
      anon_sym_LTregion_GT,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
    STATE(28), 2,
      sym_group,
      aux_sym_document_repeat4,
    STATE(46), 2,
      sym_master,
      aux_sym_document_repeat5,
    STATE(49), 2,
      sym_region,
      aux_sym_document_repeat3,
    STATE(72), 2,
      sym_global,
      aux_sym_document_repeat6,
  [363] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(17), 1,
      anon_sym_LTregion_GT,
    ACTIONS(19), 1,
      aux_sym_special_token1,
    STATE(37), 2,
      sym_region,
      aux_sym_document_repeat3,
    STATE(41), 2,
      sym_special,
      aux_sym_document_repeat2,
    STATE(55), 2,
      sym_group,
      aux_sym_document_repeat4,
    ACTIONS(62), 3,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
  [393] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(17), 1,
      anon_sym_LTregion_GT,
    ACTIONS(19), 1,
      aux_sym_special_token1,
    STATE(36), 2,
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
  [423] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(15), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(17), 1,
      anon_sym_LTregion_GT,
    ACTIONS(58), 2,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
    STATE(42), 2,
      sym_group,
      aux_sym_document_repeat4,
    STATE(49), 2,
      sym_region,
      aux_sym_document_repeat3,
    STATE(63), 2,
      sym_master,
      aux_sym_document_repeat5,
  [452] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(15), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(17), 1,
      anon_sym_LTregion_GT,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
    STATE(45), 2,
      sym_group,
      aux_sym_document_repeat4,
    STATE(49), 2,
      sym_region,
      aux_sym_document_repeat3,
    STATE(61), 2,
      sym_master,
      aux_sym_document_repeat5,
  [481] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(15), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(17), 1,
      anon_sym_LTregion_GT,
    ACTIONS(64), 2,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
    STATE(40), 2,
      sym_group,
      aux_sym_document_repeat4,
    STATE(49), 2,
      sym_region,
      aux_sym_document_repeat3,
    STATE(65), 2,
      sym_master,
      aux_sym_document_repeat5,
  [510] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LTglobal_GT,
    ACTIONS(13), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(15), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    STATE(50), 2,
      sym_master,
      aux_sym_document_repeat5,
    STATE(58), 2,
      sym_group,
      aux_sym_document_repeat4,
    STATE(70), 2,
      sym_global,
      aux_sym_document_repeat6,
  [538] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LTglobal_GT,
    ACTIONS(13), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(15), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(23), 1,
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
  [566] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LTglobal_GT,
    ACTIONS(13), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(15), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    STATE(51), 2,
      sym_master,
      aux_sym_document_repeat5,
    STATE(58), 2,
      sym_group,
      aux_sym_document_repeat4,
    STATE(68), 2,
      sym_global,
      aux_sym_document_repeat6,
  [594] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LTregion_GT,
    ACTIONS(19), 1,
      aux_sym_special_token1,
    STATE(41), 2,
      sym_special,
      aux_sym_document_repeat2,
    STATE(47), 2,
      sym_region,
      aux_sym_document_repeat3,
    ACTIONS(68), 4,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
      anon_sym_LTgroup_GT,
  [618] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LTglobal_GT,
    ACTIONS(13), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(15), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
    STATE(46), 2,
      sym_master,
      aux_sym_document_repeat5,
    STATE(58), 2,
      sym_group,
      aux_sym_document_repeat4,
    STATE(72), 2,
      sym_global,
      aux_sym_document_repeat6,
  [646] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LTregion_GT,
    ACTIONS(19), 1,
      aux_sym_special_token1,
    STATE(41), 2,
      sym_special,
      aux_sym_document_repeat2,
    STATE(53), 2,
      sym_region,
      aux_sym_document_repeat3,
    ACTIONS(33), 4,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
      anon_sym_LTgroup_GT,
  [670] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 9,
      ts_builtin_sym_end,
      anon_sym_POUNDdefine,
      anon_sym_POUNDinclude,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
      anon_sym_LTgroup_GT,
      anon_sym_LTregion_GT,
      aux_sym_special_token1,
      aux_sym_opcode_name_token1,
  [685] = 2,
    ACTIONS(3), 1,
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
      aux_sym_opcode_name_token1,
  [700] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 9,
      ts_builtin_sym_end,
      anon_sym_POUNDdefine,
      anon_sym_POUNDinclude,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
      anon_sym_LTgroup_GT,
      anon_sym_LTregion_GT,
      aux_sym_special_token1,
      aux_sym_opcode_name_token1,
  [715] = 2,
    ACTIONS(3), 1,
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
      aux_sym_opcode_name_token1,
  [730] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(17), 1,
      anon_sym_LTregion_GT,
    STATE(49), 2,
      sym_region,
      aux_sym_document_repeat3,
    STATE(55), 2,
      sym_group,
      aux_sym_document_repeat4,
    ACTIONS(62), 3,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
  [753] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(17), 1,
      anon_sym_LTregion_GT,
    STATE(49), 2,
      sym_region,
      aux_sym_document_repeat3,
    STATE(56), 2,
      sym_group,
      aux_sym_document_repeat4,
    ACTIONS(78), 3,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
  [776] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(17), 1,
      anon_sym_LTregion_GT,
    STATE(49), 2,
      sym_region,
      aux_sym_document_repeat3,
    STATE(57), 2,
      sym_group,
      aux_sym_document_repeat4,
    ACTIONS(31), 3,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
  [799] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(15), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
    STATE(58), 2,
      sym_group,
      aux_sym_document_repeat4,
    STATE(61), 2,
      sym_master,
      aux_sym_document_repeat5,
  [821] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(15), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(80), 2,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
    STATE(58), 2,
      sym_group,
      aux_sym_document_repeat4,
    STATE(60), 2,
      sym_master,
      aux_sym_document_repeat5,
  [843] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      aux_sym_special_token1,
    STATE(41), 2,
      sym_special,
      aux_sym_document_repeat2,
    ACTIONS(82), 5,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
      anon_sym_LTgroup_GT,
      anon_sym_LTregion_GT,
  [861] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(15), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(64), 2,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
    STATE(58), 2,
      sym_group,
      aux_sym_document_repeat4,
    STATE(65), 2,
      sym_master,
      aux_sym_document_repeat5,
  [883] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_special_token1,
    STATE(41), 2,
      sym_special,
      aux_sym_document_repeat2,
    ACTIONS(37), 5,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
      anon_sym_LTgroup_GT,
      anon_sym_LTregion_GT,
  [901] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_special_token1,
    STATE(41), 2,
      sym_special,
      aux_sym_document_repeat2,
    ACTIONS(87), 5,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
      anon_sym_LTgroup_GT,
      anon_sym_LTregion_GT,
  [919] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(15), 1,
      anon_sym_LTgroup_GT,
    ACTIONS(58), 2,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
    STATE(58), 2,
      sym_group,
      aux_sym_document_repeat4,
    STATE(63), 2,
      sym_master,
      aux_sym_document_repeat5,
  [941] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LTglobal_GT,
    ACTIONS(13), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    STATE(62), 2,
      sym_master,
      aux_sym_document_repeat5,
    STATE(68), 2,
      sym_global,
      aux_sym_document_repeat6,
  [962] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LTregion_GT,
    STATE(49), 2,
      sym_region,
      aux_sym_document_repeat3,
    ACTIONS(89), 4,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
      anon_sym_LTgroup_GT,
  [979] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LTglobal_GT,
    ACTIONS(13), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    STATE(62), 2,
      sym_master,
      aux_sym_document_repeat5,
    STATE(70), 2,
      sym_global,
      aux_sym_document_repeat6,
  [1000] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_LTregion_GT,
    STATE(49), 2,
      sym_region,
      aux_sym_document_repeat3,
    ACTIONS(91), 4,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
      anon_sym_LTgroup_GT,
  [1017] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LTglobal_GT,
    ACTIONS(13), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
    STATE(62), 2,
      sym_master,
      aux_sym_document_repeat5,
    STATE(72), 2,
      sym_global,
      aux_sym_document_repeat6,
  [1038] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LTglobal_GT,
    ACTIONS(13), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
    STATE(62), 2,
      sym_master,
      aux_sym_document_repeat5,
    STATE(66), 2,
      sym_global,
      aux_sym_document_repeat6,
  [1059] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LTregion_GT,
    STATE(49), 2,
      sym_region,
      aux_sym_document_repeat3,
    ACTIONS(33), 4,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
      anon_sym_LTgroup_GT,
  [1076] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LTregion_GT,
    STATE(49), 2,
      sym_region,
      aux_sym_document_repeat3,
    ACTIONS(68), 4,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
      anon_sym_LTgroup_GT,
  [1093] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LTglobal_GT,
    ACTIONS(13), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    STATE(62), 2,
      sym_master,
      aux_sym_document_repeat5,
    STATE(71), 2,
      sym_global,
      aux_sym_document_repeat6,
  [1114] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LTgroup_GT,
    STATE(58), 2,
      sym_group,
      aux_sym_document_repeat4,
    ACTIONS(78), 3,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
  [1130] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LTgroup_GT,
    STATE(58), 2,
      sym_group,
      aux_sym_document_repeat4,
    ACTIONS(98), 3,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
  [1146] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LTgroup_GT,
    STATE(58), 2,
      sym_group,
      aux_sym_document_repeat4,
    ACTIONS(62), 3,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
  [1162] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_LTgroup_GT,
    STATE(58), 2,
      sym_group,
      aux_sym_document_repeat4,
    ACTIONS(100), 3,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
  [1178] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LTgroup_GT,
    STATE(58), 2,
      sym_group,
      aux_sym_document_repeat4,
    ACTIONS(31), 3,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
      anon_sym_LTmaster_GT,
  [1194] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(105), 2,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
    STATE(62), 2,
      sym_master,
      aux_sym_document_repeat5,
  [1209] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(58), 2,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
    STATE(62), 2,
      sym_master,
      aux_sym_document_repeat5,
  [1224] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(107), 2,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
    STATE(62), 2,
      sym_master,
      aux_sym_document_repeat5,
  [1239] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(64), 2,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
    STATE(62), 2,
      sym_master,
      aux_sym_document_repeat5,
  [1254] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
    STATE(62), 2,
      sym_master,
      aux_sym_document_repeat5,
  [1269] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LTmaster_GT,
    ACTIONS(80), 2,
      ts_builtin_sym_end,
      anon_sym_LTglobal_GT,
    STATE(62), 2,
      sym_master,
      aux_sym_document_repeat5,
  [1284] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LTglobal_GT,
    ACTIONS(112), 1,
      ts_builtin_sym_end,
    STATE(69), 2,
      sym_global,
      aux_sym_document_repeat6,
  [1298] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LTglobal_GT,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    STATE(69), 2,
      sym_global,
      aux_sym_document_repeat6,
  [1312] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LTglobal_GT,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
    STATE(69), 2,
      sym_global,
      aux_sym_document_repeat6,
  [1326] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      ts_builtin_sym_end,
    ACTIONS(116), 1,
      anon_sym_LTglobal_GT,
    STATE(69), 2,
      sym_global,
      aux_sym_document_repeat6,
  [1340] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LTglobal_GT,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
    STATE(69), 2,
      sym_global,
      aux_sym_document_repeat6,
  [1354] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LTglobal_GT,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    STATE(69), 2,
      sym_global,
      aux_sym_document_repeat6,
  [1368] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LTglobal_GT,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    STATE(69), 2,
      sym_global,
      aux_sym_document_repeat6,
  [1382] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_EQ,
    ACTIONS(121), 1,
      sym_opcode_fragment,
  [1392] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
  [1399] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      sym_include_path,
  [1406] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      sym_define_name,
  [1413] = 2,
    ACTIONS(129), 1,
      sym_comment,
    ACTIONS(131), 1,
      sym_opcode_value,
  [1420] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_EQ,
  [1427] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      sym_define_value,
  [1434] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(11)] = 0,
  [SMALL_STATE(12)] = 34,
  [SMALL_STATE(13)] = 68,
  [SMALL_STATE(14)] = 110,
  [SMALL_STATE(15)] = 144,
  [SMALL_STATE(16)] = 186,
  [SMALL_STATE(17)] = 222,
  [SMALL_STATE(18)] = 258,
  [SMALL_STATE(19)] = 293,
  [SMALL_STATE(20)] = 328,
  [SMALL_STATE(21)] = 363,
  [SMALL_STATE(22)] = 393,
  [SMALL_STATE(23)] = 423,
  [SMALL_STATE(24)] = 452,
  [SMALL_STATE(25)] = 481,
  [SMALL_STATE(26)] = 510,
  [SMALL_STATE(27)] = 538,
  [SMALL_STATE(28)] = 566,
  [SMALL_STATE(29)] = 594,
  [SMALL_STATE(30)] = 618,
  [SMALL_STATE(31)] = 646,
  [SMALL_STATE(32)] = 670,
  [SMALL_STATE(33)] = 685,
  [SMALL_STATE(34)] = 700,
  [SMALL_STATE(35)] = 715,
  [SMALL_STATE(36)] = 730,
  [SMALL_STATE(37)] = 753,
  [SMALL_STATE(38)] = 776,
  [SMALL_STATE(39)] = 799,
  [SMALL_STATE(40)] = 821,
  [SMALL_STATE(41)] = 843,
  [SMALL_STATE(42)] = 861,
  [SMALL_STATE(43)] = 883,
  [SMALL_STATE(44)] = 901,
  [SMALL_STATE(45)] = 919,
  [SMALL_STATE(46)] = 941,
  [SMALL_STATE(47)] = 962,
  [SMALL_STATE(48)] = 979,
  [SMALL_STATE(49)] = 1000,
  [SMALL_STATE(50)] = 1017,
  [SMALL_STATE(51)] = 1038,
  [SMALL_STATE(52)] = 1059,
  [SMALL_STATE(53)] = 1076,
  [SMALL_STATE(54)] = 1093,
  [SMALL_STATE(55)] = 1114,
  [SMALL_STATE(56)] = 1130,
  [SMALL_STATE(57)] = 1146,
  [SMALL_STATE(58)] = 1162,
  [SMALL_STATE(59)] = 1178,
  [SMALL_STATE(60)] = 1194,
  [SMALL_STATE(61)] = 1209,
  [SMALL_STATE(62)] = 1224,
  [SMALL_STATE(63)] = 1239,
  [SMALL_STATE(64)] = 1254,
  [SMALL_STATE(65)] = 1269,
  [SMALL_STATE(66)] = 1284,
  [SMALL_STATE(67)] = 1298,
  [SMALL_STATE(68)] = 1312,
  [SMALL_STATE(69)] = 1326,
  [SMALL_STATE(70)] = 1340,
  [SMALL_STATE(71)] = 1354,
  [SMALL_STATE(72)] = 1368,
  [SMALL_STATE(73)] = 1382,
  [SMALL_STATE(74)] = 1392,
  [SMALL_STATE(75)] = 1399,
  [SMALL_STATE(76)] = 1406,
  [SMALL_STATE(77)] = 1413,
  [SMALL_STATE(78)] = 1420,
  [SMALL_STATE(79)] = 1427,
  [SMALL_STATE(80)] = 1434,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global, 2),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_master, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_master, 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 2),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_region, 2),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_region, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(76),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(75),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(73),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special, 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global, 3),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_master, 3),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global, 4),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 4),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 3),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opcode, 3),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define, 3),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_master, 4),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global, 5),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(11),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_region, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 4),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat3, 2),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat3, 2), SHIFT_REPEAT(10),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 5),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_master, 5),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat4, 2),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat4, 2), SHIFT_REPEAT(8),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global, 6),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat5, 2),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat5, 2), SHIFT_REPEAT(5),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 6),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat6, 2),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat6, 2), SHIFT_REPEAT(4),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opcode_name, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [123] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opcode_name, 2),
};

#ifdef __cplusplus
extern "C" {
#endif
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
