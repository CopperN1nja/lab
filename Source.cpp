#include <iostream>
#include<iomanip>


using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int a;
	cout << "введите строку: ";
	cin >> a;
	cout << "Ваша строка: " << a << endl;
	
	cout  << setw(25) << setfill('$') << hex << a; 
}
