#include <iostream>
#include <cstring>
using namespace std;

struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

void imprimirEstudiantePorValor(Estudiante est) {
    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", est.nombre, est.edad, est.promedio);
}

void modificarEstudiantePorReferencia(Estudiante &est) {
    est.edad = 30;
}

void imprimirEstudiantePorDireccion(Estudiante *est) {
    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", est->nombre, est->edad, est->promedio);
}
int main() {
    Estudiante estudiante1;
    strcpy(estudiante1.nombre, "Juan");
    estudiante1.edad = 20;
    estudiante1.promedio = 9.5;

    imprimirEstudiantePorValor(estudiante1);

    modificarEstudiantePorReferencia(estudiante1);

    imprimirEstudiantePorDireccion(&estudiante1);

    return 0;
}