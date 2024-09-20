#pragma once
#include "Dependencias.h"

//Generalizacion
template <class C, class S>
class Cliente
{
private:
	S nombre;
	S apellido;
	S usuario;
	S dni;
	S correo;
	S contraseña;
public:
	Cliente()
	{
		this->nombre = "";
		this->apellido = "";
		this->usuario = "";
		this->dni = "";
		this->correo = "";
		this->contraseña = "";
	}
	Cliente(S pNombre, S pApellido, S pUsuario, S pDni, S pCorreo, S pContraseña)
	{
		this->nombre = pNombre;
		this->apellido = pApellido;
		this->usuario = pUsuario;
		this->dni = pDni;
		this->correo = pCorreo;
		this->contraseña = pContraseña;
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

	void setContraseña(S pContraseña) { this->contraseña = pContraseña; }
	S getContraseña() { return this->contraseña; }

	void ingresarDatos()
	{
		S nom, ape, usu, dni, cor, con;
		cout << "Nombre: "; cin >> nom; setNombre(nom);
		cout << "Apellido: "; cin >> ape; setApellido(ape);
		cout << "Usuario: "; cin >> usu; setUsuario(usu);
		cout << "Dni: "; cin >> dni; setDni(dni);
		cout << "Correo: "; cin >> cor; setCorreo(cor);
		cout << "Contrase" << C(164) << "a: "; cin >> con; setContraseña(con);
	}

	void mostrarDatos()
	{
		cout << "Nombre: " << this->nombre << endl;
		cout << "Apellido: " << this->apellido << endl;
		cout << "Usuario: " << this->usuario << endl;
		cout << "Dni: " << this->dni << endl;
		cout << "Correo: " << this->correo << endl;
		cout << "Contrase" << char(164) << "a: " << this->contraseña << endl;
	}
};
