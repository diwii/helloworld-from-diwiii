/**
 * Doti divi veselie mainīgie a un b.
 * Jāuzraksta programmu kura nomainītu vietām mainīgo vērtības, neizmantojot papildus mainīgo.
 * 
 * Risinājuma avots: https://www.geeksforgeeks.org/swap-two-numbers-without-using-temporary-variable/
**/

#include <iostream> // Input/Output plūsmas atbalsts
using namespace std; // Izmantot nosaukumus no C++ standarta bibliotēkas

/*
 * Galvenā programmas funkcija
 * int nozīmē ka programma atgriezīs operetājsistēmai veselo skaitli.
*/
int main() // Galvenā programmas funkcija
{
    int a = 2,
        b = 3;

    cout << "Pirms maiņas:" << endl
         << "a: " << a << endl << "b: " << b << endl;

    a = a + b; // a ir abu mainīgo summa (total).
    b = a - b; 
    a = a - b;

    cout << "Apmainīti vietām:" << endl
         << "a: " << a << endl << "b: " << b << endl;
    
    // system("pause"); Operētājsistēmas specifiska komanda/konstrukcija.
    return 0; // Atgriež operētājsistēmai 0
}