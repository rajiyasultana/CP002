#include<iostream>
using namespace std;
int main(){
    double n;
    cin >> n;
    int N = n * 100;
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, f;
    n1 = N / 10000;
    f = N % 10000;

    n2 = f / 5000;
    f = f % 5000;

    n3 = f / 2000;
    f = f % 2000;

    n4 = f / 1000;
    f = f % 1000;

    n5 = f / 500;
    f = f % 500;

    n6 = f / 200;
    f = f % 200;

    n7 = f / 100;
    f = f % 100;

    n8 = f / 50;
    f = f % 50;

    n9 = f / 25;
    f = f % 25;

    n10 = f / 10;
    f = f % 10;
    
    n11 = f / 5;
    f = f % 5;

    n12 = f / 1;

    cout << "NOTAS:" << endl;
    cout << n1 << " nota(s) de R$ 100.00" << endl;
    cout << n2 << " nota(s) de R$ 50.00" << endl;
    cout << n3 << " nota(s) de R$ 20.00" << endl;
    cout << n4 << " nota(s) de R$ 10.00" << endl;
    cout << n5 << " nota(s) de R$ 5.00" << endl;
    cout << n6 << " nota(s) de R$ 2.00" << endl;
    cout << "MOEDAS:" << endl;
    cout << n7 << " moeda(s) de R$ 1.00" << endl;
    cout << n8 << " moeda(s) de R$ 0.50" << endl;
    cout << n9 << " moeda(s) de R$ 0.25" << endl;
    cout << n10 << " moeda(s) de R$ 0.10" << endl;
    cout << n11 << " moeda(s) de R$ 0.05" << endl;
    cout << n12 << " moeda(s) de R$ 0.01" << endl;

    return 0;
}