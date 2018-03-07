#include "stdafx.h"
#include "BinaryTree.h"
struct BinaryTree::binaryTree {
	struct binaryTree::Node {
		int value;
		Node* left;
		Node* right;
		Node(int i = 0, Node* l = NULL, Node* r = NULL) : value(i), left(l), right(r) {}
	};
	Node* root;
	binaryTree(int value) { root = new Node(value); }

	private: 
		void binaryTree::search(int num, Node* curr) {
			if (num < curr->value && curr->left == NULL)  curr->left = new Node(num);
			else if (num > curr->value && curr->right == NULL)  curr->right = new Node(num);
			if (num < curr->value) search(num, curr->left);
			else search(num, curr->right);
		}
	public:
		void binaryTree::insert(int num) {
			search(num, root);
		}


};
