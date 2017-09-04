/*********************************************************************
** Author: Mario Franco-Munoz
** Date: 6/27/2017
** Description: This program prompts the user to enter his/her favorite animal and then returns the result.
*********************************************************************/

#include <iostream>
#include <string>

int main() {
	std::string favAnimal; //string variable for storing user input (favorite animal)
	std::cout << "Please enter your favorite animal." << std::endl; //prompts user for favorite animal
	std::cin >> favAnimal;
	std::cout << "Your favorite animal is the " << favAnimal; //prints user's favorite animal
	std::cout << "." << std::endl;

	return 0;
}