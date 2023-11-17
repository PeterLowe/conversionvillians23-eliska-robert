//eliska vrzalova
//RoBert McGregor

#include <iostream>

char printMenu();
int main() 
{
	char choice = ' ';
	choice = printMenu(); //function call
	

	system("Pause");
	return 0;
}
char printMenu()
{
	char choice = ' ';
	std::cout << "Please enter a upper case letter to convert left to right/ lower case to convert from right to left" << std::endl;
	std::cout << "[A] Degrees  <--->  Radians    [a]" << std::endl;
	std::cout << "[B] Centimeters  <--->  Feet & Inches [b]" << std::endl;
	std::cout << "[C] Litres  <--->  Gallons   [c]" << std::endl;
	std::cout << "[D] Mpg <---> L/100km [d]" << std::endl;
	std::cout << "[E] Kilograms <---> Stone & Pounts [e]" << std::endl;
	std::cout << "[F] Celsius <---> Fahrenheit [f]" << std::endl;

	std::cout << "[Q] Exit   [---] Exit   [q]" << std::endl;
	std::cout << "Enter your choice:";
	std::cin >> choice;
	return choice;
}