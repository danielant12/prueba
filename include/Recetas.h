#ifndef RECETAS_H
#define RECETAS_H
#include <iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>
#include "Menus.h"

using namespace std;

class Recetas
{
   void insertarRecetas(string nombreUsuario);

    private:
       string idReceta, nombreReceta, medicinaReceta;
};

#endif // RECETAS_H
