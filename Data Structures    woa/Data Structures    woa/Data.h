#pragma once
class Data {
	struct linkedList{
		struct Node {
			
			Node(int i = 0, Node* n = NULL);
		};
		Node* head;int size;
		linkedList();
		void push(int NEW);
		int pop();
	};
};