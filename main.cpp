#include <iostream>
using namespace std;
int main() {
    int n, a=1, b=1,c;
    cin >> n;
    if (n<2){
        cout << "errore";
    }
    else {
        for(int i=1; i<=n; i++){
            cout <<a<< endl;
            b=c;
            c=a;
            a=b+c;
        }
    }
    return 0;
}
