//eliska vrzalova
//RoBert McGregor

#include <iostream>

int main() 
{
	
	return 0;
}

char printMenu() // written by second in command
{
	char choice = ' '; //user input choice
	std::cout << "Please enter an upper case letter to convert from left to right\nand lower to convert from right to left\n\n" << std::endl;
	std::cout << "[D] Mpg <---> L/100km [d]" << std::endl;
	std::cout << "[E] Kilograms <---> Stone & Pounts [e]" << std:: endl;
	std::cout << "[F] Celsius <---> Fahrenheit [f]" << std::endl;
	std::cout << "[Q] Exit [---] Exit [q]" << std::endl;
	std::cout << "Enter your choice: ";
	std::cin >> choice;
	return choice;
}