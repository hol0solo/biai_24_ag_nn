#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "structures.h"

std::vector<Item> readInput(std::string file_input_name);

int calculateFitness(std::vector<bool>& chromosome, std::vector<Item>& items, const unsigned int knapsack_capacity);

std::vector<std::vector<int>> initialize_population(const unsigned int population_size, std::vector<Item> &items);

std::vector<int> tournament_selection
(
    const std::vector<std::vector<int>>& population,
    const unsigned int population_size,
    const unsigned int tournament_size,
    std::vector<Item>& items,
    const unsigned int knapsack_capacity
);