//Temperature conversion application
#include <iostream>
int main()
{
	//Input temperature, numeric input
	int TempInput;

//Output temperature, numeric output
	int TempOutput;

//Input conversion type, single character
//"C" will be used to represent C to F
//"F" will be used to represent F to C
char ConversionType;

//Welcome message
std::cout << "Temperature Converter" << std::endl;
std::cout << "...................." << std::endl;

//Initial instruction for use
std::cout << "Enter a temperature and choose the conversion you want to carry out:" << std::endl;
//Input the temperature
std::cout << "Enter a temperature:";
std::cin >> TempInput;

//Input conversation type
std::cout << "Enter conversion type." << std::endl;
std::cout << "Type C followed by ENTER for Centrigrade to Fahrenheit conversion." << std::endl;
std::cout << "Type F followed by ENTER for Fahrenheit to Centrigrade conversion." << std::endl;
std::cin >> ConversionType;

//Conditionals below
if (ConversionType == 67)
	//Calculation code here for C to F
{
	std::cout << "Centrigrade to Fahrenheit conversion:" << std::endl;
	TempOutput = (1.8 * TempInput) + 32;
	std::cout << "Input temperature (Centrigrade):" << TempInput << std::endl;
	std::cout << "Output temperature (Fahrenheit):" << TempOutput << std::endl;
}
if (ConversionType == 70)
	//Calculation code here for F to C
{
	std::cout << "Fahrenheit to Centrigrade conversion:" << std::endl;
	TempOutput = (TempInput - 32) * 0.555;
	std::cout << "Input temperature (Fahrenheit):" << TempInput << std::endl;
	std::cout << "Output temperature (Centrigrade):" << TempOutput << std::endl;
}
}
