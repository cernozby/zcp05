//
// Created by Zbysa on 17.03.2022.
//

#include "Struktura.cpp"

class Zasobnik: public Struktura {
public:
    Zasobnik(int velikost);
    bool pridat(int cislo);
    bool odebrat(int &cislo);
private:
    int* data;
    int capacity;
    int freeSlots;
};
