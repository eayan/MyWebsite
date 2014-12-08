//Temperature conversion application
#include <iostream>
int main()
{
	//input temperature, numeric input
	int TempInput;

	//Output temperature, numeric output
	int TempOutput;

	//Input conversion type, single character
	//"C" will be used to represent C to F
	//"F" will be used to represent F to C
	char ConversionType;

	//Input the temperature
	std::cin >> TempInput;

	//Input conversion type
	std::cin >> ConversionType;

	//Conditionals below
	if (ConversionType == 67)
	{
		//Calculation code here for C to F
		TempOutput = (1.8*TempInput) + 32;
	}
		
	if (ConversionType == 70)
	{
		//Calculation code here for F to C
		TempOutput = (TempInput - 32) * 0.555;
	}
		
	std::cout << TempOutput << std::endl;
}
