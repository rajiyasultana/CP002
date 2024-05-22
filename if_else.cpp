#include <iostream>
 
using namespace std;
 
int main() {
 
    int a,c,d,e , s1, s2;
    cin >> a >> c >> d >> e;
    s1 = d + e;
    s2 = a + c;
    /*if (c > d && e > a){
        if(s1 > s2 && d > 0 && e > 0 && a % 2 == 0)
        {
            cout << "Valores aceitos" << endl;
        }
    }*/
    if (c > d && e > a && s1 > s2 && d > 0 && e > 0 && a % 2 == 0){
        cout << "Valores aceitos" << endl;
    }
    else
    {
        cout << "Valores nao aceitos" << endl;
    }
 
    return 0;
}