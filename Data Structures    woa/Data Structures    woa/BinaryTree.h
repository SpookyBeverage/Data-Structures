#pragma once
class BinaryTree {
	struct binaryTree {
		struct Node {
			int value;
			Node* left;
			Node* right;
			Node(int i = 0, Node* r = NULL, Node* l = NULL);

		};
	private:
		void search(int num, Node* curr);
	public:
		void insert(int num);
		Node* root;
		binaryTree(int value);
	};
};

