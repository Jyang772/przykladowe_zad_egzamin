#include <iostream>

/*Wczytywa� liczby, a� do momentu, gdy dwie kolejne liczby b�d� r�wne dwom pierwszym.
Wydrukowa� �redni� arytmetyczn� liczb tego ci�gu
(��cznie z tymi dwiema ostatnimi). Przyj��, �e w ci�gu s� co najmniej 4 liczby. */


using namespace std;

int main()
{
    double x, y, poprzednia, aktualna;
    double suma1 = 0;
    double suma2 = 0;
    int n = 0 ;

    cout << "Podaj dwie liczby " << endl;

    cin >> x >> y;

    cout << "Wczytuj liczby, az do momentu, gdy kolejne liczby beda rowne dwom pierwszym" << endl;
    cin >> aktualna;
      suma1 = x + y + aktualna;
    do
    {

        poprzednia = aktualna;
        cin>> aktualna;
        suma2 += aktualna;
        n++;

    }while( poprzednia != x  ||   aktualna != y   );

    cout << " Srednia arytmetyczna wczytanych liczb jest rowna: " << (suma2 + suma1) / (3 + n);
    return 0;
}
