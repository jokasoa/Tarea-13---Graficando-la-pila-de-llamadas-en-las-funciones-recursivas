//Autor:Jeremy Novoa
//Fecha:22/6/2024
#include <iostream>


// Definición de la función recursiva para imprimir la tabla de multiplicar
void imprimirTablaDescendente(int tabla, int limite) {
    // Caso base: si el límite es menor que 1, no hacer nada
    if (limite < 1) {
        return;
    }

    // Imprimir el resultado de la multiplicación actual
    std::cout << tabla << " x " << limite << " = " << tabla * limite << std::endl;

    // Llamada recursiva con el límite decreciente
    imprimirTablaDescendente(tabla, limite - 1);
}

int main() {
    int tabla, limite;

    // Ejemplo de uso
    tabla = 5;
    limite = 10;

    std::cout << "Tabla de multiplicar del " << tabla << " desde " << limite << " hasta 1:" << std::endl;
    imprimirTablaDescendente(tabla, limite);

    return 0;
}
