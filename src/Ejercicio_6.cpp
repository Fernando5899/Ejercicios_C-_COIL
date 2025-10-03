// Ejercicio 6: Encontrar un elemento menor y si posición

/*
 * Objetivo: practicar la lógica de comparación de elementos sin la necesidad de usar
 * funciones de ordenamiento, para hallar el valor mínimo junto con su posición.
 *
 * Enunciado:en los últimos días se han registrado temblores en M ciudades de México y
 * N ciudades de Colombia. Se solicita escribir un programa en C++ y Java que llene los
 * vectores con números aleatorios entre 0.1 y 9.0.
 * Encontrar las magnitudes más bajas de temblores en ambas ciudades, indicando las
 * posiciones en las que se encuentran en cada arreglo.
 *
 * Entrada de Ejemplo: M = 10, Mexico[4.3, 8.2, 4.8, 2.0, 8.4, 5.8, 3.7, 2.6, 2.5, 7.2]
 *                     N = 12, Colombia[3.5, 4.8, 4.7, 0.9, 1.8, 4.3, 0.8, 4.0, 2.3, 3.5, 4.5, 5.3
 *
 * Salida Esperada: Más baja de México: 2.0 en posición 3.
 *                  Más baja de Colombia: 0.8 en posición 6.
 *
 * Pista: Usar dos variables para las magnitudes más bajas y dos variables
 * para las posiciones de ambos vectores.
 */

#include <iostream>
#include <ctime>
using namespace std;

int main() {

    int mexico = 10;
    int colombia = 15;
    float tembloresMexico[mexico];
    float tembloresColombia[colombia];
    float magnitudMasBajaMexico = 0;
    int posicionMexico = 0;
    float magnitudMasBajaColombia = 0;
    int posicionColombia = 0;

    srand(time(0));

    // Ciclo for para rellenar el vector de temblores en México
    cout << "Magnitud de los temblores en Mexico: ";
    for (int i = 0; i < mexico; i++) {
        tembloresMexico[i] = (rand() % 90 + 1) / 10.0;
        cout << tembloresMexico[i] << ", ";
    }

    // Ciclo for para rellenar el vector de Temblores en Colombia
    cout << "\nMagnitud de los temblores en Colombia: ";
    for (int i = 0; i < colombia; i++) {
        tembloresColombia[i] = (rand() % 90 + 1) / 10.0;
        cout << tembloresColombia[i] << ", ";
    }

    // Buscar la magnitud más baja en México
    magnitudMasBajaMexico = tembloresMexico[0];
    for (int i = 0; i < mexico; i++) {
        if (tembloresMexico[i] < magnitudMasBajaMexico) {
            magnitudMasBajaMexico = tembloresMexico[i];
            posicionMexico = i;
        }
    }

    // Buscar la magnitud más baja en Colombia
    magnitudMasBajaColombia = tembloresColombia[0];
    for (int i = 0; i < colombia; i++) {
        if (tembloresColombia[i] < magnitudMasBajaColombia) {
            magnitudMasBajaColombia = tembloresColombia[i];
            posicionColombia = i;
        }
    }

    cout << "\n\nMas baja de mexico " << magnitudMasBajaMexico << " en posicion: " << posicionMexico << ". Del Arreglo.";
    cout << "\nMas baja en Colombia " << magnitudMasBajaColombia << " en posicion: " << posicionColombia << ". Del Arreglo."<< endl;

    return 0;
}