#include <iostream>
#include <cstring>

using namespace std;

struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

Estudiante copiarEstudiante(const Estudiante& est) {
    Estudiante nuevoEst;
    strcpy(nuevoEst.nombre, est.nombre);
    nuevoEst.edad = est.edad;
    nuevoEst.promedio = est.promedio;
    return nuevoEst;
}
int main() {
    Estudiante estudianteOriginal;
    strcpy(estudianteOriginal.nombre, "Juan");
    estudianteOriginal.edad = 20;
    estudianteOriginal.promedio = 9.5;

    Estudiante estudianteCopia = copiarEstudiante(estudianteOriginal);

    cout << "Copia del estudiante:\n";
    cout << "Nombre: " << estudianteCopia.nombre << ", Edad: " << estudianteCopia.edad << ", Promedio: " << estudianteCopia.promedio << endl;

    return 0;
}