#include <iostream>

using namespace std;

int zbrajanje(int a, int b){
    return a + b;
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

    zbroj = zbrajanje(a, b);
    cout << zbroj;
    return 0;
}
