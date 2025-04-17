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

    char niz[] = {'a' , 'b' , 'a' , 'c' , 'f' , 'd'};

    //pretraga za traženi znak i zamjena

    for (int i = 0; i < 5; i++)
    {
        if (niz[i] == stariZnak){
            niz[i] = noviZnak;
        }
    }
    cout << "Izlazni niz: ";
    for (int i = 0; i < 5; i++)
    {
        cout << niz[i];
    }

    return 0;
}
