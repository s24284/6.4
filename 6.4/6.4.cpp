// 6.4.cpp :
//

#include <iostream>
#include <string>

int main()
{
	std::string tekst;
	int ilosc;
	std::string sumawszystkichtekstow;

	
	std::cout << "Podaj mi jakis ciekawy tekst, nie uzywajac spacji:\n";
	std::cin >> tekst;

	do {
		std::cout << "Podaj, ile razy mam dokonać konkatenacji twojego tekstu:\n";
		std::cin >> ilosc;

		if (ilosc <= 0)
		{
			std::cout << "By dokonac konkatenacji, potrzebuje liczby wiekszej od 0. Podaj ja jeszcze raz:\n";
		}
	} 	while (ilosc <= 0);


	for (int i = 0; i <= ilosc; i++)
	{
		sumawszystkichtekstow += tekst;

	}

	std::cout << sumawszystkichtekstow;

		return 0;

}

