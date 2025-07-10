#include <iostream>
#include "SplayTree.h"
#include "Generator.h"
#include <chrono>
#include <fstream>
#include <vector>

using clocks = std::chrono::high_resolution_clock;
using nanoseconds = std::chrono::nanoseconds;

void timeTest() {

	int size = 10000;

	std::vector<int> arr1;
	std::vector<int> arr2;
	std::vector<int> arr3;
	std::vector<int> arr4;
	std::vector<int> arr5;
		
	Generator::lineTest1(size, arr1, 0);
	Generator::lineTest2(size, arr2, 0);
	Generator::twoLineTest(size, arr3, 0);
	Generator::randTest(size, size, -size, arr4, 0);
	Generator::zubTest(size, arr5, 0);

	std::ofstream out("C:/Users/Student/Documents/allTests.txt");
	
	for (int i = 0; i < size; ++i) {
		for (int j = 0; j < i; ++j) {
			out << arr1[j] << " ";
		}
		out << std::endl;
	}
	std::cout << "$ test2" << std::endl;
	for (int i = 0; i < size; ++i) {
		for (int j = 0; j < i; ++j) {
			out << arr2[j] << " ";
		}
		out << std::endl;
	}
	std::cout << "$ test3" << std::endl;
	for (int i = 0; i < size; ++i) {
		for (int j = 0; j < i; ++j) {
			out << arr3[j] << " ";
		}
		out << std::endl;
	}
	std::cout << "$ test4" << std::endl;
	for (int i = 0; i < size; ++i) {
		for (int j = 0; j < i; ++j) {
			out << arr4[j] << " ";
		}
		out << std::endl;
	}
	std::cout << "$ test5" << std::endl;
	for (int i = 0; i < size; ++i) {
		for (int j = 0; j < i; ++j) {
			out << arr5[j] << " ";
		}
		out << std::endl;
	}
}

int main() {
	timeTest();
}