#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cstdio>
#include <iostream>
int scanToken(class token *t);
// Tokens 
enum {
    T_EOF, T_PLUS, T_MINUS, T_STAR, T_SLASH, T_INTLIT, T_SEMI, T_PRINT
};

// Token class
class token {
public: 
 int token;
 int intvalue;
};

// AST node types

enum {
    A_ADD, A_SUBTRACT, A_MULTIPLY, A_DIVIDE, A_INTLIT
};

// Abstract syntax tree structure(class)

class ASTNode {
    public:
    int op;   // operation to be performed on the tree
    class ASTNode *left;  // left child tree
    class ASTNode *right; // right child tree 
    int intvalue;
};