/**
 * Vienā blokā nedrīkst vairrākārt definēt mainīgos ar vienādiem nosaukumiem.
 * 
**/

#include <iostream> // Input/Output plūsmas atbalsts
using namespace std; // Izmantot nosaukumus no C++ standarta bibliotēkas

namespace pirma {
    int vertiba = 500; // Mainīgais izveidots iekš namespace
}

/*
 * Galvenā programmas funkcija
 * int nozīmē ka programma atgriezīs operetājsistēmai veselo skaitli.
*/
int main() // Galvenā programmas funkcija
{
    int vertiba = 200; // main() funkcijas bloka lokālais mainīgais.

    cout << vertiba << endl
         << pirma::vertiba << endl; // namespace mainīgajiem var piekļūt ārpus namespace, izmantojot operatoru "::"

    // system("pause"); Operētājsistēmas specifiska komanda/konstrukcija.
    return 0; // Atgriež operētājsistēmai 0
}