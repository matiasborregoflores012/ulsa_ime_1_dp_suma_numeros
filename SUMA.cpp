// ¿Recuerdas qué hace iostream?
#include <iostream>

// ¿por qué debe existir la función main()?
int main() {
    // 1. Constante: valor que no cambia durante la ejecución
    const int CANTIDAD = 5;

    
    double suma   = 0.0;
    double numero = 0.0;

    std::cout << "Suma de los 5 terminos perrones " << CANTIDAD << " numeros\n";

    

    while (true) {
        suma = 0; 
    
    for (int i =0 ;  i < CANTIDAD; i++) {
         std::cout << "Ingrese un numero: ";
            std::cin >> numero;
             suma += numero;                  if(std::cin.fail()) {   std::cin.clear();  std::cin.ignore(1000, '\n'); std::cout <<"se esquivoco profe ese no es XD "; i--; continue; } 

             

    }
    
                 std::cout << "La suma es total de los 5 numeros es: " << suma << std::endl;




std::cout << "quieres continuar (S/N)? ";
                 char respuesta;
                 std::cin >> respuesta;
                 if (respuesta ==  'n' || respuesta == 'N') {
                 std::cout <<" se acabo gg";    break;
                 }
                } 

                
    
                 
     

return 0;

}