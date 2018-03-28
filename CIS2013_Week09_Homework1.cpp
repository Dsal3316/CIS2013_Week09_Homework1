#include <iostream>
#include <string>
#include <fstream>

using namespace std;

	char encrypt(char input, char keychar);
	char decrypt(char input, char keychar);
	
	void encr ();
	void decr ();

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

char encrypt(char input, char keychar){
	char x, y;
	
	if (input== ' ' ) x=27;
	else x = input - 'a' + 1;
	
	if (keychar == ' ') x = 0;
	else y = keychar - 'a' + 1;
	
	char R = x -y;
	if (R < 0)
		R += 27;
	if (!R) return ' ';
	return R + 'a'-1;
}

char decrypt(char input, char keychar){
	char x, y;
	
	if (input == ' ') x = 0;
	else x = input - 'a' + 1;
	
	if (keychar == ' ') y = 0;
	else y = keychar - 'a' + 1;
	
	char R = x - y;
	if (R < 0)
			R+= 27;
	if (!R) return ' ';
	return R + 'a' -1;
}

void encr () {
	char f_name;
	char action;
	string msg;
	char input;
	char keychar;
	
	ifstream dat("file1.dat");
		char encryptedStr[500];
		
		cout << "Enter message to be encrypted: " << endl;
		getline(cin, msg);
		{
			int i;
			for (i = 0; i < msg.length(); i++)
			{
				
				while(1)
					dat >> keychar;
				
				if (keychar == ' ' || (keychar >= 'a' && keychar <= 'z'))
					break;
				char c = encrypt(msg[i], keychar);
				encryptedStr[i] = c;
			}
			encryptedStr[i] = 0;
			cout << encryptedStr<<endl;
			cout << endl;
		}
		dat.close();
}

void decr(){

	char f_name;
	char action;
	string msg;
	char input;
	char keychar;
	
	ifstream dat("file1.dat");
		char decryptedStr[500];
		string secr_msg;
		
		cout << "Enter message to decrypt: "<< endl;
		getline(cin, secr_msg);
		
		{
			int i;
			for (i=0;i < secr_msg.length(); i++)
			{
				while(1)
					dat>>keychar;
				
				if (keychar == ' ' || (keychar >= 'a' && keychar <= 'z'))
					break;
				
					char c = decrypt(secr_msg[i],keychar);
					decryptedStr[i] =c;
			}
			decryptedStr[i] = 0;
			cout << decryptedStr << endl;
		}
		
		dat.close();
		}
		


