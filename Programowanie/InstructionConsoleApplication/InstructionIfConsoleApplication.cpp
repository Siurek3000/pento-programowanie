
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
/*1.
2. Program sprawdzający czy podana liczba jest dodatnia, ujemna czy równa zero
3. Program sprawdzający czy podany rok jest rokiem przestępnym
4. Program wyświetlający odpowiedni komunikat w zależności od podanej oceny(np. "bardzo dobry" dla oceny 5, "dobry" dla oceny 4 itd.)
5. Program sprawdzający czy podane hasło jest poprawne(np.jeśli hasło jest "abc123", program powinien wyświetlić "hasło poprawne", jeśli jest inne, powinien wyświetlić "hasło niepoprawne").
6. Program sprawdzający czy podana data jest poprawna(np.sprawdzając, czy dzień jest z zakresu od 1 do 31, miesiąc od 1 do 12 itd.)
7. Program wyświetlający odpowiedni komunikat w zależności od podanej temperatury(np. "ciepło" dla temperatury powyżej 20 stopni Celsjusza, "chłodno" dla temperatury poniżej 10 stopni Celsjusza itd.)
8. Program sprawdzjący czy podana liczba jest z przediału < 1; 15)
9. Program sprawdzający czy osoba jest pełnoletnia.
10. Program, który sprawdzi czy z podanych długości boków można zrobić trójkąt.
*/


//Program sprawdzający czy podana liczba jest parzysta czy nieparzysta
void task2()
{

}

int main()
{
	setlocale(LC_CTYPE, "polish");

	task1();
	//task1();
	task2();
}
//Napisz funkcję, która podzieli dwie liczby.
void task1()
{
    int firstNumber, secondNumber;

    std::cout << "Podaj pierwszą liczbę:\n";
    std::cin >> firstNumber;
    std::cout << "Podaj drugą liczbę (byle nie zero):\n";
    std::cin >> secondNumber;

    if (secondNumber != 0)
    {
        double quotient = firstNumber / secondNumber;
        std::cout << "Wynik dzielenia: " << quotient << "\n";
    }
    else
    {
        std::cout << "Dzielenie przez zero!!!\n";
    }
}

//Program sprawdzający czy podana liczba jest parzysta czy nieparzysta
void task2()
{

}

int main()
{
    setlocale(LC_CTYPE, "polish");

    //task1();
    //task2();
    //task3()
    //task4()
    //task5()
    //task6()
    //task7()
    //task8()
    //task9()
    //task10()
    //task11()
}

//2. Program sprawdzający czy podana liczba jest dodatnia, ujemna czy równa zero
void task3()
{
    double Number;

    std::cout << "Podaj liczbe do sprawdzenia";
    std::cin >> Number;

    if (Number > 0)
    {
        std::cout << "Liczba jest dodatnia";
    }
    else if (Number < 0)
    {
        std::cout << "Liczba jest ujemna";
    }
    else if (Number = 0)
    {
        std::cout << "Liczba jest równa 0";
    }


       }

//4. Program wyświetlający odpowiedni komunikat w zależności od podanej oceny(np. "bardzo dobry" dla oceny 5, "dobry" dla oceny 4 itd.)
void task5()
{
    double Grade;

    std::cout << "Wpisz ocene";
    std::cin >> Grade;

    if (Grade == 6)

    {
        std::cout << "celujacy";
    }
    else if (Grade == 5)
    {
        std::cout << "Bardzo Dobry";
    }
    else if (Grade == 4)
    {
        std::cout << "Dobry";
    }
    else if (Grade == 3)
    {
        cout << "Dostateczny";
    }
    else if (Grade == 2)
    {
        cout << "Dopuszczający";
    }
    else if (Grade == 1)
    {
        cout << "Niedostateczny";
    }
}
//5. Program sprawdzający czy podane hasło jest poprawne(np.jeśli hasło jest "abc123", program powinien wyświetlić "hasło poprawne", jeśli jest inne, powinien wyświetlić "hasło niepoprawne").

void task6()
{
    string Password;

    cout << "Wpisz hasło";
    cin >> Password;

    if (Password == "abc123")
    {
        cout << "Hasło jest poprawne" ;
    }
    else
    {
        cout << "Hasło jest niepoprawne";
    }
}
//6. Program sprawdzający czy podana data jest poprawna(np.sprawdzając, czy dzień jest z zakresu od 1 do 31, miesiąc od 1 do 12 itd.)

void task7()
{
    double Day;
    double Month;

    cout << "Podaj dzień";
    cin >> Day;
    cout << "Podaj miesiąc";
    cin >> Month;

    if (Day <= 31 && Month <= 12 && Day >= 1 && Month >= 1)
    {
        cout << "Data poprawna ";
    }
    else
    {
        cout << "Data niepoprawna";
    }

}
//7. Program wyświetlający odpowiedni komunikat w zależności od podanej temperatury(np. "ciepło" dla temperatury powyżej 20 stopni Celsjusza, "chłodno" dla temperatury poniżej 10 stopni Celsjusza itd.)

void task8()
{
    double Temp;

    cout << "Podaj Temperatura";
    cin >> Temp;

    if (Temp > 20)
    {
        cout << "Ciepło";
    }
    else if (Temp < 10)
    {
        cout << "Zimno";
    }

}
//8. Program sprawdzjący czy podana liczba jest z przediału < 1; 15)

void task9()
{
    double Number;

    cout << "Podaj liczbe";
    cin >> Number;

    if (Number >= 1 && Number < 15)
    {
        cout << "Należy";
    }
    else {

        cout << "Nie należy";
    }
}
//9. Program sprawdzający czy osoba jest pełnoletnia.

void task10()
{
    double Age;
    
    cout << "Podaj wiek";
     cin >> Age;

     if (Age >= 18)
     {
         cout << "Pełnoletni";
     }
     else 
     {
         cout << "Nie pełnoletni";
     }
}
//10. Program, który sprawdzi czy z podanych długości boków można zrobić trójkąt.

void task11()
{
    
    double SideOfTriangle1;
        double SideOFTriangle2;
        double SideOfTriangle3;

        cout << "Podaj pierwszy bok";
        cin >> SideOfTriangle1;
        cout << "Podaj drugi bok";
        cin >> SideOFTriangle2;
        cout << "Podaj trzeci bok";
        cin >> SideOfTriangle3;

        if (SideOfTriangle1 + SideOFTriangle2 > SideOfTriangle3 && SideOfTriangle1 + SideOfTriangle3 > SideOFTriangle2 && SideOFTriangle2 + SideOfTriangle3 > SideOfTriangle1)
        {
            cout << "Da sie zrobic trojkat";
        }
        else
        {
            cout << "Nie da sie zrobic trojkata";
        }
}