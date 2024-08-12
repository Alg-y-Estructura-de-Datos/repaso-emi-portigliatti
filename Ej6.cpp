#include <iostream>
#include <vector>
#include <string>
using namespace std;

void agregarContacto(vector<string>& contactos, const string& nombre, const string& numero, int& contador) {
    contactos[contador] = nombre + ": " + numero;
    contador++;
}

void mostrarContactos(const vector<string>& contactos, int contador) {
    if (contador == 0) {
        cout << "La lista de contactos esta vacia." << endl;
    } else {
        cout << "Lista de contactos:" << endl;
        for (int i = 0; i < contador; i++) {
            cout << contactos[i] << endl;
        }
    }
}

int main() {
    int maxContactos = 100; 
    vector<string> contactos(maxContactos); 
    int contador = 0; 
    int opcion;

    do {
        cout << "Menu:"<<endl;
        cout << "1. Agregar contacto"<<endl;
        cout << "2. Mostrar contactos"<<endl;
        cout << "3. Salir"<<endl;
        cout << "Elige una opcion: "<<endl;
        cin >> opcion;

        if (opcion == 1) {
            if (contador < maxContactos) {
                string nombre, numero;
                cout << "Introduce el nombre: ";
                cin.ignore();
                getline(cin, nombre);
                cout << "Introduce el numero de telefono: ";
                getline(cin, numero);
                agregarContacto(contactos, nombre, numero, contador);
            } else {
                cout << "La lista de contactos esta llena." << endl;
            }
        } else if (opcion == 2) {
            mostrarContactos(contactos, contador);
        }
    } while (opcion != 3);

}
