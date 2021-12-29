#ifndef METODYPOMOCNICZE_H
#define METODYPOMOCNICZE_H

#include <iostream>
#include <sstream>
#include <algorithm>


using namespace std;

class MetodyPomocnicze
{

public:
    static string konwersjaIntNaString(int liczba);
    static int konwersjaStringNaInt(string liczba);
    string wczytajLinie();
    string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);
    string pobierzLiczbe(string tekst, int pozycjaZnaku);
    char wczytajZnak();

};

#endif
