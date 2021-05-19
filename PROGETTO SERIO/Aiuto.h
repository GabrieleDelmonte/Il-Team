//
//  Aiuto.h
//  main
//
//  Created by Marcello Cornali on 15/05/21.
//

#ifndef Aiuto_h
#define Aiuto_h

#include "Listadomande.h"

class Aiuto{
    private:
        bool aiuti_utilizzati[3];
    public:
        Aiuto();
        bool usa_aiuto(Listadomande l, Domanda d, int i);
        int get_aiuti_usati();
        void risetta();
};
#endif /* Aiuto_h */
