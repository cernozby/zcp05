#include "Struktura.cpp"

class Fronta : public Struktura {
public:
    Fronta(int velikost);
    bool pridat(int cislo);
    bool odebrat(int &cislo);
private:
    int* data;
    int capacity;
    int end;
};
