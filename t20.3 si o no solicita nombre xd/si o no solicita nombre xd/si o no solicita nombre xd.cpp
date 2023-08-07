// si o no solicita nombre xd.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string.h>
#include <fstream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

int main()
{
    cout << "Angel Steven #16\n";
    
    cout << " \n";


    string nombre;
    string nombre2;
    string Apellido;
    string Apellido2;
    string salir;

    do {
        

        cout << "*Introduce tu nombre :  ";

        cin >> nombre;

        cin >> nombre2;

        cout << " \n";

        cout << "*Introduce tu apellido* :   ";

        cin >> Apellido;

        cin >> Apellido2;


        cout << "Hola " << " " << nombre << " " << nombre2 << " " << Apellido << " " << Apellido2 << endl;

        cout << "*desea salir s o n* :   ";

        cin >> salir;

        cout << " \n";
        cout << " \n";
        cout << " \n";
        cout << " \n";
        cout << " \n";

        ofstream block;

        block.open("blockxd.txt");

        block << "Hola " << " " << nombre << " " << nombre2 << " " << Apellido << " " << Apellido2 << endl;

        block.close();
        system("cls");


    } while (salir == "n");



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
