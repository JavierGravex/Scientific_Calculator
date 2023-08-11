#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdlib.h> 

using namespace std; 

void menu();

int main() {

		menu();


		return 0; 




}

void menu() {

	float x, y; 
	int u_choice = 0; 
	char u_choice2; 

	system("cls");

	do {
		
		cout << "\n -----------------------------------------------\n";
		cout << "\t\t CALCULATOR \n";
		cout << " -----------------------------------------------\n";
		cout << "\t1 Addition \t\t" << "8:Sin" << endl;
		cout << "\t2 Substraction \t\t" << "9:Cos" << endl;
		cout << "\t3 Multiplication \t" << "10:Tan" << endl;
		cout << "\t4 Division \t\t" << "11:arcsin (Inverse Sin)" << endl;
		cout << "\t5 Exponent  \t\t" << "12:arccos (Inverse Cos)" << endl;
		cout << "\t6 Square \t\t" << "13:arctan (Inverse Tan)" << endl;
		cout << "\t7 log \t\t\t" << "14:Exit " << endl;


		cout << "\nWhare are you choosing? " << endl;
		cin >> u_choice;

		switch (u_choice)
		{
		default:
			cout << "Wrong input mate!" << endl << endl;
			break;

		case 1:
			cout << "\t Addition \t" << endl;
			cout << "\nAdd first number:" << endl;
			cin >> x;
			cout << "Add second number:" << endl;
			cin >> y;
			cout << "Result:" << endl;
			cout << x + y;

			break;

		case 2:
			cout << "\t Substraction \t" << endl;
			cout << "Add first number:" << endl;
			cin >> x;
			cout << "Add second number:" << endl;
			cin >> y;
			cout << "Result:" << endl;
			cout << x - y;

			break;

		case 3:
			cout << "\t Multiplication \t" << endl;
			cout << "Add first number:" << endl;
			cin >> x;
			cout << "Add second number:" << endl;
			cin >> y;
			cout << "Result:" << endl;
			cout << x * y;

			break;

		case 4:
			cout << "\t Division \t" << endl;
			cout << "Add first number:" << endl;
			cin >> x;
			cout << "Add second number:" << endl;
			cin >> y;
			cout << "Result:" << endl;
			cout << x / y;

			break;

		case 5:
			cout << "\t Exponent \t" << endl;
			cout << "Add number:" << endl;
			cin >> x;
			cout << "Add Exponent:" << endl;
			cin >> y;
			cout << "Result:" << endl;
			cout << pow(x, y);

			break;

		case 6:
			cout << "\t Square \t" << endl;
			cout << "Add number:" << endl;
			cin >> x;
			cout << "Result:" << endl;
			cout << sqrt(x);

			break;

		case 7:
			cout << "\t Log \t" << endl;
			cout << "Add number:" << endl;
			cin >> x;
			cout << "Result:" << endl;
			cout << log10(x);

			break;

		case 8:

			cout << "\t Sin \t" << endl;
			cout << "Add number:" << endl;
			cin >> x;
			cout << "Result:" << endl;
			cout << sin(x);

			break;

		case 9:

			cout << "\t Cos \t" << endl;
			cout << "Add number:" << endl;
			cin >> x;
			cout << "Result:" << endl;
			cout << cos(x);

			break;

		case 10:

			cout << "\t Tan \t" << endl;
			cout << "Add number:" << endl;
			cin >> x;
			cout << "Result:" << endl;
			cout << tan(x);

			break;

		case 11:

			cout << "\t arcsin (Inverse Sin)  \t" << endl;
			cout << "Add number:" << endl;
			cin >> x;
			cout << "Result:" << endl;
			cout << asin(x);

			break;

		case 12:

			cout << "\t arccos (Inverse Cos) \t" << endl;
			cout << "Add number:" << endl;
			cin >> x;
			cout << "Result:" << endl;
			cout << acos(x);

			break;

		case 13:

			cout << "\t arctan (Inverse Tan) \t" << endl;
			cout << "Add number:" << endl;
			cin >> x;
			cout << "Result:" << endl;
			cout << atan(x);

			break;

		case 14:

			cout << "\n Bye-bye see you later Space-Cowboy!" << endl;
			exit(0);
		}

		cout << "\n\n Any other problem mate?" << endl;
		cin >> u_choice2;

		
			if (u_choice2 == 'Y' || u_choice2 == 'y') {
				menu();
			}
			else if (u_choice2 == 'N' || u_choice2 == 'n') {
				cout << "\n Bye-bye see you later Space-Cowboy!" << endl;
				exit(0);
			}
			else {
				exit(0);
			}


	}while (u_choice != 14);

	
}