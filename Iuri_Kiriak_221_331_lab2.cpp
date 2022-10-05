#include<iostream>

using  std::endl;
using  std::cout;
using  std::cin;

void task_1()
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

void task_2()
{
	int  n;
	double C = 1;
	cin >> n;
	for (int k = 0; k < n; ++k)
	{
		C *= (n - k);
		C /= (k + 1);
		cout << C << " ";
	}
}

int task_3()
{

	int number = 0;
	double ver ,b, sum = 0;

	while (1)
	{
		cout << "enter number " << ++number <<" = "; 
		cin >> ver;
		sum += ver;

		if (ver == 0)
		{
			--number;
			cout <<"calculate: " << sum / number << endl;
			return sum / number;
		}
	}
	

}


int main()
{
	exit:
	while (1)
	{
		cout << "\n";
		int x;
		cout << "       <menu> \nNumber Triangle enter 1\nFinding binomial coefficients enter 2\nAverage calculation enter 3\nexit print 4" << endl;
		cout << "enter: ";
		cin >> x;
		
		switch (x)
		{
		case 1:
			task_1();
			break;
		case 2:
			task_2();
			break;
		case 3:
			task_3();
			break;
		case 4:
			return 0;
		default:
			return 0;
		}
	}
	cout << endl;


}