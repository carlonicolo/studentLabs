/*
Level of difficulty
Easy

Objectives
Familiarize the student with:

Printing data in different formats
Fixing errors in a program
Scenario
You have the data (included in code) of three students' grades (StudentA, StudentB, StudentC).
Write a program to print this data in rows - the first row is a header in the format:

Student name  1stYGrade  2ndYGrade  3rdYGrade  Avg

The next three rows contain: student name (StudentA, StudentB, StudentC is enough),
grade (1stYGrade 2ndYGrade 3rdYGrade), and the average of these three grades (Avg).
Your version of the program must print the same result as the expected output.

To print only two digits of a floating-point number, use the "%.2f" format specifier,
and to fill it with spaces you can use the "%9.2f" format specifier where 9 is the length of
the number and spaces.

Expected output

Student name  1stYGrade  2ndYGrade  3rdYGrade  Avg
StudentA      4.20       4.50       4.20       4.30
StudentB      4.30       4.40       4.70       4.47
StudentC      4.30       4.80       4.90       4.67
*/

#include <stdio.h>

int main(){


    // studenteA voti :

    float votoA1 = 4.20;
    float votoA2 = 4.50;
    float votoA3 = 4.20;
    float avgA = 4.30;


    char angolo[47] = "Student name 1stYGrade 2ndYGrade 3rdGrade Avg\n";

    char studenti[3][15] = {"StudentA" ,"StudentB","StudentC"};
    
    printf("%s",angolo);

    for (int i = 0; i < 3; i++)
    {
        printf("%s\t\n",studenti[i]);
    }
    


    return 0;
}