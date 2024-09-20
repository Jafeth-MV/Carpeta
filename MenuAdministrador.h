#pragma once
#include "Dependencias.h"
#include "Cliente.h"
template <class I, class C>
class MenuAdministrador
{
private:
public:
	MenuAdministrador(){}
	~MenuAdministrador(){}

	I mostrarMenu()
	{
		borrar();
		I opcion;
		cout << "=========ADMINISTRADOR=========" << endl;
		cout << "[1] Mostrar clientes" << endl;
		cout << "[2] Agregar alojamiento" << endl;
		cout << "[3] Mostrar alojamientos" << endl;
		cout << "[4] Agregar habitaci" << C(162) << "n" << endl;
		cout << "[5] Mostrar habitaciones" << endl;
		cout << "[6] Agregar ciudad" << endl;
		cout << "[7] Mostrar ciudades" << endl;
		cout << "[8] Agregar lugar tur" << C(161) << "stico" << endl;
		cout << "[9] Mostrar lugares tur" << C(161) << "sticos" << endl;
		cout << "[10] Agregar vuelo" << endl;
		cout << "[11] Mostrar vuelos" << endl;
		cout << "[12] Agregar taxi" << endl;
		cout << "[13] Mostrar taxis" << endl;
		cout << "[14] Agregar boleta" << endl;
		cout << "[15] Mostrar boletas" << endl;
		cout << "[16] Volver" << endl;
		cout << "Ingrese opci" << C(162) << "n: "; cin >> opcion;
		return opcion;
	}

	void procesarOpciones(I opcion)
	{
		switch (opcion)
		{
		case 1: 
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 10:
			break;
		case 11:
			break;
		case 12:
			break;
		case 13:
			break;
		case 14:
			break;
		case 15:
			break;
		}
	}
};