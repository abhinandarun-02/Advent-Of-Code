#include <iostream>
using namespace std;

int main()
{

	int n;
	string str;

	int x(0), y(0);
	int aim(0);

	while (cin >> str)
	{
		cin >> n;

		if (str == "forward")
		{
			x += n;
			y += aim * n;
		}
		else if (str == "up")
		{
			aim -= n;
		}
		else if (str == "down")
		{
			aim += n;
		}
	}

	cout << x * y;

	return 0;
}