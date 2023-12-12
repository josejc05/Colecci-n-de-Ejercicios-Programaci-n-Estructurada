#include <iostream>
#include <cstring>
using namespace std;
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
    const int MAX_ESTUDIANTES = 10;
    Estudiante listaEstudiantes[MAX_ESTUDIANTES];
    int numEstudiantes = 0;

    strcpy(listaEstudiantes[numEstudiantes].nombre, "Carlos");
    listaEstudiantes[numEstudiantes].edad = 21;
    listaEstudiantes[numEstudiantes].promedio = 8.7;
    numEstudiantes++;

    cout << "\nLista de Estudiantes:\n";
    for (int i = 0; i < numEstudiantes; ++i) {
        cout << "Nombre: " << listaEstudiantes[i].nombre << ", Edad: " << listaEstudiantes[i].edad << ", Promedio: " << listaEstudiantes[i].promedio << endl;
    }
    if (numEstudiantes > 0) {
        numEstudiantes--;
        cout << "\nEstudiante eliminado." << endl;
    } else {
        cout << "\nLa lista de estudiantes está vacía." << endl;
    }

    delete estudiante2;

    return 0;
}