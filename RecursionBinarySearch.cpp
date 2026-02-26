
#include <iostream>
using namespace std;

// constants
const int SIZE = 20;

// functions
int binarySearch(int array[], int first, int last, int key);

int main()
{
    int employee[SIZE] = {100, 111, 122, 133, 144,
                          155, 166, 177, 188, 199,
                          200, 211, 222, 233, 244,
                          255, 266, 277, 288, 299};
    
    int empID = 0;
    int position = 0;

    // search for employee by ID number
    cout << "Search for Employee ID#: ";
    cin >> empID;

    position = binarySearch(employee, 0, SIZE - 1, empID);

    if (position == -1)
    {
     cout << "Not Found" << endl;
    }
    else
    {
        cout << "Found at position: " << position << endl;
    }

return 0;
}

// function: binarySearch
int binarySearch(int array[], int first, int last, int key)
{
    int middle = 0;
    if (first > last)
    {
        return -1;
    }
    
    middle = (first + last) / 2;
    
    if (array[middle] == key)
    {
        return middle;
    }

    if (key > array[middle])
    {
        return binarySearch(array, middle + 1, last, key);
    }
    else
    {
        return binarySearch(array, first, middle - 1, key);
    }
}