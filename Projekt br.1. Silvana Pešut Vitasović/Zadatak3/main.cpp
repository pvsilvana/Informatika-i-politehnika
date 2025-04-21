/*
Projekt 1 - Zadatak 3
Napisati program koji obracunava potrosnju telefona za niz od n osoba. Program radi tako
da prvo od korisnika trazi unos cijelog broja n koji predstavlja broj osoba za koje se obracunava
potrosnja (n se unosi dok se ne unese boj iz segmenta [1,20]). Nakon unosa broja n od korisnika
se trazi unos mjesecne potrošnje telefona u kunama za n osoba.
*/
#include <iostream>

using namespace std;

//funkcija za ispis svih iznosa
void ispisSvihIznosa(int brojKorisnika, float potrosnje[]){
    for(int i = 0; i < brojKorisnika; i++){
        cout << "Osoba " << i + 1 << " je potrosila " << potrosnje[i] << endl;
    }
}

//funkcija za ispis prosjecne potrosnje
void prosjecnaPotrosnja(int brojKorisnika, float potrosnje[]){
    float zbroj = 0;
    for(int i = 0; i < brojKorisnika; i++)
    {
        zbroj += potrosnje[i];
    }
    float prosjek = zbroj / brojKorisnika;
    cout <<"Prosjecna potrosnja iznosi: "<< prosjek << endl;
}

//funkcija za ispis najvece potrosnje
void najvecaPotrosnja(int brojKorisnika, float potrosnje[]){
    float maksimum = potrosnje[0];
    for (int i = 0; i < brojKorisnika; i++){
        if (potrosnje[i] > maksimum)
        {
            maksimum = potrosnje[i];
        }
    }
    cout << "Najveca potrosnja iznosi: " << maksimum << endl;
}

int main()
{
    //deklaracija varijable broja korisnika
    int brojKorisnika;

    //trazenje unosa dok god korisnik ne unese odgovarajuci broj
    do{
        cout << "Unesite broj korisnika: ";
        cin >> brojKorisnika;
    }while(brojKorisnika < 0 || brojKorisnika > 20);

    //deklaracija varijable s potrosnjama svih korisnika
    float potrosnje[brojKorisnika];

    //trazenje unosa potrosnje za svakog korisnika
    for (int i = 0; i < brojKorisnika; i++)
    {
        cout << "Unesite potrosnju korisnika " << i + 1 <<" :";
        cin >> potrosnje[i];
    }
    cout << endl;
    char izbor;
    bool zeliIzaci;

    //prikaz izbornika dok god korisnik ne odluci izaci iz programa
    do{
        cout << "Sto zelite napraviti s ovim programskim rjesenjem?" << endl;
        cout << "   1 - Ispis svih iznosa" << endl;
        cout << "   2 - Ispis prosjecne potrosnje" << endl;
        cout << "   3 - Ispis najvece potrosnje" << endl;
        cin >> izbor;

        switch (izbor)
        {
            case '1':
            ispisSvihIznosa(brojKorisnika, potrosnje);
            break;
            case '2':
            prosjecnaPotrosnja(brojKorisnika, potrosnje);
            break;
            case '3':
            najvecaPotrosnja(brojKorisnika, potrosnje);
            break;
            default:
            cout << "Unesite vazecu opciju (1, 2 ili 3)." << endl; //ako nije unio 1, 2 ili 3
            continue;
        }

        //izbornik s pitanjem zeli li korisnik napraviti jos nesto
        cout << "Zelite li napraviti jos nesto (1) ili izaci (0)?"<<endl;
        cin >> izbor;

        switch(izbor){
            case '0':
            zeliIzaci = 1;
            break;
            case '1':
            break;
            default:
            cout << "Unesite vazecu opciju (0 ili 1)." << endl; //ako nije unio 0 ili 1
            break;
        }

    }while(zeliIzaci != 1); //korisnik je odabrao opciju 1 za izlaz

    return 0;
}
