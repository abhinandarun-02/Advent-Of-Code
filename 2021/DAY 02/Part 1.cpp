#include <iostream>
using namespace std;

int main()
{

    int n;
    string str;

    int x(0), y(0);

    while (cin >> str)
    {
        cin >> n;

        if (str == "forward")
        {
            x += n;
        }
        else if (str == "up")
        {
            y -= n;
        }
        else if (str == "down")
        {
            y += n;
        }
    }

    cout << x * y;

    return 0;
}