#include <iostream>

using namespace std;

void zbrajanje(int a, int b){
    int zbroj;
    zbroj = a + b;
    cout << zbroj;
}

int main()
{
    int a;
    int b;
    int zbroj;

    cout << "unesi prvi broj";
    cin >> a;

    cout << "unesi drugi broj";
    cin >> b;

    zbrajanje(a, b);

    return 0;
}
