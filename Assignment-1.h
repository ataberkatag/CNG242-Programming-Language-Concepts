#pragma once
#include <iostream>

using std::ostream;
using std::istream;
using std::cin;
using std::cout;

class Adress
{
private:
	char* Hexadecimal;
	int* Binary;
	//Helper
	int* HexadecimaltoBinary(char* a,int* b) {
		int i = 0, j = 0;

		while (a[i]) {
			if (a[i] == 'A' || a[i] == 'a' || a[i] == 'B' || a[i] == 'b' || a[i] == 'C' || a[i] == 'c' || a[i] == 'D' || a[i] == 'd' || a[i] == 'E' || a[i] == 'e' || a[i] == 'F' || a[i] == 'f' || a[i] >= 0) {
				switch (a[i]) {
				case '0':
					b[j] = 0;
					b[j + 1] = 0;
					b[j + 2] = 0;
					b[j + 3] = 0;
					j = j + 4;
					break;
				case '1':
					b[j] = 0;
					b[j + 1] = 0;
					b[j + 2] = 0;
					b[j + 3] = 1;
					j = j + 4;
					break;
				case '2':
					b[j] = 0;
					b[j + 1] = 0;
					b[j + 2] = 1;
					b[j + 3] = 0;
					j = j + 4;
					break;
				case '3':
					b[j] = 0;
					b[j + 1] = 0;
					b[j + 2] = 1;
					b[j + 3] = 1;
					j = j + 4;
					break;
				case '4':
					b[j] = 0;
					b[j + 1] = 1;
					b[j + 2] = 0;
					b[j + 3] = 0;
					j = j + 4;
					break;
				case '5':
					b[j] = 0;
					b[j + 1] = 1;
					b[j + 2] = 0;
					b[j + 3] = 1;
					j = j + 4;
					break;
				case '6':
					b[j] = 0;
					b[j + 1] = 1;
					b[j + 2] = 1;
					b[j + 3] = 0;
					j = j + 4;
					break;
				case '7':
					b[j] = 0;
					b[j + 1] = 1;
					b[j + 2] = 1;
					b[j + 3] = 1;
					j = j + 4;
					break;
				case '8':
					b[j] = 1;
					b[j + 1] = 0;
					b[j + 2] = 0;
					b[j + 3] = 0;
					j = j + 4;
					break;
				case '9':
					b[j] = 1;
					b[j + 1] = 0;
					b[j + 2] = 0;
					b[j + 3] = 1;
					j = j + 4;
					break;
				case 'A':
					b[j] = 1;
					b[j + 1] = 0;
					b[j + 2] = 1;
					b[j + 3] = 0;
					j = j + 4;
					break;
				case 'B':
					b[j] = 1;
					b[j + 1] = 0;
					b[j + 2] = 1;
					b[j + 3] = 1;
					j = j + 4;
					break;
				case 'C':
					b[j] = 1;
					b[j + 1] = 1;
					b[j + 2] = 0;
					b[j + 3] = 0;
					j = j + 4;
					break;
				case 'D':
					b[j] = 1;
					b[j + 1] = 1;
					b[j + 2] = 0;
					b[j + 3] = 1;
					j = j + 4;
					break;
				case 'E':
					b[j] = 1;
					b[j + 1] = 1;
					b[j + 2] = 1;
					b[j + 3] = 0;
					j = j + 4;
					break;
				case 'F':
					b[j] = 1;
					b[j + 1] = 1;
					b[j + 2] = 1;
					b[j + 3] = 1;
					j = j + 4;
					break;
				}
			}
			i++;
		}
		return b;
	}// HELPER
	//Helper
	int Checker(char* main_Hexa) {
		int decider = 0, i = 0;
		while (main_Hexa[i]) {
			if (strlen(main_Hexa) != 39) {
				cout << "\nInvalid Input! Lenght of the input must be 39 characters!\n";
				decider = 0;
				break;
			}
			if (main_Hexa[i] == 'A' || main_Hexa[i] == 'B' ||  main_Hexa[i] == 'C' ||  main_Hexa[i] == 'D'  || main_Hexa[i] == 'E' ||  main_Hexa[i] == 'F' ||  main_Hexa[i] == ':' || main_Hexa[i] == '0' || main_Hexa[i] == '1' || main_Hexa[i] == '2' || main_Hexa[i] == '3' || main_Hexa[i] == '4' || main_Hexa[i] == '5' || main_Hexa[i] == '6' || main_Hexa[i] == '7' || main_Hexa[i] == '8' || main_Hexa[i] == '9') {
				decider = 1;
			}
			else {
				cout << "\nInvalid Input! Please only use :,0-9,A-F characters!\n";
				decider = 0;
				break;
			}
			i++;
		}

		return decider;
	}//Helper&&Fixer
public:
	//constant constractor
	Adress() {
		int k;
		Hexadecimal = new char[39];
		Binary = new int[127];
		strcpy(Hexadecimal, "default");
		for (k = 0; k < 128; k++) {
			Binary[k] = 0;
		}
	}
	//menu
	void UserInterface() {
		cout << "a. Change Address of A1\nb.Change Address of A2\n1. Print result of classification\n2. Print TLA ID\n3. Print NLA ID\n4. Print SLA ID\n5. Bitwise disjunction\n6. Bitwise conjuction\n7. Bitwise NOR\n8. Bitwise NAND\n9. Bitwise XOR\n10. Bitwsse XNOR\n11.Copy contents of first address to another\n12. Compare if A1 == A2\n13. Compare if A1 != A2\n14. Print Address\n15.Enter an Address\n0. Exit";
	}


