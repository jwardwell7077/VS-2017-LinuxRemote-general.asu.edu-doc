#include <iostream>
#include <string>

using namespace std;

int main()
{
	string anEcho = "";


	cout << "Hello! messages are coming from general.asu.edu" << endl;
	cout << "Enter 'quit' to exit program" << endl;

	do
	{
		cout << "Enter a message: ";
		getline(cin, anEcho);
		cout << "Echo: " + anEcho << endl;

	} while (anEcho != "quit"); //loop until quit is entered

	//System Pause----------------------------------------------------------------
	//A way to pause a console that is compatible with nearly any system
	char pause;
	cout << "Enter any key to exit: ";
	cin >> pause;
	//System Pause----------------------------------------------------------------
	return 0;
}
