#include <iostream>
#include "Fronta.h"
#include "Zasobnik.h"

using namespace std;

int Pridat(Struktura &struktura, int cisla[], int delka) {
    for(int i = 0; i < delka; i++) {
        if(!struktura.pridat(cisla[i])) {
            return i;
        }
    }
    return delka;
}
int OdebratVypsat(Struktura &struktura, int count = INT_MAX) {
    int buf;

    cout << "(";
    for(int i = 0; i < count; i++) {
        if(struktura.odebrat(buf)) {
            if(i != 0) {cout << ", ";}
            cout << buf;
        } else {
            cout << ")" << endl;
            return i;
        }
    }
    cout << ")" << endl;
    return count;
}

void test() {
    int numbers1[] = {5, 9, 1, 0, 4};
    int numbers2[] = {3, 4, 7, 5, 2, 8};

    auto fronta = new Fronta(6);
    auto zasobnik = new Zasobnik(6);

    cout << Pridat(*fronta, numbers1, 5)<<endl;
    cout << Pridat(*zasobnik, numbers1, 5)<<endl;
    cout << OdebratVypsat(*fronta, 3) <<endl;
    cout << OdebratVypsat(*zasobnik, 3) <<endl;
    cout << Pridat(*fronta, numbers2, 6)<<endl;
    cout << Pridat(*zasobnik, numbers2, 6)<<endl;
    cout << OdebratVypsat(*fronta) <<endl;
    cout << OdebratVypsat(*zasobnik) <<endl;


}

int main() {
    test();
    return 0;
}
