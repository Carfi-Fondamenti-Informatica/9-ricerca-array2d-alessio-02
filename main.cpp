#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    char a[10][20], b[1][20];
    for (int i = 0; i < 10; i++) {
        cin >> a[i];
    }
    cin >> b[0];
    if (f(a, b)==50){
        cout << "non presente"<< endl;
    }else {
        cout << f(a, b);
    }
    return 0;
}
