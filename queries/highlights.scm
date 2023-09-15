; keywords

[
  "pipeline"
  "agent"
  "stages"
  "stage"
  "steps"
  "def"
  "docker"
  "post"
  "always"
] @keyword

(comment) @comment

; Operators

; Literals
[
  (string)
] @string

(interpolation
  "$" @punctuation.special
  "{" @punctuation.special
  "}" @punctuation.special) @embedded

