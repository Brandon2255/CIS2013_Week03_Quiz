#include <iostream>
using namespace std;
int main() {

	

	for  ( int number = 100; number >= 0; number--)
			{
			if (number > 0)
			{
		    cout << number;
			cout << " bottles of beer on the wall ";
			cout << number;
			cout << " bottles of beer ";
			cout << endl;
			cout << " take one down pass it around\n";
			}
			else 
			{
				cout << "No more bottles of beer on the wall, no more bottles of beer";
			}
			}
return 0;
}
			