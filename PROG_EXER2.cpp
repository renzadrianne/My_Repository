/*
*Name: <Lorenz Adrianne Salalac>
*Date: <Nakalimutan ko na sir>
*Module Name: <Profile>
*Description: < >
*/


#include <iostream>

using namespace std;

int main()
{
    string Name;
    string Bday;
    string email;
    string Number;
    string address;

    cout << "Full Name: ";
    getline  (cin, Name);
	cout << endl;
	
	cout << "Birthdate: ";
	getline (cin, Bday);
	cout << endl;
	
	cout << "Email: ";
	getline (cin, email);
	cout << endl;
	
	cout << "Phone Number: ";
	getline (cin, Number);
	cout << endl;
	
	cout << "Address: ";
	getline (cin, address);
	cout << endl;
	
	cout << "\nFull Name: " << Name << "\nBirthdate: " << Bday << "\nEmail: " << email << "\nPhone Number: " << Number << "\nAddress: " << address;

    return 0;
}
