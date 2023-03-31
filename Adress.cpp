/*Ataberk Turk ATAG - 2015915
I read and accept the submission rules and the extra rules specified in each question. This is my own work that
is done by myself only*/
#include"Adress.h"
#include<iostream>

using std::cin;
using std::cout;

int main() {
	Adress A1;
	Adress A2;
	Adress A3;
	Adress A4;
	char a[2];
	int opSelect = 0;
	int Decider;
	cout << "CNG 242 Assignment 3 \n Ataberk Türk ATAG - 2015915 \n Welcome to my solution for Assignment 3\n";
	cout << "---------------------------------------------------------------------------------\n";
	cout << "For A1:\nPlease enter Adress in Hexadecimal,separated with ':' every 4 digits:";
	cin >> A1;
	cout << "---------------------------------------------------------------------------------\n\n";
	cout << "---------------------------------------------------------------------------------\n";
	cout << "For A2:\nPlease enter Adress in Hexadecimal,separated with ':' every 4 digits:";
	cin >> A2;
	cout << "---------------------------------------------------------------------------------\n\n";
	cout << "---------------------------------------------------------------------------------\n";
	A1.UserInterface();
	cout << "\nPlease Select:";
	cin >> a;
	if (a[0] == 'a' || a[0] == 'b') {
		opSelect = int(a[0]);
	}
	else if (a[1] == '0' || a[1] == '1' || a[1] == '2' || a[1] == '3' || a[1] == '4' || a[1] == '5') {
		opSelect = a[0] - '0';
		opSelect += (a[1] - '0') + 9;
	}
	else {
		opSelect = a[0] - '0';
	}
	while (opSelect != 0) {
		switch (opSelect) {
		case 97:
			cout << "\nEnter new A1:";
			cin >> A1;
			break;
		case 98:
			cout << "\nEnter new A2:";
			cin >> A2;
			break;
		case 1:
			cout << "\nPlease enter 1 for A1, 2 for A2: ";
			cin >> Decider;
			if (Decider == 1) {
				cout << "\nClassification for A1 is:";
				(~A1);
			}
			else if (Decider == 2) {
				cout << "\nClassification for A1 is:";
				(~A2);
			}
			break;
		case 2:
			cout << "\nPlease enter 1 for A1, 2 for A2: ";
			cin >> Decider;
			if (Decider == 1) {
				cout << "\nTLA ID of A1:";
				(!A1);
			}
			else if (Decider == 2) {
				cout << "\nTLA ID of A2:";
				(!A2);
			}
			break;
		case 3:
			cout << "\nPlease enter 1 for A1, 2 for A2: ";
			cin >> Decider;
			if (Decider == 1) {
				cout << "\nNLA ID of A1:";
				(++A1);
			}
			else if (Decider == 2) {
				cout << "\nNLA ID of A2:";
				(++A2);
			}
			break;
		case 4:
			cout << "\nPlease enter 1 for A1, 2 for A2: ";
			cin >> Decider;
			if (Decider == 1) {
				cout << "\nSLA ID of A1:";
				(&A1);
			}
			else if (Decider == 2) {
				cout << "\nSLA ID of A2:";
				(&A2);
			}
			break;
		case 5:
			A3 = A1 + A2;
			cout << A3;
			break;
		case 6:
			A3 = A1 * A2;
			cout << A3;
			break;
		case 7:
			A3 = A1 - A2;
			cout << A3;
			break;
		case 8:
			A3 = A1 / A2;
			cout << A3;
			break;
		case 9:
			A3 = A1 % A2;
			cout << A3;
			break;
		case 10:
			A3 = A1 ^ A2;
			cout << A3;
			break;
		case 11:
			cout << "\nCreating new object (A4)!";
			cout << "\nA4 is created";
			cout << "\n\nContents of A4\n\n";
			cout << A4;
			cout << "\n\nContents of A1\n\n";
			cout << A1;
			cout << "\n\nAfter A3=A1\n";
			A4 = A1;
			cout << "Contents of A3\n\n";
			cout << A4;
			cout << "\n\nContents of A1\n\n";
			cout << A1;
			break;
		case 12:
			A1 == A2;
			break;
		case 13:
			A1 != A2;
			break;
		case 14:
			cout << "\nPlease enter 1 for A1, 2 for A2: ";
			cin >> Decider;
			if (Decider == 1) {
				cout << A1;
			}
			else if (Decider == 2) {
				cout << A2;
			}
			break;
		case 15:
			cout << "\nPlease enter 1 for A1, 2 for A2: ";
			cin >> Decider;
			if (Decider == 1) {
				cin >> A1;
			}
			else if (Decider == 2) {
				cin >> A2;
			}
			break;
		}

		A1.UserInterface();
		cout << "\nPlease Select:";
		cin >> a;
		if (a[0] == 'a' || a[0] == 'b') {
			opSelect = int(a[0]);
		}
		else if (a[1] == '0' || a[1] == '1' || a[1] == '2' || a[1] == '3' || a[1] == '4' || a[1] == '5') {
			opSelect = a[0] - '0';
			opSelect += (a[1] - '0') + 9;
		}
		else {
			opSelect = a[0] - '0';
		}
	}
	return 0;
}

