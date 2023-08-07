// seleccion.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    
    float n1, n2 ,calcular;

    int opcion;

    
    

    cout << "*   calculadora c++  *\n";


    cout << "**************************\n";
    cout << "*   Angel Steven #16     *\n";
    cout << "**************************\n";
    
    cout << "insertar el primer numero:  "; cin >> n1;
    cout << " \n";
    cout << "insertar el segundo numero:  "; cin >> n2;

    cout << "*   Selecciona como quieres operar  *\n";

    cout << " \n";

    cout << "**********************************\n";
    cout << "   1) sumar            "<<endl;
    cout << "   2) restar           " << endl;
    cout << "   3) multiplicar      " << endl;
    cout << "   4) dividir          " << endl;
    cout << "**********************************\n";

    cout << " \n";

    cout << "opcion: ";

  

    cin >> opcion;


    const float sumar = n1 + n2;
    const float restar = n1 - n2;
    const float multiplicacion = n1 * n2;
    const float divicion = n1 / n2;


    switch (opcion)
    {
        
    case 1: calcular = sumar;
        break;
    case 2: calcular = restar;
        break;
    case 3: calcular = multiplicacion;
        break;
    case 4: calcular = divicion;
        break;
    default : cout << " no existe esa opcion " << endl;
        break;
        
    }

    cout << "la respuesta es:  "<< calcular << endl;

    system ("pause");

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
