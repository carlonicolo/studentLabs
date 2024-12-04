/*
Si scriva un programma C che all'interno del main consenta di inizializzare da tastiera un
vettore di interi di lunghezza massima pari a 20.
La lunghezza effettiva della sequenza acquisita è stabilita dall'utente
(ad esempio, acquisendo da tastiera il valore di una variabile n).
Il programma dovrà stampare il vettore, scorrere il vettore e stampare gli elementi del vettore
che hanno un numero pari nella posizione immediatamente precedente alla propria.
Per esempio, se l'utente sceglie di inserire 10 valori,
avendo letto in input e memorizzato nell'array i seguenti interi: 1 2 3 4 5 6 7 8 9 0
Il programma produrrà il seguente output:
1 2 3 4 5 6 7 8 9 0
3 5 7 9
*/

#include <stdio.h>

int main()
{

    // Acquisisco la grandezza del array da parte del utente

    int grandezza;

    int check = 1;

    printf("Inserisci il numero di massima grandezza dell'array che intendi creare : ");
    scanf("%d", &grandezza);
    if (grandezza > 20)
    {
        printf("L'array può essere grande al massimo di 20\n ");
    }
    else
    {
        printf("Cominciamo!\n");
    }

    int array[grandezza];

    // Chiedo di inserire i valori al utente e li inserisco nel array

    for (int i = 0; i <= grandezza-1; i++)
    {
        printf("Inserisci il %d° valore :", i);
        scanf("%d", &array[i]);
    }

    for (int j = 0; j <= grandezza-1; j++)
    {

        int c = array[j];
        if (array[j] % 2 == 0)
        {
            printf("%d - ", c);
        }
    }

    return 0;
}
