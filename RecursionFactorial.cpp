
#include <iostream>
using namespace std;

int factorial (int number)
{
    if (number == 0)
    {
        return 1;
    }
    else
    {
        return number * factorial(number - 1);
    }
}

int main()
{
    int value = 0;
    
    // input value
    cout << "Choose a # to find #!: ";
    cin >> value;
    
    // output value factorial
    cout << value << "! = " << factorial(value) << endl;

return 0;
}
