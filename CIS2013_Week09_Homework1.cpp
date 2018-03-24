#include <iostream>
#include <string>
#include <fstream>

using namespace std;

	char encrypt;
	char decrypt;

int main (){
	
	int file;
	ifstream dat;
	
	
	cout << "Please enter number of file to encrypt/decrypt: (ex: 1,2,3)" << endl;
	cin >> file;
	
	if (file == '1' ){
	dat.open("file1.dat");
	}
	
	cout << "Would you like to encrypt or decrypt a message: " << endl;
	
	
	
	
	
	
	
	
	return 0;
}
