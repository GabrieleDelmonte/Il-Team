#include <iostream>
#include <cstdlib>
#include <fstream>
#include "Menu.h"
using namespace std;

Menu :: Menu() : l(), s(l){
	visualizza_menu();
}

void Menu :: visualizza_menu(){
	int x;
	do{
	        system("clear");
        	cout<<"CHI VUOL ESSERE MILIONARIO"<<endl<<endl;
        	cout<<"1) Inizia gioco"<<endl;
        	cout<<"2) Aggiungi domanda"<<endl;
        	cout<<"3) Record"<<endl;
        	cout<<"4) Crediti"<<endl;
        	cout<<"5) Esci"<<endl<<endl;
        	cout<<"6) CAMBIA COLORE DEL GIOCO"<<endl;
        	cout<<"Inserisci opzione che vuoi scegliere"<<endl;
		cin>>x;
		switch(x){
			case 1:
				s.visualizza_domanda();
				break;
			case 2:
				l.aggiungi_domanda();
				break;
			case 3:
				visualizza_record();
				break;
			case 4:
				visualizza_crediti();
				break;
			case 5:
				cout<<"Grazie per aver giocato"<<endl;
				return;
			case 6:
				int sc;
				cout<<"\t \t \t Con che colori vuoi giocare?"<<endl;
				cout<<endl;
				cout<<"1) Colore: VIOLA"<<endl;
				cout<<"2) Colore: GIALLO"<<endl;
				cout<<"3) Colore: VERDE"<<endl;
				cout<<"4) Colore: ROSSO"<<endl;
				cout<<"5) Cambio bianco con il nero"<<endl;
				cout<<"6) Lascia il predefinito"<<endl;
				cin>>sc;
				cout<<endl;
				
				switch(sc)
				{
				 case 1:
				 	system("color 05"); //cololri in esadecimale
				 	break;
				 case 2:
				 	system("color 0E"); 
				 	break;
				 case 3:
				 	system("color 02"); 
				 	break;
				 case 4:
				 	system("color 0C"); 
				 	break;
				 case 5:
				 	system("color F0"); 
				 	break;
				 case 6:
				 	system("color 0F"); 
				 	break;	
				
				}
			default:
				cout<<"Opzione non valida, riprovare"<<endl;
				break;
		}
	}while(true);
}

void Menu :: visualizza_record(){
	ifstream in;
	in.open("record.txt");
	string s1;
	system("clear");
	while(getline(in,s1)){
		cout<<s1<<endl;
	}
	cout<<endl<<"Premere invio per tornare nel menu..."<<endl;
	cin.clear(); cin.ignore(1);
	getline(cin,s1);
}

void Menu :: visualizza_crediti(){
	system("clear");
	string s1;
	cout<<"CREDITI"<<endl<<endl;
	cout<<"Si ringrazia Delmonte Gabriele, Cornali Marcello e Carta Giacomo per il lavoro fatto."<<endl<<endl;
	cout<<"Premere invio per tornare nel menu..."<<endl;
	cin.clear(); cin.ignore(1);
	getline(cin,s1);
}
