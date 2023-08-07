// maximo de 3.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;


int main()
{
	float cantidad_maxima[100];
	int numero_de_cantidad_solicitada = 0;
	float mayor = 0;

	cout << " ************************* \n";
	cout << " *    Angel Steven #16   * \n";
	cout << " ************************* \n";

	cout << "diga la Cantidad de numeros que desea ingresar para sacar el mayor: ";
	cin >> numero_de_cantidad_solicitada;

	cout << " \n";
	for (int i = 0; i < numero_de_cantidad_solicitada; i++) {
		cout << "Diga el numero " << i + 1 << ": ";

		cin >> cantidad_maxima[i];


		if (cantidad_maxima[i] > mayor) {
			mayor = cantidad_maxima[i];
		}
	}

	cout << " \n";
	cout << "el mayor de todos es: " << mayor << "\n";
	return 0;

}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
