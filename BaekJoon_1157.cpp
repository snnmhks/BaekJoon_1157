#include <iostream>

using namespace std;

int main()
{
	string world = "";
	cin >> world;

	int data[26] = { 0, };
	int asknum = 0;
	int length = world.length();
	int togle = 0;

	for (int i = 0; i < length; i++)
	{
		asknum = world[i];
		if (asknum >= 97)
		{
			asknum -= 32;
		}
		data[asknum - 65]++;
	}

	int MaxNum = 0;
	int rNum = 0;
	for (int i = 0; i < 26; i++)
	{
		if (data[i] > MaxNum)
		{
			MaxNum = data[i];
			togle = 0;
			rNum = i;
		}
		else if (data[i] == MaxNum)
		{
			togle = 1;
		}
	}

	if (togle == 1)
	{
		cout << "?";
	}
	else if (togle == 0)
	{
		char result = rNum + 65;
		cout << result;
	}
	cout << endl;
	for (int i = 0; i < 26; i++)
	{
		cout << data[i] << " ";
	}
}
