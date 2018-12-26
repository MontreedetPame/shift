#include <iostream>
#include <string>
using namespace std;
string processShift(char arrAlphabet[27], int shift);
int main() 
{
	char arrAlphabet[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char arrCipherText[27];
	int shift;
	cout<<arrAlphabet<<endl;
	cout<<"shift : ";
	cin>>shift;
	string cipherText = processShift(arrAlphabet, shift);
	strcpy(arrCipherText, cipherText.c_str());	//convert string to char
	cout<<arrCipherText<<endl;
    return 0;
}

string processShift(char arrAlphabet[27], int shift){
	string strAlphabet(arrAlphabet); //convert char array to string
	for(int i=0; i<shift; i++)
	{
		string strTemp = strAlphabet.substr(0,1);
		strAlphabet = strAlphabet.substr(1,strAlphabet.length()-1)+strTemp;
	}
	return strAlphabet;
}