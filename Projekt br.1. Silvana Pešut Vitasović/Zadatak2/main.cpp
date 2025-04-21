/*
Projekt 1 - Zadatak 2
Napisati program koji ce ucitati matricu tipa (n,m) (n,m <= 10), ispisati ju u obliku tablice te
napisati funkciju u kojoj se racuna zbroj svakog retka matrice te se formira polje koje predstavlja
zbroj elemenata matrice po retcima (funkcija vraca polje ne kao povratnu vrijednost, vec se polje
prosljeduje kao argument funkcije). Na kraju je potrebno ispisati elemente polja.
*/

#include <iostream>

using namespace std;

//funckija za racunanje zbrojeva redaka
void racunanjeZbrojevaRedaka(int matrica[10][10], int poljeSaZbrojevima[10]){
    for (int xOs = 0; xOs < 10; xOs++){
        for (int yOs = 0; yOs < 10; yOs++){
            poljeSaZbrojevima[xOs] = poljeSaZbrojevima[xOs] + matrica[xOs][yOs];
        }
    }
}

int main()
{
    //deklaracija matrice
    int matrica[10][10];

    //ubacivanje nasumicnih brojeva u matricu
    for (int xOs = 0; xOs < 10; xOs++){
        for (int yOs = 0; yOs < 10; yOs++){
            matrica[xOs][yOs] = rand() % 10;
        }
    }

    //ispis matrice
    for (int xOs = 0; xOs < 10; xOs++){
        for (int yOs = 0; yOs < 10; yOs++){
            cout << matrica[xOs][yOs];
        }
        cout << '\n';
    }

    //deklaracija polja za upisivanje vrijednosti zbrajanja
    int poljeSaZbrojevima[10] = { 0 };

    racunanjeZbrojevaRedaka(matrica, poljeSaZbrojevima);

    cout <<"Rezultati zbrajanja, odnosno elementi polja su:";
    for(int i = 0; i<10; i++){
        cout << poljeSaZbrojevima[i] << " ";
    }

    return 0;
}
