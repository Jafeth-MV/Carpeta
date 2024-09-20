#pragma once
#include "Dependencias.h"

//Generalizacion
template <class S>
class Cliente
{
private:
	S nombre;
	S apellido;
	S usuario;
	S dni;
	S correo;
	S contrase�a;
public:
	Cliente()
	{
		this->nombre = "";
		this->apellido = "";
		this->usuario = "";
		this->dni = "";
		this->correo = "";
		this->contrase�a = "";
	}
	Cliente(S pNombre, S pApellido, S pUsuario, S pDni, S pCorreo, S pContrase�a)
	{
		this->nombre = pNombre;
		this->apellido = pApellido;
		this->usuario = pUsuario;
		this->dni = pDni;
		this->correo = pCorreo;
		this->contrase�a = pContrase�a;
	}
	~Cliente(){}
	
	void setNombre(S pNombre) { this->nombre = pNombre; }
	S getNombre() { return this->nombre; }

	void setApellido(S pApellido) { this->apellido = pApellido; }
	S getApellido() { return this->apellido; }

	void setUsuario(S pUsuario) { this->usuario = pUsuario; }
	S getUsuario() { return this->usuario; }

	void setDni(S pDni) { this->dni = pDni; }
	S getDni() { return this->dni; }

	void setCorreo(S pCorreo) { this->correo = pCorreo; }
	S getCorreo() { return this->correo; }

	void setContrase�a(S pContrase�a) { this->contrase�a = pContrase�a; }
	S getContrase�a() { return this->contrase�a; }

	void ingresarDatos()
	{
		S nom, ape, usu, dni, cor, con;
		cout << "Nombre: "; cin >> nom;
		cout << "Apellido: "; cin >> ape;
		cout << "Usuario: "; cin >> usu;
		cout << "Dni: "; cin >> dni;
		cout << "Correo: "; cin >> cor;
		cout << "Contrase" << char(164) << "a: "; cin >> con;
		Cliente* client = new Cliente(nom, ape, usu, dni, cor, con);
	}

	void mostrarDatos()
	{
		cout << "Nombre: " << this->nombre << endl;
		cout << "Apellido: " << this->apellido << endl;
		cout << "Usuario: " << this->usuario << endl;
		cout << "Dni: " << this->dni << endl;
		cout << "Correo: " << this->correo << endl;
		cout << "Contrase" << char(164) << "a: " << this->contrase�a << endl;
	}
};