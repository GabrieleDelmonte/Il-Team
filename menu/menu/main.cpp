//
//  main.cpp
//  menu
//
//  Created by Marcello Cornali on 23/04/21.
//

#include <iostream>

using namespace std;

int main() {
    int i=0;
    do{
        cout<<"1)GIOCA "<<endl;
        cout<<"2)AGGIUNGI DOMANDA "<<endl;
        cout<<"3)RECORD "<<endl;
        cout<<"4)CREDITI "<<endl;
        cout<<"5)ESCI "<<endl;
        cout<<"Scegli una delle 5 opzioni"<<endl;
        cin>>i;
        
        switch(i) {
            case 1: //richiamo funzione start
                break;
            case 2: //funione aggiungi domanda
                break;
            case 3: //funzioni record
                break;
            case 4: //crediti
                break;
            case 5:
                break;
            default: cout<<"Hai scelto un'opzione non possibile!"<<endl; break;
        }
        system ("clear");
    }while(i!=5);
    
    return 0;
}
