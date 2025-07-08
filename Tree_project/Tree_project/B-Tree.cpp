#include <iostream>
#include <vector>
#include "B-Tree.h"
#include <stack>

B_Node::B_Node(int value) {
	this->parent = nullptr;
	this->number_of_used_places = 1;
	for (int i = 0; i < order-1; i++) {
		this->children.push_back(nullptr);
		this->values.push_back(nullptr);
	
	}
	values.push_back(value);
	std::qsort(values.begin(), values.end());


}

B_Tree::B_Tree(int order) {
	this->order = order;
	this->root = nullptr;

}
B_Node* B_Tree::get_root() {
	return root;
}

bool B_Node::node_insert(int value) {
	values.push_back(value);
	std::sort(values.begin(), values.end());
	number_of_used_places++;
	children.push_back(nullptr);
	return true;
	
	

}


bool B_Tree::insert(int value) {
	B_Node* current_node = get_root();

	stack<B_Node*> stack_of_parents;

	while (!current_node.is_leaf) {
		if (value < current_node->values[0]) {
			stack_of_parents.push(current_node);
			current_node = current_node->children[0];
		}

		else if (value > current_node->values[order-2]) {
			stack_of_parents.push(current_node);
			current_node = current_node->children[order - 1];
		}

		else {
			int ind;
			for (ind = 0; values[ind] < value; ind++) {}
			stack_of_parents.push(current_node);
			current_node = current_node->children[ind];
		}


	
	}
	//после спуска в current node лежит вершина лист
	&current_node.node_insert(value);
	if (current_node -> number_of_used_places < order) {
		return true;
	
	}
	//лист переполнен =s> вызываем сплит данного листа 
	bool is_need_to_split = true;

	B_Node *current_parrent = stack_of_parents.top();
	stack_of_parents.pop();

	
	while (is_need_to_split && stack_of_parents) {
		//L=
		//R=
		int mid_ind = (order + 1) / 2;
		current_parent.node_insert(current_node->values[ind]);
		//сдвиг указателей у parent
		//добавление L и R в указатели
		if (current_parent->number_of_used_places < order) {
			is_need_to_split = false;
		
		}

		else {
			current_node = current_parrent;

		
		} 

		//обработать случай когда вершина сплитится и mid становится корнем дерева
		



	
	
	}


	
}



void B_Tree::insert_to_not_leaf(B_Node *node_to_be_inserted, B_Node *place_to_insert) {
	//если не фулл занятая вершинка  вставляем  и подвязываем детей в эту вершину
	//если фулл занятая вершина split от этой вершнки 



	
}



