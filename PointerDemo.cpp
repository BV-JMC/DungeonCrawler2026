#include "PointerDemo.h"

void PointerDemo::DoDemo()
{
	std::cout << "Enter a number ";
	int n1;
	int n2;
	char c = 'c';
	std::string newLine = "\n";
	std::cin >> n1;
	std::cout << "Enter another number ";
	std::cin >> n2;
	PassByValueDemo(n1, n2);
	std::cout << "\nPress Enter to run Pass By Ref Demo";
	std::cin >> newLine;
	PassByRefDemo(n1, n2);
	UsePointersDemo();
	MemLeakDemo();
}

void PointerDemo::PassByValueDemo(int _numberOne, int _numberTwo)
{
	std::cout << "The product of the two numbers " << _numberOne << " and " << _numberTwo << " is " << _numberOne * _numberTwo;
}

void PointerDemo::PassByRefDemo(int& _numberOne, int& _numberTwo)
{
	std::cout << "Demo ref";
}

void PointerDemo::UsePointersDemo()
{
	
}

void PointerDemo::MemLeakDemo() 
{
}