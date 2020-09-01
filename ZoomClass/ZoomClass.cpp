#include <iostream>
#include <string>
#include <conio.h>
/*
Comment Spot
*/
int age, agee;
bool sw = true; // true = 1 || false = 0  bool is true or false
char me = 'm';
std::string Fullname = "";
double pi = 3.14; 
int a = 2;
int b = 5;
int c = 20;
int z = 10;


int main() {

	system("cls"); //scree clear

	if (a > b) {
		std::cout << "A is greater then B\n";
	} 
	else {
		std::cout << "B is greater then A\n";
	}
	if (a == z) {
		std::cout << "A and Z are equal\n";
	}
	if (a >= b) { // if ( a > z && a == z) can use && , || (|| means or)
		std::cout << "Nothing happens here\n";
	}
	if (a != b) {
		std::cout << "A and B are not equal\n";
	}
	// text based code
	std::cout << "enter your full name : " ;
	std::getline(std::cin, Fullname);
	std::cout << "your name is : " << Fullname << std::endl;

	std::cout << "Enter your age :"; // enter your age
	std::cin >> age; // allows player to print age
	std::cout << "\t Your age is : " << age << "\n"; // "\n" = std::endl;   \t     // can use /* */ to comment out
	std::cout << "\t That's cool " << std::endl;
	
	
	std::cout << "How old are you next year?" << std::endl;
	// here i wanted to add a variable, so that what you write impacts the game
	std::cin >> agee;
	if (agee < 20)
		std::cout << "That's too Young!" << std::endl;
	if (agee > 20)
		std::cout << "Then you are older than me :D" << std::endl;
	if (agee == 20)
		std::cout << "Nice, me too" << std::endl;

	getch();
	system("pause"); //pauses the game

	return 0;
}