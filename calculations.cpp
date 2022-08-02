#include <iostream>
using namespace std;
 
string x, choose, functionPicker, pick;
int thing;

// Getting usename function
void gettingUser() {
	cout << "What is your name ---> ";
	cin >> x;
}

// The addition and subtraction function
void addNSub() {
		int addition, subtraction, add1, add2, sub1, sub2;

		// Checking to see if the user wants to add or subtract
		cout << x << " would you like to add or subtract?: " << endl;
		cin >> choose;

		if (choose == "add") {

			cout << "Enter in the first number to add: " << endl;
			cin >> add1;

			cout << "Enter the second number to add: " << endl;
			cin >> add2;

			cout << "Your result is: " << add1 + add2 << endl;
		}

		else if (choose == "subtract") {

			cout << "Enter the first number to subtract: " << endl;
			cin >> sub1;

			cout << "Enter the second number to subtract: " << endl;
			cin >> sub2;

			cout << "Your result is: " << sub1 - sub2 << endl;
		}
		else if (choose != "add" || "subtract") {
			cout << "Incorrect input try again." << endl;
		}
	}

// The multiplication and division function
void multiplyNDivision() {
	double multi1, multi2, div1, div2;

	cout << x << " would you like to multiply or divide?" << endl;
	cin >> choose;

	if (choose == "multiply") {
		cout << "Enter the first number to multiply: " << endl;
		cin >> multi1;

		cout << "Enter the second number to multiply: " << endl;
		cin >> multi2;

		cout << "Your result is: " << multi1 * multi2 << endl;
	}
	else if (choose == "divide") {
		cout << "Enter the first number to divide: " << endl;
		cin >> div1;

		cout << "Enter the second number to divide: " << endl;
		cin >> div2;

		cout << "Your result is: " << div1 / div2 << endl;
	}
}

void runProgram() {
	cout << x << " would you like to use addition/subtraction or multiplication/division(as or md)? ---> ";
	cin >> functionPicker;

	if (functionPicker == "as") {
		addNSub();
	}
	else if (functionPicker == "md") {
		multiplyNDivision();
	}
	cout << x << " do you want to try again?(yes/no): " << endl;
	cin >> pick;

	if (pick == "no"){
		thing++;
	}
}

	// Calling the function below
	int main() {
		gettingUser();

		while (thing == 0) {
			runProgram();
		}
		cout << "Calculations are finished " << x << "!";
}
