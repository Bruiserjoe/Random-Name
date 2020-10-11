#include <iostream>
#include <math.h>
#include <fstream>
#include <time.h>
#include <vector>
#include <string>

int main() {
	bool exitf = false;
	srand (time(NULL));
	std::ifstream file;
	file.open("names.txt");
	std::string line;
	std::vector<std::string> name;
	int count = 0;
	while (getline(file, line)) {
		count++;
		name.push_back(line);
	}
	file.close();
	while (!exitf) {
		std::cout << "Pick name?Y/N";
		std::cin >> line;
		if (line == "yes" || line == "Yes" || line == "y" || line == "Y") {
			int stopp = rand() % count;
			std::cout << "I will pick a name for you now" << std::endl;
			std::cout << name[stopp] << std::endl;
			std::cout << "Number of names:" << count << "Name number: " << stopp << std::endl;
		}
		else {
			exitf = true;
		}
	}

	return 0;
}