#include "UsuariosPlanilla.h"
using namespace std;

string nombreUsuario, contra;
Menus llamarMenu;
void UsuarioPlanilla::iniciarSesion()
{
    system("cls");
	fstream file, file1;
	int found=0;
	file.open("Usuario.txt",ios::in);
    cout<<"\t\t--------------------------"<<endl;
    cout<<"\t\tAUTENTICACION DE USUARIOS "<<endl;
    cout<<"\t\t--------------------------\n"<<endl;
    cout<<"\t\tUsuario: ";
    cin>>nombreUsuario;
    cout << "\t\tContrasena: ";
    char caracter;
        caracter= getch();
        contra="";
        while (caracter !=13)
        {
            if(caracter !=8)
            {
                contra.push_back(caracter);
                cout<<"*";
            } else
            {
                if (contra.length() > 0)
                {
                    cout<<"\b \b";
                    contra = contra.substr(0, contra.length()-1);
                }
            }
            caracter = getch();
        }
    file >> nombre >> contrasena;
    while(!file.eof())
    {
        if(nombreUsuario == nombre && contra == contrasena)
        {
          //  enviarDatosU.ingresoDatosBitacora(nombreUsuario,"7000","LOGIN");
            llamarMenu.menuInicial(nombreUsuario);
            return;
            found++;

        }
        file >> nombre >> contrasena;

    }
    if(found==0)
    {
      // enviarDatosU.ingresoDatosBitacora(nombreUsuario,"7010", "NLOG");
        cout<<"\n\t\t\t El usuario o contraseña son incorrectos..." << endl;
        system("pause");
    }
    file.close();
}

void UsuarioPlanilla::registroUsuario()
{

	system("cls");
	fstream file;
	cout<<"\n------------------------------------------------------------------------------------------------------------------------";
	cout<<"\n-------------------------------------------------- Ingresar Nuevo Usuario -----------------------------------------------"<<endl;
	cout<<"\n\t\t\tIngresa el nombre de Usuario: ";
	cin>>nombre;
	cout<<"\t\t\tIngresa la contraseña: ";
	cin>>contrasena;
	file.open("Usuario.txt", ios::app | ios::out);
	file<<std::left<<std::setw(15)<< nombre <<std::left<<std::setw(15)<< contrasena<< "\n";
	file.close();
}
