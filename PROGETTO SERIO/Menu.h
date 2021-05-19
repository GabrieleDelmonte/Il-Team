//
//  Menu.h
//  main
//
//  Created by Marcello Cornali on 15/05/21.
//

#ifndef Menu_h
#define Menu_h
#include <iostream>
#include <cstdlib>
#include "Listadomande.h"
#include "Start.h"
using namespace std;

class Menu{
private:
    Listadomande l;
    Start s;
public:
    Menu();
    void visualizza_menu();
    void visualizza_record();
    void visualizza_crediti();
};

#endif /* Menu_h */
