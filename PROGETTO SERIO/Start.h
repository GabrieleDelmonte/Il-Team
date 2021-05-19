//
//  Start.h
//  main
//
//  Created by Marcello Cornali on 15/05/21.
//

#ifndef Start_h
#define Start_h

#include "Listadomande.h"
#include "Aiuto.h"
#include <fstream>

class Start{
    private:
        Listadomande l;
        Aiuto a;
    public:
        Start(Listadomande lista);
        void visualizza_domanda();
        void visualizza_montepremi();
        bool controlla_corretta(Domanda d, int risp);
        void visualizza_aiuto(Domanda d);
        void salva_partita();
};

#endif /* Start_h */
