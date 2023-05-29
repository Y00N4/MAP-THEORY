#include <iostream>
#include <map>
// DODAWANIE ELEMENTÓW DO MAPY
int main() {
    std::map<int, std::string> mapa;

    // Dodawanie elementów do mapy
    mapa[1] = "Jeden";
    mapa[2] = "Dwa";
    mapa[3] = "Trzy";

    return 0;
}
// ITERACJA PO MAPIE: 
#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> mapa;
    mapa[1] = "Jeden";
    mapa[2] = "Dwa";
    mapa[3] = "Trzy";

    // Iteracja po mapie za pomocą pętli for-each
    for (const auto& para : mapa) {
        std::cout << "Klucz: " << para.first << ", Wartość: " << para.second << std::endl;
    }

    return 0;
}
// WYSZUKIWANIE ELEMENTÓW W MAPIE: 
#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> mapa;
    mapa[1] = "Jeden";
    mapa[2] = "Dwa";
    mapa[3] = "Trzy";

    // Wyszukiwanie elementu na podstawie klucza
    int klucz = 2;
    auto iterator = mapa.find(klucz);
    if (iterator != mapa.end()) {
        std::cout << "Znaleziono wartość: " << iterator->second << std::endl;
    }
    else {
        std::cout << "Nie znaleziono elementu o kluczu " << klucz << std::endl;
    }

    return 0;
}

//USUWANIE ELEMENTU Z MAPY:
#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> mapa;
    mapa[1] = "Jeden";
    mapa[2] = "Dwa";
    mapa[3] = "Trzy";

    // Usuwanie elementu na podstawie klucza
    int klucz = 2;
    mapa.erase(klucz);

    return 0;
}
