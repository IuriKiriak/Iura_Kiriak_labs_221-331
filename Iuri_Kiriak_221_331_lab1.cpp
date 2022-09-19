#include<iostream>
#include<limits.h>
#include<bitset>
using namespace std;
int main()
{
	
	setlocale(LC_ALL, "Rus");

	cout << "\t\t\t\t\t\t\t№1\n\n";

	cout << "\t\t\t\t\tКирияк Юрий Анатольевич, 221-331\n\n";


	cout << "\t\t\t\t\t\t\t№2\n\n";

	cout << "\t\t\tint min: " << INT_MIN << " , int max: " << INT_MAX <<" , size of int: " << sizeof(int) <<endl;
	
	unsigned int a1;

	cout << "\t\t\tmin unsigned int: -" << " , max unsigned int: " << UINT_MAX << " , size of unsigned int: " << sizeof(a1) <<endl;

	cout << "\t\t\tmin short: " << SHRT_MIN << " , max short: " << SHRT_MAX << " , size of short: " << sizeof(short) << endl;

	unsigned short b1;
	cout << "\t\t\tmin unsigned short: -" << " , max unsigned short: " << USHRT_MAX << " , size of short: " << sizeof(b1) << endl;

	cout << "\t\t\tmin long: " << LONG_MIN << " , max long: " << LONG_MAX << " , size of long: " << sizeof(long) << endl;

	cout << "\t\t\tmin long long: " << LLONG_MIN << " , max long long: " << LLONG_MAX << " , size of long long: " << sizeof(long long) <<endl;

	cout << "\t\t\tmin double: - 308 (15 знаков) " << " , max double: 1,7E +" << " , size of double: " << sizeof(double) <<endl;

	cout << "\t\t\tmin char: " << CHAR_MIN << ", max char: " << CHAR_MAX << " , size of char: " << sizeof(char) << endl;

	cout << "\t\t\tmin bool: false or 0 " << "max bool: true or 1" << " , size of bool: " << sizeof(bool) << endl;


	cout << "\t\t\t\t\t\t\t№3\n\n";
	
	cout << "\t\t\tВведите целое число число: ";
	int ver;
	cin >> ver;
	cout << "\t\t\tв бинаром виде: " << bitset<8 * sizeof(ver)>(ver) << endl;
	cout << "\t\t\tв шестнадцатиричном виде: " << hex << ver << endl;
	cout << "\t\t\tbool: " << bool(ver) << endl;
	cout << "\t\t\tdouble: " << double(ver) << endl;
	cout << "\t\t\tcher: " << char(ver) << endl;


	cout << "\t\t\t\t\t\t\t№4\n\n";

	cout << "\t\t\tВведите коэффициенты a * x = b" << endl;

	cout << "\t\t\ta = " ;
	int a, b, x;

	cin >> a;

	cout << "\t\t\tb = " ;

	cin >> b;
	x = b / a;
	cout << "\t\t\tx = " <<b << "/" << a << endl;
	cout << "\t\t\tx = " << x << endl;
	cout << "\t\t\tОтвет: " << x << endl;

	cout << "\t\t\t\t\t\t\t№5\n\n";

	cout << "\t\t\tВведите координаты отрезка на прямой: " << endl;
	cout << "\t\t\tпервая точка: ";
	int ver1, ver2;
	cin >> ver1;
	cout << "\t\t\tвторая точка: ";
	cin >> ver2;
	cout << "\t\t\tСередина отрезка находится в точке с координатой: " << (ver1 + ver2) / 2;


	
}