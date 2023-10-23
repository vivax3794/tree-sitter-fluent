#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 84
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 62
#define ALIAS_COUNT 0
#define TOKEN_COUNT 38
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
  anon_sym_DOLLAR = 17,
  sym_quote_1 = 18,
  sym_quote_2 = 19,
  sym_string_source_1 = 20,
  sym_string_source_2 = 21,
  sym_css_prefix = 22,
  sym_text_1 = 23,
  sym_text_2 = 24,
  sym_css_source = 25,
  sym_eq = 26,
  aux_sym_string_token1 = 27,
  aux_sym_string_token2 = 28,
  aux_sym_tag_source_token1 = 29,
  sym_style = 30,
  anon_sym_define = 31,
  anon_sym_data = 32,
  anon_sym_events = 33,
  anon_sym_setup = 34,
  anon_sym_props = 35,
  sym_generic = 36,
  sym_generic_source = 37,
  sym_source_file = 38,
  sym_block = 39,
  sym_template_block = 40,
  sym_node = 41,
  sym_reactive_template = 42,
  sym_tag = 43,
  sym_attribute = 44,
  sym_rust_prefix = 45,
  sym_rust_attribute = 46,
  sym_rust_string = 47,
  sym_css_attribute = 48,
  sym_css_template = 49,
  sym_string = 50,
  sym_style_block = 51,
  sym_tag_source = 52,
  sym_rust_tag = 53,
  sym_rust_block = 54,
  sym_generic_block = 55,
  aux_sym_source_file_repeat1 = 56,
  aux_sym_template_block_repeat1 = 57,
  aux_sym_tag_repeat1 = 58,
  aux_sym_css_attribute_repeat1 = 59,
  aux_sym_css_attribute_repeat2 = 60,
  aux_sym_tag_source_repeat1 = 61,
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
  [anon_sym_DOLLAR] = "$",
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
  [aux_sym_tag_source_token1] = "tag_source_token1",
  [sym_style] = "style",
  [anon_sym_define] = "define",
  [anon_sym_data] = "data",
  [anon_sym_events] = "events",
  [anon_sym_setup] = "setup",
  [anon_sym_props] = "props",
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
  [sym_tag_source] = "tag_source",
  [sym_rust_tag] = "rust_tag",
  [sym_rust_block] = "rust_block",
  [sym_generic_block] = "generic_block",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_template_block_repeat1] = "template_block_repeat1",
  [aux_sym_tag_repeat1] = "tag_repeat1",
  [aux_sym_css_attribute_repeat1] = "css_attribute_repeat1",
  [aux_sym_css_attribute_repeat2] = "css_attribute_repeat2",
  [aux_sym_tag_source_repeat1] = "tag_source_repeat1",
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
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
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
  [aux_sym_tag_source_token1] = aux_sym_tag_source_token1,
  [sym_style] = sym_style,
  [anon_sym_define] = anon_sym_define,
  [anon_sym_data] = anon_sym_data,
  [anon_sym_events] = anon_sym_events,
  [anon_sym_setup] = anon_sym_setup,
  [anon_sym_props] = anon_sym_props,
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
  [sym_tag_source] = sym_tag_source,
  [sym_rust_tag] = sym_rust_tag,
  [sym_rust_block] = sym_rust_block,
  [sym_generic_block] = sym_generic_block,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_template_block_repeat1] = aux_sym_template_block_repeat1,
  [aux_sym_tag_repeat1] = aux_sym_tag_repeat1,
  [aux_sym_css_attribute_repeat1] = aux_sym_css_attribute_repeat1,
  [aux_sym_css_attribute_repeat2] = aux_sym_css_attribute_repeat2,
  [aux_sym_tag_source_repeat1] = aux_sym_tag_source_repeat1,
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
  [anon_sym_DOLLAR] = {
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
  [aux_sym_tag_source_token1] = {
    .visible = false,
    .named = false,
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
  [anon_sym_setup] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_props] = {
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
  [sym_tag_source] = {
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
  [aux_sym_tag_source_repeat1] = {
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
  [33] = 32,
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
  [82] = 76,
  [83] = 72,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(54);
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '"') ADVANCE(114);
      if (lookahead == '$') ADVANCE(112);
      if (lookahead == '\'') ADVANCE(113);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == ';') ADVANCE(108);
      if (lookahead == '<') ADVANCE(55);
      if (lookahead == '=') ADVANCE(126);
      if (lookahead == '>') ADVANCE(56);
      if (lookahead == '?') ADVANCE(109);
      if (lookahead == '@') ADVANCE(111);
      if (lookahead == 'd') ADVANCE(67);
      if (lookahead == 'e') ADVANCE(103);
      if (lookahead == 'g') ADVANCE(72);
      if (lookahead == 'p') ADVANCE(93);
      if (lookahead == 's') ADVANCE(78);
      if (lookahead == 't') ADVANCE(73);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == '}') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(0)
      if (('0' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '"') ADVANCE(114);
      if (lookahead == '$') ADVANCE(112);
      if (lookahead == '\'') ADVANCE(113);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == ';') ADVANCE(108);
      if (lookahead == '<') ADVANCE(55);
      if (lookahead == '=') ADVANCE(126);
      if (lookahead == '>') ADVANCE(56);
      if (lookahead == '?') ADVANCE(109);
      if (lookahead == '@') ADVANCE(111);
      if (lookahead == 'd') ADVANCE(67);
      if (lookahead == 'e') ADVANCE(103);
      if (lookahead == 'g') ADVANCE(72);
      if (lookahead == 'p') ADVANCE(93);
      if (lookahead == 's') ADVANCE(78);
      if (lookahead == 't') ADVANCE(73);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == '}') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      if (('0' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '"') ADVANCE(114);
      if (lookahead == '$') ADVANCE(112);
      if (lookahead == '\'') ADVANCE(113);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == ';') ADVANCE(108);
      if (lookahead == '<') ADVANCE(55);
      if (lookahead == '=') ADVANCE(110);
      if (lookahead == '>') ADVANCE(56);
      if (lookahead == '?') ADVANCE(109);
      if (lookahead == '@') ADVANCE(111);
      if (lookahead == 'd') ADVANCE(67);
      if (lookahead == 'e') ADVANCE(103);
      if (lookahead == 'g') ADVANCE(72);
      if (lookahead == 'p') ADVANCE(93);
      if (lookahead == 's') ADVANCE(78);
      if (lookahead == 't') ADVANCE(73);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == '}') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      if (('0' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '$') ADVANCE(112);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == ';') ADVANCE(108);
      if (lookahead == '<') ADVANCE(13);
      if (lookahead == '=') ADVANCE(126);
      if (lookahead == '>') ADVANCE(56);
      if (lookahead == '?') ADVANCE(109);
      if (lookahead == '@') ADVANCE(111);
      if (lookahead == 's') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (('0' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '$') ADVANCE(112);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == ';') ADVANCE(108);
      if (lookahead == '<') ADVANCE(13);
      if (lookahead == '=') ADVANCE(110);
      if (lookahead == '>') ADVANCE(56);
      if (lookahead == '?') ADVANCE(109);
      if (lookahead == '@') ADVANCE(111);
      if (lookahead == 's') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (('0' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(114);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(122);
      if (lookahead != 0) ADVANCE(123);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(127);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(113);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(120);
      if (lookahead != 0) ADVANCE(121);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(128);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(119);
      END_STATE();
    case 10:
      if (lookahead == '<') ADVANCE(55);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '}') ADVANCE(61);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(126);
      if (lookahead == 'd') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(49);
      if (lookahead == 'g') ADVANCE(18);
      if (lookahead == 'p') ADVANCE(39);
      if (lookahead == 's') ADVANCE(24);
      if (lookahead == 't') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(66);
      END_STATE();
    case 13:
      if (lookahead == '>') ADVANCE(147);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(43);
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(137);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(145);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(44);
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 26:
      if (lookahead == 'f') ADVANCE(28);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(17);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 31:
      if (lookahead == 'm') ADVANCE(38);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 35:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == 'p') ADVANCE(41);
      END_STATE();
    case 37:
      if (lookahead == 'p') ADVANCE(141);
      END_STATE();
    case 38:
      if (lookahead == 'p') ADVANCE(29);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 41:
      if (lookahead == 's') ADVANCE(143);
      END_STATE();
    case 42:
      if (lookahead == 's') ADVANCE(139);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 48:
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 49:
      if (lookahead == 'v') ADVANCE(25);
      END_STATE();
    case 50:
      if (lookahead == 'y') ADVANCE(30);
      END_STATE();
    case 51:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(131);
      if (lookahead == '<') ADVANCE(130);
      if (lookahead != 0) ADVANCE(129);
      END_STATE();
    case 52:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(132);
      if (lookahead != 0) ADVANCE(129);
      END_STATE();
    case 53:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(53)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(57);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_template);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_template);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_reactive_source);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_reactive_source);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(98);
      if (lookahead == 'e') ADVANCE(80);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(138);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(101);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(106);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(146);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(86);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(85);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(134);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(136);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(59);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(95);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(99);
      if (lookahead == 'r') ADVANCE(70);
      if (lookahead == 't') ADVANCE(104);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(87);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'f') ADVANCE(82);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(71);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(88);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(69);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(74);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(92);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(77);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(100);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(75);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(90);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(96);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(142);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(83);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(89);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(70);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(81);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(144);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(140);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(68);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(102);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(97);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(76);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(91);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'v') ADVANCE(79);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'y') ADVANCE(84);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_src);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_quote_1);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_quote_2);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_string_source_1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(116);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_string_source_1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_string_source_2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(118);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_string_source_2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_css_prefix);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_text_1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '{') ADVANCE(121);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_text_1);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '{') ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_text_2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '{') ADVANCE(123);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_text_2);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '{') ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_css_source);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '}') ADVANCE(125);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_css_source);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '}') ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_eq);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_tag_source_token1);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_tag_source_token1);
      if (lookahead == '/') ADVANCE(57);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_tag_source_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(131);
      if (lookahead == '<') ADVANCE(130);
      if (lookahead != 0) ADVANCE(129);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_tag_source_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(132);
      if (lookahead != 0) ADVANCE(129);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_style);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_style);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_define);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_define);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_data);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_data);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_events);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_events);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_setup);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_setup);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_props);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_props);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_generic);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_generic);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_generic_source);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(147);
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
  [13] = {.lex_state = 11},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 10},
  [17] = {.lex_state = 10},
  [18] = {.lex_state = 10},
  [19] = {.lex_state = 11},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 10},
  [27] = {.lex_state = 10},
  [28] = {.lex_state = 10},
  [29] = {.lex_state = 10},
  [30] = {.lex_state = 51},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 52},
  [35] = {.lex_state = 51},
  [36] = {.lex_state = 52},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 45},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 45},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 115},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 53},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 11},
  [56] = {.lex_state = 11},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 64},
  [61] = {.lex_state = 53},
  [62] = {.lex_state = 53},
  [63] = {.lex_state = 117},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 53},
  [69] = {.lex_state = 11},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 11},
  [72] = {.lex_state = 124},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 11},
  [81] = {.lex_state = 53},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 124},
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
    [anon_sym_DOLLAR] = ACTIONS(1),
    [sym_quote_1] = ACTIONS(1),
    [sym_quote_2] = ACTIONS(1),
    [sym_css_prefix] = ACTIONS(1),
    [sym_eq] = ACTIONS(1),
    [sym_style] = ACTIONS(1),
    [anon_sym_define] = ACTIONS(1),
    [anon_sym_data] = ACTIONS(1),
    [anon_sym_events] = ACTIONS(1),
    [anon_sym_setup] = ACTIONS(1),
    [anon_sym_props] = ACTIONS(1),
    [sym_generic] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(79),
    [sym_block] = STATE(14),
    [sym_template_block] = STATE(42),
    [sym_style_block] = STATE(42),
    [sym_rust_block] = STATE(42),
    [sym_generic_block] = STATE(42),
    [aux_sym_source_file_repeat1] = STATE(14),
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
    STATE(81), 1,
      sym_rust_prefix,
    ACTIONS(7), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(3), 2,
      sym_attribute,
      aux_sym_tag_repeat1,
    STATE(7), 2,
      sym_rust_attribute,
      sym_css_attribute,
    ACTIONS(13), 6,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_EQ,
      anon_sym_AT,
      anon_sym_DOLLAR,
  [33] = 8,
    ACTIONS(9), 1,
      sym_name,
    ACTIONS(11), 1,
      anon_sym_src,
    ACTIONS(15), 1,
      sym_css_prefix,
    STATE(81), 1,
      sym_rust_prefix,
    ACTIONS(17), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(4), 2,
      sym_attribute,
      aux_sym_tag_repeat1,
    STATE(7), 2,
      sym_rust_attribute,
      sym_css_attribute,
    ACTIONS(13), 6,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_EQ,
      anon_sym_AT,
      anon_sym_DOLLAR,
  [66] = 8,
    ACTIONS(21), 1,
      sym_name,
    ACTIONS(24), 1,
      anon_sym_src,
    ACTIONS(30), 1,
      sym_css_prefix,
    STATE(81), 1,
      sym_rust_prefix,
    ACTIONS(19), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(4), 2,
      sym_attribute,
      aux_sym_tag_repeat1,
    STATE(7), 2,
      sym_rust_attribute,
      sym_css_attribute,
    ACTIONS(27), 6,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_EQ,
      anon_sym_AT,
      anon_sym_DOLLAR,
  [99] = 3,
    ACTIONS(37), 1,
      sym_eq,
    ACTIONS(35), 2,
      sym_name,
      anon_sym_src,
    ACTIONS(33), 9,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_EQ,
      anon_sym_AT,
      anon_sym_DOLLAR,
      sym_css_prefix,
  [118] = 2,
    ACTIONS(41), 2,
      sym_name,
      anon_sym_src,
    ACTIONS(39), 9,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_EQ,
      anon_sym_AT,
      anon_sym_DOLLAR,
      sym_css_prefix,
  [134] = 2,
    ACTIONS(35), 2,
      sym_name,
      anon_sym_src,
    ACTIONS(33), 9,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_EQ,
      anon_sym_AT,
      anon_sym_DOLLAR,
      sym_css_prefix,
  [150] = 2,
    ACTIONS(45), 2,
      sym_name,
      anon_sym_src,
    ACTIONS(43), 9,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_EQ,
      anon_sym_AT,
      anon_sym_DOLLAR,
      sym_css_prefix,
  [166] = 2,
    ACTIONS(49), 2,
      sym_name,
      anon_sym_src,
    ACTIONS(47), 9,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_EQ,
      anon_sym_AT,
      anon_sym_DOLLAR,
      sym_css_prefix,
  [182] = 2,
    ACTIONS(53), 2,
      sym_name,
      anon_sym_src,
    ACTIONS(51), 9,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_EQ,
      anon_sym_AT,
      anon_sym_DOLLAR,
      sym_css_prefix,
  [198] = 2,
    ACTIONS(57), 2,
      sym_name,
      anon_sym_src,
    ACTIONS(55), 9,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_EQ,
      anon_sym_AT,
      anon_sym_DOLLAR,
      sym_css_prefix,
  [214] = 2,
    ACTIONS(61), 2,
      sym_name,
      anon_sym_src,
    ACTIONS(59), 9,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_EQ,
      anon_sym_AT,
      anon_sym_DOLLAR,
      sym_css_prefix,
  [230] = 5,
    ACTIONS(63), 1,
      sym_template,
    ACTIONS(65), 1,
      sym_style,
    ACTIONS(69), 1,
      sym_generic,
    STATE(73), 1,
      sym_rust_tag,
    ACTIONS(67), 5,
      anon_sym_define,
      anon_sym_data,
      anon_sym_events,
      anon_sym_setup,
      anon_sym_props,
  [250] = 4,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    STATE(15), 2,
      sym_block,
      aux_sym_source_file_repeat1,
    STATE(42), 4,
      sym_template_block,
      sym_style_block,
      sym_rust_block,
      sym_generic_block,
  [267] = 4,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    ACTIONS(75), 1,
      anon_sym_LT,
    STATE(15), 2,
      sym_block,
      aux_sym_source_file_repeat1,
    STATE(42), 4,
      sym_template_block,
      sym_style_block,
      sym_rust_block,
      sym_generic_block,
  [284] = 6,
    ACTIONS(78), 1,
      anon_sym_LT,
    ACTIONS(80), 1,
      anon_sym_LT_SLASH,
    ACTIONS(82), 1,
      sym_text,
    ACTIONS(84), 1,
      anon_sym_LBRACE,
    STATE(18), 2,
      sym_node,
      aux_sym_template_block_repeat1,
    STATE(27), 2,
      sym_reactive_template,
      sym_tag,
  [305] = 6,
    ACTIONS(86), 1,
      anon_sym_LT,
    ACTIONS(89), 1,
      anon_sym_LT_SLASH,
    ACTIONS(92), 1,
      sym_text,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    STATE(17), 2,
      sym_node,
      aux_sym_template_block_repeat1,
    STATE(27), 2,
      sym_reactive_template,
      sym_tag,
  [326] = 6,
    ACTIONS(78), 1,
      anon_sym_LT,
    ACTIONS(82), 1,
      sym_text,
    ACTIONS(84), 1,
      anon_sym_LBRACE,
    ACTIONS(98), 1,
      anon_sym_LT_SLASH,
    STATE(17), 2,
      sym_node,
      aux_sym_template_block_repeat1,
    STATE(27), 2,
      sym_reactive_template,
      sym_tag,
  [347] = 2,
    STATE(54), 1,
      sym_rust_tag,
    ACTIONS(67), 5,
      anon_sym_define,
      anon_sym_data,
      anon_sym_events,
      anon_sym_setup,
      anon_sym_props,
  [358] = 4,
    ACTIONS(100), 1,
      anon_sym_LBRACE,
    ACTIONS(102), 1,
      sym_quote_2,
    ACTIONS(104), 1,
      sym_text_2,
    STATE(24), 2,
      sym_css_template,
      aux_sym_css_attribute_repeat2,
  [372] = 4,
    ACTIONS(106), 1,
      anon_sym_LBRACE,
    ACTIONS(109), 1,
      sym_quote_2,
    ACTIONS(111), 1,
      sym_text_2,
    STATE(21), 2,
      sym_css_template,
      aux_sym_css_attribute_repeat2,
  [386] = 4,
    ACTIONS(102), 1,
      sym_quote_1,
    ACTIONS(114), 1,
      anon_sym_LBRACE,
    ACTIONS(116), 1,
      sym_text_1,
    STATE(23), 2,
      sym_css_template,
      aux_sym_css_attribute_repeat1,
  [400] = 4,
    ACTIONS(114), 1,
      anon_sym_LBRACE,
    ACTIONS(118), 1,
      sym_quote_1,
    ACTIONS(120), 1,
      sym_text_1,
    STATE(25), 2,
      sym_css_template,
      aux_sym_css_attribute_repeat1,
  [414] = 4,
    ACTIONS(100), 1,
      anon_sym_LBRACE,
    ACTIONS(118), 1,
      sym_quote_2,
    ACTIONS(122), 1,
      sym_text_2,
    STATE(21), 2,
      sym_css_template,
      aux_sym_css_attribute_repeat2,
  [428] = 4,
    ACTIONS(124), 1,
      anon_sym_LBRACE,
    ACTIONS(127), 1,
      sym_quote_1,
    ACTIONS(129), 1,
      sym_text_1,
    STATE(25), 2,
      sym_css_template,
      aux_sym_css_attribute_repeat1,
  [442] = 2,
    ACTIONS(134), 1,
      sym_text,
    ACTIONS(132), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
  [451] = 2,
    ACTIONS(138), 1,
      sym_text,
    ACTIONS(136), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
  [460] = 2,
    ACTIONS(142), 1,
      sym_text,
    ACTIONS(140), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
  [469] = 2,
    ACTIONS(146), 1,
      sym_text,
    ACTIONS(144), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
  [478] = 3,
    ACTIONS(148), 1,
      anon_sym_LT_SLASH,
    ACTIONS(150), 1,
      aux_sym_tag_source_token1,
    STATE(35), 1,
      aux_sym_tag_source_repeat1,
  [488] = 3,
    ACTIONS(152), 1,
      sym_quote_1,
    ACTIONS(154), 1,
      sym_quote_2,
    STATE(11), 1,
      sym_rust_string,
  [498] = 2,
    ACTIONS(158), 1,
      sym_text_2,
    ACTIONS(156), 2,
      anon_sym_LBRACE,
      sym_quote_2,
  [506] = 2,
    ACTIONS(158), 1,
      sym_text_1,
    ACTIONS(156), 2,
      anon_sym_LBRACE,
      sym_quote_1,
  [514] = 3,
    ACTIONS(160), 1,
      aux_sym_tag_source_token1,
    STATE(30), 1,
      aux_sym_tag_source_repeat1,
    STATE(58), 1,
      sym_tag_source,
  [524] = 3,
    ACTIONS(162), 1,
      anon_sym_LT_SLASH,
    ACTIONS(164), 1,
      aux_sym_tag_source_token1,
    STATE(35), 1,
      aux_sym_tag_source_repeat1,
  [534] = 3,
    ACTIONS(160), 1,
      aux_sym_tag_source_token1,
    STATE(30), 1,
      aux_sym_tag_source_repeat1,
    STATE(65), 1,
      sym_tag_source,
  [544] = 3,
    ACTIONS(152), 1,
      sym_quote_1,
    ACTIONS(154), 1,
      sym_quote_2,
    STATE(10), 1,
      sym_rust_string,
  [554] = 2,
    STATE(11), 1,
      sym_string,
    ACTIONS(167), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [562] = 1,
    ACTIONS(169), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
  [567] = 1,
    ACTIONS(171), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
  [572] = 2,
    ACTIONS(173), 1,
      sym_template,
    ACTIONS(175), 1,
      sym_name,
  [579] = 1,
    ACTIONS(177), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
  [584] = 2,
    ACTIONS(179), 1,
      sym_quote_1,
    ACTIONS(181), 1,
      sym_quote_2,
  [591] = 2,
    ACTIONS(175), 1,
      sym_name,
    ACTIONS(183), 1,
      sym_template,
  [598] = 1,
    ACTIONS(185), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
  [603] = 1,
    ACTIONS(187), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
  [608] = 1,
    ACTIONS(189), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
  [613] = 1,
    ACTIONS(191), 1,
      sym_string_source_1,
  [617] = 1,
    ACTIONS(193), 1,
      anon_sym_RBRACE,
  [621] = 1,
    ACTIONS(195), 1,
      anon_sym_GT,
  [625] = 1,
    ACTIONS(197), 1,
      sym_name,
  [629] = 1,
    ACTIONS(199), 1,
      anon_sym_GT,
  [633] = 1,
    ACTIONS(201), 1,
      anon_sym_GT,
  [637] = 1,
    ACTIONS(203), 1,
      anon_sym_GT,
  [641] = 1,
    ACTIONS(205), 1,
      sym_eq,
  [645] = 1,
    ACTIONS(207), 1,
      sym_eq,
  [649] = 1,
    ACTIONS(209), 1,
      anon_sym_LT_SLASH,
  [653] = 1,
    ACTIONS(211), 1,
      anon_sym_LT_SLASH,
  [657] = 1,
    ACTIONS(7), 1,
      anon_sym_GT,
  [661] = 1,
    ACTIONS(213), 1,
      sym_reactive_source,
  [665] = 1,
    ACTIONS(215), 1,
      sym_name,
  [669] = 1,
    ACTIONS(217), 1,
      sym_name,
  [673] = 1,
    ACTIONS(219), 1,
      sym_string_source_2,
  [677] = 1,
    ACTIONS(221), 1,
      anon_sym_GT,
  [681] = 1,
    ACTIONS(223), 1,
      anon_sym_LT_SLASH,
  [685] = 1,
    ACTIONS(225), 1,
      sym_quote_1,
  [689] = 1,
    ACTIONS(225), 1,
      sym_quote_2,
  [693] = 1,
    ACTIONS(227), 1,
      sym_name,
  [697] = 1,
    ACTIONS(229), 1,
      sym_eq,
  [701] = 1,
    ACTIONS(231), 1,
      sym_generic_source,
  [705] = 1,
    ACTIONS(233), 1,
      sym_generic,
  [709] = 1,
    ACTIONS(235), 1,
      sym_css_source,
  [713] = 1,
    ACTIONS(237), 1,
      anon_sym_GT,
  [717] = 1,
    ACTIONS(239), 1,
      anon_sym_GT,
  [721] = 1,
    ACTIONS(241), 1,
      anon_sym_GT,
  [725] = 1,
    ACTIONS(243), 1,
      anon_sym_RBRACE,
  [729] = 1,
    ACTIONS(245), 1,
      anon_sym_GT,
  [733] = 1,
    ACTIONS(247), 1,
      anon_sym_GT,
  [737] = 1,
    ACTIONS(249), 1,
      ts_builtin_sym_end,
  [741] = 1,
    ACTIONS(251), 1,
      sym_style,
  [745] = 1,
    ACTIONS(253), 1,
      sym_name,
  [749] = 1,
    ACTIONS(255), 1,
      anon_sym_RBRACE,
  [753] = 1,
    ACTIONS(257), 1,
      sym_css_source,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 33,
  [SMALL_STATE(4)] = 66,
  [SMALL_STATE(5)] = 99,
  [SMALL_STATE(6)] = 118,
  [SMALL_STATE(7)] = 134,
  [SMALL_STATE(8)] = 150,
  [SMALL_STATE(9)] = 166,
  [SMALL_STATE(10)] = 182,
  [SMALL_STATE(11)] = 198,
  [SMALL_STATE(12)] = 214,
  [SMALL_STATE(13)] = 230,
  [SMALL_STATE(14)] = 250,
  [SMALL_STATE(15)] = 267,
  [SMALL_STATE(16)] = 284,
  [SMALL_STATE(17)] = 305,
  [SMALL_STATE(18)] = 326,
  [SMALL_STATE(19)] = 347,
  [SMALL_STATE(20)] = 358,
  [SMALL_STATE(21)] = 372,
  [SMALL_STATE(22)] = 386,
  [SMALL_STATE(23)] = 400,
  [SMALL_STATE(24)] = 414,
  [SMALL_STATE(25)] = 428,
  [SMALL_STATE(26)] = 442,
  [SMALL_STATE(27)] = 451,
  [SMALL_STATE(28)] = 460,
  [SMALL_STATE(29)] = 469,
  [SMALL_STATE(30)] = 478,
  [SMALL_STATE(31)] = 488,
  [SMALL_STATE(32)] = 498,
  [SMALL_STATE(33)] = 506,
  [SMALL_STATE(34)] = 514,
  [SMALL_STATE(35)] = 524,
  [SMALL_STATE(36)] = 534,
  [SMALL_STATE(37)] = 544,
  [SMALL_STATE(38)] = 554,
  [SMALL_STATE(39)] = 562,
  [SMALL_STATE(40)] = 567,
  [SMALL_STATE(41)] = 572,
  [SMALL_STATE(42)] = 579,
  [SMALL_STATE(43)] = 584,
  [SMALL_STATE(44)] = 591,
  [SMALL_STATE(45)] = 598,
  [SMALL_STATE(46)] = 603,
  [SMALL_STATE(47)] = 608,
  [SMALL_STATE(48)] = 613,
  [SMALL_STATE(49)] = 617,
  [SMALL_STATE(50)] = 621,
  [SMALL_STATE(51)] = 625,
  [SMALL_STATE(52)] = 629,
  [SMALL_STATE(53)] = 633,
  [SMALL_STATE(54)] = 637,
  [SMALL_STATE(55)] = 641,
  [SMALL_STATE(56)] = 645,
  [SMALL_STATE(57)] = 649,
  [SMALL_STATE(58)] = 653,
  [SMALL_STATE(59)] = 657,
  [SMALL_STATE(60)] = 661,
  [SMALL_STATE(61)] = 665,
  [SMALL_STATE(62)] = 669,
  [SMALL_STATE(63)] = 673,
  [SMALL_STATE(64)] = 677,
  [SMALL_STATE(65)] = 681,
  [SMALL_STATE(66)] = 685,
  [SMALL_STATE(67)] = 689,
  [SMALL_STATE(68)] = 693,
  [SMALL_STATE(69)] = 697,
  [SMALL_STATE(70)] = 701,
  [SMALL_STATE(71)] = 705,
  [SMALL_STATE(72)] = 709,
  [SMALL_STATE(73)] = 713,
  [SMALL_STATE(74)] = 717,
  [SMALL_STATE(75)] = 721,
  [SMALL_STATE(76)] = 725,
  [SMALL_STATE(77)] = 729,
  [SMALL_STATE(78)] = 733,
  [SMALL_STATE(79)] = 737,
  [SMALL_STATE(80)] = 741,
  [SMALL_STATE(81)] = 745,
  [SMALL_STATE(82)] = 749,
  [SMALL_STATE(83)] = 753,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(5),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(69),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(62),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(61),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_attribute, 6),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_attribute, 6),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_attribute, 5),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_attribute, 5),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rust_string, 3),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rust_string, 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rust_attribute, 4),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rust_attribute, 4),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_block_repeat1, 2), SHIFT_REPEAT(68),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_block_repeat1, 2), SHIFT_REPEAT(51),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_block_repeat1, 2), SHIFT_REPEAT(27),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_block_repeat1, 2), SHIFT_REPEAT(60),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_css_attribute_repeat2, 2), SHIFT_REPEAT(83),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_css_attribute_repeat2, 2),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_css_attribute_repeat2, 2), SHIFT_REPEAT(21),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_css_attribute_repeat1, 2), SHIFT_REPEAT(72),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_css_attribute_repeat1, 2),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_css_attribute_repeat1, 2), SHIFT_REPEAT(25),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 1),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reactive_template, 3),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reactive_template, 3),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_source, 1),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_template, 3),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_template, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_source_repeat1, 2),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_source_repeat1, 2), SHIFT_REPEAT(35),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_block, 7),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rust_block, 7),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_block, 6),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_block, 7),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_block, 7),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rust_prefix, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rust_tag, 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [249] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
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
