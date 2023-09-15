module.exports = grammar({
  name: 'jenkinsfile',
  extras: $ => [/\s/, $.comment],

  rules: {
    source_file: $ => $.pipeline,

    pipeline: $ => seq(
      'pipeline',
      '{',
      $.agent_block,
      $.stages_block,
      optional($.post_block),
      '}',
      repeat($.function_def),
    ),

    agent_block: $ => seq(
      'agent',
      choice(
        'none',
        'any',
        seq(
          '{',
          $.docker_block,
          '}',
        ),
        // TODO: Other options for agent
      ),
    ),

    docker_block: $ => seq(
      'docker',
      $.string,
    ),

    stages_block: $ => seq(
      'stages',
      '{',
      repeat($.stage_block),
      '}',
    ),

    stage_block: $ => seq(
      'stage',
      '(',
      $.string,
      ')',
      '{',
      optional($.agent_block),
      optional($.steps_block),
      '}',
    ),

    post_block: $ => seq(
      'post',
      '{',
      optional($.steps_block),
      '}',
    ),

    steps_block: $ => seq(
      // We can use this rule for a always block too, which also contains steps
      choice('steps', 'always'),
      '{',
      repeat($.command),
      '}',
    ),

    command: $ => seq(
      $.identifier,
      $.string,
    ),

    function_def: $ => seq(
      'def',
      $.identifier,
      $.parameter_list,
      '{',
      // TODO: Function body
      '}',
    ),

    parameter_list: $ => seq(
      '(',
      // TODO: parameters
      ')',
    ),
    
    string: ($) =>
      choice(
        seq(
          "'",
          optional(
            repeat(
              choice(token.immediate(prec(1, /[^'\\]+/)), $.escape_sequence)
            )
          ),
          "'"
        ),
        seq(
          '"',
          optional(
            repeat(
              choice(
                token.immediate(prec(1, /[^"\\^$]+/)),
                $.escape_sequence,
                $.interpolation,
              )
            )
          ),
          '"'
        )
      ),

    leading_key: $ => '$',
    interpolation: $ => seq('$',
      choice(
        seq('{', optional($.identifier), '}'),
        $.identifier,
      ),
    ),

    escape_sequence: ($) =>
      token.immediate(
        seq(
          "\\",
          choice(
            /[^xu0-7]/,
            /[0-7]{1,3}/,
            /x[0-9a-fA-F]{2}/,
            /u[0-9a-fA-F]{4}/,
            /u{[0-9a-fA-F]+}/
          )
        )
      ),

    identifier: $ => /[A-Za-z_][A-Za-z0-9_]+/,
    number: $ => /\d+/,

    comment: $ => token(seq('//', /.*/)),
  },
});
