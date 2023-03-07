#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void fun1();
void fun2();
void fun3();
void fun4();

int main()
{
    fun1();
    fun2();
    fun3();
    fun4();
}

void fun4() // Zgadywanie liczb
{
    unsigned int liczba_zapytan = 0, liczba_aktualnie_zgadywana = 500000, przedzial_lewo = 0, przedzial_prawo= 1000000, roznica_zgadywania = 500000;
    char znak_od_uzytkownika = ' ';

    while(znak_od_uzytkownika != 'y'){


        cout << "Czy liczba ktora pomyslales to " << liczba_aktualnie_zgadywana <<" ?\nWprowadz znak:\n| 'y' - liczba jest rowna | 'b' - liczba jest wieksza | 'y' - liczba jest mniejsza |";
        cin >> znak_od_uzytkownika;
        if(znak_od_uzytkownika == 'b'){
            przedzial_lewo = liczba_aktualnie_zgadywana;
            liczba_aktualnie_zgadywana += (unsigned int)((przedzial_prawo + 1 - przedzial_lewo) / 2 );
        }
        else if(znak_od_uzytkownika == 's'){
            przedzial_prawo = liczba_aktualnie_zgadywana;
            liczba_aktualnie_zgadywana -= (unsigned int)((przedzial_prawo + 1 - przedzial_lewo) / 2);

        }
        liczba_zapytan++;
    }
    cout << "Pomyslana liczba to: " << liczba_aktualnie_zgadywana << ", odgadnieto po " << liczba_zapytan << " razach";
}
void fun1(){ //BMI
    int x, y;
    cout << "Podaj wage w kilogramach i wzrost w metrach. " << endl;
    cin >> x >> y;
    cout << "BMI wynosi: " << x / (y * x) << endl;
}
void fun2(int x, int y, int z){ // Slupki zlozone z gwiazdek
    int max;
    if(x >= y && x >= z)
        max = x;
    if(y >= z && y >= x)
        max = y;
    if(z >= y && z >= x)
        max = z;
    int r1 = max - x, r2 = max - y, r3 = max - z;
    for(int j = max; j >= 0; j--){
        if(r1-->=0)cout << ' ';else cout << '*';
        if(r2-->=0)cout << ' ';else cout << '*';
        if(r3-->=0)cout << ' ';else cout << '*';
        cout << "\n";
    }


}
void fun3(){ // Najwieksza suma cyfr liczby z danych liczb

    int x = 0, suma = 0;
    int max_x = 0, max_suma = 0;
    int rozklad = 0;
    do{
        suma = 0;
        cout << "enter a natural number (0 if done): ";
        cin >> x;
        rozklad = x;
        while(rozklad!=0){
            suma+=rozklad%10;
            rozklad/=10;
        }
        if(suma>=max_suma){
            max_suma = suma;
            max_x = x;
        }
    }while(x!=0);
    cout << "\nmax sum of digits was " << max_suma << " for " << max_x << endl;

}
