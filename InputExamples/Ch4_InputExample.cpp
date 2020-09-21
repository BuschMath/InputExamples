#include <iostream>
#include <string>

using namespace std;

int main()
{
	char age, a;
	cout << "What is your age: ";
	cin.get(age);
	cin >> a;

	cout << endl << "The age you entered is: " << age << endl << a;

	int b;
	
	cin >> b;

	cout << endl << b;

	return 0;
}