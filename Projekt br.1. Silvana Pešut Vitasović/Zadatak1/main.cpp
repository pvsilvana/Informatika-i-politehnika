/*
Projekt 1 - Zadatak 1
Napisati funkciju koja u ucitanom znakovnom nizu mijenja neki zadani znak s nekim
drugim zadanim znakom (potrebno je napraviti zamjenu za svako pojavljivanje tog znaka).
*/
#include <iostream>

using namespace std;

int main()
{
    char stariZnak;
    char noviZnak;

    cout << "Upisite znak koji zelite obrisati: ";
    cin >> stariZnak;
    cout << "Upisite znak koji zelite ubaciti: ";
    cin >> noviZnak;

    //testni niz znakova

    char niz[] = {'a','b','c','a', 'c', 'h', 'j', 's'};

    //pretraga za trazeni znak i zamjena
    int i = 0;
    for( char trenutniZnak : niz )
    {
        if (niz[i] == stariZnak){
            niz[i] = noviZnak;
        }
        i++;
    }

    cout << "Izlazni niz: ";
    i = 0;
    for( char trenutniZnak : niz)
    {
        cout << niz[i];
        i++;
    }

    return 0;
}

