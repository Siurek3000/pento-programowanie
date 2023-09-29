
#include <iostream>;

using namespace std;

//Napisz funkcje która podzieli dwie liczby

void task1()
{
	double FirstNumber, SecondNumber;
		std::cout << "Podaj pierwszą liczbe:";
		std::cin >> FirstNumber;
		std::cout << "Podaj drugą liczbe:";
		std::cin >> SecondNumber;

		double quotient = FirstNumber / SecondNumber;

		std::cout << "Wynik dzielenia :" << quotient << "\n";
}



int main()
{
	setlocale(LC_CTYPE, "polish");
	
	task1();
}
