#pragma once
/*
class Problem{
	Initial Node;
	Goal Node;
	Tree solution;
}

class Tree{
	Final Node;
	*parent until root

	createPath(Node*){
	if(Node* == NULL){
		return
	}
	createPath(Node->parent);
	cout << Node state;
}
*/
#include <string.h>
#include <vector>
#include <sstream>
class Node
{
public:
	Node();
	Node(string input);
	setParent(Node*);
	~Node();
private:
	int state[3][3];
	const int goalstate[3][3] = [[1,2,3]]
	Node* parent;
};

Node::Node()
{
	state = [[1, 2, 3], [4, 5, 6], [7, 8, 0]];
	parent = NULL;

}
Node::setParent(Node* p) {
	parent = p;
}
Node::Node(string input) {
	string curString = input;
	vector<string> result;
	stringstream s_stream(my_str);
	while (s_stream.good())
	{
		string number;
		getline(s_stream, substr, ',');
		result.push_back(substr);
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++)
		{
			state[i][j] = stoi(result.at((3 * i) + j));
		}
	}
}

Node::~Node()
{
	delete parent;
	delete state;
}