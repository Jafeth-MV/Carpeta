#pragma once
#include "Dependencias.h"
#include "Cliente.h"
#include "Lista.h"

Lista<Cliente<char, string>*>* lista_cliente = new Lista<Cliente<char, string>*>();
Cliente<char, string>* cliente = new Cliente<char, string>();

class Registrar
{
private:

public:
	Registrar() {}
	~Registrar() {}

	bool verificarExistencia()
	{
		for (int i = 0; i < lista_cliente->longitud(); i++) {
			if (cliente->getCorreo() == lista_cliente->obtenerPos(i)->getCorreo()) return true;
		}
		return false;
	}
	void registrarDatos()
	{
		do {
			cliente->ingresarDatos();
		} while (verificarExistencia() == true);

		lista_cliente->agregar(cliente);
	}
};