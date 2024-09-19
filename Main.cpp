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
void ingresar()
{

}
int main()
{
	Lista<Cliente<string>*>* listaCliente = new Lista<Cliente<string>*>();
	for (int i = 0; i < 3; i++)
	{
		string nom, ape, usu, dni, cor, con;
		cout << "CLIENTE " << i + 1 << ":" << endl;
		cout << "Nombre: "; cin >> nom;
		cout << "Apellido: "; cin >> ape;
		cout << "Usuario: "; cin >> usu;
		cout << "Dni: "; cin >> dni;
		cout << "Correo: "; cin >> cor;
		cout << "Contrase" << char(164) << "a: "; cin >> con;
		Cliente<string>* client = new Cliente<string>(nom, ape, usu, dni, cor, con);
		listaCliente->agregaPos(client, i);
	}
	for (int i = 0; i < listaCliente->longitud(); i++)
	{
		cout << "CLIENTE " << i + 1 << ":" << endl;
		listaCliente->obtenerPos(i)->mostrarDatos();
	}
	getch();
	return 0;
}