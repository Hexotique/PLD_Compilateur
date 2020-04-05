#include <string>

#include "Statement.h"

class CFG;
class Expression;

using namespace std;

class ForStatement : public Statement
{
public:
    ForStatement(Expression *i, Expression *c, Expression *u, Statement *s)
        : initialization(i), condition(c), update(u), statement(s){};

    string buildIR(CFG *cfg);

protected:
    Expression *initialization;
    Expression *condition;
    Expression *update;
    Statement *statement;
};