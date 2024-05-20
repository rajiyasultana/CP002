#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i = 0; i<10; i++){
        int a, c;
        cin >> a >> c;
        if (a < c || a == c){
            cout << a << " " << c << endl;
        }
        else{
            cout << c << " " << a << endl;
        }
    }
    return 0;

}
