#include<iostream>
#include<cstring>
#include<string>
#include<string.h>
#include<stdio.h>

using  std::endl;
using  std::cout;
using  std::cin;

int Palindrom() // проверка на палиндром
{
	cout << "check palindrom" << endl;
	cout << "enter your massage: ";

	int i = 0 ;
	char text[255];
	char normal_text[255];
	cin >> text[i];

	while (text[i] != ';') // ввод текста
	{
		i++; 
		cin >> text[i];
	}
	text[i] = '\0';
	int len = i, j;
	int normal_len = 0;

	char lang_down[26];

	for (i = 0; i < 26; i++) // массив маленьких букв
		lang_down[i] = i + 97;

	char lang_up[26]; // массив больших букв

	for (i = 0; i < 26; i++)
		lang_up[i] = i + 65;

	for (i = 0; i < len; i++) //замена больших букв на маленькие
	{
		for (j = 0; j < 26; j++)
		{
			if (text[i] == lang_up[j])
			{
				text[i] = lang_down[j];
			}
		}
	}

	i = 0;
	while (i < len)  //удаление всех лишних символов
	{
		j = 0;
		while (j < 26)
		{
			if (text[i] == lang_down[j])
			{
				normal_text[normal_len] = text[i];
				normal_len++;
			}
			j++;
		}
		i++;
	}

	//1 cout << normal_text<<endl << normal_len << endl; вывод текста + его длина

	for (int i = 0; i < normal_len / 2; ++i) // проверка на палиндром 
	{
		if (normal_text[i] != normal_text[normal_len - i - 1])
		{
			return false;
		}
	}
	return true;
}

/*
int find_substring(const char* str_for_search_in, const char* substring, int start_position)
{
	
	for (int i = start_position; i < strlen(str_for_search_in) - strlen(substring); i++)
	{
		int j = 0;
		while (j <= strlen(substring))
		{
			if (str_for_search_in[j + i] == substring[j])
			{
				j++;
			}
			else
				break;
		}
		if (j == strlen(substring))
		{
			return i;
		}
	}

	return -1;
} 

int* find_substring2(const char* str_for_search_in, const char* substring)
{
	int res[255];
	int pos = find_substring(str_for_search_in, substring, 0);
	int i = 1;
	while (pos != -1)
	{
		res[i] = pos;
		pos = find_substring(str_for_search_in, substring, pos + 1);
		i++;
	}
	
	res[0] = i + 1;
	return res;
}
*/

int substring(int* number_sub)
{
	cout << "check substring" << endl;
	cout << "enter your massage: ";

	int i = 0;
	char text[255]  , text_sub[255];
	int* pos;

	cin >> text[i];
	while (text[i] != ';') // ввод текста
	{
		i++;
		cin >> text[i];
	}
	text[i] = '\0';
	int len_text = strlen(text);

	cout << "enter your substring: ";
	int j = 0;
	cin >> text_sub[j];

	while (text_sub[j] != ';') // ввод текста
	{
		j++;
		cin >> text_sub[j];
	}
	text_sub[j] = '\0';
	int len_text_sub = strlen(text_sub);
	/*
	pos = find_substring2(text, text_sub);

	for (i = 0; i < len_text - len_text_sub; i++)
	{
		cout << pos[i];
	}
	*/

	int ii  , count = 0;

	
	for (i = 0; i < len_text; i++)
	{
		ii = 0;
		j = 0;
		for (ii ; ii < len_text_sub; ii++)
		{	
			
			if (text[i + j] == text_sub[j])
			{
				count++;
			}
			j++;
			
		}
		if (count == len_text_sub)
		{
			number_sub[i] = i;
			cout << i << endl;
			count = 0;
		}
		else
		{
			count = 0;
		}
		
	}
	
	return *number_sub;
}

int code_caesar()
{
	cout << "code caesa \nrenter text: ";
	int i = 0;
	char text[255];

	cin.getline(text, 256, ';');

	int len = strlen(text);

	cout << "enter shift: ";
	int shift = 0, j = 0;
	cin >> shift;
	
	for (i = 0; i < len; i++)
	{
		cout << text[i];
	}

	for (i = 0; i < len; i++)
	{
		if (text[i] == ' ')
		{

		}
		else
		{
			j = text[i] + shift;
			text[i] = j;
		}
	}

	cout << "your code text: ";
	for (i = 0; i < len; i++)
	{
		cout << text[i];
	}
	cout << endl;

	return 0;
}

int names_in_quotation_marks()
{
	cout << "names_in_quotation_marks: ";
	char text[255];

	cin.getline(text, 256, ';');

	int len_text = strlen(text);

	cout << "your text: ";
	short count = 0;

	for (int i = 0; i < len_text; i++)
	{
		if (text[i] == '"')
		{
			count++;
		}
		if (count == 1)
		{
			if (text[i] == '"')
			{
				i++;
				cout << text[i];
			}
			else
			{
				cout << text[i];
			}
		}
		if (count == 2)
		{
			count = count - 2;
		}
	}

	return 0;
}

void main()
{
	int number_sub[255];
	int exit = 1;
	int num_task = 0;
	while (exit)
	{
		cout << "menu\nTask 1 check palindrom\nTask 2 substring" ;
		cout << "\nTask 3 code caesar\nTask 4 ames in quotation marks\nexit 0 \nenter: ";
		cin >> num_task;
		cout << endl;
		switch (num_task)
		{
		case 0:
			exit = 0;
			break;
		case 1:
			if (Palindrom() == 1)
			{
				cout << "palindrom";
			}
			else
			{
				cout << "no palindrom";
			}
			cout << "\n\n";
			break;
		case 2:
			substring(number_sub);
			cout<< "\n";
			break;
		case 3:
			code_caesar();
			cout << "\n";
			break;
		case 4:
			names_in_quotation_marks();
			cout << "\n";
			break;
		default:
			break;
		}
	}
}