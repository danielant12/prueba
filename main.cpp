#include <iostream>
#include <cstdlib>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>
#include "UsuariosPlanilla.h"


using namespace std;

int main()
{
    UsuarioPlanilla IngresoUsuario;
    int numero;
    do
    {
    system("cls");
    cout<<"\t\t\t------------------------------------------"<<endl;
	cout<<"\t\t\t|        ¡ Bienvenido al Sistema !       |"<<endl;
	cout<<"\t\t\t------------------------------------------"<<endl;
	cout<<"\n\t\t\t 1. Iniciar sesion "<<endl;

	cout<<"\t\t\t 2. Salir del Sistema"<<endl;

    cout << "\n\t\t\t---------------------------------------";
    cout << "\n\t\t\t| Opciones a escoger: [1] - [2]        |";
    cout << "\n\t\t\t---------------------------------------";

	cout<< " "<<endl;
	cout<<"\n\n\t\t\tingrese una opcion: ";
	cin>>numero;

	 switch(numero)
        {
            case 1:
                IngresoUsuario.iniciarSesion();
                break;

            case 2:
                return 0;
                break;

                 default:
                cout<<"\t\t\tIngrese opcion valida"<<endl;
                cin.get();
        }
    } while(numero!= 3);

    return 0;
}
