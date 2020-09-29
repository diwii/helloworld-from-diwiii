/**
 * Dots skaitlis x. Aprēķināt x^4.
 * Dots skaitlis x. Aprēķināt x^7 izmantojot 4 reizināšanas operācijas.
 * Dots skaitlis x. Aprēķināt x^13 izmantojot 5 reizināšanas operācijas.
 * Dots naturāls skaitlis. Izvadiet tā pēdējo ciparu.
 * Dots divzīmju skaitlis. Atrodiet tā desmitnieku skaitu.
**/

#include <iostream> // Input/Output plūsmas atbalsts
using namespace std; // Izmantot nosaukumus no C++ standarta bibliotēkas

/*
 * Galvenā programmas funkcija
 * int nozīmē ka programma atgriezīs operetājsistēmai veselo skaitli.
*/
int main() // Galvenā programmas funkcija
{
    int x = 2; // x^1
    int x2 = x*x; // x^2
    int x3 = x*x*x; // x^3
    int x6 = x3*x3; // x^6

    cout << "x^4: " << x2*x2 << endl // 2 reizināšanas
         << "x^7: " << x6*x << endl // 4 reizināšanas
         << "x^13: " << x6*x6*x << endl; // 5 reizināšanas | x^6 * x^6 * x^1 = x^13

    int a;

    cout << "Ievadiet naturālu skaitli:" << endl;
    cin >> a;

    int vieni = a % 10;
    int desmiti = (a % 100 - vieni)/10;

    cout << "Pēdējais cipars: " << vieni << endl; // "%" modulo - atlikuma saņemšanas operators no veselu skaitļu dalīšanas.
    cout << "Desmitu skaits: " << desmiti % 100 << endl; // dalot ar 100 atlkumā būs 2 ciparu skaitlis
    
    // system("pause"); Operētājsistēmas specifiska komanda/konstrukcija.
    return 0; // Atgriež operētājsistēmai 0
}