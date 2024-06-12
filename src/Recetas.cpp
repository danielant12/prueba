#include "Recetas.h"

void Recetas::insertarRecetas(string nombreUsuario)
{
    //string userName = nombreUsuario;
   // enviarDatosP.ingresoDatosBitacora(userName,"7200","ING");
    //string accion = "7001";
	fstream file;
	cout<<"\n------------------------------------------------------------------------------------------------------------------------";
	cout<<"\n-------------------------------------------------Ingreso de Recetas -------------------------------------------"<<endl;
	cout<<"\t\t\tIngresa Id del Paciente          : ";
	cin>>idReceta;
	cout<<"\t\t\tIngresa Nombre del Paciente       : ";
	cin>>nombreReceta;
	cout<<"\t\t\tIngresa Medicina Recetada        : ";
	cin>>medicinaReceta;
	file.open("Receta.txt", ios::app | ios::out);
	file <<std::left<<std::setw(15)<< idReceta <<std::left<<std::setw(15)<< nombreReceta<< "\n";
	file.close();
}
