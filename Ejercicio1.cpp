#include <iostream>
#include <cstring>

struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};
int main() {
    Estudiante estudiante1;
    strcpy(estudiante1.nombre, "Juan");
    estudiante1.edad = 20;
    estudiante1.promedio = 9.5;

    Estudiante *estudiante2 = new Estudiante;
    strcpy(estudiante2->nombre, "Ana");
    estudiante2->edad = 22;
    estudiante2->promedio = 9.8;

    Estudiante *punteroEst = &estudiante1;
    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", punteroEst->nombre, punteroEst->edad, punteroEst->promedio);