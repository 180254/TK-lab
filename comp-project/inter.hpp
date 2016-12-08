#pragma once
using namespace std;

struct Attr {
    vector<string*>* code;
    string*          place;
    Type*            type;

    Attr();
    //~Attr();
};

Attr* compute(Expression*, vector<Symbol*>*, bool);

void attr_set_error(Attr*);
string sym_to_place(Symbol*);

