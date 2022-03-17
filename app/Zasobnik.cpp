//
// Created by Zbysa on 17.03.2022.
//
#include "Zasobnik.h"

Zasobnik::Zasobnik(int velikost) {
    data = new int[velikost];
    capacity = velikost;
    freeSlots = velikost;
}

bool Zasobnik::pridat(int cislo) {
    if(freeSlots == 0) {return false;}
    data[freeSlots-1] = cislo;
    freeSlots--;
    return true;
}

bool Zasobnik::odebrat(int &cislo) {
    if (freeSlots == capacity) {return false;}
    cislo = data[freeSlots];
    freeSlots++;
    return true;
}
