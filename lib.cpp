#include "lib.h"

bool funzione (char &a){
    if ((a>=65 & a<=90) or (a>=97 & a<=122)){
        if (a>= 65 & a<=95){
            a+=32;
        }else {
            a-=32;
        }
        return 1;
    }else {
        return 0;
    }
}
