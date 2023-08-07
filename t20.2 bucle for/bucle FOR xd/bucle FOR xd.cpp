// bucle FOR xd.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string.h>
#include <fstream>
#include <stdlib.h>
#include <conio.h>
using namespace std;


int main()
{

        for (bool i = false; i == false; i) {
            string nombre;
            string Apellido;
            cout << " \n";
            cout << " \n";
            cout << "****************************\n";
            cout << "*   Angel Steven #16       *\n";
            cout << "****************************\n";
            cout << " \n";
            cout << " \n";
            char n;


            cout << "*Introduce tu nombre :  ";

            cin >> nombre;



            cout << " \n";

            cout << "*Introduce tu apellido* :   ";

            cin >> Apellido;

            cout << " \n";

            cout << "Hola " << " " << nombre << " " << Apellido << " " << endl;

            cout << "Desea seguir ejecutando el programa>> s/n: "; cin >> n;
            if (n == 's') {
                system("cls");
            }
            else if (n == 'n') {
                break;
              

            }
            else {
                break;
            }


            ofstream block;

            block.open("blockxd.txt");

            block << "hola " << nombre << " " << Apellido << " " << endl;

            block.close();
            system("cls");
        }
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
