// Ejercicio 5: Sucesiones de Vectores

/*
 * Se solicita escribir un programa en c++ y Java que llene dos vectores de N
 * posiciones con las siguientes sucesiones. Vector 1:
 * Entrada de Ejemplo: N = 7, Vector1[5, 10, 20, 25, 30, 35]
 *                            Vector2[100, 85, 70, 55, 40, 25, 10]
 * Salida esperada: Vector1: 5 10 15 20 25 30 35 y Vector2: 100 85 70 55 40 20 10
 * Pista: Usa variables de fórmula creativa o fórmulas matemáticas.
 */

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