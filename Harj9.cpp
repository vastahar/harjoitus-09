// HARJOITUS 9
// Harri Vastamäki
// IIOS14S1

#include <iostream>
using namespace std;

void main()
{
	int luku1;
	cout << "Anna luku1: " << endl;
	cin >> luku1;
	int luku2;
	cout << "Anna luku2: " << endl;
	cin >> luku2;
	int summa, erotus, tulo, jaannos;
	float osamaara;
	summa = luku1 + luku2;
	erotus = luku1 - luku2;
	tulo = luku1 * luku2;
	jaannos = luku1 % luku2;
	osamaara = ((float)luku1 / luku2);

	int valinta;
	cout << "VALIKKO" << endl;
	cout << "1. Summa" << endl;
	cout << "2. Erotus" << endl;
	cout << "3. Tulo" << endl;
	cout << "4. Osamaara" << endl;
	cout << "5. Jakojaannos" << endl;
	cin >> ws >> valinta;
	switch (valinta)
	{
	case 1: cout << summa << endl;
		break;
	case 2: cout << erotus << endl;
		break;
	case 3: cout << tulo << endl;
		break;
	case 4: cout << osamaara << endl;
		break;
	case 5: cout << jaannos << endl;
		break;
	}

}