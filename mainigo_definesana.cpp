/**
 * Mainīgo Definēšana
**/

#include <iostream> // Input/Output plūsmas atbalsts
using namespace std; // Izmantot nosaukumus no C++ standarta bibliotēkas

/*
 * Galvenā programmas funkcija
 * int nozīmē ka programma atgriezīs operetājsistēmai veselo skaitli.
*/
int main() // Galvenā programmas funkcija
{
    int a = 13/5;
    int b = 13%5;
    int c = 13.0/5;
    double d = 13/5;
    double e = 13%5;
    double f = 13.0/5;
    double g = 13/5 + 2/5;
    double h = 13.0/5 + 2.0/5;
    int i = 13.0/5 + 2.0/5;

    cout << "a: " << a << " <- 'int' datu tips - saglabā veselus skaitļus" << endl
         << "b: " << b << " <- '%' modulo operators saņem dalīšanas atlikumu no veseliem skaitļiem" << endl
         << "c: " << c << " <- '13.0/5 = 2.6', bet tas ir 'int' datu tips un vērtība tiek saglabāta kā vesels skaitlis, nenoapaļots" << endl

         << "d: " << d << " <- '13/5' dalāmais vai dalītājs nav decimālskaitlis" << endl
         << "e: " << e << " <- '%' dalīšanas atlikums no '13/5'" << endl
         << "f: " << f << " <- 'double' datu tips - saglabā decimal daļas, dalāmais ir decimālskaitlis - '13.0'" << endl

         << "g: " << g << " <- dalīšana ar veseliem skaitļiem atgriež veselus skaitļus - '2 + 0'" << endl
         << "h: " << h << " <- dalīšana ar decimālskaitli - '2.6 + 0.4'" << endl
         << "i: " << i << " <- dalīšana ar decimālskaitli, bet dati tiek saglabāti kā veseli skaitļi(int)" << endl;
    
    // system("pause"); Operētājsistēmas specifiska komanda/konstrukcija.
    return 0; // Atgriež operētājsistēmai 0
}