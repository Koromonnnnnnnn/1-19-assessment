#include <iostream>
#include <string>
using namespace std;

bool Loop = true;

int main()
{
    string preference;

    while (Loop)
    {
        cout << "Which do you prefer: winter or summer?" << endl;
        cin >> preference;
        if (preference == "winter" || preference == "Winter")
        {
            cout << "Nice! Would you want to try sports or just relax?" << endl;
            cin >> preference;
            if (preference == "sports" || preference == "Sports")
            {
                cout << "I suggest skiing" << endl;
                break;
            }
            else if (preference == "relax" || preference == "Relax")
            {
                cout << "I suggest ice fishing" << endl;
                break;
            }
        }
        else if (preference == "summer" || preference == "Summer")
        {
            cout << "Nice! Would you want the bad guys to be aliens or mushrooms?" << endl;
            cin >> preference;
            if (preference == "sports" || preference == "Sports")
            {
                cout << "I suggest swimming" << endl;
                break;
            }
            else if (preference == "relax" || preference == "Relax")
            {
                cout << "I suggest reading by the beach" << endl;
                break;
            }
        }
    }
    return 0;
}