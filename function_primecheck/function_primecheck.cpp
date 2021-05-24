// function_primecheck.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void line();
void prime_chk(int);

int main()
{
    int number;
    line();
    cout << "\n\nPrime Check \n";
    line();
    cout << "\nEnter a number : ";
    cin >> number;
    prime_chk(number);

    cout << "\n\n";
    return 0;
}

void line()
{
    cout << "\n";

    for (int i = 0; i < 50; i++)
    {
        cout << "*";
    }
    cout << "\n";
}

void prime_chk(int n)
{
    int d = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {

        }
    }
}



