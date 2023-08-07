#include <iostream>
#include <fstream>
#include <string.h>
#include <conio.h>

using namespace std;

int person = 0;

int main()
{


    cout << "                    ****************************\n";
    cout << "                    *    Angel Steven #16      *\n";
    cout << "                    ****************************\n";

    cout << "\n";

    cout << "       *   Bienvenido a su agencia de  viajes en crucero *\n";

    cout << "\n";

    cout << "                       ****************************\n";
    cout << "                       *   Scarface viajes xd     *\n";
    cout << "                       ****************************\n";


    string nombre{40}, apellido, correo, pasaporte, lugar, Cedula, sexo, compa, Fecha_entrada, Fecha_salida, equipaje, adios;

    int destino = 0, Seleccion_genero = 0, equipaje1 = 0, compaxd2 = 0;

    int resultadott = 0;




    cout << " inserta nombre: ";
    cin >> nombre;
    cout << "" << endl;


    cout << " inserta apellido: ";
    cin >> apellido;
    cout << "" << endl;

    cout << " correo: ";
    cin >> correo;
    cout << "" << endl;


    cout << " Pasaporte: ";
    cin >> pasaporte;
    cout << "" << endl;


    cout << " cedula: ";
    cin >> Cedula;
    cout << "" << endl;


    cout << "************************" << endl;
    cout << "*  Selecione su genero * " << endl;
    cout << "*                      *" << endl;
    cout << "*     1. Hombre        *" << endl;
    cout << "*     2. Mujer         *" << endl;
    cout << "************************" << endl;
    cout << " ingrese el numero del genero: "; cin >> Seleccion_genero;


    switch (Seleccion_genero)
    {
    case 1: sexo = "Hombre";
        break;
    case 2: sexo = "Mujer";
        break;

    }

    if (Seleccion_genero > 2)
    {
        cout << "" << endl;

        system("cls");
        cout << "" << endl;
        cout << "*************************************************************" << endl;
        cout << "* ha ocurrido un error con su solicitud, reintente de nuevo *" << endl;
        cout << "*************************************************************" << endl;
        cout << "" << endl;
        cout << "" << endl;

       

        return main();
        
    }

    cout << " \n";

    cout << "***************************************" << endl;
    cout << "*          Eliga como destino         *" << endl;
    cout << "*                                     *" << endl;
    cout << "*     1. Hawai.............300$       *" << endl;
    cout << "*     2. Cancu.............200$       *" << endl;
    cout << "*     3. isla Margarita....500$       *" << endl;
    cout << "***************************************" << endl;

    cout << " \n";

    cout << "Ingrese el numero del destino:  ";
    cin >> destino;

    switch (destino) {


    case 1:  lugar = "Hawai";

        resultadott += 300;

        break;
    case 2:  lugar = "Cancun";

        resultadott += 200;

        break;

    case 3:  lugar = "Islas Margaritas";

        resultadott += 500;

        break;

    }
    if (destino > 3)
    {
        
        cout << "" << endl;

        system("cls");
        cout << "" << endl;
        cout << "*************************************************************" << endl;
        cout << "* ha ocurrido un error con su solicitud, reintente de nuevo *" << endl;
        cout << "*************************************************************" << endl;
        cout << "" << endl;
        cout << "" << endl;



        return main();


    }
    cout << " \n";

    cout << " fecha de salida: ";
    cin >> Fecha_salida;
    cout << "" << endl;

    cout << " fecha de entrada: ";
    cin >> Fecha_entrada;
    cout << "" << endl;


    cout << "***************************************" << endl;
    cout << "*     Lleva equipaje adicional?       *" << endl;
    cout << "*                                     *" << endl;
    cout << "*  esto tendra cargo adicional de 50$ *" << endl;
    cout << "*                                     *" << endl;
    cout << "*             1. si                   *" << endl;
    cout << "*             2. no                   *" << endl;
    cout << "***************************************" << endl;

    cout << " ingrese numero para seleccionar la opcion: ";

    cin >> equipaje1;
    cout << "" << endl;

    switch (equipaje1)
    {
    case 1: equipaje = "Si";
        resultadott += 50;

        break;
    }
    if (equipaje1 >= 3)
    {
       
        cout << "" << endl;

        system("cls");
        cout << "" << endl;
        cout << "*************************************************************" << endl;
        cout << "* ha ocurrido un error con su solicitud, reintente de nuevo *" << endl;
        cout << "*************************************************************" << endl;
        cout << "" << endl;
        cout << "" << endl;



        return main();


    }


    ofstream recibo;
    if (person == 0) {

        cout << "*************************************" << endl;
        cout << "*  Alguien mas estara con contigo?  *" << endl;
        cout << "*                                   *" << endl;
        cout << "*       cargo adicional             *" << endl;
        cout << "*                                   *" << endl;
        cout << "*             1. si                 *" << endl;
        cout << "*             2. no                 *" << endl;
        cout << "*************************************" << endl;
        recibo.open("recibo_del_boleto.txt");
        cout << " ingrese numero para seleccionar la opcion: ";
        cin >> compaxd2;


        cout << " \n";

        cout << " \n";

        cout << " \n";

        cout << " \n";

        cout << " \n";

        cout << " \n";

        cout << " \n";

        cout << " \n";

        cout << " \n";

        recibo << "Recibo de su viaje" << endl;

        recibo << "nombre:    " << nombre << endl;
        recibo << "Apellido:  " << apellido << endl;
        recibo << "correo:    " << correo << endl;
        recibo << "Pasaporte: " << pasaporte << endl;
        recibo << "Cedula:    " << Cedula << endl;
        recibo << "genero:    " << sexo<< endl;
        recibo << "Destino:   " << lugar << endl;
        recibo << "Fecha de salida: " << Fecha_salida << endl;
        recibo << "Fecha de entrada: " << Fecha_entrada << endl;
        recibo << "equipaje:  " << equipaje << endl;
        recibo << "lleva amigo: " << compa << endl;
        recibo << "Total: " <<  resultadott << "$" << endl;
        person++;

        recibo.close();
    }
    else if(person == 1) {
        recibo.open("recibo_del_boleto2.txt");

        recibo << "Recibo de su viaje" << endl;

        recibo << "nombre:    " << nombre << endl;
        recibo << "Apellido:  " << apellido << endl;
        recibo << "correo:    " << correo << endl;
        recibo << "Pasaporte: " << pasaporte << endl;
        recibo << "Cedula:    " << Cedula << endl;
        recibo << "Sexo:    " << sexo << endl;
        recibo << "Destino:   " << lugar << endl;
        recibo << "Fecha de salida: " << Fecha_salida << endl;
        recibo << "Fecha de entrada: " << Fecha_entrada << endl;
        recibo << "equipaje:  " << equipaje << endl;
        
        recibo.close();
    }
    
    switch (compaxd2)
    {
    case 1: compa = "si";

        // Limpiar todo
        return main();
        system("cls");
       

        break;
    case 2: compa = "No";

            break;

    }
    if (compaxd2 > 3)
    {
        cout << "a ocurrido un error con su solicitud, reintente de nuevo ";
        system("cls");
        return main();
    }


        cout << "" << endl;

        cout << "total del boleto: "; cout << resultadott << "$";

        //Recibo block de notas
   


        cout << " ya se registro su viaje, gracias por preferirnos  " << endl;


        cout << " Desea salir S/N: ";
        cin >> adios;

        if (adios == "s")
        {
            exit(1);
        }
        else if (adios ==  "n")
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
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
