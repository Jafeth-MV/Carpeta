#pragma once
#include "Dependencias.h"
#include "Nodo.h"

template<class T>
class Cola
{
private:
	Nodo<T>* ini;
	Nodo<T>* fin;
public:
	Cola()
	{
		this->ini = NULL;
		this->fin = NULL;
	}
	void encolar(T v);
	T desencolar();
	bool esVacia();
};
template<class T>
void Cola<T>::encolar(T v)
{
	Nodo<T>* nodo = new Nodo<T>(v);
	if (esVacia())
	{
		ini = nodo;
		fin = ini;
	}
	else
	{
		fin->siguiente = nodo;
		fin = nodo;
	}
	nodo = NULL;
}
template<class T>
T Cola<T>::desencolar()
{
	T dato = ini->dato;
	if (ini == fin)
	{
		ini = NULL;
		fin = NULL;
	}
	else
	{
		ini = ini->siguiente;
	}
	return dato;

}
template<class T>
bool Cola<T>::esVacia()
{
	return (ini == NULL);
}