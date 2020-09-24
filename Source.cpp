 #include <iostream>
#include<iomanip>

using namespace std;
ostream& man1(ostream& stream)

{

	cout << "message output ";
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
	

	cout <<10<<"/t"<<man2<<man1;
	return 0;
	
	system("pause");
}

