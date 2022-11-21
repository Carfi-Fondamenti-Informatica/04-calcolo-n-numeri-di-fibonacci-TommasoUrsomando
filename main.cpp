#include <iostream>
using namespace std;
int main() {
    int n, a=1, b=1,c;
    cin >> n;
    if (n>=2){
        for(int i=0; i<n; i++){
            cout <<a<< endl;
            b=c;
            c=a;
            a=b+c;
        }
    }
    else {
        cout << "errore";
    }
    return 0;
}
