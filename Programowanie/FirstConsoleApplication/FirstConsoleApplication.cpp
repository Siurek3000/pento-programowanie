#define _USE_MATH_DEFINES
#include <iostream>
//Program obliczający pole prostokąta.
void task1()
{
    double sideA, sideB;
    std::cout << "Podaj bok a prostokąta:\n";
    std::cin >> sideA;
    std::cout << "Podaj bok b :\n";
    std::cin >> sideB;
     std::cout << "pole prostokąta wynosi: " << sideA * sideB;

}

int main()
{
    setlocale(LC_CTYPE, "polish");
    //task1();
    //task2();
    //task3();
    //task4();
    //task5();
    //task6()
}
//Program obliczający objętość stożka.

void task2() {

    double height;
    double radious;

    std::cout << "Podaj wysokość stożka\n";
    std::cin >> height;
    std::cout << "Podaj promień stożka\n";
    std::cin >> radious;

    std::cout << "Objętość stożka wynosi:" << (1.0 / 3) * M_PI * (radious * radious) * height;
    


    

}

//Program obliczający pole koła
void task3() {
    double radious;

    std::cout<< "Podaj promień koła\n";
    std::cin >> radious;

    std::cout << "Pole koła wynosi:" << M_PI * (radious * radious);

    




}

//Program obliczający wartość wyrażenia a^2 + b^2
void task4()
{
    double number1;
    double number2;

    std::cout << "Podaj a\n";
    std::cin >> number1;
    std::cout << "Podaj b\n";
    std::cin >> number2;
    std::cout << "Wyrażenie daje wynik:" << (number1 * number1) + (number2 * number2);

}
//Program obliczający pole trójkąta o podstawie b i wysokości h
void task5()
{
    double theBaseOfTriangle;
    double height;
    
    std::cout << "Podaj podstawe trójkąta:";
    std::cin >> theBaseOfTriangle;
    std::cout << "Podaj wysokość trójkąta";
    std::cin >> height;
    std::cout << "Pole trójkata wynosi:" << (theBaseOfTriangle * height) / 2;


    
}
//Program obliczający objętość kuli o promieniu r
void task6()
{
    double radious;

    std::cout << "Podaj promień kuli:";
    std::cin >> radious;
    std::cout << "Objętość kuli wynosi:" << (4.0 / 3) * M_PI * pow(radious, 3);






}
//Program obliczający pole trapezu o podstawach a i b oraz wysokości h
void task7()
{
    double base1;
    double base2;
    double height;
        
    std::cout << "Podaj pierwszą podstawe";
    std::cin >> base1;
    std::cout << "Podaj drugą podstawe";
    std::cin >> base2:
    std::cout << "Podaj wysokość"
    std::cin >> height
    std::cout << "Pole trapezu wynosi" 








}
