// proyect.h

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

void ingresarDatosCancion(Canciones *&cancion)
{
    Canciones *nuevo;
    cancion->identificador = (rand() % 1000000) + 100001;
    cout << "Cancion: " << cancion->identificador << "\n"; // "Cancion: 123\n
    fflush(stdin);
    cout << "Ingrese el nombre de la cancion: ";
    cin >> cancion->nombre_cancion;
    cout << "Ingrese el nombre del artista: ";
    cin >> cancion->artista;
    cout << "Ingrese el genero de la cancion: ";
    cin >> cancion->genero;
    cout << "Ingrese el anio de la cancion: ";
    cin >> cancion->anio;
    nuevo = cancion;
    nuevo->siguiente = NULL;
    cancion = nuevo;

    ofstream archivoCanciones;
    archivoCanciones.open("canciones.txt", ios::app);
    archivoCanciones << cancion->identificador << "\n";
    archivoCanciones << cancion->nombre_cancion << "\n";
    archivoCanciones << cancion->artista << "\n";
    archivoCanciones << cancion->genero << "\n";
    archivoCanciones << cancion->anio << "\n";
    archivoCanciones.close();
}

void ingresarDatosUsuario(Usuarios *usuario)
{
    Usuarios *nuevo;
    usuario->identificador_usuario = rand() % 1000 + 1;
    cout << "Usuario: " << usuario->identificador_usuario << "\n"; // "Usuario: 123\n
    fflush(stdin);
    cout << "Ingrese el nombre del usuario: ";
    cin >> usuario->nombre_usuario;
    cout << "Ingrese el correo del usuario: ";
    cin >> usuario->correo;
    cout << "Ingrese la contrasenia del usuario: ";
    cin >> usuario->contrasena;
    cout << "Ingrese la fecha de nacimiento del usuario (dd/mm/aaaa): ";
    cin >> usuario->fecha_nacimiento;
    cout << "Ingrese el pais del usuario: ";
    cin >> usuario->pais;
    nuevo = usuario;
    nuevo->siguiente = NULL;
    usuario = nuevo;

    ofstream archivoUsuarios;
    archivoUsuarios.open("usuarios.txt", ios::app);
    archivoUsuarios << usuario->identificador_usuario << "\n";
    archivoUsuarios << usuario->nombre_usuario << "\n";
    archivoUsuarios << usuario->correo << "\n";
    archivoUsuarios << usuario->contrasena << "\n";
    archivoUsuarios << usuario->fecha_nacimiento << "\n";
    archivoUsuarios << usuario->pais << "\n";
    archivoUsuarios.close();
}