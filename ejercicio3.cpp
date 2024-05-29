#include <iostream>
using namespace std;

int main() {
    int numEstudiantes;
    
    // Pedir el número de estudiantes
    cout << "Ingrese el numero de estudiantes: ";
    cin >> numEstudiantes;

    // Crear un arreglo para almacenar las estaturas
    double estaturas[numEstudiantes];
    
    // Leer las estaturas de los estudiantes
    cout << "Ingrese las estaturas de los estudiantes:" << endl;
    for (int i = 0; i < numEstudiantes; i++) {
        cout << "Estatura del estudiante " << i + 1 << ": ";
        cin >> estaturas[i];
    }
    
    // Calcular la media de las estaturas
    double suma = 0;
    for (int i = 0; i < numEstudiantes; i++) {
        suma += estaturas[i];
    }
    double media = suma / numEstudiantes;
    
    // Contar cuántos estudiantes son más altos y cuántos son más bajos que la media
    int masAltos = 0;
    int masBajos = 0;
    for (int i = 0; i < numEstudiantes; i++) {
        if (estaturas[i] > media) {
            masAltos++;
        } else if (estaturas[i] < media) {
            masBajos++;
        }
    }
    
    // Mostrar los resultados
    cout << "La media de las estaturas es: " << media << endl;
    cout << "Numero de estudiantes mas altos que la media: " << masAltos << endl;
    cout << "Numero de estudiantes mas bajos que la media: " << masBajos << endl;
    
    return 0;
}
