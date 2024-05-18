#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Cancion {
    string titulo;
    string artista;
};

int main() {
    vector<Cancion> LC;
    char opcion;

/*esto es solo un menu sencillo, luego lo cambiamos*/
    do {
        cout << "Ucabify ";
        cout << "Menu:\n";
        cout << "1. Insertar nueva cancion\n";
        cout << "2. Mostrar todas las canciones\n";
        cout << "3. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

/*NV es la nueva cancion, LC es lista de canciones*/
        switch(opcion) {
            case '1': {
                Cancion NV;
                cout << "Ingrese el titulo de la cancion: ";
                cin.ignore();
                getline(cin, NV.titulo);
                cout << "Ingrese el nombre del artista: ";
                getline(cin, NV.artista);
                LC.push_back(NV);
                cout << "Cancion insertada correctamente.\n";
                break;
            }
            case '2': {
                if (LC.empty()) {
                    cout << "No hay canciones para mostrar.\n";
                } else {
                    cout << "Lista de canciones:\n";
                    for (const auto& C : LC) {
                        cout << "Titulo: " << C.titulo << endl;
                        cout << "Artista: " << C.artista << endl;
                        cout << "------------------------\n";
                    }
                }
                break;
            }
            case '3':
                cout << "Saliendo del programa.\n";
                break;
            default:
                cout << "Opcion no valida. Intentelo de nuevo.\n";
        }
    } while (opcion != '3');

    return 0;
}
