//Das nachfolgende Programm gibt die Summe der Zahlen von 1 bis zu der von 
//dem Benutzer eingegebenen Zahl ( n ) aus
#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout << "Bitte geben Sie eine Zahl ein: ";
    cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; i++) 
	{
        sum += i;
    }

    cout << "Die Summe der Zahlen von 1 bis " << n << " ist: " << sum << endl;

    return 0;
}

