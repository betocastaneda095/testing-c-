Main.cpp
#include <iostream>
int main() {
    int edad = 31; 
    std::string nombre; //Aquí estoy declarando una variable del tipo string, es la nueva forma
    std::cin>> nombre; //Aquí se va a guardar el valor que el usuario ingrese.
    if(edad>=18)
    {
        std::cout<<"Bienvenido"<<" "<<nombre<<std::endl; //Salto de línea con flush
    }
    else
    {
        std::cout<<"Lo siento"<<" "<<nombre<<" "<<"no puedes ingresar"<<"\n"; //otra forna m{as eficiente de hacer el salto de línea
    }
return 0;
}