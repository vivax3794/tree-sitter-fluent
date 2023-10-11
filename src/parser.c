#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 82
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 57
#define ALIAS_COUNT 0
#define TOKEN_COUNT 35
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LT = 1,
  anon_sym_GT = 2,
  anon_sym_LT_SLASH = 3,
  sym_template = 4,
  sym_text = 5,
  anon_sym_LBRACE = 6,
  anon_sym_RBRACE = 7,
  sym_reactive_source = 8,
  anon_sym_SLASH_GT = 9,
  sym_name = 10,
  anon_sym_src = 11,
  anon_sym_COLON = 12,
  anon_sym_SEMI = 13,
  anon_sym_QMARK = 14,
  anon_sym_EQ = 15,
  anon_sym_AT = 16,
  sym_quote_1 = 17,
  sym_quote_2 = 18,
  sym_string_source_1 = 19,
  sym_string_source_2 = 20,
  sym_css_prefix = 21,
  sym_text_1 = 22,
  sym_text_2 = 23,
  sym_css_source = 24,
  sym_eq = 25,
  aux_sym_string_token1 = 26,
  aux_sym_string_token2 = 27,
  sym_tag_source = 28,
  sym_style = 29,
  anon_sym_define = 30,
  anon_sym_data = 31,
  anon_sym_events = 32,
  sym_generic = 33,
  sym_generic_source = 34,
  sym_source_file = 35,
  sym_block = 36,
  sym_template_block = 37,
  sym_node = 38,
  sym_reactive_template = 39,
  sym_tag = 40,
  sym_attribute = 41,
  sym_rust_prefix = 42,
  sym_rust_attribute = 43,
  sym_rust_string = 44,
  sym_css_attribute = 45,
  sym_css_template = 46,
  sym_string = 47,
  sym_style_block = 48,
  sym_rust_tag = 49,
  sym_rust_block = 50,
  sym_generic_block = 51,
  aux_sym_source_file_repeat1 = 52,
  aux_sym_template_block_repeat1 = 53,
  aux_sym_tag_repeat1 = 54,
  aux_sym_css_attribute_repeat1 = 55,
  aux_sym_css_attribute_repeat2 = 56,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_SLASH] = "</",
  [sym_template] = "template",
  [sym_text] = "text",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_reactive_source] = "reactive_source",
  [anon_sym_SLASH_GT] = "/>",
  [sym_name] = "name",
  [anon_sym_src] = "src",
  [anon_sym_COLON] = ":",
  [anon_sym_SEMI] = ";",
  [anon_sym_QMARK] = "\?",
  [anon_sym_EQ] = " =",
  [anon_sym_AT] = "@",
  [sym_quote_1] = "quote_1",
  [sym_quote_2] = "quote_2",
  [sym_string_source_1] = "string_source_1",
  [sym_string_source_2] = "string_source_2",
  [sym_css_prefix] = "css_prefix",
  [sym_text_1] = "text_1",
  [sym_text_2] = "text_2",
  [sym_css_source] = "css_source",
  [sym_eq] = "eq",
  [aux_sym_string_token1] = "string_token1",
  [aux_sym_string_token2] = "string_token2",
  [sym_tag_source] = "tag_source",
  [sym_style] = "style",
  [anon_sym_define] = "define",
  [anon_sym_data] = "data",
  [anon_sym_events] = "events",
  [sym_generic] = "generic",
  [sym_generic_source] = "generic_source",
  [sym_source_file] = "source_file",
  [sym_block] = "block",
  [sym_template_block] = "template_block",
  [sym_node] = "node",
  [sym_reactive_template] = "reactive_template",
  [sym_tag] = "tag",
  [sym_attribute] = "attribute",
  [sym_rust_prefix] = "rust_prefix",
  [sym_rust_attribute] = "rust_attribute",
  [sym_rust_string] = "rust_string",
  [sym_css_attribute] = "css_attribute",
  [sym_css_template] = "css_template",
  [sym_string] = "string",
  [sym_style_block] = "style_block",
  [sym_rust_tag] = "rust_tag",
  [sym_rust_block] = "rust_block",
  [sym_generic_block] = "generic_block",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_template_block_repeat1] = "template_block_repeat1",
  [aux_sym_tag_repeat1] = "tag_repeat1",
  [aux_sym_css_attribute_repeat1] = "css_attribute_repeat1",
  [aux_sym_css_attribute_repeat2] = "css_attribute_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [sym_template] = sym_template,
  [sym_text] = sym_text,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_reactive_source] = sym_reactive_source,
  [anon_sym_SLASH_GT] = anon_sym_SLASH_GT,
  [sym_name] = sym_name,
  [anon_sym_src] = anon_sym_src,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_AT] = anon_sym_AT,
  [sym_quote_1] = sym_quote_1,
  [sym_quote_2] = sym_quote_2,
  [sym_string_source_1] = sym_string_source_1,
  [sym_string_source_2] = sym_string_source_2,
  [sym_css_prefix] = sym_css_prefix,
  [sym_text_1] = sym_text_1,
  [sym_text_2] = sym_text_2,
  [sym_css_source] = sym_css_source,
  [sym_eq] = sym_eq,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [sym_tag_source] = sym_tag_source,
  [sym_style] = sym_style,
  [anon_sym_define] = anon_sym_define,
  [anon_sym_data] = anon_sym_data,
  [anon_sym_events] = anon_sym_events,
  [sym_generic] = sym_generic,
  [sym_generic_source] = sym_generic_source,
  [sym_source_file] = sym_source_file,
  [sym_block] = sym_block,
  [sym_template_block] = sym_template_block,
  [sym_node] = sym_node,
  [sym_reactive_template] = sym_reactive_template,
  [sym_tag] = sym_tag,
  [sym_attribute] = sym_attribute,
  [sym_rust_prefix] = sym_rust_prefix,
  [sym_rust_attribute] = sym_rust_attribute,
  [sym_rust_string] = sym_rust_string,
  [sym_css_attribute] = sym_css_attribute,
  [sym_css_template] = sym_css_template,
  [sym_string] = sym_string,
  [sym_style_block] = sym_style_block,
  [sym_rust_tag] = sym_rust_tag,
  [sym_rust_block] = sym_rust_block,
  [sym_generic_block] = sym_generic_block,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_template_block_repeat1] = aux_sym_template_block_repeat1,
  [aux_sym_tag_repeat1] = aux_sym_tag_repeat1,
  [aux_sym_css_attribute_repeat1] = aux_sym_css_attribute_repeat1,
  [aux_sym_css_attribute_repeat2] = aux_sym_css_attribute_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_template] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_reactive_source] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_src] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [sym_quote_1] = {
    .visible = true,
    .named = true,
  },
  [sym_quote_2] = {
    .visible = true,
    .named = true,
  },
  [sym_string_source_1] = {
    .visible = true,
    .named = true,
  },
  [sym_string_source_2] = {
    .visible = true,
    .named = true,
  },
  [sym_css_prefix] = {
    .visible = true,
    .named = true,
  },
  [sym_text_1] = {
    .visible = true,
    .named = true,
  },
  [sym_text_2] = {
    .visible = true,
    .named = true,
  },
  [sym_css_source] = {
    .visible = true,
    .named = true,
  },
  [sym_eq] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_tag_source] = {
    .visible = true,
    .named = true,
  },
  [sym_style] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_define] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_data] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_events] = {
    .visible = true,
    .named = false,
  },
  [sym_generic] = {
    .visible = true,
    .named = true,
  },
  [sym_generic_source] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_template_block] = {
    .visible = true,
    .named = true,
  },
  [sym_node] = {
    .visible = true,
    .named = true,
  },
  [sym_reactive_template] = {
    .visible = true,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_rust_prefix] = {
    .visible = true,
    .named = true,
  },
  [sym_rust_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_rust_string] = {
    .visible = true,
    .named = true,
  },
  [sym_css_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_css_template] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_style_block] = {
    .visible = true,
    .named = true,
  },
  [sym_rust_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_rust_block] = {
    .visible = true,
    .named = true,
  },
  [sym_generic_block] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_template_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_attribute_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_attribute_repeat2] = {
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
  [33] = 30,
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
  [80] = 74,
  [81] = 70,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(45);
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '"') ADVANCE(97);
      if (lookahead == '\'') ADVANCE(96);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == ';') ADVANCE(92);
      if (lookahead == '<') ADVANCE(46);
      if (lookahead == '=') ADVANCE(109);
      if (lookahead == '>') ADVANCE(47);
      if (lookahead == '?') ADVANCE(93);
      if (lookahead == '@') ADVANCE(95);
      if (lookahead == 'd') ADVANCE(58);
      if (lookahead == 'e') ADVANCE(87);
      if (lookahead == 'g') ADVANCE(63);
      if (lookahead == 's') ADVANCE(80);
      if (lookahead == 't') ADVANCE(64);
      if (lookahead == '{') ADVANCE(53);
      if (lookahead == '}') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(0)
      if (('0' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '"') ADVANCE(97);
      if (lookahead == '\'') ADVANCE(96);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == ';') ADVANCE(92);
      if (lookahead == '<') ADVANCE(46);
      if (lookahead == '=') ADVANCE(109);
      if (lookahead == '>') ADVANCE(47);
      if (lookahead == '?') ADVANCE(93);
      if (lookahead == '@') ADVANCE(95);
      if (lookahead == 'd') ADVANCE(58);
      if (lookahead == 'e') ADVANCE(87);
      if (lookahead == 'g') ADVANCE(63);
      if (lookahead == 's') ADVANCE(80);
      if (lookahead == 't') ADVANCE(64);
      if (lookahead == '{') ADVANCE(53);
      if (lookahead == '}') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      if (('0' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '"') ADVANCE(97);
      if (lookahead == '\'') ADVANCE(96);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == ';') ADVANCE(92);
      if (lookahead == '<') ADVANCE(46);
      if (lookahead == '=') ADVANCE(94);
      if (lookahead == '>') ADVANCE(47);
      if (lookahead == '?') ADVANCE(93);
      if (lookahead == '@') ADVANCE(95);
      if (lookahead == 'd') ADVANCE(58);
      if (lookahead == 'e') ADVANCE(87);
      if (lookahead == 'g') ADVANCE(63);
      if (lookahead == 's') ADVANCE(80);
      if (lookahead == 't') ADVANCE(64);
      if (lookahead == '{') ADVANCE(53);
      if (lookahead == '}') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      if (('0' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == ';') ADVANCE(92);
      if (lookahead == '<') ADVANCE(13);
      if (lookahead == '=') ADVANCE(109);
      if (lookahead == '>') ADVANCE(47);
      if (lookahead == '?') ADVANCE(93);
      if (lookahead == '@') ADVANCE(95);
      if (lookahead == 's') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (('0' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == ';') ADVANCE(92);
      if (lookahead == '<') ADVANCE(13);
      if (lookahead == '=') ADVANCE(94);
      if (lookahead == '>') ADVANCE(47);
      if (lookahead == '?') ADVANCE(93);
      if (lookahead == '@') ADVANCE(95);
      if (lookahead == 's') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (('0' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(97);
      if (lookahead == '{') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(105);
      if (lookahead != 0) ADVANCE(106);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(110);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(96);
      if (lookahead == '{') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(111);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(102);
      END_STATE();
    case 10:
      if (lookahead == '<') ADVANCE(46);
      if (lookahead == '{') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '}') ADVANCE(52);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(109);
      if (lookahead == 'd') ADVANCE(15);
      if (lookahead == 'e') ADVANCE(42);
      if (lookahead == 'g') ADVANCE(18);
      if (lookahead == 's') ADVANCE(37);
      if (lookahead == 't') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(57);
      END_STATE();
    case 13:
      if (lookahead == '>') ADVANCE(124);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(38);
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(122);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 25:
      if (lookahead == 'f') ADVANCE(27);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(17);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 30:
      if (lookahead == 'm') ADVANCE(34);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 34:
      if (lookahead == 'p') ADVANCE(28);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 36:
      if (lookahead == 's') ADVANCE(120);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 42:
      if (lookahead == 'v') ADVANCE(24);
      END_STATE();
    case 43:
      if (lookahead == 'y') ADVANCE(29);
      END_STATE();
    case 44:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(48);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_template);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_template);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(52);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_reactive_source);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_reactive_source);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(84);
      if (lookahead == 'e') ADVANCE(70);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(119);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(86);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(90);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(123);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(77);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(75);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(115);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(117);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(50);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(76);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'f') ADVANCE(72);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(62);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(78);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(60);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(66);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(79);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(85);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(65);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(67);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(73);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(61);
      if (lookahead == 't') ADVANCE(88);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(61);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(71);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(121);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(59);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(83);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(68);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'v') ADVANCE(69);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'y') ADVANCE(74);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_src);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_quote_1);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_quote_2);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_string_source_1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(99);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_string_source_1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_string_source_2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(101);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_string_source_2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_css_prefix);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_text_1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '{') ADVANCE(104);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_text_1);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '{') ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_text_2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '{') ADVANCE(106);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_text_2);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '{') ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_css_source);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '}') ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_css_source);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '}') ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_eq);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_tag_source);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(113);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_tag_source);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_style);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_style);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_define);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_define);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_data);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_data);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_events);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_events);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_generic);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_generic);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_generic_source);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(124);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 10},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 10},
  [17] = {.lex_state = 10},
  [18] = {.lex_state = 11},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 10},
  [26] = {.lex_state = 11},
  [27] = {.lex_state = 10},
  [28] = {.lex_state = 10},
  [29] = {.lex_state = 10},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 40},
  [37] = {.lex_state = 40},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 55},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 44},
  [50] = {.lex_state = 11},
  [51] = {.lex_state = 11},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 44},
  [54] = {.lex_state = 44},
  [55] = {.lex_state = 44},
  [56] = {.lex_state = 11},
  [57] = {.lex_state = 11},
  [58] = {.lex_state = 11},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 98},
  [61] = {.lex_state = 100},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 44},
  [70] = {.lex_state = 107},
  [71] = {.lex_state = 112},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 112},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 107},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [sym_template] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SLASH_GT] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [anon_sym_src] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [sym_quote_1] = ACTIONS(1),
    [sym_quote_2] = ACTIONS(1),
    [sym_css_prefix] = ACTIONS(1),
    [sym_eq] = ACTIONS(1),
    [sym_style] = ACTIONS(1),
    [anon_sym_define] = ACTIONS(1),
    [anon_sym_data] = ACTIONS(1),
    [anon_sym_events] = ACTIONS(1),
    [sym_generic] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(52),
    [sym_block] = STATE(13),
    [sym_template_block] = STATE(42),
    [sym_style_block] = STATE(42),
    [sym_rust_block] = STATE(42),
    [sym_generic_block] = STATE(42),
    [aux_sym_source_file_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LT] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(9), 1,
      sym_name,
    ACTIONS(11), 1,
      anon_sym_src,
    ACTIONS(15), 1,
      sym_css_prefix,
    STATE(53), 1,
      sym_rust_prefix,
    ACTIONS(7), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(3), 2,
      sym_attribute,
      aux_sym_tag_repeat1,
    STATE(6), 2,
      sym_rust_attribute,
      sym_css_attribute,
    ACTIONS(13), 5,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_EQ,
      anon_sym_AT,
  [32] = 8,
    ACTIONS(19), 1,
      sym_name,
    ACTIONS(22), 1,
      anon_sym_src,
    ACTIONS(28), 1,
      sym_css_prefix,
    STATE(53), 1,
      sym_rust_prefix,
    ACTIONS(17), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(3), 2,
      sym_attribute,
      aux_sym_tag_repeat1,
    STATE(6), 2,
      sym_rust_attribute,
      sym_css_attribute,
    ACTIONS(25), 5,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_EQ,
      anon_sym_AT,
  [64] = 8,
    ACTIONS(9), 1,
      sym_name,
    ACTIONS(11), 1,
      anon_sym_src,
    ACTIONS(15), 1,
      sym_css_prefix,
    STATE(53), 1,
      sym_rust_prefix,
    ACTIONS(31), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(2), 2,
      sym_attribute,
      aux_sym_tag_repeat1,
    STATE(6), 2,
      sym_rust_attribute,
      sym_css_attribute,
    ACTIONS(13), 5,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_EQ,
      anon_sym_AT,
  [96] = 3,
    ACTIONS(37), 1,
      sym_eq,
    ACTIONS(35), 2,
      sym_name,
      anon_sym_src,
    ACTIONS(33), 8,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_EQ,
      anon_sym_AT,
      sym_css_prefix,
  [114] = 2,
    ACTIONS(35), 2,
      sym_name,
      anon_sym_src,
    ACTIONS(33), 8,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_EQ,
      anon_sym_AT,
      sym_css_prefix,
  [129] = 2,
    ACTIONS(41), 2,
      sym_name,
      anon_sym_src,
    ACTIONS(39), 8,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_EQ,
      anon_sym_AT,
      sym_css_prefix,
  [144] = 2,
    ACTIONS(45), 2,
      sym_name,
      anon_sym_src,
    ACTIONS(43), 8,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_EQ,
      anon_sym_AT,
      sym_css_prefix,
  [159] = 2,
    ACTIONS(49), 2,
      sym_name,
      anon_sym_src,
    ACTIONS(47), 8,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_EQ,
      anon_sym_AT,
      sym_css_prefix,
  [174] = 2,
    ACTIONS(53), 2,
      sym_name,
      anon_sym_src,
    ACTIONS(51), 8,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_EQ,
      anon_sym_AT,
      sym_css_prefix,
  [189] = 2,
    ACTIONS(57), 2,
      sym_name,
      anon_sym_src,
    ACTIONS(55), 8,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_EQ,
      anon_sym_AT,
      sym_css_prefix,
  [204] = 2,
    ACTIONS(61), 2,
      sym_name,
      anon_sym_src,
    ACTIONS(59), 8,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_EQ,
      anon_sym_AT,
      sym_css_prefix,
  [219] = 4,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    STATE(15), 2,
      sym_block,
      aux_sym_source_file_repeat1,
    STATE(42), 4,
      sym_template_block,
      sym_style_block,
      sym_rust_block,
      sym_generic_block,
  [236] = 6,
    ACTIONS(65), 1,
      anon_sym_LT,
    ACTIONS(68), 1,
      anon_sym_LT_SLASH,
    ACTIONS(71), 1,
      sym_text,
    ACTIONS(74), 1,
      anon_sym_LBRACE,
    STATE(14), 2,
      sym_node,
      aux_sym_template_block_repeat1,
    STATE(28), 2,
      sym_reactive_template,
      sym_tag,
  [257] = 4,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    ACTIONS(79), 1,
      anon_sym_LT,
    STATE(15), 2,
      sym_block,
      aux_sym_source_file_repeat1,
    STATE(42), 4,
      sym_template_block,
      sym_style_block,
      sym_rust_block,
      sym_generic_block,
  [274] = 6,
    ACTIONS(82), 1,
      anon_sym_LT,
    ACTIONS(84), 1,
      anon_sym_LT_SLASH,
    ACTIONS(86), 1,
      sym_text,
    ACTIONS(88), 1,
      anon_sym_LBRACE,
    STATE(17), 2,
      sym_node,
      aux_sym_template_block_repeat1,
    STATE(28), 2,
      sym_reactive_template,
      sym_tag,
  [295] = 6,
    ACTIONS(82), 1,
      anon_sym_LT,
    ACTIONS(86), 1,
      sym_text,
    ACTIONS(88), 1,
      anon_sym_LBRACE,
    ACTIONS(90), 1,
      anon_sym_LT_SLASH,
    STATE(14), 2,
      sym_node,
      aux_sym_template_block_repeat1,
    STATE(28), 2,
      sym_reactive_template,
      sym_tag,
  [316] = 5,
    ACTIONS(92), 1,
      sym_template,
    ACTIONS(94), 1,
      sym_style,
    ACTIONS(98), 1,
      sym_generic,
    STATE(75), 1,
      sym_rust_tag,
    ACTIONS(96), 3,
      anon_sym_define,
      anon_sym_data,
      anon_sym_events,
  [334] = 4,
    ACTIONS(100), 1,
      anon_sym_LBRACE,
    ACTIONS(102), 1,
      sym_quote_1,
    ACTIONS(104), 1,
      sym_text_1,
    STATE(20), 2,
      sym_css_template,
      aux_sym_css_attribute_repeat1,
  [348] = 4,
    ACTIONS(100), 1,
      anon_sym_LBRACE,
    ACTIONS(106), 1,
      sym_quote_1,
    ACTIONS(108), 1,
      sym_text_1,
    STATE(23), 2,
      sym_css_template,
      aux_sym_css_attribute_repeat1,
  [362] = 4,
    ACTIONS(102), 1,
      sym_quote_2,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(112), 1,
      sym_text_2,
    STATE(24), 2,
      sym_css_template,
      aux_sym_css_attribute_repeat2,
  [376] = 4,
    ACTIONS(114), 1,
      anon_sym_LBRACE,
    ACTIONS(117), 1,
      sym_quote_2,
    ACTIONS(119), 1,
      sym_text_2,
    STATE(22), 2,
      sym_css_template,
      aux_sym_css_attribute_repeat2,
  [390] = 4,
    ACTIONS(122), 1,
      anon_sym_LBRACE,
    ACTIONS(125), 1,
      sym_quote_1,
    ACTIONS(127), 1,
      sym_text_1,
    STATE(23), 2,
      sym_css_template,
      aux_sym_css_attribute_repeat1,
  [404] = 4,
    ACTIONS(106), 1,
      sym_quote_2,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(130), 1,
      sym_text_2,
    STATE(22), 2,
      sym_css_template,
      aux_sym_css_attribute_repeat2,
  [418] = 2,
    ACTIONS(134), 1,
      sym_text,
    ACTIONS(132), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
  [427] = 2,
    STATE(47), 1,
      sym_rust_tag,
    ACTIONS(96), 3,
      anon_sym_define,
      anon_sym_data,
      anon_sym_events,
  [436] = 2,
    ACTIONS(138), 1,
      sym_text,
    ACTIONS(136), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
  [445] = 2,
    ACTIONS(142), 1,
      sym_text,
    ACTIONS(140), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
  [454] = 2,
    ACTIONS(146), 1,
      sym_text,
    ACTIONS(144), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
  [463] = 2,
    ACTIONS(150), 1,
      sym_text_2,
    ACTIONS(148), 2,
      anon_sym_LBRACE,
      sym_quote_2,
  [471] = 3,
    ACTIONS(152), 1,
      sym_quote_1,
    ACTIONS(154), 1,
      sym_quote_2,
    STATE(9), 1,
      sym_rust_string,
  [481] = 3,
    ACTIONS(152), 1,
      sym_quote_1,
    ACTIONS(154), 1,
      sym_quote_2,
    STATE(12), 1,
      sym_rust_string,
  [491] = 2,
    ACTIONS(150), 1,
      sym_text_1,
    ACTIONS(148), 2,
      anon_sym_LBRACE,
      sym_quote_1,
  [499] = 2,
    STATE(9), 1,
      sym_string,
    ACTIONS(156), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [507] = 2,
    ACTIONS(158), 1,
      sym_quote_1,
    ACTIONS(160), 1,
      sym_quote_2,
  [514] = 2,
    ACTIONS(162), 1,
      sym_template,
    ACTIONS(164), 1,
      sym_name,
  [521] = 2,
    ACTIONS(164), 1,
      sym_name,
    ACTIONS(166), 1,
      sym_template,
  [528] = 1,
    ACTIONS(168), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
  [533] = 1,
    ACTIONS(170), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
  [538] = 1,
    ACTIONS(172), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
  [543] = 1,
    ACTIONS(174), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
  [548] = 1,
    ACTIONS(176), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
  [553] = 1,
    ACTIONS(178), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
  [558] = 1,
    ACTIONS(180), 1,
      sym_reactive_source,
  [562] = 1,
    ACTIONS(182), 1,
      anon_sym_GT,
  [566] = 1,
    ACTIONS(184), 1,
      anon_sym_GT,
  [570] = 1,
    ACTIONS(186), 1,
      anon_sym_GT,
  [574] = 1,
    ACTIONS(188), 1,
      anon_sym_GT,
  [578] = 1,
    ACTIONS(190), 1,
      sym_name,
  [582] = 1,
    ACTIONS(192), 1,
      sym_eq,
  [586] = 1,
    ACTIONS(194), 1,
      sym_eq,
  [590] = 1,
    ACTIONS(196), 1,
      ts_builtin_sym_end,
  [594] = 1,
    ACTIONS(198), 1,
      sym_name,
  [598] = 1,
    ACTIONS(200), 1,
      sym_name,
  [602] = 1,
    ACTIONS(202), 1,
      sym_name,
  [606] = 1,
    ACTIONS(204), 1,
      sym_eq,
  [610] = 1,
    ACTIONS(206), 1,
      sym_generic,
  [614] = 1,
    ACTIONS(208), 1,
      sym_style,
  [618] = 1,
    ACTIONS(210), 1,
      anon_sym_RBRACE,
  [622] = 1,
    ACTIONS(212), 1,
      sym_string_source_1,
  [626] = 1,
    ACTIONS(214), 1,
      sym_string_source_2,
  [630] = 1,
    ACTIONS(31), 1,
      anon_sym_GT,
  [634] = 1,
    ACTIONS(216), 1,
      anon_sym_GT,
  [638] = 1,
    ACTIONS(218), 1,
      sym_quote_1,
  [642] = 1,
    ACTIONS(218), 1,
      sym_quote_2,
  [646] = 1,
    ACTIONS(220), 1,
      anon_sym_LT_SLASH,
  [650] = 1,
    ACTIONS(222), 1,
      anon_sym_LT_SLASH,
  [654] = 1,
    ACTIONS(224), 1,
      anon_sym_LT_SLASH,
  [658] = 1,
    ACTIONS(226), 1,
      sym_name,
  [662] = 1,
    ACTIONS(228), 1,
      sym_css_source,
  [666] = 1,
    ACTIONS(230), 1,
      sym_tag_source,
  [670] = 1,
    ACTIONS(232), 1,
      sym_generic_source,
  [674] = 1,
    ACTIONS(234), 1,
      sym_tag_source,
  [678] = 1,
    ACTIONS(236), 1,
      anon_sym_RBRACE,
  [682] = 1,
    ACTIONS(238), 1,
      anon_sym_GT,
  [686] = 1,
    ACTIONS(240), 1,
      anon_sym_GT,
  [690] = 1,
    ACTIONS(242), 1,
      anon_sym_GT,
  [694] = 1,
    ACTIONS(244), 1,
      anon_sym_GT,
  [698] = 1,
    ACTIONS(246), 1,
      anon_sym_GT,
  [702] = 1,
    ACTIONS(248), 1,
      anon_sym_RBRACE,
  [706] = 1,
    ACTIONS(250), 1,
      sym_css_source,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 32,
  [SMALL_STATE(4)] = 64,
  [SMALL_STATE(5)] = 96,
  [SMALL_STATE(6)] = 114,
  [SMALL_STATE(7)] = 129,
  [SMALL_STATE(8)] = 144,
  [SMALL_STATE(9)] = 159,
  [SMALL_STATE(10)] = 174,
  [SMALL_STATE(11)] = 189,
  [SMALL_STATE(12)] = 204,
  [SMALL_STATE(13)] = 219,
  [SMALL_STATE(14)] = 236,
  [SMALL_STATE(15)] = 257,
  [SMALL_STATE(16)] = 274,
  [SMALL_STATE(17)] = 295,
  [SMALL_STATE(18)] = 316,
  [SMALL_STATE(19)] = 334,
  [SMALL_STATE(20)] = 348,
  [SMALL_STATE(21)] = 362,
  [SMALL_STATE(22)] = 376,
  [SMALL_STATE(23)] = 390,
  [SMALL_STATE(24)] = 404,
  [SMALL_STATE(25)] = 418,
  [SMALL_STATE(26)] = 427,
  [SMALL_STATE(27)] = 436,
  [SMALL_STATE(28)] = 445,
  [SMALL_STATE(29)] = 454,
  [SMALL_STATE(30)] = 463,
  [SMALL_STATE(31)] = 471,
  [SMALL_STATE(32)] = 481,
  [SMALL_STATE(33)] = 491,
  [SMALL_STATE(34)] = 499,
  [SMALL_STATE(35)] = 507,
  [SMALL_STATE(36)] = 514,
  [SMALL_STATE(37)] = 521,
  [SMALL_STATE(38)] = 528,
  [SMALL_STATE(39)] = 533,
  [SMALL_STATE(40)] = 538,
  [SMALL_STATE(41)] = 543,
  [SMALL_STATE(42)] = 548,
  [SMALL_STATE(43)] = 553,
  [SMALL_STATE(44)] = 558,
  [SMALL_STATE(45)] = 562,
  [SMALL_STATE(46)] = 566,
  [SMALL_STATE(47)] = 570,
  [SMALL_STATE(48)] = 574,
  [SMALL_STATE(49)] = 578,
  [SMALL_STATE(50)] = 582,
  [SMALL_STATE(51)] = 586,
  [SMALL_STATE(52)] = 590,
  [SMALL_STATE(53)] = 594,
  [SMALL_STATE(54)] = 598,
  [SMALL_STATE(55)] = 602,
  [SMALL_STATE(56)] = 606,
  [SMALL_STATE(57)] = 610,
  [SMALL_STATE(58)] = 614,
  [SMALL_STATE(59)] = 618,
  [SMALL_STATE(60)] = 622,
  [SMALL_STATE(61)] = 626,
  [SMALL_STATE(62)] = 630,
  [SMALL_STATE(63)] = 634,
  [SMALL_STATE(64)] = 638,
  [SMALL_STATE(65)] = 642,
  [SMALL_STATE(66)] = 646,
  [SMALL_STATE(67)] = 650,
  [SMALL_STATE(68)] = 654,
  [SMALL_STATE(69)] = 658,
  [SMALL_STATE(70)] = 662,
  [SMALL_STATE(71)] = 666,
  [SMALL_STATE(72)] = 670,
  [SMALL_STATE(73)] = 674,
  [SMALL_STATE(74)] = 678,
  [SMALL_STATE(75)] = 682,
  [SMALL_STATE(76)] = 686,
  [SMALL_STATE(77)] = 690,
  [SMALL_STATE(78)] = 694,
  [SMALL_STATE(79)] = 698,
  [SMALL_STATE(80)] = 702,
  [SMALL_STATE(81)] = 706,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(5),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(56),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(55),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(54),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_attribute, 6),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_attribute, 6),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_attribute, 5),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_attribute, 5),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rust_string, 3),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rust_string, 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rust_attribute, 4),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rust_attribute, 4),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_block_repeat1, 2), SHIFT_REPEAT(69),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_block_repeat1, 2), SHIFT_REPEAT(49),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_block_repeat1, 2), SHIFT_REPEAT(28),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_block_repeat1, 2), SHIFT_REPEAT(44),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_css_attribute_repeat2, 2), SHIFT_REPEAT(81),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_css_attribute_repeat2, 2),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_css_attribute_repeat2, 2), SHIFT_REPEAT(22),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_css_attribute_repeat1, 2), SHIFT_REPEAT(70),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_css_attribute_repeat1, 2),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_css_attribute_repeat1, 2), SHIFT_REPEAT(23),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 1),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reactive_template, 3),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reactive_template, 3),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_template, 3),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_template, 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rust_block, 7),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_block, 7),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_block, 7),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_block, 7),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_block, 6),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [196] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rust_prefix, 1),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rust_tag, 1),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_fluent(void) {
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
