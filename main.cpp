#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    // NELEMENTS el lett írva, helyesen N_ELEMENTS lenne.
    int *b = new int[NELEMENTS];
    
    // Sztringeknél dupla idézőjel kell (") szimpla helyett('), és hiányzik a pontosvessző a sor végéről.
    std::cout << '1-100 ertekek duplazasa'

    // A for ciklus hiányos, hiányzik a leállási feltétel és a léptetés is.
    for (int i = 0;)
    {
        b[i] = i * 2;
    }

    // A leállási feltétel rossz (sima 'i'), így a ciklus egyszer sem fut le.

    for (int i = 0; i; i++)
    {

        // Nem írja ki a b[i] értéket, és hiányzik a pontosvessző a végéről.
        std::cout << "Ertek:"
    }    
    std::cout << "Atlag szamitasa: " << std::endl;

    // Az átlag változó nincs inicializálva nincsen neki érték megadva.

    int atlag;

    // A feltétel és a léptetés között pontosvesszőt kell tenni (;) nem sima vesszőt (,).

    for (int i = 0; i < N_ELEMENTS, i++)
    {
        //Sor végéről hiányzik a pontosvessző.
        atlag += b[i]
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;

    // A dinamikusan foglalt memória felszabadítása hiányzik a return előtt (delete[] b;).

    return 0;
}
