#include "EmpleadosPlanilla.h"

//Bitacora enviarDatosE;
Menus regresarMenuE;
string EmpleadosPlanilla::menuEmpleadosPlanilla(string nombreUsuario)
{
    string userName = nombreUsuario;
    system("cls");
    EmpleadosPlanilla menu;
    int choice;
    bool repetir = true;
    char x;
	do
    {
	system("cls");

	cout << "\t\t\t-------------------------------------------------\n";
    cout << "\t\t\t|                  !Hola " << userName << "!                  |" <<endl;
    cout << "\t\t\t-------------------------------------------------\n";
    cout << "\n\t\t\t-----------------------------------\n";
	cout<<"\t\t\t |   Bienvenido al Menu de Clientes/Pacientes  |"<<endl;
	cout<<"\t\t\t---------------------------------------"<<endl;
	cout<<"\t\t\t 1. Ingresar Datos de Pacientes "<<endl;
	cout<<"\t\t\t 2. Buscar Pacientes"<<endl;
	cout<<"\t\t\t 3. Modificar Datos de Pacientes"<<endl;
	cout<<"\t\t\t 4. Eliminar Pacientes"<<endl;
	cout<<"\t\t\t 5. Imprimir Datos de Pacientes"<<endl;
	cout<<"\t\t\t 6. Regresar al menu anterior"<<endl;

	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:[1/2/3/4/5/6]"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"Ingresa tu Opcion: ";
    cin>>choice;

    switch(choice)
    {
    case 1:
        system("cls");
        do
    	{
  		menu.insertarEmpleado(userName);
    		cout<<"\n\t\t\t Agregar Otro Paciente (Y,N): ";
    		cin>>x;
		}while(x=='y'||x=='Y');

		break;
	case 2:
	    system("cls");
		menu.buscarEmpleado(userName);

		break;
	case 3:
	    system("cls");
		menu.modificarEmpleado(userName);

		break;
	case 4:
	    system("cls");
		menu.borrarEmpleado(userName);

		break;
    case 5:
		system("cls");
		menu.imprimirEmpleados(userName);

		break;
	case 6:
	    system("cls");
		regresarMenuE.menuCatalogos(userName);
		break;
	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
	}
	getch();
    }while(repetir);
}


void EmpleadosPlanilla::insertarEmpleado(string nombreUsuario)
{
    //string userName = nombreUsuario;
    //enviarDatosE.ingresoDatosBitacora(userName,"7100","ING");
	fstream file;
	cout<<"\n-------------------------------------------------Ingreso de Paciente -------------------------------------------"<<endl;
	cout<<"\t\t\tIngresa Id del Paciente           : ";
	cin>>idEmpleado;
	cout<<"\t\t\tIngresa Nombre del Paciente       : ";
	cin>>nombreEmpleado;
	cout<<"\t\t\tIngresa Apellido del Paciente     : ";
	cin>>apellidoEmpleado;
	cout<<"\t\t\tIngresa fecha de nacimiento          : ";
	cin>>dpiEmpleado;
	cout<<"\t\t\tIngresa genero   : ";
	cin>>direccionEmpleado;
	cout<<"\t\t\tIngresa direccion     : ";
	cin>>telefonoEmpleado;
	file.open("EmpleadoPlanilla.txt", ios::app | ios::out);
	file <<std::left<<std::setw(15)<< idEmpleado <<std::left<<std::setw(15)<< nombreEmpleado <<std::left<<std::setw(15)<< apellidoEmpleado <<std::left<<std::setw(15)<< dpiEmpleado <<std::left<<std::setw(15)<< direccionEmpleado <<std::left<<std::setw(15)<< telefonoEmpleado << "\n";
	file.close();

}

void EmpleadosPlanilla::buscarEmpleado(string nombreUsuario)
{
   // string userName = nombreUsuario;
   // enviarDatosE.ingresoDatosBitacora(userName,"7110","BUS");
    fstream file;
	int found=0;
	file.open("EmpleadoPlanilla.txt",ios::in);
	if(!file)
	{
		cout<<"\n-------------------------Datos del Empleado Buscado------------------------"<<endl;
		cout<<"\n\t\t\tNo hay informacion...";
	}
	else
	{
		string participant_id;
		cout<<"\n-------------------------Datos del Empleado Buscado------------------------"<<endl;
		cout<<"\nIngrese Id del Empleado que quiere buscar: ";
		cin>>participant_id;
		file >> idEmpleado >> nombreEmpleado >> apellidoEmpleado >> dpiEmpleado >> direccionEmpleado >> telefonoEmpleado;
		while(!file.eof())
		{
			if(participant_id==idEmpleado)
			{
				cout<<"\n\n\t\t\t Id Paciente        : "<<idEmpleado<<endl;
                cout<<"\n\n\t\t\t Nombre Paciente    : "<<nombreEmpleado<<endl;
                cout<<"\t\t\t Apellido Paciente      : "<<apellidoEmpleado<<endl;
                cout<<"\t\t\t fecha de nacimiento        : "<<dpiEmpleado<<endl;
                cout<<"\t\t\t Genero     : "<<direccionEmpleado<<endl;
                cout<<"\t\t\t direccion  Paciente      : "<<telefonoEmpleado<<endl;
				found++;
			}
			file >> idEmpleado >> nombreEmpleado >> apellidoEmpleado >> dpiEmpleado >> direccionEmpleado >> telefonoEmpleado;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t Paciente no encontrada...";
		}
		file.close();
	}

}