	//cout
	friend ostream& operator<<(ostream& o, const Adress& C) {
		int i, k, j = 3;
		cout << "\nHexadecimal:";
		for (i = 0; i < 39; i++) {
			cout << C.Hexadecimal[i];
		}
		k = 15;
		cout << "\n\nBinary:";
		cout << "\nFP,TLA,Res,NLA,SLA\n";
		for (i = 0; i < 64; i++) {
			cout << C.Binary[i];
			if (i == j) {
				if ((j % k == 0) && (i != 63)) {
					cout << ":";
					k += 16;
				}
				else {
					cout << " ";
				}
				j += 4;
			}
			else if ((j - 4) % k == 0) {
				cout << ":";
				k += 16;
			}
		}
		cout << "\nInterface Identifier\n";
		j = 67;
		k = 79;
		for (i = 64; i < 128; i++) {
			cout << C.Binary[i];
			if (i == j) {
				if ((j % k == 0) && (i != 127)) {
					cout << ":";
					k += 16;
				}
				else {
					cout << " ";
				}
				j += 4;
			}
			else if ((j - 4) % k == 0) {
				cout << ":";
				k += 16;
			}
		}
		cout << "\n";
		return o;
	}
	//cin
	friend istream& operator>>(istream& in, Adress& a) {
		int Decider = 0;
		in >> a.Hexadecimal;
		Decider = a.Checker(a.Hexadecimal);
		while (Decider != 1) {
			cout << "Please Re-enter:";
			in >> a.Hexadecimal;
			Decider = a.Checker(a.Hexadecimal);
		}
		a.Binary = a.HexadecimaltoBinary(a.Hexadecimal, a.Binary);
		cout << "Succesfully Created!\n";
		return in;
	}

