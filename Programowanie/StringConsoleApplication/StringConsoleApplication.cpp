

#include <iostream>
using namespace std;

//Napisz program, który wczyta znak z klawiatury i sprawdzi czy jest to mała litera aldfabetu.
void task1()
{
    char signFromUser;
    //signFromUser = 'a';
    std::cout << "Podaj znak\n";
    std::cin >> signFromUser;

    std::cout << "Podałeś znak " << signFromUser << "\n";

    //if (signFromUser >= 97 && signFromUser <= 122)
    if (signFromUser >= 'a' && signFromUser <= 'z')
        std::cout << "Znak jest małą literą alfabetu\n";
    else
        std::cout << "Znak nie jest małą literą alfabetu\n";

    signFromUser = signFromUser + 2;
    std::cout << "Podałeś znak " << signFromUser << "\n";

    signFromUser = 'a' + 2;
    std::cout << "Podałeś znak " << signFromUser << "\n";
}


//Napisz program, który poprosi cie o twoje imię i cię przywita.
void task2()
{
    std::string userName;
    //userName = "Ala";
    std::cout << "Podaj swoje imię:\n";
    std::cin >> userName;

    std::cout << "Witaj " << userName << " tutaj.\n";
}

//Napisz program, który policzy ile w napisie jest liter 'a'.
void task3()
{
    std::string textFromUser;
    std::cout << "Podaj tekst\n";
    std::cin >> textFromUser;

    //textFromUser = "";
    //textFromUser[0] = 'h';
    //std::cout << textFromUser[1] << "\n";
    //std::cout << textFromUser.length() << "\n"; 
    //if (textFromUser == "Ala")

    int counter = 0;
    for (int i = 0; i < textFromUser.length(); i++)
    {
        if (textFromUser[i] == 'a')
            counter++;
    }

    std::cout << "Małych liter 'a' jest " << counter << "\n";
}

// Poproś użytkownika o wprowadzenie liczby całkowitej w systemie dziesiętnym.
//Następnie skonwertuj tę liczbę na system dwójkowy (binarny) i wyświetl wynik.
void task4()
{
    int number;
    int rest;
    std::string binaryNumber = "";

    std::cout << "Podaj liczbe\n";
    std::cin >> number;

    do
    {
        rest = number % 2;
        if (rest == 0)
            binaryNumber = "0" + binaryNumber;
        else
            binaryNumber = "1" + binaryNumber;
        //std::cout << rest;
        number = number / 2;
    } while (number != 0);

    std::cout << "Liczba binarnie " << binaryNumber << "\n";
}

int main()
{
    //task1();
    //task2();
    //task3();
    //task4();
}

















































