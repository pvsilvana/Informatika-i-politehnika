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

    char niz[] = {'a' ,'b' ,'a' ,'c' ,'f' ,'d'};

    //pretraga za traženi znak i zamjena
    int i = 0;
    for ( char trenutniZnak : niz )
    {
        if (niz[i] == stariZnak){
            niz[i] = noviZnak;
        }
        i++;
    }
    cout << "Izlazni niz: ";
    i= 0;
    for( char trenutniZnak : niz )
    {
        cout << niz[i];
        i++;
    }

    return 0;
}
