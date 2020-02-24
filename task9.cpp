
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout<<"Тройка Пифагора - три натуральных числа a < b < c, для которых выполняется равенство a2 + b2 = c2		Существует только одна тройка Пифагора, для которой a + b + c = 1000.		Найдите произведение abc.";
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