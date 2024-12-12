#include <stdio.h>
#include "sum.h"
#include "sub.h"
#include "mul.h"

int main() {
    int param1 = 10, param2 = 5;
    int res_sub;
    int res_mul;

    printf("Void function -> ");
    sum(param1, param2);
    printf("\n");

    int res = add(param1, param2);
    printf("%d + %d = %d\n", param1, param2, res);

    printf("\nSub function -> ");
    
    res_sub = sub(param1, param2);
    printf("%d\n", res_sub);
    res_sub = sub(param2, param1);

    res_mul = mul(param1,param2);
    printf("The result of multiplication : %d ",res_mul);

    return 0;
}