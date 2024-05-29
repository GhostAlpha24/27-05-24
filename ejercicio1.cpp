#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese el tamaño del arreglo: ";
    cin >> n;

    int numeros[n];  // Arreglo para almacenar los números ingresados
    int pares[n];    // Arreglo para almacenar los números pares
    int cont_pares = 0;  // Contador para el número de elementos en el arreglo de pares

    // Solicitar al usuario ingresar los números
    cout << "Ingrese " << n << " numeros:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> numeros[i];
    }

    // Verificar si los números son pares y almacenarlos en el arreglo de pares
    int i = 0;
    while (i < n) {
        if (numeros[i] % 2 == 0) {
            pares[cont_pares] = numeros[i];
            cont_pares++;
        }
        i++;
    }

    // Imprimir el arreglo de números pares
    cout << "Numeros pares ingresados:" << endl;
    for (int i = 0; i < cont_pares; ++i) {
        cout << pares[i] << " ";
    }
    cout << endl;

    return 0;
}
