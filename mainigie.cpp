/**
 * Lietotāja ievades datiem jābūt kaut kur saglabātiem
 * Tam kalpo mainīgie
 * Visiem mainīgiem C++ valodā pirms to izmantošanas jābūt nodefinētiem
**/

#include <iostream> // Input/Output plūsmas atbalsts
using namespace std; // Izmantot nosaukumus no C++ standarta bibliotēkas

/*
 * Galvenā programmas funkcija
 * int nozīmē ka programma atgriezīs operetājsistēmai veselo skaitli.
*/
int main() // Galvenā programmas funkcija
{
    cout << "Hello Master Blaster " << "I love C++" << endl; // Nodrošina informācijas izvadi uz ekrānu

    // '<<' atdala izvadāmo informāciju

    double a,b; // Mainīgo definēšana

    cout << "Input a:";
    cin >> a; // Nodrošina ievadi no klaviatūras.
    
    cout << "Input b:";
    cin >> b; // cin, cout ir objektu vārdi.

    // Drīkst arī šādi:
    // cin >> a >> b; // atdalīt mainīgos ar '>>'

    double x = b - a; // Mainīgā definēšana un sākotnējās vērtības piešķiršana.
    cout << "Rezultāts ir: " << x << endl; // endl pārvieto kursoru uz jauno rindiņu.
    
    // system("pause"); Operētājsistēmas specifiska komanda/konstrukcija.
    return 0; // Atgriež operētājsistēmai 0
}