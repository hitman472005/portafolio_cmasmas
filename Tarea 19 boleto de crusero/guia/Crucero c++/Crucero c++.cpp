 // Crucero c++.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string.h>
#include <fstream>
#include <conio.h>

using namespace std;
int main()
{
	string nombre, apellido, cedula, pasaporte, correo, sexo, lugar, fecha_de_salida, fecha_de_entrada, compallero, equipaje;
	int destino, genero, equipaje1, acompallante;
	int total = 0;

	cout << "**********************" << endl << endl;
	cout << "*  Keison Cerda #8   *" << endl << endl;
	cout << "**********************" << endl << endl;


	cout << "**** reservacion de crucero ****" << endl << endl;

	cout << "bienvenido a All Blue, llene los siguientes requisitos para reservar un viaje" << endl << endl;

	cout << "Nombre: ";
	cin >> nombre;
	cout << "" << endl;

	cout << "Apellido: ";
	cin >> apellido;
	cout << "" << endl;

	cout << "Cedula: ";
	cin >> cedula;
	cout << "" << endl;

	cout << "Pasaporte: ";
	cin >> pasaporte;
	cout << "" << endl;

	cout << "Correo: ";
	cin >> correo;
	cout << "" << endl;

	cout << "Sexo: 1. Masculino "<<endl;
	cout << "Sexo: 2. Femenino "<<endl;
	cout << "Ingrese su genero: "; cin >> genero;


	switch (genero)
	{
	case 1: sexo = "Masculino"; 				break;
	case 2: sexo = "Femenino"; 				    break;

	}


	



	cout << "" << endl;

	cout << "A cual destino le gustaria viajar"<<endl;
	cout << "* 1.  Hawai            $300 *" << endl;
	cout << "* 2.  Cancun           $200 *" << endl;
	cout << "* 3.  Islas Margaritas $500 *" << endl;

	cout << "" << endl;

	cout << "Ingrese su destino: "; cin >> destino;
	
	cout << "" << endl;

	switch (destino)
	{
	case 1:  lugar = "Hawai"; total += 300;      break;
	case 2:  lugar = "Cancun"; total += 200;      break;
	case 3:  lugar = "Islas Margaritas"; total += 500;     break;
	

	}
	cout << "" << endl;


	cout << "Fecha de salida: ";
	cin >> fecha_de_salida; cout << "" << endl;

	cout << "Fecha de entrada: ";
	cin >> fecha_de_entrada; cout << "" << endl;


	cout << "Lleva equipaje adcional? Se le sumaran 50$ a la factura" << endl;
	cout << "1. Si -----" << endl;
	cout << "2. No -----" << endl;

	cout << "" << endl;
	cin >> equipaje1;

	switch (equipaje1)
	{
	case 1: equipaje = "Si"; total += 50; break;
	}

	cout << "" << endl;

	cout << "Llevara a una persona mas?" << endl;

	cout << "1. Si  " << endl;
	cout << "2. No  " << endl;
	cout << "" << endl;
	cin >> acompallante;

	switch (acompallante)
	{
	case 1:	return main();	system("cls");		break;

	case 2: compallero = "No"; break;


	}

	cout << "" << endl;

	cout << "El total de su factura es: "; cout << total << "$";


	ofstream archivo;
	archivo.open("reservacion_crucero.txt");
	archivo << "Nombre: " << nombre << endl;
	archivo << "Apellido: " << apellido << endl;
	archivo << "Cedula: " << cedula << endl;
	archivo << "Pasaporte: " << pasaporte << endl;
	archivo << "Correo: " << correo << endl;
	archivo << "Sexo: " << sexo << endl;
	archivo << "Destino: " << lugar << endl;
	archivo << "Fecha de salida: " << fecha_de_salida << endl;
	archivo << "Fecha de entrada: " << fecha_de_entrada << endl;
	archivo << "Acompañado: " << compallero << endl;
	archivo << "Equipaje adiiconal: " << equipaje << endl;
	archivo << "Costo: " << total <<"$ " << endl;

	cout <<" su reserva se ha registrado correctamente  " << endl;

	}


	
	
			






// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
