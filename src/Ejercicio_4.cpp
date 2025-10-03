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