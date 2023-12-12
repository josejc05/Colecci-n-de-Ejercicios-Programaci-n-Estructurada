#include <iostream>
#include <cstring>
using namespace std;

const int MAX_ESTUDIANTES = 10;

struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

void agregarEstudiante(Estudiante listaEstudiantes[], int& numEstudiantes, const char* nombre, int edad, float promedio) {
    if (numEstudiantes < MAX_ESTUDIANTES) {
        strcpy(listaEstudiantes[numEstudiantes].nombre, nombre);
        listaEstudiantes[numEstudiantes].edad = edad;
        listaEstudiantes[numEstudiantes].promedio = promedio;
        numEstudiantes++;
        cout << "Estudiante añadido correctamente." << endl;
    } else {
        cout << "La lista de estudiantes está llena. No se puede añadir más estudiantes." << endl;
    }
}

void mostrarListaEstudiantes(const Estudiante listaEstudiantes[], int numEstudiantes) {
    cout << "\nLista de Estudiantes:\n";
    for (int i = 0; i < numEstudiantes; ++i) {
        cout << "Nombre: " << listaEstudiantes[i].nombre << ", Edad: " << listaEstudiantes[i].edad << ", Promedio: " << listaEstudiantes[i].promedio << endl;
    }
}

void eliminarEstudiante(Estudiante listaEstudiantes[], int& numEstudiantes) {
    if (numEstudiantes > 0) {
        numEstudiantes--;
        cout << "\nEstudiante eliminado correctamente." << endl;
    } else {
        cout << "\nLa lista de estudiantes está vacía. No se puede eliminar más estudiantes." << endl;
    }
}

int main() {
    Estudiante estudiante1;
    strcpy(estudiante1.nombre, "Juan");
    estudiante1.edad = 20;
    estudiante1.promedio = 9.5;

    Estudiante estudianteInstanciado;
    strcpy(estudianteInstanciado.nombre, "Pedro");
    estudianteInstanciado.edad = 21;
    estudianteInstanciado.promedio = 8.9;

    Estudiante *estudianteMalloc = (Estudiante *)malloc(sizeof(Estudiante));
    strcpy(estudianteMalloc->nombre, "Maria");
    estudianteMalloc->edad = 22;
    estudianteMalloc->promedio = 9.2;

    Estudiante *punteroEst = &estudianteInstanciado;

    Estudiante listaEstudiantes[MAX_ESTUDIANTES];
    int numEstudiantes = 0;

    agregarEstudiante(listaEstudiantes, numEstudiantes, "Carlos", 19, 8.0);
    mostrarListaEstudiantes(listaEstudiantes, numEstudiantes);
    eliminarEstudiante(listaEstudiantes, numEstudiantes);

    return 0;
}
