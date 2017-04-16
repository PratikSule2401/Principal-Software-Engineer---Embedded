#include<iostream>
using namespace std;
int main(void)
{
	int a, n, first = 0, second=1;
	bool div3 = false, div5 = false, div15 = false, prime = false;
	cout << "Enter a value for n:";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int temp = first + second;
		if (first % 3 == 0 && first != 0)
		{
			cout << "Buzz" << "\t";
			div3 = true;
		}
		if (first % 5 == 0 && first != 0)
		{
			cout << "Fizz" << "\t";
			div5 = true;
		}
		if (first % 15 == 0 && first != 0)
		{
			cout << "FizzBuzz" << "\t";
			div15 = true;
		}
		for (int j = 2; j < first; j++)
		{
			if (first % j == 0)
				break;
			else
				prime = true;
		}
		if (first == 2)
		{
			prime = true;
		}
		if(prime == true)
			cout << "BuzzFizz" << "\t";
		if (!div3 && !div5 && !div15 && !prime)
			cout << first <<"\t";
		first = second;
		second = temp;
		div3 = false;
		div5 = false;
		div15 = false;
		prime = false;
	}
	return 0;
}