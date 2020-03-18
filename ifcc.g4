grammar ifcc;

axiom: prog;

prog: 'int' 'main' '(' ')' '{' RETURN CONST ';' '}';

RETURN: 'return';
CONST: [0-9]+;
COMMENT: ('/*' .*? '*/' | '//' .*? '\n') -> skip;
DIRECTIVE: '#' .*? '\n' -> skip;
WS: [ \t\r\n]+ -> channel(HIDDEN);