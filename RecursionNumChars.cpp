
#include <iostream>
using namespace std;

// function: numChars
int numChars (string st, char ch, int spot = 0)
{
    if (st.length() == spot)
    {
       return 0;
    }

    if (st[spot] == ch)
    {
        return 1 + numChars(st, ch, spot + 1);
    }
    else
    {
        return numChars(st, ch, spot + 1);
    }
}

int main()
{
    string st = "caccbdcabbaccdac";
    char ch = 'c';

    cout << numChars(st, ch, 0) << endl;

return 0;
}
