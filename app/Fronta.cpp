//
// Created by Zbysa on 17.03.2022.
//
#include "Fronta.h"
#include <iostream>



Fronta::Fronta(int velikost) {
    //data = (int *)malloc(velikost * sizeof (int));
    data = new int[velikost];
    capacity = velikost;
    end = 0;
}

bool Fronta::odebrat(int& cislo) {
    if(end == 0) {return false;}

    cislo = data[0];
    for(int i = 1; i <= end; i++) {
        data[i-1] = data[i];
    }
    end--;
    return true;
}

bool Fronta::pridat(int cislo) {
    if (end >= capacity
    ) {
        return false;
    }
    data[end] = cislo;
    end++;
    return true;
}

