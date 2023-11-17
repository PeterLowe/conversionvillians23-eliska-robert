//eliska vrzalova
//RoBert McGregor

#include <iostream>

char printMenu();
void fahrenheitToCelsius();

int main() 
{
	char choice = ' ';
	choice = printMenu(); //function call
	
	if (choice == 'f')
	{
		fahrenheitToCelsius();
	}

	std::cout << "Thank you for using Eliska and RoB's super converter and remember to never use Pete's inferior converter."
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

void fahrenheitToCelsius()
{
	int userInput = 0;
	int output = 0;
	std::cout << "What's the temperature in Fahrenheit?";
	std::cin >> userInput;
	output = (userInput - 32) * 5 / 9;
	std::cout << userInput << " fahrenheit is " << output << " in Celsius." << std::endl;
}