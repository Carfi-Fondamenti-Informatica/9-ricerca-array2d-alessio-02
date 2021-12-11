#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    int X=0;
    char a[10][20], b[1][20];
    for (int i = 0; i < 10; i++) {
        cin >> a[i];
    }
    cin >> b[0];
    if (controllo(a, b, X)){
        cout << X << endl;
    }else {
        cout << "non presente" << endl;
    }
    return 0;
}
