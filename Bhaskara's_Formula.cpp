#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main (){
    double x,y,z,m;
    cout << "Enter 3 numers: ";
    cin >> x >> y >> z;
    
    m = pow(y,2) - (4 * x * z);
    if(m > 0 && x != 0){
        double R1 = (-y+ sqrt(m)) / (2 * x);
        double R2 = (-y- sqrt(m)) / (2 * x);

        cout << fixed << setprecision(5);
        cout << "R1 = " << R1 << endl;
        cout << "R2 = " << R2 << endl;
    }
    else {
        cout << "Impossivel calcular" << endl;
    }

    
    return 0;
}