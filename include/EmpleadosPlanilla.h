#ifndef EMPLEADOSPLANILLA_H
#define EMPLEADOSPLANILLA_H
#include <iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>
#include "Menus.h"
//#include "UsuarioPlanilla.h"

using namespace std;

class EmpleadosPlanilla
{
    public:
        string  menuEmpleadosPlanilla(string nombreUsuario);
        void insertarEmpleado(string nombreUsuario);
		void modificarEmpleado(string nombreUsuario);
		void buscarEmpleado(string nombreUsuario);
		void borrarEmpleado(string nombreUsuario);
		void imprimirEmpleados(string nombreUsuario);


    protected:

    private:
        string idEmpleado, nombreEmpleado, apellidoEmpleado, dpiEmpleado, direccionEmpleado, telefonoEmpleado;
};

#endif // EMPLEADOSPLANILLA_H
