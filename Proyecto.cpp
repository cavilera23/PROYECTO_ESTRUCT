#include <iostream>
#include <stdlib.h>
#include <fstream>
#include "proyect.h"

using namespace std;

void AgregarUser_Song()
{
    int opcion;
    cout << "1. Agregar Usuario\n";
    cout << "2. Agregar Cancion\n";
    cout << separacion;
    cout << "0. Salir\n";
    cout << separacion;
    cout << "Ingrese una opcion: ";
    cin >> opcion;
    system("cls");
    switch (opcion)
    {
    case 1:
        cout << "Agregando Usuario...\n";
        break;
    case 2:
        Canciones *cancion = new Canciones;
        cancion = NULL;
        ingresarDatosCancion(cancion);
        cout << "\nAgregando Cancion...\n";
        system("cls");
        break;
    case 0:
        cout << "Saliendo...\n";
        break;
    default:
        cout << "Opcion no valida. Intente de nuevo.\n";
    }
}

void EliminarUser_Song()
{
    int opcion;
    cout << "1. Eliminar Usuario\n";
    cout << "2. Eliminar Cancion\n";
    cout << separacion;
    cout << "0. Salir\n";
    cout << separacion;
    cout << "Ingrese una opcion: ";
    cin >> opcion;
    system("cls");
    switch (opcion)
    {
    case 1:
        cout << "Eliminando Usuario...\n";
        break;
    case 2:
        cout << "Eliminando Cancion...\n";
        break;
    case 0:
        cout << "Saliendo...\n";
        break;
    default:
        cout << "Opcion no valida. Intente de nuevo.\n";
    }
}

void BorrarHistorial()
{
    cout << "Eliminando Cancion del Historial...\n";
}

void menu()
{
    int opcion;
    do
    {
        cout << "1. Agregar Usuario o Cancion\n";
        cout << "2. Eliminar Usuario o Cancion\n";
        cout << "3. Eliminar Cancion del Historial\n";
        cout << separacion;
        cout << "0. Salir\n";
        cout << separacion;
        cout << "Ingrese una opcion: ";
        cin >> opcion;
        system("cls");
        switch (opcion)
        {
        case 1:
            AgregarUser_Song();
            break;
        case 0:
            cout << "Saliendo...\n";
            break;
        default:
            cout << "Opcion no valida. Intente de nuevo.\n";
        }
    } while (opcion != 0);
    system("cls");
}

int main()
{
    cout << separacion << "BIENVENIDO A UCABIFY\n";
    cout << separacion;
    menu();
    return 0;
}