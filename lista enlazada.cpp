#include <iostream>
#include <conio.h>
using namespace std;

struct Nodo{
	int valor;
	Nodo *PtSiguiente;
	Nodo *PtAnterior;
};

int main (){
	Nodo *lista; //Inicio de la lista 
	Nodo *actual; //Nodo auxiliar que se va a mover para asignar valores 
	Nodo *aux2; //crear nuevos nodos
	
	aux2 = new Nodo();
	aux2->valor=1;
	aux2->PtSiguiente=NULL;
	lista=aux2;
	actual=aux2;
	
	aux2 = new Nodo();
	aux2->valor=2;
	aux2->PtSiguiente=NULL;
	actual->PtSiguiente=aux2;
	actual=aux2;
	
	aux2 = new Nodo();
	aux2->valor=3;
	aux2->PtSiguiente=NULL;
	actual->PtSiguiente=aux2;
	actual=aux2;
	
	aux2 = new Nodo();
	aux2->valor=4;
	aux2->PtSiguiente=NULL;
	actual->PtSiguiente=aux2;
	actual=aux2;
	
	//Recorrer
	actual=lista;
	cout<<"Gracias por usar este programa"<<endl;
	do{
		cout<<actual->valor<<""<<endl;
		actual=actual->PtSiguiente;
	}while(actual->PtSiguiente!=NULL);


	
	
	getch ();
	return 0;

}
	
	

