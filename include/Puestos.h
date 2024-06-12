#ifndef PUESTOS_H
#define PUESTOS_H
#include <iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>
#include "Menus.h"

using namespace std;

class Puestos
{
    public:
        string menuPuestos(string nombreUsuario);
        void insertarPuestos(string nombreUsuario);
		void modificarPuestos(string nombreUsuario);
		void buscarPuestos(string nombreUsuario);
		void borrarPuestos(string nombreUsuario);
		void imprimirPuestos(string nombreUsuario);


    protected:

    private:
        string idPuesto, nombrePuesto, encargadoPuesto, tituloPuesto, salarioPuesto;
};

#endif // PUESTOS_H
