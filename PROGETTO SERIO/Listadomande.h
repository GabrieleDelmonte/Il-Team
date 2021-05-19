//
//  Listadomande.h
//  main
//
//  Created by Marcello Cornali on 15/05/21.
//

#ifndef Listadomande_h
#define Listadomande_h

#include <iostream>
#include <cstdlib>
#include <fstream>
#include "Domanda.h"
using namespace std;

class Listadomande{
private:
    Domanda d[16];
    int domanda_corrente;
    bool salta_domanda;
public:
    Listadomande();
    void carica_domande();
    void aggiungi_domanda();
    Domanda getDomanda();
    void aumenta_domanda_corrente();
    int get_domanda_corrente();
    void setSaltaDomanda();
    bool getSaltaDomanda();
    void visualizza_domande(Domanda d1[], int i);
    
};

#endif /* Listadomande_h */
