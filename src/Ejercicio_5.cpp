#include <iostream>
using namespace std;

int main() {

    // Variable para solicitar el tamaño de nuestro Vector
    int tamañoVector;

    // Solicitamos un número entero para el tamaño de nuestros vectores
    // Si pongo ñ en la consola sale un simbolo raro
    cout << "Introduce el tamano para los vectores: ";
    cin >> tamañoVector;

    // Le asignamos el tamaño a nuestros vectores
    int vector_1[tamañoVector];
    int vector_2[tamañoVector];

    // Ciclo for para rellenar los vectores
    for (int i = 0; i < tamañoVector; i++) {
       vector_1[i] = 5 * (i + 5);
        vector_2[i] = 100 - i * 4;
    }

    // Ciclo for para imprimir los valores del vector.
    cout << "Vector 1: ";
    for (int i = 0; i < tamañoVector; i++) {
        cout << vector_1[i] << " ";
    }

    cout << "\nVector 2: ";
    for (int i = 0; i < tamañoVector; i++) {
        cout << vector_2[i] << " ";
    }

    return 0;
}