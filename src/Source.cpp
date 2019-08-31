#include <iostream>
#include <string>

using namespace std;

string input;

int main() {
	cout << "This will calculate multiplication by 5s of intergers without multiplication.  No, it has no use." << endl;
	cout << "The max number of bytes of this number is " << input.max_size() << endl;
	cout << "Please input the number to be multiplied by 5: ";
	getline(cin, input);
	cout << endl;
	int finaldigit = input.back() - '0';
	try {
		if (finaldigit % 2) {
			cout << to_string(stoll(input) / 2) << "5" << endl;
		}
		else {
			cout << to_string(stoll(input) / 2) << "0" << endl;
		}
	} catch (invalid_argument& ) {
		cout << "You must input a number..." << endl;
	}
	main();
}