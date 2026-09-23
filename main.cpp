// ¿Recuerdas qué hace iostream?
#include <iostream>

// ¿por qué debe existir la función main()?
int main() {
    // 1. Constante: valor que no cambia durante la ejecución
    const int CANTIDAD = 5;

    // commit 1) analizar el problema
    double suma   = 0.0;
    double numero = 0.0;

    std::cout << "Suma de " << CANTIDAD << " numeros\n";

    // commit 2) la creacion de mi for
    for (int i =0 ;  i < CANTIDAD; i++) {
         std::cout << "Ingrese un numero: ";
            std::cin >> numero;
             suma += numero;
    // commit 3) poner el mensaje final
  
    }
    
    std::cout << "La suma es total de los 5 numeros es: " << suma << std::endl;

    return 0;

    //    TODO: pedir el numero, leerlo y acumularlo en suma
         
    // 4. Salida

    // ¿Qué significa return 0;?
  
 

}