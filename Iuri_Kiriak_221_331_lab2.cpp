#include<iostream>
#include<limits.h>

using  std::endl;
using  std::cout;
using  std::cin;

void task1()
{
	int i, ver , j;

	cin >> ver;
	for (i = 0; i < ver; i++) 
	{
		for (j = 0; j < i; j++)
		{
			cout << j;
		}
		cout << endl;
	}
}



int main()
{

	while (true)
	{

		int x;
		cout << "       <menu> \n Number Triangle enter 1 \n Finding binomial coefficients enter 2 \n Average calculation enter 3 \n exit enter 4" << endl;
		cin >> x;
		
		switch (x)
		{
		case 1:
			task1();
			break;
		default:
			return 0;
		}
	}


}