#include "Dependencias.h"
#include "Administrador.h"
#include "Archivos.h"
#include "Cliente.h"
#include "Cola.h"
#include "InicioSesion.h"
#include "Lista.h"
#include "MenuAdministrador.h"
#include "MenuCliente.h"
#include "Pila.h"
#include "Registrar.h"
int ingresar()
{
	int op;
	cout << "[1] Cliente" << endl;
	cout << "[2] Administrador" << endl;
	cout << "[3] Salir" << endl;
	cout << "Ingrese opci" << char(162) << "n: "; cin >> op;
	return op;
}
void menu(int tipoMenu)
{
	switch (tipoMenu)
	{
	case 1:
	{
		MenuCliente<int, char, string>* menuClient = new MenuCliente<int, char, string>();
		while (true) {
			int opcion;
			do {
				opcion = menuClient->mostrarMenu();
			} while (opcion < 1 || opcion > 8);
			if (opcion >= 1 && opcion <= 7) {
				menuClient->procesarOpciones(opcion);
			}
			else break;
		}
		break;
	}
	case 2:
	{
		MenuAdministrador<int, char>* menuAdmin = new MenuAdministrador<int, char>();
		while (true) {
			int opcion;
			do {
				opcion = menuAdmin->mostrarMenu();
			} while (opcion < 1 || opcion > 16);
			if (opcion >= 1 && opcion <= 15) {
				menuAdmin->procesarOpciones(opcion);
			}
			else break;
		}
		break;
	}
	case 3: exit(0);
	}
}
int main()
{
	Registrar* registrar = new Registrar();
	registrar->registrarDatos();
	while (true) {
		int client_Admin;
		do {
			borrar();
			client_Admin = ingresar();
		} while (client_Admin < 1 || client_Admin > 3);
		menu(client_Admin);
	}
	getch();
	return 0;
}
