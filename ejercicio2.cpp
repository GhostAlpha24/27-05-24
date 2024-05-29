#include <iostream>

int main() {
    const int MAX = 100; // Tamaño máximo del array
    int impares[MAX];
    int contador = 0;
    int numero;
    char continuar;

    // Ciclo for para la entrada de números
    for (int i = 0; i < MAX; i++) {
        std::cout << "Ingrese un numero: ";
        std::cin >> numero;

        if (numero % 2 != 0) { // Verificar si el número es impar
            impares[contador] = numero; // Guardar el número impar en el array
            contador++; // Incrementar el contador
        }

        std::cout << "¿Desea ingresar otro numero? (s/n): ";
        std::cin >> continuar;

        if (continuar != 's' && continuar != 'S') {
            break; // Salir del ciclo si el usuario no desea continuar
        }
    }

    // Imprimir los números impares almacenados
    std::cout << "Numeros impares ingresados: ";
    for (int i = 0; i < contador; i++) {
        std::cout << impares[i] << " ";
    }

    std::cout << std::endl;
    return 0;
}
