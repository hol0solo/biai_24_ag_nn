#pragma once

struct Item { 
	//Each item has its weight and value
	unsigned int weight, value;
};

struct Gene {
	//Each gene represents an item, being a "switch" telling whether this item is included in a chromosome or not
	Item x;
	bool include = false;
};