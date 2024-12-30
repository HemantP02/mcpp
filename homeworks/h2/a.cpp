#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>

int main(){
	// seed the random number generator
	std::srand(std::time(0));

	// generate random number between 0 and 99
	int target = std::rand() % 100;

	// name of the output program
	std::cout << "task_1" << std::endl;

	// variable to store user input
	int guess;

	while (true){
		std::cout << "Enter your guess (0-99): ";
		if (!(std::cin >> guess)){
			std::cerr << "[WARNING] : Number must be between 0 and 99" << std::endl;
			// clear the error flag on std::cin
			std::cin.clear();
			// discard the invalid input
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			continue;
		}
		if (guess < 0 || guess > 99) {
			std::cerr << "[WARNING] : Number must be between 0 and 99" << std::endl;
			continue;
		}
		if (guess < target) {
			std::cout << "Your number is smaller." << std::endl;
		} else if (guess > target) {
			std::cout << "Your number is larger." << std::endl;
		} else{
			std::cout << "You have guessed the number! You win!" << std::endl;
			break;
		}
	}
	// output the generated random number at the end
	std::cout << "The generated number was: " << target << std::endl;

	return 0;
}
