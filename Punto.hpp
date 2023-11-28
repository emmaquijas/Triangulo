#ifndef Punto_hpp
#define Punto_hpp

#include <stdio.h>
#include <string>
#include <math.h>

class Punto{

private:
    double x, y;

public:
    // Metodos constructores
    Punto();
    Punto(double _x, double _y);

    // Metodos de acceso (getters)
    double getX();
    double getY();

    // Metodos modificadores (setters)
    void setX(double _x);
    void setY(double _y);

    // Otros metodos
    double calculaDistancia(Punto p2);
    std::string str();
};

#endif /* Punto_hpp */