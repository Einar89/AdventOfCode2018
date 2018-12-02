// Advent01.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <fstream>
#include <vector>
#include <set>


int main()
{
	std::ifstream input("input.txt");

	std::vector <int> freq;

	int num = 0;
	int sum = 0;
	int duplicate = 0;
	
	while (input >> num) {
		sum += num;
		freq.push_back(num);
	}
	std::set <int> dups;
	auto iterator = freq.begin();
	while (dups.find(duplicate) == dups.end()) {
		dups.insert(duplicate);
		duplicate += *iterator;
		++iterator;
		if (iterator == freq.end()) {
			iterator = freq.begin();
		}
	}
	std::cout << sum << std::endl;
	std::cout << duplicate << std::endl;
    return 0;
}
