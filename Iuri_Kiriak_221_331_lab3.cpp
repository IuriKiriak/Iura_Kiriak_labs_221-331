#include <iostream>

using std::cin;
using std::endl;
using std::cout;

void task_1(int arra_number[], int size_number) //array_number
{
	short n;
	for (int i = 0; i < size_number; i++)
	{
		for (int j = 0; j < size_number - i - 1;j++)
		{
			if (arra_number[j] > arra_number[j + 1])
			{
				n = arra_number[j];
				arra_number[j] = arra_number[j + 1];
				arra_number[j + 1] = n;
				
			}
		}
	}
	for (int x = 0; x < size_number; x++)
	{
		cout << arra_number[x]<< " ";
	}
}

void task_2(char* arra_letter, int size_letter) //array_letter
{
	int const array_size = 26;
	int count[array_size] , j ;
	for (int i = 0; i < size_letter; i++)
	{
		j = int(arra_letter[i] - 'a');
		count[j]++;
	}
	int i = 0;
	while (j < array_size)
	{
		if (count[j] > 0)
		{
			arra_letter[i] = char(int('a') + j);
			i++;
			count[j]--;
		}
		else
		{
			j++;
		}
	}
	for (int x = 0; x < size_letter; x++)
	{
		cout << arra_letter[x] << " ";
	}
}
void task_3()
{

}

void arr_number(int arra_number[], int size_number)
{
	short number = 0;
	
	for (int i = 0; i < size_number; i++)
	{
		cout << "number " << ++number << ": ";
		cin >> arra_number[i];
	}
	for (int x = 0; x < size_number; x++)
	{
		cout << arra_number[x]<< endl;
	}
}
void arr_letter(char* arra_letter, int size_letter)
{
	short number = 0;
	for (int i = 0; i < size_letter; i++)
	{
		cout << "letter " << ++number << ": ";
		cin >> arra_letter[i];
	}
	for (int x = 0; x < size_letter; x++)
	{
		cout << arra_letter[x] << " ";
	}
}

int main()
{
	int arra_number[1000];
	int size_number  , size_letter ;
	char arra_letter[1000];

	while (1)
	{

		cout << "menu:\nenter number array = 0\nenter letter array = 1\nbubble sorting - 2\nsorting by counting - 3\nmerge sorting - 4" << endl;
		cout << "enter number task: " << endl;
		short number;
		cin >> number;
		switch (number)
		{
		case 0:
			cout << "enter size number: ";
			cin >> size_number;
			arr_number(arra_number, size_number);
			break;
		case 1:
			cout << "enter size letter: ";
			cin >> size_letter;
			arr_letter(arra_letter, size_letter);
			break;
		case 2:
			task_1(arra_number , size_number);
			break;
		case 3:
			task_2(arra_letter , size_letter);
			break;
		case 4:
			task_3();
			break;
		default:
			cout << "\nerror: there is no such task \n\nexit program \n";
			return 0;
		}
	}
}