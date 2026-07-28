#include <iostream>
#include <string>

int main() {
    int edad;
    std::string nombre;

    std::cout << "Introduce tu nombre: ";
    std::cin >> nombre;

    std::cout << "Introduce tu edad: ";
    std::cin >> edad;

    if (edad >= 18) {
        std::cout << "Bienvenido " << nombre << std::endl;
    } else {
        std::cout << "Lo siento " << nombre << ", no puedes ingresar\n";
    }

    return 0;
}