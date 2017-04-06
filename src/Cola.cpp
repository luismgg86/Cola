#include "Cola.h"

using namespace std;

Cola::Cola(){
	this->H=NULL;
	this->T=NULL;
}

Cola::Cola(int dato){
	Nodo *m= new Nodo(dato);
	this->H=m;
	this->T=H;
}

bool Cola::IsVacia(){

	return (this->H == NULL && this->T == NULL);
}



void Cola::Encolar(int dato){
	Nodo *m= new Nodo(dato);
	if (IsVacia	())
	{
		this->T=m;
		this->H=m;
		return ;
	}

	this->T->sig=m->sig;
	this->T=m;
	return ;
}

Nodo* Cola::Buscar(int ref){
	Nodo *aux = this->H;

	if (IsVacia())
	{
		cout<<"La cola esta vacia"<<endl;
		return NULL;
	}

	while(aux->dato != ref){
		if(aux->sig == NULL){
		cout<<"La referencia no esta en la cola"<<endl;
			return NULL;
		}
		aux=aux->sig;
	}

	return aux;
}

Nodo* Cola::Buscar(int ref,Nodo *n){
	if (IsVacia())
	{
		cout<<"La lista esta vacía"<<endl;
		return NULL;
	}

	if (n->dato != ref)
	{
		if(n->sig == NULL){
		cout<<"La referencia no esta en la cola"<<endl;
			return NULL;
		}
		return Buscar(ref,n->sig);
	}

	return n;
}

int Cola::Desencolar(){
	int d = this->H->dato;
	if (IsVacia())
	{
	    cout<<"La cola esta vacia"<<endl;
		return d;
	}
	Nodo *aux = this->H;
	if (this->H == this->T)
	{
		this->H = NULL;
		this->T = NULL;
		return d;
	}

	while(aux->sig != this->T)
		aux=aux->sig;

	this->T=aux;
	this->T->sig=NULL;
	return d;
}