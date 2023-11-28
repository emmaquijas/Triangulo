#include <iostream>
#include "Punto.cpp"
#include "Triangulo.cpp"
using namespace std;

int main() {
    // Prueba la clase Punto
    Punto punto1(2.5, 3.0);
    Punto punto2(5.0, 1.0);

    std::cout << "Punto 1: " << punto1.str() << std::endl;
    std::cout << "Punto 2: " << punto2.str() << std::endl;
    std::cout << "Distancia entre los puntos: " << punto1.calculaDistancia(punto2) << std::endl;

    // Prueba la clase Triangulo
    Punto vertice1(0, 0);
    Punto vertice2(3, 0);
    Punto vertice3(0, 4);

    Triangulo triangulo1; // Usa los valores predeterminados de los vertices
    Triangulo triangulo2(vertice1, vertice2, vertice3);

    std::cout << "Triangulo 1 vertices: " << triangulo1.str() << std::endl;
    std::cout << "Triangulo 1 perimetro: " << triangulo1.perimetro() << std::endl;
    std::cout << "Triangulo 1 area: " << triangulo1.area() << std::endl;
    
    std::cout << "Triangulo 2 vertices: " << triangulo2.str() << std::endl;
    std::cout << "Triangulo 2 perimetro: " << triangulo2.perimetro() << std::endl;
    std::cout << "Triangulo 2 area: " << triangulo2.area() << std::endl;

    return 0;
}
