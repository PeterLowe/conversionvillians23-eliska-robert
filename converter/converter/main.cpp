//eliska vrzalova
//RoBert McGregor

#include <iostream>

char printMenu();
void degreesToRadians();
void fahrenheitToCelsius();
void stonesPoundsToKilos();

int main() 
{
	char choice = ' ';
	choice = printMenu(); //function call
	
	if (choice == 'A')
	{
		degreesToRadians();
	}
	if (choice == 'f')
	{
		fahrenheitToCelsius();
	}
	if (choice == 'e') 
	{
		stonesPoundsToKilos();
	}

	std::cout << "Thank you for using Eliska and RoB's super converter and \nremember to rate us above Pete's converter."<< std::endl;
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
	std::cout << "[E] Kilograms <---> Stone & Pounds [e]" << std::endl;
	std::cout << "[F] Celsius <---> Fahrenheit [f]" << std::endl;

	std::cout << "[Q] Exit   [---] Exit   [q]" << std::endl;
	std::cout << "Enter your choice:";
	std::cin >> choice;
	return choice;
}

void degreesToRadians()
{
	float degrees = 0.0f;
	float radians = 0.0f;
	float const CONVERSION = 0.0174f;

	std::cout << "What is the the angle in degrees?" << std::endl;
	std::cin >> degrees;
	radians = degrees * CONVERSION; //converts degrees to radians
	std::cout << "The angle in radians is:" << radians << std::endl;
}

void fahrenheitToCelsius()
{
	float userInput = 0.0f;
	float output = 0.0f;
	std::cout << "What's the temperature in Fahrenheit? ";
	std::cin >> userInput;
	output = (userInput - 32) * 5 / 9;
	std::cout << userInput << " Fahrenheit is " << output << " in Celsius." << std::endl;
}

void stonesPoundsToKilos()
{
	float poundsInput = 0.0f;
	float stonesInput = 0.0f;
	float poundsTotal = 0.0f;
	float output = 0.0f;
	std::cout << "How many Pounds would you like to convert? [Stones next]";
	std::cin >> poundsInput;
	std::cout << "How many Stones would you like to convert?";
	std::cin >> stonesInput;

	poundsTotal = (stonesInput * 14) + poundsInput;

	output = poundsTotal * 0.45359237f;

	std::cout << poundsInput << " pounds and " << stonesInput << " stones are " << output << "kg.";
}