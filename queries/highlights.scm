; Keywords

[
 "stop"
 "play"
 "grid"
 "set"
 "map"
 "tempo"
 "note"
 "mix"
 "lp_cutoff"
 "hp_cutoff"
 "gain"
] @keyword

; [
; "bpm"
; "swing"
; ] @variable.builtin

(chord) @string.special

(grid (grid_token) @constant)

[
    "/"
    "%"
] @operator

(map name: (identifier) @function )  
(speed name: (identifier) @function )
(mix name: (identifier) @function )
(setter name: (identifier) @function )
(grid name: (identifier) @function )


(comment) @comment

(float) @number
(integer) @number
(string) @string

(ERROR) @error
