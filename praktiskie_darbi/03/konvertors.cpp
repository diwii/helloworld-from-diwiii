/**
 * Programma pieprasa ātrumu v km/h un pārveido to m/s.
 * Programma pieprasa atzīmes 3 kontroldarbos un aprēķina vidējo balli. 
**/

#include <iostream> // Input/Output plūsmas atbalsts
using namespace std; // Izmantot nosaukumus no C++ standarta bibliotēkas

/*
 * Galvenā programmas funkcija
 * int nozīmē ka programma atgriezīs operetājsistēmai veselo skaitli.
*/
int main() // Galvenā programmas funkcija
{

    int kilometri;
    int metri = 1000;
    double sekundes = 3600;
    
    cout << "km/h:" << endl;
    cin >> kilometri;

    double atbilde = kilometri * metri / sekundes;

    cout << atbilde << endl;
    
    double a, b, c;
    cout << "Ievadiet 3 atzīmes: " << endl;
    cin >> a >> b >> c;

    cout << "Vidējā atzīme ir: " << (a + b + c) / 3.0 << endl;

    // system("pause"); Operētājsistēmas specifiska komanda/konstrukcija.
    return 0; // Atgriež operētājsistēmai 0
}