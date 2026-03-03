
#include <iostream>
using namespace std;

void moveDisks(int numDisks, int fromTower, int targetTower, int spareTower)
{
    static int count = 0;

    if (numDisks > 0)
    {
        moveDisks (numDisks - 1, fromTower, spareTower, targetTower);
        cout << ++count << ": Move disc from tower #" << fromTower << " to tower #" << targetTower << endl;
        moveDisks (numDisks - 1, spareTower, targetTower, fromTower);
    }
}

int main ()
{
    int numDisks = 7;

    moveDisks(numDisks, 1, 3, 2);

return 0;
}
