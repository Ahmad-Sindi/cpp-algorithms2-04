/* Algorithm Challenge & Problem Solving
 * 4 - Program to Print All Perfect Numbers from 1 to N
 *
 * A Perfect Number is a number that equals the sum of its proper divisors.
 * Example: 6 → 1 + 2 + 3 = 6
 *          28 → 1 + 2 + 4 + 7 + 14 = 28
 *
 * This program reads a positive integer from the user and prints all
 * perfect numbers within the range from 1 to the entered number.
 */

#include <iostream>
using namespace std;

/*
 * Reads a positive number from the user.
 * Keeps prompting until a valid (positive) number is entered.
 */
int ReadPositiveNumber(string Message)
{
    int Number;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

/*
 * Checks whether a given number is a Perfect Number.
 * A Perfect Number equals the sum of all its proper divisors.
 */
int isPerfectNumber(int Number)
{
    int Sum = 0;
    for (int i = 1; i < Number; i++)
    {
        if (Number % i == 0)
            Sum += i; // Add divisors to the sum
    }
    return Number == Sum; // Return true if the sum equals the number
}

/*
 * Prints all Perfect Numbers from 1 to the given number.
 */
void PrintPerfectNumberFrom1toN(int Number)
{
    for (int i = 1; i <= Number; i++)
    {
        if (isPerfectNumber(i))
        {
            cout << i << endl; // Print each perfect number found
        }
    }
}

int main()
{
    PrintPerfectNumberFrom1toN(ReadPositiveNumber("Please enter Positive Number to check Perfect Number"));
    return 0;
}
