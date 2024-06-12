#include <iostream>
#include <vector>
#include <string>

#include "functions.h"

int main() {

	const unsigned int POPULATION_SIZE = 0;	//TODO: set the value
	const unsigned int MAX_GENERATIONS = 0;	//TODO: set the value
	const unsigned int MUTATION_RATE = 0;	//TODO: set the value
	const unsigned int TOURNAMENT_SIZE = 0;	//TODO: set the value
	
	//Both input and the capacity are taken from here (PO7): https://people.sc.fsu.edu/~jburkardt/datasets/knapsack_01/knapsack_01.html
	const std::string FILE_INPUT_NAME = "input.txt";
	const unsigned int CAPACITY = 750;

	std::vector<Item> items = readInput(FILE_INPUT_NAME);

	//This loop tests if items are in the vector
	//for (Item i : items) {
	//	std::cout << i.value << " " << i.weight <<std::endl;
	//}

	return 0;
}
