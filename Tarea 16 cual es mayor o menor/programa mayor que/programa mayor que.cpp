// programa mayor que.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

#include <stdlib.h>
using namespace std;


int main()
{
  
    float num1, num2;

    cout << "*   Mayor que: c++  *\n";


    cout << "**************************\n";
    cout << "*   Angel Steven #16     *\n";
    cout << "**************************\n";

    cout << "insertar el primer numero:  "; cin >> num1;
    cout << " \n";
    cout << "insertar el segundo numero:  "; cin >> num2;
    cout << " \n";

    if (num1 > num2)
    {
        cout << " el numero  mayor es: " << num1 << endl;
    }
    else if (num2 > num1)
    {

        cout << " el numero  mayor es: " << num2 << endl;

    }
    else if (num2 = num1)
    {
        cout << " los numeros son iguales \n "<< endl;
    } 
   

  



}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
