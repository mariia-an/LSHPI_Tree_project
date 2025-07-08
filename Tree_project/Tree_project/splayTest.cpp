#include <iostream>
#include "Splay_Tree.h"

int main() {
	TreeInt s(3);
	s.insert(2);
	std::cout << s.find(2) << " ";
	std::cout << s.erase(2) << " ";
	std::cout << s.getRoot() << " ";
}