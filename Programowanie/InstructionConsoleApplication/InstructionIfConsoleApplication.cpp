#define _USE_MATH_DEFINES
#include <iostream>

using namespace std;

//Napisz funkcje, która podzieli dwie liczby.

void test()
{
	double firstNumber, secondNumber;

	cout << "Podaj pierwszą liczbę: \n";
	cin >> firstNumber;

	cout << "Podaj drugą liczbę: \n";
	cin >> secondNumber;

	double quotient = firstNumber / secondNumber;

	cout << "wynik dzielenia wynosi: " << quotient << "\n";
}

//Program sprawdzajacy czy podana liczba jest parzysta czy nieparzysta
void task1()
{
	int firstNumber;
	int secoundNumber;

	cout << "Podaj pierwszą liczbę: \n";
	cin >> firstNumber;

	cout << "Podaj drugą liczbę: \n";
	cin >> secoundNumber;

	if (firstNumber % 2 == 1)
	{
		cout << "liczba jest nieparzysta\n";
	}
	else
	{
		cout << "liczba jest parzysta\n";
	}
}

//Program sprawdzający czy podana liczba jest dodatnia, ujemna czy równa zero
void task2()
{
	double numberFromUser;

	cout << "Podaj liczbę do sprawdzenia: \n";
	cin >> numberFromUser;

	if (numberFromUser > 0)
	{
		cout << "liczba jest dodatnia\n";
	}
	else if (numberFromUser == 0)
	{
		cout << "liczba jest równa zero\n";
	}
	else if (numberFromUser < 0)
	{
		cout << "liczba jest ujemna";
	}
}

//Program sprawdzający czy podany rok jest rokiem przestępnym
void task3()
{

	int year;

	cout << "podaj rok do sprawdzenia\n";
	cin >> year;

	if (year % 4 == 0 && year % 100 > 0 || year % 400 == 0)
	{
		cout << "rok jest przestępny \n ";
	}
	else
	{
		cout << "rok jest nieprzystępny";
	}

}

//Program wyświetlający odpowiedni komunikat w zależności od podanej oceny
// (np. "bardzo dobry" dla oceny 5, "dobry" dla oceny 4 itd.)

void task4()
{
	int grade;

	cout << "podaj ocene: ";
	cin >> grade;

	if (grade == 1)
	{
		cout << "ocenia niedostateczna\n";
	}
	else if (grade == 2)
	{
		cout << "ocena dopuszczjąca\n";
	}
	else if (grade == 3)
	{
		cout << "ocenia dostateczna\n";
	}
	else if (grade == 4)
	{
		cout << "ocena dobra\n";
	}
	else if (grade == 5)
	{
		cout << "ocena bardzo dobra\n";
	}
	else if (grade == 6)
	{
		cout << "ocena celująca\n";
	}
	else
	{
		cout << "nie ma takiej oceny";
	}
}

// Program sprawdzający czy podane hasło jest poprawne (np. jeśli hasło jest "abc123",
//  program powinien wyświetlić "hasło poprawne", jeśli jest inne, powinien wyświetlić "hasło niepoprawne").
void task5()
{
	string  password;

	cout << "Podaj hasło: \n";
	cin >> password;

	if (password == "abc123")
	{
		cout << "hasło poprawne";
	}
	else
	{
		cout << "hasło nie poprawne";
	}

}

//Program sprawdzający czy podana data jest poprawna
//(np.sprawdzając, czy dzień jest z zakresu od 1 do 31, miesiąc od 1 do 12 itd.)
void task6()
{
	int day;
	int month;
	int year;

	cout << "Podaj dzień:\n " << endl;
	cin >> day;

	cout << "Podaj miesiąć:\n " << endl;
	cin >> month;

	cout << "Podaj rok:\n " << endl;
	cin >> year;

	if (month >= 1 && month <= 12)
	{
		if (month == 2)
		{
			if (year % 4 == 0 && year % 100 > 0 || year % 400 == 0)
			{
				if (day < 30)
				{
					cout << "data jest poprawna";
				}
				else
				{
					cout << "data jest nie poprawna";
				}

			}
			else if (year % 4 != 0 && year % 100 > 1 || year % 400 != 0)
			{
				if (day < 29) {
					cout << "data jest poprawna";
				}
				else
				{
					cout << "data jest nie poprwana";
				}
			}

		}
		else if ((month == 4 || month == 6 || month == 9 || month == 11) && day >= 1 && day <= 30)
		{
			cout << "data jest poprawna" << endl;
		}
		else if (day >= 1 && day <= 31)
		{
			cout << "data jest nie poprawna" << endl;
		}
		else
		{
			cout << "data jest nie poprawna" << endl;
		}
	}
}

//Program wyświetlający odpowiedni komunikat w zależności od podanej temperatury
// (np. "ciepło" dla temperatury powyżej 20 stopni Celsjusza, "chłodno" dla temperatury poniżej 10 stopni Celsjusza itd.)
void task7()
{
	double temperature;

	cout << "Podaj temperature: \n";
	cin >> temperature;

	if (temperature > 20)
	{
		cout << "Jest ciepło\n";
	}
	else if (temperature < 10)
	{
		cout << "jest chłodno\n";
	}
}

