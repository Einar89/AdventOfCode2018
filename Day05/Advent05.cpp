// Advent05.cpp : Defines the entry point for the console application.
//

#include <fstream>
#include <iostream>
#include <vector>


int main()
{
	std::ifstream input("input.txt");
	std::vector <char> letter;

	char c;

	while (input >> c) {
		
		letter.push_back(c);
		if (letter.size() > 1) {
			auto iterator = letter.end() - 1;
			if (*iterator > *(iterator - 1) && (*iterator - 32) == *(iterator - 1)) {
				letter.pop_back();
				letter.pop_back();
			}
			else if (*iterator < *(iterator - 1) && (*iterator + 32) == *(iterator - 1)) {
				letter.pop_back();
				letter.pop_back();
			}
		}
	}
	std::cout << letter.size() << std::endl;
    return 0;
}

