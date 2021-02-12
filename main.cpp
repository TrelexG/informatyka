//zadanie 13 strona 125
#include <iostream>

using namespace std;

int main()
{
   float skok, rekord;
int rekseria,seria;
    cout << "Trening skoku w dal." << endl;
    cout << "Podaj wynik: ";
    cin >> skok;
    rekord = skok;
seria = 1;
rekseria = 0;
    while (skok != 0)
        {
        cout << "Podaj wynik: ";
        cin >> skok ;

        if (skok > rekord)
            {
            rekord = skok;
           seria++;
          if(seria > rekseria)
            {
               rekseria=seria  ;
            }
        }
        else {seria = 0 ;}
    }

    cout << "Rekord wynosi: " << rekord << endl;
 cout << "Rekordowa dlugosc seri to: " << rekseria << endl;

   return 0;
}
