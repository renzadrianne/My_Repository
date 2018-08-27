// Boku no Hero Mini Quiz

#include <iostream>
using namespace std;

int main (){
char A = 'A' ; char B = 'B'; char C = 'C' ;char D = 'D';
char answer [10];
int score = 0;

	cout << "Lorenz Adrianne Salalac \n";

	cout << "BSCOE 2-1D \n \n";

	cout << "Boku no Hero Academia: Mini Quiz \n \n";

	cout << "Are you really a fan? \n";

	cout <<"Lets Go then! \n \n";

	cout <<"Please answer by typing A, B, C, or D \n \n" ;

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

	cout <<"A. Invicibilty \t B. All for One \nC. Dark Shadow \t D. None of the above \n \n";

	cin >> answer [0];

	if (answer [0]==D){
	cout <<"Correct! \n \n" ;
	score++ ;
}
	else {
	cout <<"Sorry! Wrong Answer \n \n" ;
		}
	cout <<"Your Score is" <<score ;
}
