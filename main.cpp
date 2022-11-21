#include <iostream>
using namespace std;
int main() {
    int n, a=0, b=1,c;
    cin >> n;
    if (n<2){
        cout << "errore";
    }
    else {
        for(int i=0; i<n; i++){
            cout <<a<< endl;
            c=a;
            a=b;
            a=b+c;
        }
    }
    return 0;
}