void EmpleadosPlanilla::modificarEmpleado(string nombreUsuario)
{
//string userName = nombreUsuario;
//enviarDatosE.ingresoDatosBitacora(userName,"7120","MOD");
    fstream file,file1;
	string participant_id;
	int found=0;
	cout<<"\n-------------------------Modificacion Paciente-------------------------"<<endl;
	file.open("EmpleadoPlanilla.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion..,";
		file.close();
	}
	else
	{
		cout<<"\n Ingrese Id del Paciente que quiere modificar: ";
		cin>>participant_id;
		file1.open("Record.txt",ios::app | ios::out);
		file >> idEmpleado >> nombreEmpleado >> apellidoEmpleado >> dpiEmpleado >> direccionEmpleado >> telefonoEmpleado;
		while(!file.eof())
		{
			if(participant_id!=idEmpleado)
			{
			 file1 <<std::left<<std::setw(15)<< idEmpleado <<std::left<<std::setw(15)<< nombreEmpleado <<std::left<<std::setw(15)<< apellidoEmpleado <<std::left<<std::setw(15)<< dpiEmpleado <<std::left<<std::setw(15)<< direccionEmpleado <<std::left<<std::setw(15)<< telefonoEmpleado << "\n";
			}
			else
			{
				cout<<"\t\t\tIngresa Id del Paciente           : ";
                cin>>idEmpleado;
                cout<<"\t\t\tIngresa Nombre del Paciente        : ";
                cin>>nombreEmpleado;
                cout<<"\t\t\tIngresa Apellido del Paciente      : ";
                cin>>apellidoEmpleado;
                cout<<"\t\t\tIngresa Fecha de Nacimiento           : ";
                cin>>dpiEmpleado;
                cout<<"\t\t\tIngresa Genero    : ";
                cin>>direccionEmpleado;
                cout<<"\t\t\tIngresa Direccion     : ";
                cin>>telefonoEmpleado;
				file1 <<std::left<<std::setw(15)<< idEmpleado <<std::left<<std::setw(15)<< nombreEmpleado <<std::left<<std::setw(15)<< apellidoEmpleado <<std::left<<std::setw(15)<< dpiEmpleado <<std::left<<std::setw(15)<< direccionEmpleado <<std::left<<std::setw(15)<< telefonoEmpleado << "\n";
				found++;
			}
			file >> idEmpleado >> nombreEmpleado >> apellidoEmpleado >> dpiEmpleado >> direccionEmpleado >> telefonoEmpleado;

		}
		file1.close();
		file.close();
		remove("EmpleadoPlanilla.txt");
		rename("Record.txt","EmpleadoPlanilla.txt");
	}

}

void EmpleadosPlanilla::borrarEmpleado(string nombreUsuario)
{
//string userName = nombreUsuario;
//enviarDatosE.ingresoDatosBitacora(userName,"7130","DEL");
    fstream file,file1;
	string participant_id;
	int found=0;
	cout<<"\n-------------------------Baja (Borrado) del Paciente-------------------------"<<endl;
	file.open("EmpleadoPlanilla.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion...";
		file.close();
	}
	else
	{
		cout<<"\n Ingrese el Id de la Persona que quiere borrar: ";
		cin>>participant_id;
		file1.open("Record.txt",ios::app | ios::out);
		file >> idEmpleado >> nombreEmpleado >> apellidoEmpleado >> dpiEmpleado >> direccionEmpleado >> telefonoEmpleado;
		while(!file.eof())
		{
			if(participant_id!= idEmpleado)
			{
				file1 <<std::left<<std::setw(15)<< idEmpleado <<std::left<<std::setw(15)<< nombreEmpleado <<std::left<<std::setw(15)<< apellidoEmpleado <<std::left<<std::setw(15)<< dpiEmpleado <<std::left<<std::setw(15)<< direccionEmpleado <<std::left<<std::setw(15)<< telefonoEmpleado << "\n";
			}
			else
			{
				found++;
				cout << "\n\t\t\tBorrado de informacion exitoso";
			}
			file >> idEmpleado >> nombreEmpleado >> apellidoEmpleado >> dpiEmpleado >> direccionEmpleado >> telefonoEmpleado;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t Id Persona no encontrado...";
		}
		file1.close();
		file.close();
		remove("EmpleadoPlanilla.txt");
		rename("Record.txt","EmpleadoPlanilla.txt");
	}

}

void EmpleadosPlanilla::imprimirEmpleados(string nombreUsuario)
{
//string userName = nombreUsuario;
//enviarDatosE.ingresoDatosBitacora(userName,"7140","IMP");

   fstream file;
	int total=0;
	cout<<"\n-------------------------Imprimir Informe de Pacientes -------------------------"<<endl;
	file.open("EmpleadoPlanilla.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay información...";
		file.close();
	}
	else
	{
		file >> idEmpleado >> nombreEmpleado >> apellidoEmpleado >> dpiEmpleado >> direccionEmpleado >> telefonoEmpleado;
		while(!file.eof())
		{
			total++;
			cout<<"\n\n\t\t\t Id Paciente           : "<<idEmpleado<<endl;
			cout<<"\t\t\t Nombre Paciente      : "<<nombreEmpleado<<endl;
			cout<<"\t\t\t Apellido Paciente    : "<<apellidoEmpleado<<endl;
			cout<<"\t\t\t Fecha de Nacimiento         : "<<dpiEmpleado<<endl;
			cout<<"\t\t\t Genero   : "<<direccionEmpleado<<endl;
			cout<<"\t\t\t Direccion    : "<<telefonoEmpleado<<endl;
        file >> idEmpleado >> nombreEmpleado >> apellidoEmpleado >> dpiEmpleado >> direccionEmpleado >> telefonoEmpleado;
		}
		if(total==0)
		{
			cout<<"\n\t\t\tNo hay informacion...";
		}
	}
	file.close();

}
