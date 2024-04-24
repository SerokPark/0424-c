#include <iostream>

using namespace std;

int n1;
int n2;

int intAdd(int n1, int n2)
{
	return n1 + n2;
}

int intSub(int n1, int n2)
{
	return n1 - n2;
}

int intMul(int n1, int n2)
{
	return n1 * n2;
}

float( intDiv(float( n1), float( n2)))
{
	//n1 = (double)n1, n2 = (double)n2;
	return float(n1 / n2);
}

int main()
{
	cout << "insert the num1, num2 : \n";
	cin >> n1 >> n2;

	cout << "Add n1 + n2 is :" << intAdd(n1, n2) << endl;
	cout << "Sub n1 - n2 is :" << intSub(n1, n2) << endl;
	cout << "Mul n1 * n2 is :" << intMul(n1, n2) << endl;
	cout << "Div n1 / n2 is :" << intDiv(n1, n2);



}