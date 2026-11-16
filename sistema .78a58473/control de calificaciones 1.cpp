#include <iostream>
#include <string>
#include <iomanip> // Necesario para std::fixed y std::setprecision

using namespace std;

int main() {
    // Variable para controlar si se desea repetir todo el proceso con otro grupo
    char repetirPrograma = 's';

    while (repetirPrograma == 's' || repetirPrograma == 'S') {
        // Variables generales del grupo
        int cantidadEstudiantes = 0;
        int aprobados = 0;
        int reprobados = 0;
        double sumaPromediosGrupo = 0.0;

        // Variables para encontrar el mejor promedio
        string mejorNombre = "";
        double mejorPromedio = -1.0;

        // 1. Solicitar la cantidad de estudiantes (debe ser mayor que 0)
        // Bucle do-while para asegurar que se ingrese un valor válido
        do {
            cout << "Cantidad de estudiantes: ";
            cin >> cantidadEstudiantes;
            if (cantidadEstudiantes <= 0) {
                cout << "Error: La cantidad debe ser mayor que 0. Intente nuevamente.\n";
            }
        } while (cantidadEstudiantes <= 0);

        // Bucle for para recorrer a cada estudiante del grupo
        for (int i = 1; i <= cantidadEstudiantes; i++) {
            cout << "\nEstudiante " << i << "\n";

            string nombre;
            cout << "Nombre: ";
            cin >> nombre;

            double sumaNotas = 0.0;

            // Bucle for para solicitar y validar las 4 calificaciones de cada estudiante
            for (int j = 1; j <= 4; j++) {
                double calificacion = -1.0;

                // Bucle do-while para validar que cada nota esté entre 0 y 100
                do {
                    cout << "Calificacion " << j << ": ";
                    cin >> calificacion;

                    if (calificacion < 0 || calificacion > 100) {
                        cout << "Error: La calificacion debe estar entre 0 y 100. Intente de nuevo.\n";
                    }
                } while (calificacion < 0 || calificacion > 100);

                sumaNotas += calificacion;
            }

            // 3. Calcular el promedio del estudiante actual
            double promedioEstudiante = sumaNotas / 4.0;
            sumaPromediosGrupo += promedioEstudiante;

            // Mostrar resultado individual con 2 decimales
            cout << fixed << setprecision(2);
            cout << "Promedio: " << promedioEstudiante << " - ";

            if (promedioEstudiante >= 70) {
                cout << "Aprobado\n";
                aprobados++;
            }
            else {
                cout << "Reprobado\n";
                reprobados++;
            }

            // Evaluar si es el mejor promedio hasta el momento
            if (promedioEstudiante > mejorPromedio) {
                mejorPromedio = promedioEstudiante;
                mejorNombre = nombre;
            }
        }

        // 4. Mostrar el resumen del grupo procesado
        double promedioGrupo = sumaPromediosGrupo / cantidadEstudiantes;

        cout << "\n===== RESUMEN =====\n";
        cout << "Aprobados: " << aprobados << " | Reprobados: " << reprobados << "\n";
        cout << "Promedio del grupo: " << promedioGrupo << "\n";
        cout << "Mejor promedio: " << mejorNombre << " (" << mejorPromedio << ")\n";

        // 5. Preguntar si desea procesar otro grupo
        cout << "¿Desea procesar otro grupo? (s/n): ";
        cin >> repetirPrograma;
        cout << "\n----------------------------------------\n";
    }

    cout << "Programa finalizado. ¡Buen trabajo!\n";
    return 0;
}