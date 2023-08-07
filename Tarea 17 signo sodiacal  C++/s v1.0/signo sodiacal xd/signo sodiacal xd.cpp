// signo sodiacal xd.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <conio.h>


using namespace std;

int main()
{
    int dia, mes;

    cout << "**********************\n";
    cout << "*  Angal Steven #16  *\n";
    cout << "**********************\n";

    cout << "\n";

    cout << "Averiguemos tu signo sodiacal\n";


    cout << "\n";

    cout << "inserta dia : "; cin >> dia;

    cout << "\n";

    cout << "indica numero del mes de nacimiento : "; cin >> mes;


    cout << "\n";


    if (dia > 31|| mes >12)
    {
        cout << " Te pasaste Carnal";
    }
    else {
        switch (mes)
        {
        case 1:
            if (dia < 21) {

                cout << " usted es: Capricornio";

            }
            else
            {
                cout << " usted es: Acuario";
            }
            break;

        case 2:
            if (dia < 19) {

                cout << " usted es: Acuario";

            }
            else
            {
                cout << " usted es: Picis";
            }
            break;

        case 3:
            if (dia < 21) {

                cout << " usted es: Picis";

            }
            else
            {
                cout << " usted es: Aries";
            }
            break;

        case 4:
            if (dia < 21) {

                cout << " usted es: Aries";

            }
            else
            {
                cout << " usted es: Tauro";
            }
            break;

        case 5:
            if (dia < 21) {

                cout << " usted es: Tauro";

            }
            else
            {
                cout << " usted es: Geminis";
            }
            break;

        case 6:
            if (dia < 21) {

                cout << " usted es: Geminis";

            }
            else
            {
                cout << " usted es: Cancer";
            }
            break;

        case 7:
            if (dia < 23) {

                cout << " usted es: Cancer";

            }
            else
            {
                cout << " usted es: Leo";
            }
            break;

        case 8:
            if (dia < 21) {

                cout << " usted es: Leo";

            }
            else
            {
                cout << " usted es: Virgo";
            }
            break;

        case 9:
            if (dia < 21) {

                cout << " usted es: Virgo";

            }
            else
            {
                cout << " usted es: Libra";
            }
            break;


        case 10:
            if (dia < 21) {

                cout << " usted es: Libra";

            }
            else
            {
                cout << " usted es: Escorpio";
            }
            break;


        case 11:
            if (dia < 23) {

                cout << " usted es: Escorpio";

            }
            else
            {
                cout << " usted es: Sagitario";
            }
            break;

        case 12:
            if (dia < 22) {

                cout << " usted es: Sagitario";

            }
            else
            {
                cout << " usted es: Capricornio";
            }
            break;

        }
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
