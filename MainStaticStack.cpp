// This program demonstrates the IntStack class.
#include <iostream>
#include "IntStack.h"


int main()
{
	int catchVar; // To hold values popped off the stack

	//Define a stack object to hold 5 values.
	IntStack stack{ 5 };
	
	// Push the values 5, 10, 15, 20, and 25 onto the stack.
	std::cout << "Pushing 5\n";
	stack.push(5);
	std::cout << "Pushing 10\n";
	stack.push(10);
	std::cout << "Pushing 15\n";
	stack.push(15);
	std::cout << "Pushing 20\n";
	stack.push(20);
	std::cout << "Pushing 25\n";
	stack.push(25);
	
	// Pop the values off the stack.
	std::cout << "\n====================================" << std::endl;
	std::cout << "Popping...\n";
	stack.pop(catchVar);
	std::cout << catchVar << std::endl;
	stack.pop(catchVar);
	std::cout << catchVar << std::endl;
	stack.pop(catchVar);
	std::cout << catchVar << std::endl;
	stack.pop(catchVar);
	std::cout << catchVar << std::endl;
	stack.pop(catchVar);
	std::cout << catchVar << std::endl;

	std::cin.get();
	return 0;
}