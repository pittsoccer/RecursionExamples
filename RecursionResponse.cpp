
/*
    Recursion
    - When a function calls itself
    - When a problem can be broken down into successive problems that are identical to the overall problem
*/

#include <iostream>
using namespace std;

void response()
{
    static int number = 0; // static makes it retain its value
    cout << ++number << ": Welcome to recursion!" << endl;
    response(); // function is calling itself
}

int main()
{
    response();

return 0;
}
