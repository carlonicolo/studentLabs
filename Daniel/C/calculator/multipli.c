#include <stdio.h>
#include "multipli.h"


int mul(int param1, int param2) {
    if(param1 != 0){
        return param1 * param2;
    } else {
        printf("If you multipli for zero the result is zero");
        return 1;
    }
    
}