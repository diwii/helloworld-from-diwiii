/**
 * Zinot kuba malu a, aprēķināt kuba tilpumu, tā virsmas laukumu un diagonāles garumu.
**/

#include <iostream> // Input/Output plūsmas atbalsts
using namespace std; // Izmantot nosaukumus no C++ standarta bibliotēkas

/*
 * Galvenā programmas funkcija
 * int nozīmē ka programma atgriezīs operetājsistēmai veselo skaitli.
*/
int main() // Galvenā programmas funkcija
{
    int mala;
    
    cout << "kuba mala:" << endl;
    cin >> mala;

    cout << "Kuba tilpums: " << mala * mala * mala << endl;
    cout << "Virsmas laukums: " << 6 * mala * mala << endl;
    cout << "Kuba diagonāle: " << mala * 1.73205 << endl; // Kvadrātsakne no 3 = 1.73205
    
    // system("pause"); Operētājsistēmas specifiska komanda/konstrukcija.
    return 0; // Atgriež operētājsistēmai 0
}