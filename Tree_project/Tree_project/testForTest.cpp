#include "Generator.h"
#include <vector>
#include <iostream>

int main() {

	int size = 100000000;
	std::vector<int> arr(size);
	Generator::twoLineTest(size, arr, 1);

}