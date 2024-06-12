#include "Bitacora.h"

void Bitacora::ingresoDatosBitacora(string nombreUsuario, string numeAccion, string accionRealizada)
{
    system("cls");
	fstream file;
	file.open("Bitacora.txt", ios::app | ios::out);
    time_t now = time(0);
    fechaHoraAccion = ctime(&now);
	file <<std::left<<std::setw(15)<< nombreUsuario <<std::left<<std::setw(15)<< numeAccion <<std::left<<std::setw(15)<< accionRealizada <<std::left<<std::setw(15)<< fechaHoraAccion << "\n";
	file.close();
}


void Bitacora::imprimirDatosBitacora(){
    system("cls");
    fstream file;
    string texto;
	int total=0;
	cout<<"\n------------------------- Imprimir Informe de Bitacora -------------------------"<<endl;
	file.open("Bitacora.txt",ios::in);
    while(!file.eof())
    {
        total++;
        getline(file,texto);
        cout<<texto<<endl;
    }
    if(total==0)
    {
        cout<<"\n\t\t\tNo hay informacion...";
    }
    file.close();
	getch();
	system("pause");
}
