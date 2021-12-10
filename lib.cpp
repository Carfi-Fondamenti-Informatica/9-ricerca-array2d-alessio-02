#include "lib.h"

void pul (char &a , char &b) {
    if (a >= 97 and a <= 122 or a >= 65 and a <= 89) {

    } else {
        a = '#';
    }
    if (b >= 97 and b <= 122 or b >= 65 and b <= 89) {

    } else {
        b = '#';
    }
}
bool controllo(char x, char y){
    if (x == y) {
        return true;
    }else{
        return false;
    }
}
int f(char a[10][20], char b[1][20]){
    int X=50;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 20; j++) {
            pul(a[i][j], b[0][j]);
            if (a[i][j] == '#') {
                for (int k = j; k < 20; k++) {
                    a[i][k] = '#';
                }
            }
            if (b[0][j] == '#') {
                for (int k = j; k < 20; k++) {
                    b[0][k] = '#';
                }
            }
        }
    }
                for (int i = 0; i < 10; i++) {
                    for (int j = 0; j < 20; j++) {
                        if (controllo(a[i][j], b[0][j]) and a[i][j] != '#' and b[0][j] != '#') {
                            X = i;
                        }
                    }
                }
        return X;
}
