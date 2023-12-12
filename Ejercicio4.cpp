#include <iostream>
#include <cstring>
using namespace std;

typedef struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
} Estudiante;

int main() {
    Estudiante estudiante3;
    strcpy(estudiante3.nombre, "Pedro");
    estudiante3.edad = 25;
    estudiante3.promedio = 9.7;

    cout << "Nombre: " << estudiante3.nombre << ", Edad: " << estudiante3.edad << ", Promedio: " << estudiante3.promedio << endl;

    return 0;
}
