// DeQuyTuongHo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
bool isEven(int n);
bool isOdd(int n);
bool isEven(int n)
{
	if (n == 0)
		return true;
	else
		return isOdd(n - 1);
}
bool isOdd(int n)
{
	return !isEven(n);
}
int main()
{
	int n1 = 9;
	bool kq = isEven(n1);
	if (kq == true)
		cout << n1 << " la so chan";
	else
		cout << n1 << " la so le";
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