	//classification
	Adress operator~() {
		if (Binary[0] == 0 && Binary[1] == 0 && Binary[2] == 0) {
			cout << "Anycast\n";
		}
		else if (Binary[0] == 0 && Binary[1] == 0 && Binary[2] == 1) {
			cout << "Unicast\n";
		}
		else if (Hexadecimal[0] > 1 || Hexadecimal[0] <= 4) {
			cout << "Anycast\n";
		}
		else {
			cout << "Multicast\n";
		}
		return *this;
	}
	//TLA ID
	Adress operator!() {
		int i, j ,k;
		cout << "\nHexadecimal:";
		for (i = 0; i < 4; i++) {
			cout << Hexadecimal[i];
		}
		k = 3;
		cout << "\nBinary:";
		for (j = 3; j < 16; j++) {
			cout << Binary[j];
			if (k == j) {
				cout << " ";
				k += 4;
			}
		}
		cout << "\n";
		return *this;
	}
	//NLA ID
	Adress operator++() {
		int i, j, k;
		cout << "\nHexadecimal:";
		for (i = 7; i < 14; i++) {
			if (Hexadecimal[i] == ':') {
				i = i + 1;
			}
			cout << Hexadecimal[i];
		}
		k = 27;
		cout << "\nBinary:";
		for (j = 24; j < 48; j++) {
			cout << Binary[j];
			if (k == j) {
				cout << " ";
				k += 4;
			}
		}
		cout << "\n";
		return *this;
	}
	//SLA ID
	Adress operator&() {
		int i, j, k;
		cout << "\nHexadecimal:";
		for (i = 15; i < 19; i++) {
			if (Hexadecimal[i] == ':') {
				i = i + 1;
			}
			cout << Hexadecimal[i];
		}
		k = 51;
		cout << "\nBinary:";
		for (j = 48; j < 64; j++) {
			cout << Binary[j];
			if (k == j) {
				cout << " ";
				k += 4;
			}
		}
		cout << "\n";
		return *this;
	}
	//disjunction
	friend Adress operator+(const Adress& A, const Adress& B) {
		int i, k; int j = 3;
		Adress C;
		char* main_Hexa;
		main_Hexa = new char[39];
		cout << "\nResult of A1 + A2\n";

		for (i = 0; i < 19; i++) {
			main_Hexa[i] = A.Hexadecimal[i];
		}
		for (k = 19; k < 39; k++) {
			main_Hexa[k] = B.Hexadecimal[k];
		}
		

		strcpy(C.Hexadecimal, main_Hexa);
		C.Binary = C.HexadecimaltoBinary(C.Hexadecimal, C.Binary);
		for (k = 64; k < 128; k++) {
			if (A.Binary[k] == 0 && B.Binary[k] == 0) {
				C.Binary[k] = 0;
			}
			else {
				C.Binary[k] = 1;
			}
		}
		return C;
	}
	//conjunction
	friend Adress operator*(const Adress& A, const Adress& B) {
		int i, k; int j = 3;
		Adress C;
		char* main_Hexa;
		main_Hexa = new char[39];
		cout << "\nResult of A1 * A2\n";

		for (i = 0; i < 19; i++) {
			main_Hexa[i] = A.Hexadecimal[i];
		}
		for (k = 19; k < 39; k++) {
			main_Hexa[k] = B.Hexadecimal[k];
		}
		
		strcpy(C.Hexadecimal, main_Hexa);
		C.Binary = C.HexadecimaltoBinary(C.Hexadecimal, C.Binary);

		for (k = 64; k < 128; k++) {
			if (A.Binary[k] == 1 && B.Binary[k] == 1) {
				C.Binary[k] = 1;
			}
			else {
				C.Binary[k] = 0;
			}
		}
		return C;
	}
	//NOR
	friend Adress operator-(const Adress& A, const Adress& B) {
		int i, k; int j = 3;
		Adress C;
		char* main_Hexa;
		main_Hexa = new char[39];

		for (i = 0; i < 19; i++) {
			main_Hexa[i] = A.Hexadecimal[i];
		}
		for (k = 19; k < 39; k++) {
			main_Hexa[k] = B.Hexadecimal[k];
		}
		cout << "\nResult of A1 - A2\n";

		strcpy(C.Hexadecimal, main_Hexa);
		C.Binary = C.HexadecimaltoBinary(C.Hexadecimal, C.Binary);

		for (k = 64; k < 128; k++) {
			if (A.Binary[k] == 0 && B.Binary[k] == 0) {
				C.Binary[k] = 1;
			}
			else {
				C.Binary[k] = 0;
			}
		}
		return C;
	}
	//NAND
	friend Adress operator/(const Adress& A, const Adress& B) {
		int i, k; int j = 3;
		Adress C;
		char* main_Hexa;
		main_Hexa = new char[39];
		cout << "\nResult of A1 / A2\n";

		for (i = 0; i < 19; i++) {
			main_Hexa[i] = A.Hexadecimal[i];
		}
		for (k = 19; k < 39; k++) {
			main_Hexa[k] = B.Hexadecimal[k];
		}
		

		strcpy(C.Hexadecimal, main_Hexa);
		C.Binary = C.HexadecimaltoBinary(C.Hexadecimal, C.Binary);
		for (k = 64; k < 128; k++) {
			if (A.Binary[k] == 1 && B.Binary[k] == 1) {
				C.Binary[k] = 0;
			}
			else {
				C.Binary[k] = 1;
			}
		}
		return C;
	}
	//XOR
	friend Adress operator%(const Adress& A, const Adress& B) {
		int i, k; int j = 3;
		Adress C;
		char* main_Hexa;
		main_Hexa = new char[39];
		cout << "\nResult of A1 % A2\n";

		for (i = 0; i < 19; i++) {
			main_Hexa[i] = A.Hexadecimal[i];
		}
		for (k = 19; k < 39; k++) {
			main_Hexa[k] = B.Hexadecimal[k];
		}
		

		strcpy(C.Hexadecimal, main_Hexa);
		C.Binary = C.HexadecimaltoBinary(C.Hexadecimal, C.Binary);

		for (k = 64; k < 128; k++) {
			if (A.Binary[k] == B.Binary[k]) {
				C.Binary[k] = 0;
			}
			else {
				C.Binary[k] = 1;
			}
		}
		return C;
	}
	//XNOR
	friend Adress operator^(const Adress& A, const Adress& B) {
		int i, k; int j = 3;
		Adress C;
		char* main_Hexa;
		main_Hexa = new char[39];
		cout << "\nResult of A1 ^ A2\n";

		for (i = 0; i < 19; i++) {
			main_Hexa[i] = A.Hexadecimal[i];
		}
		for (k = 19; k < 39; k++) {
			main_Hexa[k] = B.Hexadecimal[k];
		}
		

		strcpy(C.Hexadecimal, main_Hexa);
		C.Binary = C.HexadecimaltoBinary(C.Hexadecimal, C.Binary);

		for (k = 64; k < 128; k++) {
			if (A.Binary[k] == B.Binary[k]) {
				C.Binary[k] = 1;
			}
			else {
				C.Binary[k] = 0;
			}
		}
		return C;
	}
	//Copy Constructor
	Adress(const Adress& A) {
		Hexadecimal = new char[39];
		Binary = new int[127];
		int i;
		strcpy(Hexadecimal, A.Hexadecimal);
		for (i = 0; i < 128; i++) {
			Binary[i] = A.Binary[i];
		}
	}
	//Compare A1 == A2
	bool operator==(const Adress& B) {
		int Grade[4], i;
		for (i = 0; i < 3; i++) {
			if ((Binary[i] == B.Binary[i])) {
				Grade[0] = 1;
			}
			else {
				Grade[0] = 0;
				break;
			}
		}

		for (i = 3; i < 16; i++) {
			if ((Binary[i] == B.Binary[i])) {
				Grade[1] = 1;
			}
			else {
				Grade[1] = 0;
				break;
			}
		}

		for (i = 24; i < 48; i++) {
			if ((Binary[i] == B.Binary[i])) {
				Grade[2] = 1;
			}
			else {
				Grade[2] = 0;
				break;
			}
		}

		for (i = 48; i < 64; i++) {
			if ((Binary[i] == B.Binary[i])) {
				Grade[3] = 1;
			}
			else {
				Grade[3] = 0;
				break;
			}
		}
		cout << "\nResult of A1==A2:\n";
		if (Grade[0] == 1 && Grade[1] == 1 && Grade[2] == 1 && Grade[3] == 1) {
			cout << "true";
			cout << "\nSame sections:";
			cout << "\nFP\nTLA\nSLA\nNLA\nInterface";
			return true;
		}
		else {
			cout << "false";
			cout << "\nSame sections:";
			if (Grade[0] == 1) {
				cout << "\nFP";
			}
			if (Grade[1] == 1) {
				cout << "\nTLA";
			}
			if (Grade[2] == 1) {
				cout << "\nNLA";
			}
			if (Grade[3] == 1) {
				cout << "\nSLA";
			}
			if (Grade[0] == 1 && Grade[1] == 1 && Grade[2] == 1 && Grade[3] == 1) {
				cout << "\nInterface";
			}
			cout << "\n";
			return false;
		}

	}
	//Compare A1 != A2
	bool operator != (const Adress& B) {
		int Grade[4], i;
		for (i = 0; i < 3; i++) {
			if ((Binary[i] == B.Binary[i])) {
				Grade[0] = 1;
			}
			else {
				Grade[0] = 0;
				break;
			}
		}

		for (i = 3; i < 16; i++) {
			if ((Binary[i] == B.Binary[i])) {
				Grade[1] = 1;
			}
			else {
				Grade[1] = 0;
				break;
			}
		}

		for (i = 24; i < 48; i++) {
			if ((Binary[i] == B.Binary[i])) {
				Grade[2] = 1;
			}
			else {
				Grade[2] = 0;
				break;
			}
		}

		for (i = 48; i < 64; i++) {
			if ((Binary[i] == B.Binary[i])) {
				Grade[3] = 1;
			}
			else {
				Grade[3] = 0;
				break;
			}
		}
		cout << "\nResult of A1!=A2:\n";
		if (Grade[0] == 1 && Grade[1] == 1 && Grade[2] == 1 && Grade[3] == 1) {
			cout << "false";
			cout << "\nNo different section";
			return false;
		}
		else {
			cout << "true";
			cout << "\nDifferent sections:";
			if (Grade[0] == 0) {
				cout << "\nFP";
			}
			if (Grade[1] == 0) {
				cout << "\nTLA";
			}
			if (Grade[2] == 0) {
				cout << "\nNLA";
			}
			if (Grade[3] == 0) {
				cout << "\nSLA";
			}
			if (Grade[0] == 0 && Grade[1] == 0 && Grade[2] == 0 && Grade[3] == 0) {
				cout << "\nInterface";
			}
			cout << "\n";
			return true;
		}
	}
};

//1080:0012:3456:789A:0008:0800:200C:417A
		//2080:00FE:3456:789A:FEDC:BA98:7654:3210
