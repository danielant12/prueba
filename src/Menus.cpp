#include "Menus.h"
#include "Recetas.h"
#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>
#include <ctime>

//UsuarioPlanilla traerMenu;
EmpleadosPlanilla enviarMenuE;
//Menus Recetas;
Puestos enviarMenuP;
//Departamento enviarMenuD;
Bitacora imprimirBitacora;

string Menus::menuInicial(string nombreUsuario)
{
    string userName = nombreUsuario;
   // system("cls");
    int optEscoger = 0;
    bool repetir = true;
    do
    {
    system("cls");
    cout << "\t\t\t Daniel Antonio Chacon Morataya" << endl;
    cout << "\t\t\t 9959-22-1827" << endl;
	cout << "\t\t\t-------------------------------------------------\n";
    cout << "\t\t\t|                  !Hola " << userName << "!                  |" <<endl;
    cout << "\t\t\t-------------------------------------------------\n";
    cout << "\n\t\t\t---------------------------------------------\n";
    cout << "\t\t\t| Bienvenido al Sistema de Habitaciones del hotel|";
    cout << "\n\t\t\t-----------------------------------------------"<<endl;

    cout << "\n\t\t\t1. Menu Catalogos"<<endl;
    cout << "\t\t\t2. Menu Procesos"<<endl;
    cout << "\t\t\t3. Menu Informes"<<endl;
    cout << "\t\t\t4. Salir del Sistema" << endl;
    cout << "\n\n\t\t\t---------------------------------------";
    cout << "\n\t\t\t| Opciones a escoger: [1] - [2] - [3] - [4]";
    cout << "\n\t\t\t---------------------------------------";

    cout << "\n\n\t\t\tIngrese la opcion que desea escoger: ";
    cin >> optEscoger;

    switch(optEscoger)
    {
    case 1:{
       system("cls");
       menuCatalogos(userName);
        break;
    }

    case 2:{
        system("cls");
        menuProcesos(userName);
    break;
    }
    case 3:{
        system("cls");
       // subMenuInformes(userName);
        break;
        }
    case 4:{
             exit(0);
        break;
    }
    default:
        cout << "Opcion invalida... Intente otra vez...";

    }
    }while(optEscoger!=4);
}

string Menus::menuCatalogos(string nombreUsuario)
{
    string userName = nombreUsuario;
    system("cls");
    int optEscoger;
    bool repetir = true;
    do
    {
            system("cls");
	cout << "\t\t\t-------------------------------------------------\n";
    cout << "\t\t\t|                  !Hola " << userName << "!                  |" <<endl;
    cout << "\t\t\t-------------------------------------------------\n";
    cout << "\n\t\t\t-----------------------------------\n";
    cout << "\t\t\t| Bienvenido al Menu de Catalogos |";
    cout << "\n\t\t\t---------------------------------"<<endl;

    cout << "\n\t\t\t1. Habitaciones"<<endl;
    cout << "\t\t\t2. TipoCamas"<<endl;
    cout << "\t\t\t3. Regresar" << endl;
    cout << "\n\n\t\t\t---------------------------------------";
    cout << "\n\t\t\t| Opciones a escoger: [1] - [2] - [3] ";
    cout << "\n\t\t\t---------------------------------------";

    cout << "\n\n\t\t\tIngrese la opcion que desea escoger: ";
    cin >> optEscoger;

    switch(optEscoger)
    {
    case 1:{
   enviarMenuE.menuEmpleadosPlanilla(userName);
       system("cls");

                break;
    }

    case 2:{
        system("cls");
        enviarMenuP.menuPuestos(userName);
    break;
    }

    case 3:
        system("cls");
       menuInicial(userName);
        break;
    default:
        cout << "Opcion invalida... Intente otra vez...";

    }
    }while(optEscoger!=3);
}


string Menus::menuProcesos(string nombreUsuario)
{
    string userName = nombreUsuario;
    system("cls");
    int optEscoger;
  bool repetir = true;
    do
    {
    cout << "\t\t\t-------------------------------------------------\n";
    cout << "\t\t\t|                  !Hola " << userName << "!                  |" <<endl;
    cout << "\t\t\t-------------------------------------------------\n";
    cout << "\n\t\t\t-----------------------------------\n";
    cout << "\t\t\t| Bienvenido al Menu de Procesos |";
    cout << "\n\t\t\t---------------------------------"<<endl;
    cout << "\t\t\t1. Habitaciones Disponibles"<<endl;
    cout << "\t\t\t2. Bitacora"<<endl;
    cout << "\t\t\t3. Regresar al menu anterior" << endl;
    cout << "\n\n\t\t\t---------------------------------------";
    cout << "\n\t\t\t| Opciones a escoger: [1] - [2] ";
    cout << "\n\t\t\t---------------------------------------";

    cout << "\n\n\t\t\tIngrese la opcion que desea escoger: ";
    cin >> optEscoger;

    switch(optEscoger)
    {

    case 1:{
       system("cls");
      // HABITACIONES Menus;
//       Menu.insertarHABITACION();
       system("pause");
                break;
    }
    case 2:{
       system("cls");
       imprimirBitacora.imprimirDatosBitacora();
    break;
    }

    case 3:{
        system("cls");
        menuInicial(userName);
        system("pause");
        break;
    }
    default:
        cout << "Opcion invalida... Intente otra vez...";

    }
    }while(repetir);
}
