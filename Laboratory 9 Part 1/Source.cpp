// Lab 9 Part 1 of 3


#include <iostream>
#include <cstdlib> // for rand and srand functions
#include <ctime> // for time function

using namespace std;

int main() {
    // Initialize the random number generator with the current time
    srand(time(0));

    const int arraySize = 10;
    int randomIntegers[arraySize];

    // Fill the array with 4-digit random integers
    for (int i = 0; i < arraySize; i++) {
        randomIntegers[i] = 1000 + rand() % 9000;
    }

    // Print every element in order of appearance
    cout << "The random integers: ";
    for (int i = 0; i < arraySize; i++) {
        cout << randomIntegers[i] << " ";

    }

    cout << endl;

    // Print every element at an even index
    cout << "Even indices: ";
    for (int i = 0; i < arraySize; i += 2)
    {
        cout << randomIntegers[i] << " ";
    }
    cout << endl;


    // Print every even element
    cout << "Even Values: ";
    for (int i = 0; i < arraySize; i++)
    {
        if (randomIntegers[i] % 2 == 0)
        {
            cout << randomIntegers[i] << " ";
        }

    }
    cout << endl;

    // Print all elements in reverse order
    cout << "Reversed order: ";
    for (int i = arraySize - 1; i >= 0; i--)
    {
        cout << randomIntegers[i] << " ";
    }
    cout << endl;