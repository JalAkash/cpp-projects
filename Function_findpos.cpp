#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main()
{
	int findpos(char a[], char y);
	char a[80], y, c;

	cout << "Enter a string: ";
	cin.getline(a, 80);

	cout << "Enter a character to be searched for: ";
	cin >> y;

	c = findpos(a, y);

	if(c == 0)
	{
		cout << "Sorry, no such character\n";
	}

	return 0;
}

int findpos(char a[], char y)
{
	int flag = 0;

	for(int i = 0; a[i] != '\0'; i++)
	{
		if(a[i] == y)
		{
			flag = 1;
			cout << "Character is at position " << i + 1 << "\n";
		}
	}
	return (flag);
}



