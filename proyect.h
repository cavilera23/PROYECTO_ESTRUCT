#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>

using namespace std;

struct Canciones
{
    int identificador;
    string nombre_cancion;
    string artista;
    string genero;
    int anio;
    Canciones *siguiente;
};

struct Usuarios
{
    int identificador_usuario;
    string nombre_usuario;
    string correo;
    string contrasena;
    string fecha_nacimiento;
    string pais;
    Usuarios *siguiente;
};

struct Historial
{
    Usuarios canciones_reproducidas;
    struct Canciones *datos;
    int cantidad_reproducciones;
    bool me_gusta;
};

string separacion = "---------------------------\n";

/*void AgregarCancion(Canciones *&inicio)
{
    Canciones *nuevo = new Canciones;
    nuevo->identificador = rand(); // deberia de generar un identificador unico y random
    nuevo->nombre_cancion = nombre_cancion;
    nuevo->artista = artista;
    nuevo->genero = genero;
    nuevo->anio = anio;
    nuevo->siguiente = *inicio;
    *inicio = nuevo;
    nuevo = NULL;
    delete nuevo;
}*/

void ingresarDatosCancion(Canciones *&cancion)
{
    Canciones *nuevo;
    cout << "Ingrese el nombre de la canción: ";
    cin >> cancion->nombre_cancion;
    cout << "Ingrese el nombre del artista: ";
    cin >> cancion->artista;
    cout << "Ingrese el género de la canción: ";
    cin >> cancion->genero;
    cout << "Ingrese el año de la canción: ";
    cin >> cancion->anio;
    nuevo = cancion;
    nuevo->siguiente = NULL;
    cancion = nuevo;
}

void ingresarDatosUsuario(Usuarios *usuario)
{
    cout << "Ingrese el identificador del usuario: ";
    cin >> usuario->identificador_usuario;
    cout << "Ingrese el nombre del usuario: ";
    cin >> usuario->nombre_usuario;
    cout << "Ingrese el correo del usuario: ";
    cin >> usuario->correo;
    cout << "Ingrese la contraseña del usuario: ";
    cin >> usuario->contrasena;
    cout << "Ingrese la fecha de nacimiento del usuario: ";
    cin >> usuario->fecha_nacimiento;
    cout << "Ingrese el país del usuario: ";
    cin >> usuario->pais;
}
