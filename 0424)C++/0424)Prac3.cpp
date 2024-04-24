#include <iostream>
using namespace std;

void main()
{
	string ArrayCity[5] = { "Korea", "Japan","USA", "England", "Franch" };
	int arraySize = sizeof(ArrayCity) / sizeof(ArrayCity[0]);


	string str;
	cout << "Insert the City or List : \n";
	cin >> str;

	if (str == "list")
	{
		for (int i = 0; i < arraySize; i++)
		{
		 cout << ArrayCity[i] << endl;
		}
	}
	else
	{
		for (int i = 0; i < arraySize; i++)
		{
			if (str == ArrayCity[i])
			{
				cout << "index is " << i << " and city is" << ArrayCity[i] << endl;
				break;

			}
			else
			{
				cout << "404 Not Found" << endl;
				break;
			}
		}
	}
	
		
}