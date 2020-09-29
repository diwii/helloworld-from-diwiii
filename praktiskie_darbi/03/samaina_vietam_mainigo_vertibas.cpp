/**
 * Doti divi veselie mainīgie ar vērtībām.
 * Jāuzraksta programmu kas nomainītu mainīgo vērtības vietām (a=2, b=3 -> a=3, b=2).
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
        b = 3,
        p; // pagaidu mainīgais, kur saglabāt a vai b vērtību.

    cout << "a: " << a << endl << "b: " << b << endl;

    p = a; // piešķiram p mainīgajam a vērtību
    a = b; // piešķiram a mainīgajam b vērtību
    b = p; // piešķiram b mainīgajam p vērtību

    cout << "a: " << a << endl << "b: " << b << endl;
    
    // system("pause"); Operētājsistēmas specifiska komanda/konstrukcija.
    return 0; // Atgriež operētājsistēmai 0
}