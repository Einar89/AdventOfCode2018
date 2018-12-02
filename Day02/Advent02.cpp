// Advent02.cpp : Defines the entry point for the console application.
//

#include <fstream>
#include <iostream>
#include <string>


int main()
{
	std::ifstream input("input.txt.");
	std::string word;
	int doubleCount = 0;
	int tripleCount = 0;
	int charCount[26] = { 0 };
	while (std::getline(input, word)) {

		bool doubles = false;
		bool triples = false;

		for (int i = 0; i < word.length(); i++)
			charCount[word[i] - 97]++;

		for (int i = 0; i < 26; i++) {
			if (doubles == false && charCount[i] == 2) {
				doubleCount++;
				doubles = true;
			}
			if (triples == false && charCount[i] == 3) {
				tripleCount++;
				triples = true;
			}
		}

		for (int i = 0; i < 26; i++)
			charCount[i] = 0;

	}
	std::cout << "Doubles: " << doubleCount << std::endl;
	std::cout << "Triples: " << tripleCount << std::endl;
	std::cout << "Checksum: " << doubleCount * tripleCount << std::endl;
    return 0;
}

