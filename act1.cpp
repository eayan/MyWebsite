#include <iostream>
int calc()
{
	float num1;
	float num2;
	char op;
	float ans;
	std::cout << "Simple Calculator Application" << std::endl;
	std::cout << "Enter two numbers and perform an operation." << std::endl;
	std::cout << "Enjoy" << std::endl;
	std::cout << "................." << std::endl;
	std::cout << "Enter the first number and press ENTER:" << std::endl;
	std::cin >> num1;
	std::cout << "Enter the second number and press ENTER:" << std::endl;
	std::cin >> num2;
	std::cout << "Press A followed by ENTER to add the two numbers." << std::endl;
	std::cout << "Press S followed by ENTER to substract the two numbers." << std::endl;
	std::cout << "Press M followed by ENTER to multiply the two numbers." << std::endl;
	std::cout << "Press D followed by ENTER to devide the two numbers." << std::endl;
	std::cout << "......................" << std::endl;
	std::cin >> op;
	if (op == 65)
	{
		ans = num1 + num2;
	}
	if (op == 83)
	{
		ans = num1 - num2;
	}
	if (op == 77)
	{
		ans = num1 * num2;
	}
	if (op == 68)
	{
		ans = num1 / num2;
	}
	std::cout << "The answer is " <<ans<< std::endl;
	std::cout << "Thanks for using the calculator." << std::endl;
	std::cout << "Application now existing..." << std::endl;
	}
	int helpsystem()
	{
		char op;
		std::cout << "Help System"<< std::endl;
		std::cout << "Are you ready to use this applications?" << std::endl;
		std::cout << "Press Y followed by ENTER to continue" << std::endl;
		std::cout << "Press N followed by ENTER to exit" << std::endl;
		std::cout << "Press ? followed by ENTER for help" << std::endl;
		std::cin  >> op;
		if (op == 89)
		{
			calc();
		}
		if (op == 63)
		{
			helpsystem();
		}
		if (op == 78)
		{
		
		}
	}
	int main()
	{
		char op;
		std::cout <<  "Simple Calculator Application" << std::endl;
		std::cout <<  "Enter two numbers and perform an operation." << std::endl;
		std::cout <<  "Enjoy!" << std::endl;
		std::cout <<  "Are you ready to use this applications?" << std::endl;
		std::cout <<  "Press Y followed by ENTER to continue" << std::endl;
		std::cout <<  "Press N followed by ENTER to exit" << std::endl;
		std::cout << "Press ? followed by ENTER for help" << std::endl;
		std::cin  >> op;
		if (op == 89)
		{
			calc();
		}
		if (op == 63)
		{
			helpsystem();
		}
		if (op == 78)
		{
			/* code */
		}

	}