//8. Program sprawdzjący czy podana liczba jest z przediału < 1; 15)
void task8()
{
	double numberFromUser;

	cout << "Podaj liczbę do sprawdzenia: \n";
	cin >> numberFromUser;

	if (numberFromUser >= 1 && numberFromUser < 15)
	{
		cout << "Liczba jest w przedziale \n";
	}
	else
	{
		cout << "liczba nie należy do przedziału";
	}

}

//9. Program sprawdzający czy osoba jest pełnoletnia.
void task9()
{
	int age;

	cout << "podaj wiek do sprawdzenia\n ";
	cin >> age;

	if (age >= 18)
	{
		cout << "osoba jest pełnoletnia";
	}
	else
	{
		cout << "osoba jest niepełnoletnia";
	}

}

//10. Program, który sprawdzi czy z podanych długości boków można zrobić trójkąt.
void task10()
{
	double firstSideOfTriangle, secondSideOfTriangle, thirdSideOfTriangle;

	cout << "podaj pierwszy bok trójkąta: \n";
	cin >> firstSideOfTriangle;

	cout << "podaj drugi bok trójkąta: \n";
	cin >> secondSideOfTriangle;

	cout << "podaj trzeci bok trójkąta: \n";
	cin >> thirdSideOfTriangle;

	if (firstSideOfTriangle + secondSideOfTriangle > thirdSideOfTriangle && secondSideOfTriangle + thirdSideOfTriangle > firstSideOfTriangle
		&& firstSideOfTriangle + thirdSideOfTriangle > secondSideOfTriangle)
	{
		cout << "taki trójkąt istnieje \n";
	}
	else
	{
		cout << "taki trójąt nie istnieje";
	}

}

//11. Napisz program, który będzie działać jako prosty kalkulator matematyczny, umożliwiając użytkownikowi wybór operacji(dodawanie, odejmowanie, mnożenie, dzielenie) i wprowadzanie liczb do obliczeń.
void task11()
{
	int operation;
	double firstNumberFromUser, SecondNumberFromUser;

	cout << "Podaj operacje do wykonania \n 1. Dodawanie\n 2. Odejmowanie\n 3. Mnożenie\n 4.Dzielenie \n";
	cin >> operation;

	cout << "Podaj pierwsza liczbę: ";
	cin >> firstNumberFromUser;

	cout << "Podaj drugą liczbę: ";
	cin >> SecondNumberFromUser;

	if (operation == 1)
	{
		cout << "wynik działania: " << firstNumberFromUser + SecondNumberFromUser;
	}
	else if (operation == 2)
	{
		cout << "wynik działania: " << firstNumberFromUser - SecondNumberFromUser;
	}
	else if (operation == 3)
	{
		cout << "wynik działania: " << firstNumberFromUser * SecondNumberFromUser;
	}
	else if (operation == 4)
	{
		cout << "wynik działania: " << firstNumberFromUser / SecondNumberFromUser;
	}

}

//12. Napisz program, który wczyta numer miesiąca i wyświetli jego słowny odpowiednik.
void task12()
{

	int month;

	cout << "podaj numer miesiąca:";
	cin >> month;

	switch (month)
	{
	case 1:
		cout << "Styczeń";
		break;

	case 2:
		cout << "luty";
		break;

	case 3:
		cout << "marzec";
			break;
	
	case 4:
		cout << "kwiecien";
			break;

	case 5:
		cout << "maj";
		break;

	case 6:
		cout << "czerwiec";
		break;

	case 7:
		cout << "lipiec";
		break;

	case 8:
		cout << "sierpien";
		break;

	case 9:
		cout << "wrzesien";
		break;

	case 10:
		cout << "pazdziernik";
			break;

	case 11:
		cout << "Listopad";
			break;

	case 12:
		cout << "Grudzien";
			break;
		
	default:
		cout << "nie ma takiego miesiaca";




	}
		



}
//13. Napisz program, który na podstawie współczynników równania kwadratowego(a, b, c)
//  sprawdzi, czy to równanie ma rozwiązania rzeczywiste, i jeśli tak, to je obliczy.
void task13()
{
	double a, b, c;

	cout << "podaj liczbe a";
		cin >> a;

	cout << "podaj liczbe b";
		cin >> b;

	cout << "podaj liczbe c";
		cin >> c;

		if (a != 0) {

			double delta = pow(b, 2) - 4 * (a * c);

			if (delta > 0)
			{
				double x1 = (-b - sqrt(delta)) / 2 * a;
				double x2 = (-b + sqrt(delta)) / 2 * a;

				cout << "sa 2 miejsca zerowe" << x1 << "i: " << x2;


			}

			else if (delta == 0)
			{

				double x = -b / 2 * a;
				cout << "miejsce zerowe wynosi" << x;

			}
			else if (delta < 0)
			{
				cout << "rownanie kwadratowe nie posiada rozwiazan w zbiorze rzeczywistym";
			}

		}
		else
		{
			cout << "to nie jest rownanie kwadratowe";
		}

	

}


int main()
{
	setlocale(LC_CTYPE, "polish");

	//test();
	//task1();
	//task2();
	//task3();
	//task4();
	//task5();
	//task6();
	//task7();
	//task8();
	//task9();
	//task10();
	//task11();
	//task12();
	//task13();
}