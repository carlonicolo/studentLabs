/*  the program reads a sequence of numbers
    and counts how many numbers are even and odd;
    the program terminates when "0" is entered    */

#include <iostream>
using namespace std;

int main(void)
{
    /* count the numbers here */
    int Evens = 0, Odds = 0;

    /* store the incoming numbers here */
    int Number;

    /* read the first number */
    scanf("%d", &Number);

    /* 0 terminates execution */
    while(Number != 0) {
        /* check if the number is odd */
        if(Number % 2)
            /* increase the odd counter */
            Odds++;
        else
            /* increase the even counter */
            Evens++;
        /* read the next number */
        scanf("%d", &Number);
    }
    /* print results */
    cout << "Even numbers: "<< Evens <<endl;
    cout << "Odd numbers: "<< Odds << endl;
    return 0;
}