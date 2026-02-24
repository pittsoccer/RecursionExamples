
/*
    Fibonacci Sequence
    - Sequence in which each element is the sum of the two elements that precede it
    - Example: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55
*/

#include <iostream>
using namespace std;

int fib (int number)
{
    if (number == 1 || number == 2)
    {
        return 1;
    }
    else
    {
        return fib(number - 2) + fib(number - 1);
    }
}

int main()
{
    int value = 0;
    
    // input value
    cout << "Choose a # to find #th Fibonacci: ";
    cin >> value;
    
    // output value factorial
    cout << "Fibonacci #" << value << " is " << fib(value) << endl;

return 0;
}
