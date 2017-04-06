#include "Nodo.h"

class Cola{

public:

	Nodo *H,*T;
	int dato;

	Cola();
	Cola(int dato);
	
	bool IsVacia();
	void Encolar(int dato);
	Nodo* Buscar(int ref);
	Nodo* Buscar(int ref,Nodo *n);
	int Desencolar();

};