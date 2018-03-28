#include <iostream>
#include <string>
#include <fstream>

using namespace std;

	char encrypt(char input, char keychar);
	char decrypt(char input, char keychar);

int main (){
	
	int file;
	ifstream dat;
	string f_name="file1.dat";
	char action;
	
	
	cout << "Please enter number of file to encrypt/decrypt: (file1.dat)" << endl;
	getline (cin, f_name);
	
	if (f_name == "file1.dat" ){
	dat.open("file1.dat");
	}else
	{
		cout << "Could not find the file";
		exit(1);
	}
	
	do {
		cout << endl;
		cout << "Would you like to encrypt(e) or decrypt(d) a message: " << endl;
		cout endl;
		cin >> action;
		cin.ignore(50,'\n');
		cout << endl;
		
		if (action == 'e') {
				encr ();
		}
		else if (action == 'd'){
			decr();
		}
		else {
			cout << "Wrong action selected please try again" << endl;
		}
	}while (1);
	
	
	
	
	
	
	
	
	return 0;
}

char encrypt(char input, char keychar);
{
	char x, y;
	
	if (input== ' ' ) x=27;
	else x = input - 'a' + 1;
	
	if (keychar == ' ') x = 0;
	else y = keychar - 'a' + 1;
	
	char R = x -y;
	if (R < 0)
		R += 27;
	if (!R) return ' ';
	return R + 'a'a-1;
}
