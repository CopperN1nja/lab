 #include <iostream>
#include<iomanip>

using namespace std;
ostream& man1(ostream& stream)

int a;
	cin >> a;
	cout <<a;
	return stream;
}




	ostream& man2(ostream & stream)

{
	

		stream.width(16),

			cout << hex;

		stream.fill('$');
	
		return stream;
}

int main()

{
	

	cout <<man2<<man1;
	return 0;
	
	system("pause");
}

