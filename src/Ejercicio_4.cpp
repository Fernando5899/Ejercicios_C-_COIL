// Ejercicio 4: Encontrar el elemento mayor
/* En una competencia internacional participan N ciclistas a los que
 * se les registra la distancia en metros. Se solicita escribir un programa
 * en C++ y Java que llene un vector con números aleatorios entre 0 y 2500.
 * Encontrar la distancia más larga recorrida por los ciclistas.
 *
 * Entrada de Ejemplo: N = 8, Vector [1510, 24, 878, 1351, 2024, 2145, 154, 542]
 *
 * Salida Esperada: Distancia más larga 2145.
 *
 * Pista: Usar una variable auxiliar para el mayor.
 */

#include <iostream>

using namespace std;

int main() {

    int numeroCiclistas;
    int mayorDistancia = 0;
    int ciclistaGanador = 0;

    cout << "Ingrese el numero de ciclistas que participaran en la carrera:";
    cin >> numeroCiclistas;

    int distanciaCiclista[numeroCiclistas];

    // Ciclo for para generar números aleatorios e ingresarlos dentro del vector.
    // Solo se pueden meter numeros enteros dentro del vector :)
    for (int i = 0; i < numeroCiclistas; i++) {
        distanciaCiclista[i] = rand() % 2501;
    }

    // Ciclo for para imprimir los valores del vector.
    for (int i = 0; i < numeroCiclistas; i++) {
        cout << "Distancia del ciclista " << (i+1) << " : " << distanciaCiclista[i] << endl;
    }

    // Ciclo for para encontrar el mayor valor del vector.
    for (int i = 0; i < numeroCiclistas; i++) {
        if (distanciaCiclista[i] > mayorDistancia) {
            mayorDistancia = distanciaCiclista[i];
            ciclistaGanador = i;
        }
    }

    cout << "\nLa distancia mas larga recorrida es: " << mayorDistancia << " Km."<< endl;
    cout << "Y le pertenece al ciclista: " << (ciclistaGanador + 1) << endl;

    return 0;
}