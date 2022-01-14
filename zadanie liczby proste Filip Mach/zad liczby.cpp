#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

int main()
{

	int liczby[1000];
	
	fstream plik;
	plik.open("liczby.txt", ios::in);

	int linia = 0;
	while (linia < 1000)
	{
		int liczba;
		plik >> liczba;

		liczby[linia] = liczba;

		linia++;
	}

	plik.close();


	//4.1

	cout << 4.1 << "\n\n";
	
	int ilosc = 0;

	for (int i = 0; i < 1000; i++)
	{

		bool nieparzysta = true;

		if (liczby[i] % 2 == 0)
		{
			nieparzysta = false;
		}

		if (nieparzysta)
		{
			ilosc++;
		}
		 
	}

	cout << "Iloœæ liczb nieparzystych: " << ilosc << "\n\n";
	

	//4.2

	cout << 4.2 << "\n\n";

	for (int i = 0; i < 1000; i++)
	{

		string liczba = to_string(liczby[i]);

		int suma = 0;

		for (int j = 0; j < liczba.size(); j++)
		{
			suma += (int)liczba[j] - 48;
		}

		if (suma == 11)
		{
			cout << liczba << " suma="<< suma << "\n";
		}
		
	}


	//4.3

	cout << 4.3 << "\n\n";
	cout << "Liczby pierwsze z przedzia³u <4000, 5000> to: " << "\n";
		
	for (int i = 0; i < 1000; i++)
	{
		if (liczby[i] >= 4000 && liczby[i] <= 5000)
		{
			 
			bool pierwsza = true;

			for (int k = 2; k < liczby[i]; k++)
			{
				if (liczby[i] % k == 0)
				{
					pierwsza = false;
						break;
				}
			}

			if (pierwsza)
			{
				cout << liczby[i] << "\n";
			}
		}
	}


	return 0;
}




/*	for (int i = 0; i < 1000; i++)
	{

		int suma = 0;
		int liczba = liczby[i];
		
		while (liczba > 0)
		{
	  		suma += liczba % 10;
			liczba = liczba / 10; 
		}
		
		if(suma == 11)
		{
			cout << liczby[i] << " " << suma << "\n";
		}
		
	}
	
	*/
	
