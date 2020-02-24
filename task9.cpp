//A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
//
//	a2 + b2 = c2
//	For example, 32 + 42 = 9 + 16 = 25 = 52.
//
//	There exists exactly one Pythagorean triplet for which a + b + c = 1000.
//	Find the product abc.
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	
	for (size_t a = 0; a < 1000; a++)
	{
		for (size_t b = a+1; b < 1000; b++)
		{
			for (size_t c = b+1; c < 1000; c++)
			{
				if (pow(a, 2) + pow(b, 2) == pow(c, 2) && a + b + c ==1000)
				{
					cout << a << "\n" << b << "\n" << c << "\n";
					cout << a * b * c<<endl;
				}
			}
		}
	}

	system("pause");
	return 0;
}