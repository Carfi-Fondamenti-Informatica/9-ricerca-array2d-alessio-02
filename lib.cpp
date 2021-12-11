#include "lib.h"
#include <cstring>

bool controllo(char a[10][20], char b[1][20], int &X){
    for (int i = 0; i < 10; i++) {
        if(strcmp(a[i], b[0]) == 0){
            X=i;
            return true;
        }
    }
    return false;
}
