#pragma once
#include "Dependencias.h"
#include "Cliente.h"
#include "Registrar.h"

template <class I, class C, class S>
class MenuCliente
{
private:
public:
	MenuCliente() {}
	~MenuCliente() {}

	I mostrarMenu()
	{
		borrar();
		I opcion;
		cout << "=========CLIENTE=========" << endl;
		cout << "[1] Ver lugares tur" << C(161) << "sticos" << endl;
		cout << "[2] Ver alojamientos populares" << endl;
		cout << "[3] Ver hoteles disponibles" << endl;
		cout << "[4] Ver ofertas" << endl;
		cout << "[5] Ver vuelos disponibles" << endl;
		cout << "[6] Ver taxis disponibles" << endl;
		cout << "[7] Configuraci" << C(162) << "n" << endl;
		cout << "[8] Volver" << endl;
		cout << "Ingrese opci" << C(162) << "n: "; cin >> opcion;
		return opcion;
	}
	void configuracion()
	{
		while (true) {
			I op;
			do {
				borrar();
				cout << "======CONFIGURACI" << C(224) << "N======" << endl;
				cout << "[1] Mostrar datos" << endl;
				cout << "[2] Modificar datos" << endl;
				cout << "[3] Volver" << endl;
				cout << "Ingrese opci" << C(162) << "n: "; cin >> op;
			} while (op < 1 || op > 3);

			if (op == 1) {

				borrar();
				cliente->mostrarDatos();
				_getch();
			}
			else if (op == 2) {
				I opMod;
				do {
					borrar();
					cout << "======MODIFICAR=DATOS======" << endl;
					cout << "[1] Modificar usuario" << endl;
					cout << "[2] Modificar contrase" << C(164) << "a: " << endl;
					cout << "[3] Volver" << endl;
					cout << "Ingrese opci" << C(162) << "n: "; cin >> opMod;
				} while (opMod < 1 || opMod > 3);
				borrar();
				switch (opMod)
				{
				case 1:
				{
					S usuario;
					cout << "Ingrese nuevo nombre de usuario: "; cin >> usuario;
					cliente->setUsuario(usuario);
					break;
				}
				case 2:
				{
					S contraseña;
					cout << "Ingrese nueva contrase" << C(164) << "a: "; cin >> contraseña;
					cliente->setContraseña(contraseña);
					break;
				}
				}
			}
			else break;
		}	
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
		case 7: configuracion(); break;
		}
	}
};
