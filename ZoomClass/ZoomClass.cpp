#include <iostream>
#include <string>
/*
Comment Spot
*/
int age, agee;
bool sw = true; // true = 1 || false = 0  bool is true or false
char me = 'm';
std::string name = "sander";
double pi = 3.14; 

int main() {

	// text based code
	std::cout << "Enter your age :"; // enter your age
	std::cin >> age; // allows player to print age
	std::cout << "\t Your age is : " << age << "\n"; // "\n" = std::endl;   \t     // can use /* */ to comment out
	std::cout << "\t You are young " << std::endl;
	std::cout << "How old are you next year?" << std::endl;
	std::cin >> agee;
	if (agee < 20)
		std::cout << "That's too Young!" << std::endl;
	if (agee > 20)
		std::cout << "Good :D" << std::endl;
	if (agee == 20)
		std::cout << "Nice, me too" << std::endl;
	return 0;
}