
using namespace std;

#include <iostream>

//Program wyświetlający na ekranie kolejne liczby naturalne od 1 do 10
void task1() 
{
	for (int i = 1; i < 11; i++)
	{
		cout << i << "\n";
	}
	
}
// Program obliczający sumę liczb od 1 do 100
void task2()
{
	int suma = 0;
	for (int i = 1; i <= 100; i++)
	{
		suma += i;
	}
	cout << suma;
}
//Program wyświetlający na ekranie kwadraty liczb od 1 do 10 (np. 1, 4, 9, 16 itd.)
void task3()
{
	for (int i = 1; i < 11; i++)
	{
		cout << pow(i, 2) << "\n";
	}
}
//Program obliczający n!
void task4()
{
	int numberFromUser;
	double silnia = 1;

	cout << "podaj liczbe do obliczenia slini: ";
	cin >> numberFromUser;

	for (int i = 1; i <= numberFromUser; i++)
	{
		silnia *= i;
	}
	cout << "silnia wynosi :" << silnia;
}
//Program wyświetlający na ekranie silnie z liczb od 1 do 10 (np. 1!, 2!, 3!, 4! itd.)
void task5()
{
	double silnia = 1;

	for (int i = 1; i <= 10; i++)
	{
		silnia *= i;
		cout << silnia << "\n";
	}

}
void task6()
{
	for (int i = 1; i <= 9; ++i)
	{
		for (int j = 1; j <= 9; ++j)
		{
			cout << i << "x" << j << "=" << i * j << "\t";
		}

	}
}
//Program wyświetlający na ekranie wszystkie liczby podzielne przez 3 z zakresu od 1 do 100
void task7()
{
	cout << "Liczby podzielne przez 3 od 1 do 100:" << endl;

	for (int i = 1; i <= 100; ++i)
	{
		if (i % 3 == 0)
		{
			cout << i << " ";
		}
	}
}
//Program obliczający sumę kwadratów liczb od 1 do 10
void task8()
{
	int suma = 0;

	for (int i = 1; i <= 10; ++i)
	{
		suma += i * i;
	}
	cout << "Suma kwadratów licz od 1 do 10 wynosi:" << suma << endl;
}
// Program wyświetlający na ekranie ciąg Fibonacciego do 20 elementu (ciąg Fibonacciego to ciąg gdzie każdy element jest sumą dwóch poprzednich, np. 0, 1, 1, 2, 3, 5, 8, 13 itd.)
void task9()
{
	int pierwszy = 0, drugi = 1, nastepny;

	cout << "Ciąg Fibonacciego do 20 elementu:" << endl;

	cout << pierwszy << " " << drugi << " ";

	for (int i = 3; i <= 20; ++i)
	{
		nastepny = pierwszy + drugi;
		cout << nastepny << " ";
		pierwszy = drugi;
		drugi = pierwszy;
	}
}






int main()
{
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
}


