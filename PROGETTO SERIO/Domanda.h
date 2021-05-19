//
//  Domanda.h
//  main
//
//  Created by Marcello Cornali on 15/05/21.
//

#ifndef Domanda_h
#define Domanda_h

#include <iostream>
#include <cstdlib>
using namespace std;

class Domanda{
private:
    string domanda;
    string risposta[4];
    int corretta;
public:
    Domanda();
    void setDomanda(string s);
    void setRisposta(string s, int r);
    void setCorretta(int c);
    string getDomanda();
    string getRisposta(int r);
    int getCorretta();
};

#endif /* Domanda_h */
