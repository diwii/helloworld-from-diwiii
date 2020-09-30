/**
 * Doti trīs veselie skaitļi h, m, s.
 * Atrodiet leņķi (grādos) starp stundu bultiņu pusnaktī un stundu bultiņu laika momentā h:m:s.
**/

#include <iostream> // Input/Output plūsmas atbalsts
using namespace std; // Izmantot nosaukumus no C++ standarta bibliotēkas

/*
 * Galvenā programmas funkcija
 * int nozīmē ka programma atgriezīs operetājsistēmai veselo skaitli.
*/
int main() // Galvenā programmas funkcija
{

    int h, m, g;
    double s;

    cout << "h:m:s: " << endl;
    cin >> h >> m >> s;

    h = h * 3600; // Pārveidoju stundas -> sekundēs
    m = m * 60; // Pārveidoju minūtes -> sekundēs
    s = h + m + s; // Saskaitu kopā sekundes

    // 12h * 60min * 60s = 43200 sekundes
    // 43200sek / 360gradi = 120sek = 1grads
    s = s / 120.0; // Total sekundes dala ar 120 sekundēm, iegūst grādus, jo 1 grāds = 120sek.

    cout << "gradi: " << s << endl;
    
    // system("pause"); Operētājsistēmas specifiska komanda/konstrukcija.
    return 0; // Atgriež operētājsistēmai 0
}
/**
 * Piezīmes:
 * 
 * 1h = 60min * 60sek = 3600sek
 * 12h = 12h * 3600sek = 43200sek
 * 12h = 360gradi
 * 1h = 360gradi / 12h = 30gradi
 * 43200sek = 360gradi
 * 1 grads = 43200 / 360gradi = 120 sekundes
 * 
 * 1 min = 6 grādi
 * 1h = 5min = 30 grādi
 **/
    