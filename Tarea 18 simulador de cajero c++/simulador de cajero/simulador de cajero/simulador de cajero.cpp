// simulador de cajero.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <iostream>
#include <fstream>
#include <string.h>
#include <conio.h>
using namespace std;




int main()
{
    float  deposito_general = 100000;

    string clave = "2005" , adios;

    float seleccion_de_opcion ,entrada = 0, salida = 0, resultadoxd =0;

    cout << "\n";
    cout << "\n";
    cout << "\n";
    cout << "\n";
    cout << "introducir clave: ";
    cin >> clave;
    
    
    
        if (clave != "2005")
        {
            system("cls");


            cout << "reintente de nuevo ";

            return main();
            system("cls");

        }
        system("cls");

   
    cout << "****************************\n";
    cout << "*   Angel Steven #16       *\n";
    cout << "****************************\n";

    cout << "\n";

    cout << "*   Bienvenido a su banco popuxd  *\n";

    cout << "\n";

    cout << "               ****************************\n";
    cout << "               *  popuxd banco company xd *\n";
    cout << "               ****************************\n";


    cout << "****************************\n";
    cout << "*   Opciones de tu cajero  *\n";
    cout << "*                          *\n";
    cout << "*  1) introducir dinero    *\n";
    cout << "*                          *\n";
    cout << "*  2) Retirar dinero       *\n";
    cout << "*                          *\n";
    cout << "*  3) ver Saldo            *\n";
    cout << "*                          *\n";
    cout << "*  4) Salir                *\n";
    cout << "****************************\n";

    cout << "Digite el numero de la opcion que desea hacer: ";

    cin >> seleccion_de_opcion;

    if (seleccion_de_opcion == 1)
    {
        cout << "Diga cantidad a depositar: "; 
        cin >> entrada;

        deposito_general  += entrada;

        cout << "Cantidad actual en tu cuenta bancaria: " << deposito_general;

    }
    else  if (seleccion_de_opcion == 2)
    {
        cout << "Diga cantidad a retirar: ";
        cin >> salida;

        if (salida > 100000)
        {
            cout << "La cantidad que esta solicitando es mayor a la que usted tiene acuerdese que ni telaraña tiene en su cartera \n";
            cout << " \n";
            cout << "intentelo de nuevo y diga cantidad a retirar:   "; 
            cin >> salida;

        }

       

        resultadoxd = deposito_general -= salida;


        cout << "Cantidad actual " << resultadoxd;


    }
    else  if (seleccion_de_opcion == 3)
    {
        cout << "Cantidad actual: " << deposito_general;


        
    }
    else  if (seleccion_de_opcion == 4)
    {
        cout << "Gracias por preferirnos ";
    }
    else
    {
        cout << " \n";
        cout << "Esta opcion no exite, digite la clave de nuevo para confirmar que es el usuario de esta cuenta y luego seleccione la opcion que desea hacer con su cuenta";
        cout << " \n";

        return main();
        cout << "\n";
        cout << "\n";
    }

    ofstream recibo_banco;
    recibo_banco.open("recibo_del_cajero.txt");

    recibo_banco << "               ****************************\n";
    recibo_banco << "               *  popuxd banco company xd *\n";
    recibo_banco << "               ****************************\n";

    recibo_banco << "Monto:    ................. " << deposito_general << "$" << endl;
    recibo_banco << "Ingreso:  ................. " << entrada << "$" << endl;
    recibo_banco << "Retiro :  ................. " << salida << "$" << endl;
    recibo_banco << "Tu total: ................. " << resultadoxd << "$" << endl;

    recibo_banco.close();

    
    cout << "\n";

    cout << " Confirmacion de si Desea salir S/N: ";
    cin >> adios;

    if (adios == "s")
    {
        exit(1);
    }
    else if (adios == "n")
    {
        system("cls");
        return main();
    }
    else
    {
        cout << " No existe esa opcion reintenta ";
        cout << " desea salir S/N: ";
        cin >> adios;
    }


    cin.get();
    
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
