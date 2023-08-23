/*
* Creator:    Kozlova Elizabeth Paula
*
* Title:      Sorting numbers
*
* Description:
*             Program sorts 3 entered numbers in ascending and descending order.
*/

#include <iostream>
using namespace std;

int main()
{
	float num1, num2, num3;

	cout << "Please, enter 3 numbers: ";
	cin >> num1;
	cin >> num2;
	cin >> num3;

	if ((num1 < num2) && (num2 < num3))
	{
		cout << "Ascending order: " << num1 << "\t" << num2 << "\t" << num3 << endl;
		cout << "Descending order: " << num3 << "\t" << num2 << "\t" << num1 << endl;
	}
	else if ((num1 < num3) && (num3 < num2))
	{
		cout << "Ascending order: " << num1 << "\t" << num3 << "\t" << num2 << endl;
		cout << "Descending order: " << num2 << "\t" << num3 << "\t" << num1 << endl;
	}
	else if ((num2 < num1) && (num1 < num3))
	{
		cout << "Ascending order: " << num2 << "\t" << num1 << "\t" << num3 << endl;
		cout << "Descending order: " << num3 << "\t" << num1 << "\t" << num2 << endl;
	}
	else if ((num2 < num3) && (num3 < num1))
	{
		cout << "Ascending order: " << num2 << "\t" << num3 << "\t" << num1 << endl;
		cout << "Descending order: " << num1 << "\t" << num3 << "\t" << num2 << endl;
	}
	else if ((num3 < num1) && (num1 < num2))
	{
		cout << "Ascending order: " << num3 << "\t" << num1 << "\t" << num2 << endl;
		cout << "Descending order: " << num2 << "\t" << num1 << "\t" << num3 << endl;
	}
	else if ((num3 < num2) && (num2 < num1))
	{
		cout << "Ascending order: " << num3 << "\t" << num2 << "\t" << num1 << endl;
		cout << "Descending order: " << num1 << "\t" << num2 << "\t" << num3 << endl;
	}
	else
		cout << "Please, restart the program and reenter the numbers, because two or more of them are equal.";
	return 0;
}