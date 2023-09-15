#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 72
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 43
#define ALIAS_COUNT 0
#define TOKEN_COUNT 25
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_pipeline = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_agent = 4,
  anon_sym_none = 5,
  anon_sym_any = 6,
  anon_sym_docker = 7,
  anon_sym_stages = 8,
  anon_sym_stage = 9,
  anon_sym_LPAREN = 10,
  anon_sym_RPAREN = 11,
  anon_sym_post = 12,
  anon_sym_steps = 13,
  anon_sym_always = 14,
  anon_sym_def = 15,
  anon_sym_SQUOTE = 16,
  aux_sym_string_token1 = 17,
  anon_sym_DQUOTE = 18,
  aux_sym_string_token2 = 19,
  anon_sym_DOLLAR = 20,
  sym_escape_sequence = 21,
  sym_identifier = 22,
  sym_number = 23,
  sym_comment = 24,
  sym_source_file = 25,
  sym_pipeline = 26,
  sym_agent_block = 27,
  sym_docker_block = 28,
  sym_stages_block = 29,
  sym_stage_block = 30,
  sym_post_block = 31,
  sym_steps_block = 32,
  sym_command = 33,
  sym_function_def = 34,
  sym_parameter_list = 35,
  sym_string = 36,
  sym_interpolation = 37,
  aux_sym_pipeline_repeat1 = 38,
  aux_sym_stages_block_repeat1 = 39,
  aux_sym_steps_block_repeat1 = 40,
  aux_sym_string_repeat1 = 41,
  aux_sym_string_repeat2 = 42,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_pipeline] = "pipeline",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_agent] = "agent",
  [anon_sym_none] = "none",
  [anon_sym_any] = "any",
  [anon_sym_docker] = "docker",
  [anon_sym_stages] = "stages",
  [anon_sym_stage] = "stage",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_post] = "post",
  [anon_sym_steps] = "steps",
  [anon_sym_always] = "always",
  [anon_sym_def] = "def",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token2] = "string_token2",
  [anon_sym_DOLLAR] = "$",
  [sym_escape_sequence] = "escape_sequence",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_pipeline] = "pipeline",
  [sym_agent_block] = "agent_block",
  [sym_docker_block] = "docker_block",
  [sym_stages_block] = "stages_block",
  [sym_stage_block] = "stage_block",
  [sym_post_block] = "post_block",
  [sym_steps_block] = "steps_block",
  [sym_command] = "command",
  [sym_function_def] = "function_def",
  [sym_parameter_list] = "parameter_list",
  [sym_string] = "string",
  [sym_interpolation] = "interpolation",
  [aux_sym_pipeline_repeat1] = "pipeline_repeat1",
  [aux_sym_stages_block_repeat1] = "stages_block_repeat1",
  [aux_sym_steps_block_repeat1] = "steps_block_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_pipeline] = anon_sym_pipeline,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_agent] = anon_sym_agent,
  [anon_sym_none] = anon_sym_none,
  [anon_sym_any] = anon_sym_any,
  [anon_sym_docker] = anon_sym_docker,
  [anon_sym_stages] = anon_sym_stages,
  [anon_sym_stage] = anon_sym_stage,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_post] = anon_sym_post,
  [anon_sym_steps] = anon_sym_steps,
  [anon_sym_always] = anon_sym_always,
  [anon_sym_def] = anon_sym_def,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_pipeline] = sym_pipeline,
  [sym_agent_block] = sym_agent_block,
  [sym_docker_block] = sym_docker_block,
  [sym_stages_block] = sym_stages_block,
  [sym_stage_block] = sym_stage_block,
  [sym_post_block] = sym_post_block,
  [sym_steps_block] = sym_steps_block,
  [sym_command] = sym_command,
  [sym_function_def] = sym_function_def,
  [sym_parameter_list] = sym_parameter_list,
  [sym_string] = sym_string,
  [sym_interpolation] = sym_interpolation,
  [aux_sym_pipeline_repeat1] = aux_sym_pipeline_repeat1,
  [aux_sym_stages_block_repeat1] = aux_sym_stages_block_repeat1,
  [aux_sym_steps_block_repeat1] = aux_sym_steps_block_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_string_repeat2] = aux_sym_string_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_pipeline] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_agent] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_none] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_any] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_docker] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stages] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stage] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_post] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_steps] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_always] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_def] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_pipeline] = {
    .visible = true,
    .named = true,
  },
  [sym_agent_block] = {
    .visible = true,
    .named = true,
  },
  [sym_docker_block] = {
    .visible = true,
    .named = true,
  },
  [sym_stages_block] = {
    .visible = true,
    .named = true,
  },
  [sym_stage_block] = {
    .visible = true,
    .named = true,
  },
  [sym_post_block] = {
    .visible = true,
    .named = true,
  },
  [sym_steps_block] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym_function_def] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_interpolation] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_pipeline_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_stages_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_steps_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat2] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(59);
      if (lookahead == '"') ADVANCE(81);
      if (lookahead == '$') ADVANCE(86);
      if (lookahead == '\'') ADVANCE(76);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == ')') ADVANCE(71);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'a') ADVANCE(22);
      if (lookahead == 'd') ADVANCE(12);
      if (lookahead == 'n') ADVANCE(34);
      if (lookahead == 'p') ADVANCE(26);
      if (lookahead == 's') ADVANCE(42);
      if (lookahead == '{') ADVANCE(61);
      if (lookahead == '}') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(58)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(81);
      if (lookahead == '$') ADVANCE(86);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '^') ADVANCE(85);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(76);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0) ADVANCE(80);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(71);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '{') ADVANCE(61);
      if (lookahead == '}') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == 'a') ADVANCE(29);
      if (lookahead == 's') ADVANCE(46);
      if (lookahead == '}') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == 's') ADVANCE(45);
      if (lookahead == '}') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(92);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(23);
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(24);
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(28);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(21);
      if (lookahead == 'o') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 21:
      if (lookahead == 'f') ADVANCE(75);
      END_STATE();
    case 22:
      if (lookahead == 'g') ADVANCE(19);
      if (lookahead == 'l') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 23:
      if (lookahead == 'g') ADVANCE(16);
      END_STATE();
    case 24:
      if (lookahead == 'g') ADVANCE(20);
      END_STATE();
    case 25:
      if (lookahead == 'g') ADVANCE(18);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 28:
      if (lookahead == 'k') ADVANCE(15);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 34:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 35:
      if (lookahead == 'p') ADVANCE(38);
      END_STATE();
    case 36:
      if (lookahead == 'p') ADVANCE(14);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 38:
      if (lookahead == 's') ADVANCE(73);
      END_STATE();
    case 39:
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 40:
      if (lookahead == 's') ADVANCE(67);
      END_STATE();
    case 41:
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 47:
      if (lookahead == 'u') ADVANCE(51);
      if (lookahead == 'x') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(89);
      if (lookahead != 0) ADVANCE(87);
      END_STATE();
    case 48:
      if (lookahead == 'w') ADVANCE(8);
      END_STATE();
    case 49:
      if (lookahead == 'y') ADVANCE(65);
      END_STATE();
    case 50:
      if (lookahead == 'y') ADVANCE(39);
      END_STATE();
    case 51:
      if (lookahead == '{') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      END_STATE();
    case 52:
      if (lookahead == '}') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(54);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 58:
      if (eof) ADVANCE(59);
      if (lookahead == '"') ADVANCE(81);
      if (lookahead == '$') ADVANCE(86);
      if (lookahead == '\'') ADVANCE(76);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == ')') ADVANCE(71);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == 'a') ADVANCE(22);
      if (lookahead == 'd') ADVANCE(12);
      if (lookahead == 'n') ADVANCE(34);
      if (lookahead == 'p') ADVANCE(26);
      if (lookahead == 's') ADVANCE(42);
      if (lookahead == '{') ADVANCE(61);
      if (lookahead == '}') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(58)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_pipeline);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_agent);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_any);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_docker);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_stages);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_stage);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_stage);
      if (lookahead == 's') ADVANCE(67);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_post);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_steps);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_always);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(80);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '^') ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '^') ADVANCE(85);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '/') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '^') ADVANCE(85);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '^') ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(87);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(88);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 5},
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
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_pipeline] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_agent] = ACTIONS(1),
    [anon_sym_none] = ACTIONS(1),
    [anon_sym_any] = ACTIONS(1),
    [anon_sym_docker] = ACTIONS(1),
    [anon_sym_stages] = ACTIONS(1),
    [anon_sym_stage] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_post] = ACTIONS(1),
    [anon_sym_steps] = ACTIONS(1),
    [anon_sym_always] = ACTIONS(1),
    [anon_sym_def] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(61),
    [sym_pipeline] = STATE(52),
    [anon_sym_pipeline] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_DOLLAR,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(9), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
    STATE(5), 2,
      sym_interpolation,
      aux_sym_string_repeat2,
  [18] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_RBRACE,
    ACTIONS(17), 1,
      anon_sym_agent,
    STATE(14), 1,
      sym_agent_block,
    STATE(68), 1,
      sym_steps_block,
    ACTIONS(19), 2,
      anon_sym_steps,
      anon_sym_always,
  [38] = 5,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(26), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
    STATE(4), 2,
      sym_interpolation,
      aux_sym_string_repeat2,
  [56] = 5,
    ACTIONS(11), 1,
      anon_sym_DOLLAR,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
    STATE(4), 2,
      sym_interpolation,
      aux_sym_string_repeat2,
  [74] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      anon_sym_def,
    STATE(6), 2,
      sym_function_def,
      aux_sym_pipeline_repeat1,
  [88] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(38), 2,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
    ACTIONS(40), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [100] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(42), 2,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
    ACTIONS(44), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [112] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(46), 1,
      anon_sym_RBRACE,
    ACTIONS(48), 1,
      sym_identifier,
    STATE(13), 2,
      sym_command,
      aux_sym_steps_block_repeat1,
  [126] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 4,
      anon_sym_RBRACE,
      anon_sym_stages,
      anon_sym_steps,
      anon_sym_always,
  [136] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(52), 2,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
    ACTIONS(54), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [148] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_RBRACE,
    ACTIONS(58), 1,
      anon_sym_stage,
    STATE(12), 2,
      sym_stage_block,
      aux_sym_stages_block_repeat1,
  [162] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    STATE(18), 2,
      sym_command,
      aux_sym_steps_block_repeat1,
  [176] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    STATE(70), 1,
      sym_steps_block,
    ACTIONS(19), 2,
      anon_sym_steps,
      anon_sym_always,
  [190] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    ACTIONS(67), 1,
      anon_sym_stage,
    STATE(24), 2,
      sym_stage_block,
      aux_sym_stages_block_repeat1,
  [204] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 1,
      anon_sym_def,
    STATE(26), 2,
      sym_function_def,
      aux_sym_pipeline_repeat1,
  [218] = 4,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(20), 1,
      aux_sym_string_repeat1,
    ACTIONS(73), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [232] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    ACTIONS(77), 1,
      sym_identifier,
    STATE(18), 2,
      sym_command,
      aux_sym_steps_block_repeat1,
  [246] = 4,
    ACTIONS(7), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      sym_comment,
    STATE(17), 1,
      aux_sym_string_repeat1,
    ACTIONS(80), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [260] = 4,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_SQUOTE,
    STATE(20), 1,
      aux_sym_string_repeat1,
    ACTIONS(84), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [274] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 4,
      anon_sym_RBRACE,
      anon_sym_stages,
      anon_sym_steps,
      anon_sym_always,
  [284] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_def,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    STATE(23), 2,
      sym_function_def,
      aux_sym_pipeline_repeat1,
  [298] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_def,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    STATE(6), 2,
      sym_function_def,
      aux_sym_pipeline_repeat1,
  [312] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_stage,
    ACTIONS(93), 1,
      anon_sym_RBRACE,
    STATE(12), 2,
      sym_stage_block,
      aux_sym_stages_block_repeat1,
  [326] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      sym_steps_block,
    ACTIONS(19), 2,
      anon_sym_steps,
      anon_sym_always,
  [340] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_def,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    STATE(6), 2,
      sym_function_def,
      aux_sym_pipeline_repeat1,
  [354] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    ACTIONS(99), 2,
      anon_sym_none,
      anon_sym_any,
  [365] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      sym_identifier,
  [374] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      sym_identifier,
  [383] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    STATE(44), 1,
      sym_string,
  [396] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    STATE(65), 1,
      sym_string,
  [409] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    STATE(50), 1,
      sym_string,
  [422] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_RBRACE,
    ACTIONS(111), 1,
      anon_sym_post,
    STATE(66), 1,
      sym_post_block,
  [435] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 2,
      anon_sym_RBRACE,
      anon_sym_stage,
  [443] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    ACTIONS(117), 1,
      sym_identifier,
  [453] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_LPAREN,
    STATE(49), 1,
      sym_parameter_list,
  [463] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_agent,
    STATE(38), 1,
      sym_agent_block,
  [473] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_stages,
    STATE(33), 1,
      sym_stages_block,
  [483] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 2,
      anon_sym_RBRACE,
      anon_sym_post,
  [491] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 2,
      anon_sym_RBRACE,
      anon_sym_stage,
  [499] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 2,
      ts_builtin_sym_end,
      anon_sym_def,
  [507] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 2,
      anon_sym_RBRACE,
      anon_sym_post,
  [515] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_RBRACE,
    ACTIONS(133), 1,
      sym_identifier,
  [525] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [533] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 2,
      anon_sym_RBRACE,
      anon_sym_stage,
  [541] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_docker,
    STATE(69), 1,
      sym_docker_block,
  [551] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_RBRACE,
  [558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_RPAREN,
  [565] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_LBRACE,
  [572] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_RPAREN,
  [579] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_RBRACE,
  [586] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      ts_builtin_sym_end,
  [593] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_RBRACE,
  [600] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_LBRACE,
  [607] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_LBRACE,
  [614] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_RBRACE,
  [621] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_RBRACE,
  [628] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_LBRACE,
  [635] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_RBRACE,
  [642] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LBRACE,
  [649] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      ts_builtin_sym_end,
  [656] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      sym_identifier,
  [663] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
  [670] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_RBRACE,
  [677] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_RBRACE,
  [684] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_RBRACE,
  [691] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_LBRACE,
  [698] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
  [705] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_RBRACE,
  [712] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_RBRACE,
  [719] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_LBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 18,
  [SMALL_STATE(4)] = 38,
  [SMALL_STATE(5)] = 56,
  [SMALL_STATE(6)] = 74,
  [SMALL_STATE(7)] = 88,
  [SMALL_STATE(8)] = 100,
  [SMALL_STATE(9)] = 112,
  [SMALL_STATE(10)] = 126,
  [SMALL_STATE(11)] = 136,
  [SMALL_STATE(12)] = 148,
  [SMALL_STATE(13)] = 162,
  [SMALL_STATE(14)] = 176,
  [SMALL_STATE(15)] = 190,
  [SMALL_STATE(16)] = 204,
  [SMALL_STATE(17)] = 218,
  [SMALL_STATE(18)] = 232,
  [SMALL_STATE(19)] = 246,
  [SMALL_STATE(20)] = 260,
  [SMALL_STATE(21)] = 274,
  [SMALL_STATE(22)] = 284,
  [SMALL_STATE(23)] = 298,
  [SMALL_STATE(24)] = 312,
  [SMALL_STATE(25)] = 326,
  [SMALL_STATE(26)] = 340,
  [SMALL_STATE(27)] = 354,
  [SMALL_STATE(28)] = 365,
  [SMALL_STATE(29)] = 374,
  [SMALL_STATE(30)] = 383,
  [SMALL_STATE(31)] = 396,
  [SMALL_STATE(32)] = 409,
  [SMALL_STATE(33)] = 422,
  [SMALL_STATE(34)] = 435,
  [SMALL_STATE(35)] = 443,
  [SMALL_STATE(36)] = 453,
  [SMALL_STATE(37)] = 463,
  [SMALL_STATE(38)] = 473,
  [SMALL_STATE(39)] = 483,
  [SMALL_STATE(40)] = 491,
  [SMALL_STATE(41)] = 499,
  [SMALL_STATE(42)] = 507,
  [SMALL_STATE(43)] = 515,
  [SMALL_STATE(44)] = 525,
  [SMALL_STATE(45)] = 533,
  [SMALL_STATE(46)] = 541,
  [SMALL_STATE(47)] = 551,
  [SMALL_STATE(48)] = 558,
  [SMALL_STATE(49)] = 565,
  [SMALL_STATE(50)] = 572,
  [SMALL_STATE(51)] = 579,
  [SMALL_STATE(52)] = 586,
  [SMALL_STATE(53)] = 593,
  [SMALL_STATE(54)] = 600,
  [SMALL_STATE(55)] = 607,
  [SMALL_STATE(56)] = 614,
  [SMALL_STATE(57)] = 621,
  [SMALL_STATE(58)] = 628,
  [SMALL_STATE(59)] = 635,
  [SMALL_STATE(60)] = 642,
  [SMALL_STATE(61)] = 649,
  [SMALL_STATE(62)] = 656,
  [SMALL_STATE(63)] = 663,
  [SMALL_STATE(64)] = 670,
  [SMALL_STATE(65)] = 677,
  [SMALL_STATE(66)] = 684,
  [SMALL_STATE(67)] = 691,
  [SMALL_STATE(68)] = 698,
  [SMALL_STATE(69)] = 705,
  [SMALL_STATE(70)] = 712,
  [SMALL_STATE(71)] = 719,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(4),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(35),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pipeline_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pipeline_repeat1, 2), SHIFT_REPEAT(62),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 4),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 4),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agent_block, 2),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 2),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 2),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stages_block_repeat1, 2),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stages_block_repeat1, 2), SHIFT_REPEAT(63),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 5),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_steps_block_repeat1, 2),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_steps_block_repeat1, 2), SHIFT_REPEAT(30),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(20),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agent_block, 4),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 6),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 7),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stage_block, 6),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stages_block, 4),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stage_block, 8),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_def, 5),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stages_block, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stage_block, 7),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_post_block, 4),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_steps_block, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_post_block, 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [169] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_steps_block, 4),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docker_block, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_jenkinsfile(void) {
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
