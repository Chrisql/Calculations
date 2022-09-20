#include <iostream>
using namespace std;

// These are some of the variable used througout the calculator
string x, calcPicker, choose, functionPicker, pick, pickFuncMD, pickFuncAS;
int endProgram;

// Getting usename function
void gettingUser() {
	int allNumbers; // need to figure out how to not allow intput of numbers!
	cout << "What is your name ---> ";
	cin >> x;
}

// The addition and subtraction function // Something else is wrong with this function I think 
void addNSub() {
	int addition, subtraction, add1, add2, sub1, sub2;
beginningAS:

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
		cout << "Incorrrect input " << x << " do you want to try again?(yes or no): " << endl;
		cin >> pickFuncAS;

		if (pickFuncAS == "yes") { // nested if statement
			goto beginningAS;
		}
		else if (pickFuncAS == "no") {
			endProgram++;
		}
		else if (pickFuncAS != "yes" || "no") { // If the user user input is still not yes or no does this below
			cout << "Incorrect input " << x << " try again and choose either YES or NO: " << endl;
			if (pickFuncAS == "yes") {
				goto beginningAS;
			}
			else if (pickFuncAS == "no") {
				endProgram++;
			}
		}
	}
}

// The multiplication and division function
void multiplyNDivision() {
	double multi1, multi2, div1, div2;
beginningMD:

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
	else if (choose != "divide" || "multiply") {
		cout << "Incorrrect input " << x << " do you want to try again?(yes or no): " << endl;
		cin >> pickFuncMD;

		if (pickFuncMD == "yes") { // nested if statement
			goto beginningMD;
		}
		else if (pickFuncMD == "no") {
			endProgram++;
		}
		else if (pickFuncMD != "yes" || "no") { // If the user user input is still not yes or no does this below
			cout << "Incorrect input " << x << " try again and choose either YES or NO: " << endl;
			if (pickFuncMD == "yes") {
				goto beginningMD;
			}
			else if (pickFuncMD == "no") {
				endProgram++;
			}
		}
	}
}
// Converting decmial to fractions 
void decimalToFractionConverter() { // This needs to be fixed so that it is able to reduce farctions

	double decimalNumber;

	cout << x << " what is the decimal number? ---> " << endl;
	cin >> decimalNumber;

	if (decimalNumber <= 0.9 || decimalNumber < 0) {
		decimalNumber = decimalNumber * 10;

		cout << x << " your decimal converted into a fraction is ---> " << endl;
		cout << decimalNumber << "/" << 1*10 << endl;
	}
}

// All the functions put together in order to run the program
void simpleCalculator() {
	int questionAsker = 0;
beginningProgram:
	cout << x << " convert decimal to fraction calculator(cd), simple add, divide, multiply, and subtract calculator(sc)?" << endl;
	cin >> calcPicker;

	if (calcPicker == "sc") {
		cout << x << " would you like to use addition/subtraction or multiplication/division(as or md)? ---> ";
		cin >> functionPicker;

		if (functionPicker == "as") {
			addNSub();
			questionAsker++;
		}
		else if (functionPicker == "md") {
			multiplyNDivision();
			questionAsker++;

		}
		else if (functionPicker != "as" || "md") { //checking to make sure that the input is correct
			cout << "Incorrect input " << x << " do you want to try again?(yes/no): " << endl;
			cin >> pick;

			if (pick == "yes") {
				goto beginningProgram;
			}
			else if (pick == "no") {
				endProgram++;
			}
			else if (pick != "yes" || "no") { // if user input is still wrong program ends itself
				cout << "Your input is still incorrect " << x << " program ended..." << endl;
				endProgram++;
			}
		}
		else if (functionPicker != "yes" || "no") {
			endProgram++;
		}
	}
	// if the picked choice is cd it goes to decimal fraction converter
		if (calcPicker == "cd") {
		decimalToFractionConverter();
		questionAsker++;
		}

		if (questionAsker == 1) {
			cout << "Do you want to try again?(yes or no): " << endl;
			cin >> pick;
			questionAsker--;
		}
		if (pick == "no") {
			endProgram++;
		}
	
}

// Calling all the functions above
int main() {
	gettingUser();
	
		while (endProgram == 0) {
		simpleCalculator();
	}
	cout << "Calculations are finished " << x << "!";

	return 0;
}
