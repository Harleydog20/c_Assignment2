#include "Header.h";

int main(){

	string UserName;
	bool loop = true;
	cout << "Please enter your User Name: " << endl;
	
	getline(cin, UserName);

	do{
		cin.ignore();
		cin.clear();
		int userNum = 0;
		cout << "-------------------------------" << endl;
		cout << "|  1 - Update information     |" << endl;
		cout << "|  2 - Add a new high score   |" << endl;
		cout << "|  3 - Delete information     |" << endl;
		cout << "|  4 - Print all high scores  |" << endl;
		cout << "|  5 - Exit                   |" << endl;
		cout << "-------------------------------" << endl;
		cout << "Please enter the number located beside the option you would like to choose:" << endl;

		if (cin >> userNum){
			if (userNum == 1){

			}
			else if (userNum == 2){

			}
			else if (userNum == 3){

			}
			else if (userNum == 4){

			}
			else if (userNum == 5){
				loop = false;
			}
			else{
				cout << "ERROR: Must enter a valid number (1 - 5)" << endl;
			}
		}
		else {
			cout << "Must enter a number." << endl;
			userNum = 0;
		}
		cin.ignore();
		cin.clear();
	} while (loop);

	return 0;
}