/*
*NAME: <Lorenz Adrianne Salalac>
*DATE: <July 27, 2018>
*MODULE NAME: <Boku no Hero Mini Quiz>
*DESCRIPTION: <Mini Quiz>
*/

#include <iostream>
using namespace std;

int main (){
char A = 'A' ; char B = 'B'; char C = 'C' ;char D = 'D';
char answer [10];
int score = 0;

    //Personal Info
	cout << "Lorenz Adrianne Salalac \n";
    cout << "BSCOE 2-1D \n \n";

    //Introduction
	cout << "Boku no Hero Academia: Mini Quiz \n \n";
    cout << "Are you really a fan? \n";
    cout <<"Lets Go then! \n \n";

    //Instruction
	cout <<"Please answer by typing A, B, C, or D \n \n" ;

	//Questions and Choices
	cout <<"1.What is the first name of Midoriya? \n";
    cout <<"A. Ochaco \t B. Momo \nC. Izuku \t D. Shoto \n \n";
    cin >> answer [0];

    if (answer [0]==C){
	cout <<"Correct! \n \n" ;
	score++ ;
}
    else {
	cout <<"Sorry! Wrong Answer \n \n" ;
}
	cout <<"2.Who is the father of Shoto Todoroki? \n";
    cout <<"A. All Might \t B. Eraserhead \nC. Endeavor \t D. Best Jeanist \n \n";
    cin >> answer [0];

	if (answer [0]==C){
	cout <<"Correct! \n \n" ;
	score++ ;
}
	else {
	cout <<"Sorry! Wrong Answer \n \n" ;
}
	cout <<"3.What quirk does Midoriya have? \n";
    cout <<"A. One for All \t B. Explosion \nC. Tape \t D. Zero Gravity \n \n";
    cin >> answer [0];

    if (answer [0]==A){
	cout <<"Correct! \n \n" ;
	score++ ;
}
	else {
	cout <<"Sorry! Wrong Answer \n \n" ;
}
    cout <<"4.Who is Deku? \n";
    cout <<"A. Bakugo \t B. Shoto \nC. Tsuyu \t D. Midoriya \n \n";
    cin >> answer [0];

	if (answer [0]==D){
	cout <<"Correct! \n \n" ;
	score++ ;
}
	else {
	cout <<"Sorry! Wrong Answer \n \n" ;
}
    cout <<"5. All Might quirk is? \n";
    cout <<"A. Invisibilty \t B. All for One \nC. Dark Shadow \t D. None of the above \n \n";
    cin >> answer [0];

	if (answer [0]==D){
	cout <<"Correct! \n \n" ;
	score++ ;
}
	else {
	cout <<"Sorry! Wrong Answer \n \n" ;
}
	cout <<"6.What is the first name of Bakugo? \n";
    cout <<"A. Eijiro \t B. Shoto \nC. Katsuki \t D. Izuku \n \n";
    cin >> answer [0];

	if (answer [0]==C){
	cout <<"Correct! \n \n" ;
	score++ ;
}
	else {
	cout <<"Sorry! Wrong Answer \n \n" ;
}

	cout <<"7.In what section does Midoriya belong? \n";
    cout <<"A. Class 1-A \t B. 2-1D \nC. Class 1-B \t D. None of the above \n \n";
    cin >> answer [0];

	if (answer [0]==A){
	cout <<"Correct! \n \n" ;
	score++ ;
}
	else {
	cout <<"Sorry! Wrong Answer \n \n" ;
	}

	cout <<"8.Real name of Hero Killer? \n";
    cout <<"A. Gran Torino \t B. Stain \nC. Present Mic \t D. Cementos \n \n";
    cin >> answer [0];

	if (answer [0]==B){
	cout <<"Correct! \n \n" ;
	score++ ;
}
	else {
	cout <<"Sorry! Wrong Answer \n \n" ;
	}

	cout <<"9.What is the quirk of Gran Torino? \n";
    cout <<"A. Jet \t B. Super Speed \nC. Acceleration \t D. All of the above \n \n";
    cin >> answer [0];

	if (answer [0]==A){
	cout <<"Correct! \n \n" ;
	score++ ;
}
	else {
	cout <<"Sorry! Wrong Answer \n \n" ;
	}

	cout <<"10.Real name of All Might? \n";
    cout <<"A. Shota Aizawa \t B. Edji Todoroki \nC. Toshinori Yagi \t D. Nezu \n \n";
    cin >> answer [0];

	if (answer [0]==A){
	cout <<"Correct! \n \n" ;
	score++ ;
}
	else {
	cout <<"Sorry! Wrong Answer \n \n" ;
	}
	//Final Score
	cout <<"Your Score is: \t" <<score ;
}

