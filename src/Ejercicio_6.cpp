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

    cout << "\n\nMas baja de mexico " << magnitudMasBajaMexico << " en posicion: " << posicionMexico << ".";
    cout << "\nMas baja en Colombia " << magnitudMasBajaColombia << " en posicion: " << posicionColombia << "."<< endl;

    return 0;
}