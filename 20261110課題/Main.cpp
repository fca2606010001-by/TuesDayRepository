#include <iostream>
#include "Enemy.h"
using namespace std;

int main(void)
{
    Enemy enemy1;
    Enemy enemy2;
    Enemy enemy3;
    int target;

    enemy1.ShowStatus();
    enemy2.ShowStatus();
    enemy3.ShowStatus();

    while (enemy1.GetHP() > 0 ||
        enemy2.GetHP() > 0 ||
        enemy3.GetHP() > 0)
    {
        cout << "\nUŒ‚‚·‚é“G‚ð‘I‚ñ‚Å‚­‚¾‚³‚¢ (1`3): ";
        cin >> target;

        switch (target)
        {
        case 1:
            if (enemy1.GetHP() <= 0)
            {
                cout << "“G1‚Í“|‚³‚ê‚Ä‚¢‚é‚½‚ßUŒ‚‚Å‚«‚Ü‚¹‚ñB\n";
                continue;
            }
            enemy1.TakeDamage(30);
            break;

        case 2:
            if (enemy2.GetHP() <= 0)
            {
                cout << "“G2‚Í“|‚³‚ê‚Ä‚¢‚é‚½‚ßUŒ‚‚Å‚«‚Ü‚¹‚ñB\n";
                continue;
            }
            enemy2.TakeDamage(30);
            break;

        case 3:
            if (enemy3.GetHP() <= 0)
            {
                cout << "“G3‚Í“|‚³‚ê‚Ä‚¢‚é‚½‚ßUŒ‚‚Å‚«‚Ü‚¹‚ñB\n";
                continue;
            }
            enemy3.TakeDamage(30);
            break;

        default:
            cout << "1`3‚Ì”Žš‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B\n";
            continue;
        }

        cout << "\n--- “G‚ÌHP ---\n";

        cout << "“G1 ";
        enemy1.ShowStatus();

        cout << "“G2 ";
        enemy2.ShowStatus();

        cout << "“G3 ";
        enemy3.ShowStatus();
    }

    cout << "\n“G‚ð‘S‚Ä“|‚µ‚Ü‚µ‚½I\n";

    return 0;
}