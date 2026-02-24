    
#include <iostream>
using namespace std;

void message(int number)
{
    if (number > 0)
    {
        cout << "Greetings - Number: " << number << endl;
        message(number - 1);
    }
}

int main()
{
    message(5);

return 0;
}
