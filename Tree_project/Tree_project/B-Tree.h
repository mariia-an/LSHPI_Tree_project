#pragma once
#include<vector>
#include<stack>


class B_Node {
public:
	std::vector<int> values;//we keep the array sorted
	bool is_leaf;
	std::vector<B_Node*> children;
	int number_of_used_places;
	static int order;
	B_Node *parent;
	B_Node( int value);
	B_Node();
	B_Node(vector<int> mini_values);
	~B_Node();
	bool node_insert(int value);//returns true if the value was succesfully inserted into node; else returns false
};

class B_Tree {
public:
	int order;
	B_Tree(int order);
	/*
	{
		B_Node::order = 6;
	}
	*/
	~B_Tree();

	bool insert(int value);//returns true if the value was succesfully inserted into tree
	bool search(int value);//returns true if the value was succesfully found in the tree; else returns false
	B_Node get_root();
private:
	B_Node *root;
	void split_node(B_Node *node_to_split, int new_elem);
	void insert_to_not_leaf(B_Node* node_to_be_inserted, B_Node* place_to_insert);
	//int height;






};