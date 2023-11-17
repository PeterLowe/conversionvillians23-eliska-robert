//eliska vrzalova
//RoBert McGregor

#include <iostream>

char printMenu(); 
void DegreesToRadians(); //eliska
void fahrenheitToCelsius(); //rob
void centimetersToFeetInches(); //eliska
void litersToGallons(); // eliska
void mpgToL100Kg(); //eliska

int main() 
{
	char choice = ' ';
	choice = printMenu(); //function call
	
	if (choice == 'A')
	{
		DegreesToRadians();
	}
	if (choice == 'f')
	{
		fahrenheitToCelsius();
	}
	if(choice == 'B')
	{
		centimetersToFeetInches();
	}
	if (choice == 'C')
	{
		litersToGallons();
	}
	if (choice == 'D')
	{
		mpgToL100Kg();
	}

	std::cout << "Thank you for using Eliska and RoB's super converter and remember to rate us above Pete's converter."<< std::endl;
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

void DegreesToRadians() //eliska
{
	float degrees = 0.0f;
	float radians = 0.0f;
	float const CONVERSION = 0.0174f;

	std::cout << "What is the the angle in degrees?" << std::endl;
	std::cin >> degrees;
	radians = degrees * CONVERSION; //converts degrees to radians
	std::cout << "The angle in radians is:" << radians << std::endl;
}

void fahrenheitToCelsius() //rob
{
	int userInput = 0;
	int output = 0;
	std::cout << "What's the temperature in Fahrenheit? ";
	std::cin >> userInput;
	output = (userInput - 32) * 5 / 9;
	std::cout << userInput << " Fahrenheit is " << output << " in Celsius." << std::endl;
}


void  centimetersToFeetInches() //eliska
{
	float centimeters = 0.0f;
	float inches = 0.0f;
	int feet = 0.0f;
	const float CENT_TO_INCH = 0.3937;
	const int FOOT = 12;

	std::cout << "What is the lenght in centimeters?" << std::endl;
	std::cin >> centimeters;

	inches = centimeters * CENT_TO_INCH;
	feet = inches / FOOT;
	inches = inches - (feet*FOOT);

	std::cout << "The lenght is" << feet << "feet and" << inches << "inches" << std::endl;
}

void litersToGallons()
{
	float litres = 0.0f;
	float gallons = 0.0f;
	float const CONVERSION = 0.2199f;

	std::cout << "What is the volme in litres?" << std::endl;
	std::cin >> litres;

	gallons = litres * CONVERSION;

	std::cout << "The volume in gallons is" << gallons << std::endl;
}

void mpgToL100Kg()
{
	float mpg = 0.0f;
	float l100Kg = 0.0f;
	const float CONVERSION = 235.2145f;

	std::cout << "What is the efficiency in mpg?" << std::endl;
	std::cin >> mpg;

	l100Kg = mpg * CONVERSION;
	std::cout << "The efficiency in l/100kg is:" << l100Kg << std::endl;
}
