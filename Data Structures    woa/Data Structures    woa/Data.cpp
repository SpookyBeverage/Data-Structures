#include "stdafx.h"
#include "Data.h"
struct Node {
	int value;
	Node* next;
	Node(int i = 0, Node* n = NULL) : next(n), value(i) {}
};
struct linkedList {
	Node* head;
	int size;
	linkedList() {
		head = NULL;
		size = 0;
	}
	void push(int New) {
		head = new Node(New, head);
		size++;
	}
	int pop() {
		if (size == 0) throw;
		Node* del = head;
		head = head->next;
		size--;
		int ret = del->value;
		delete del;
		return ret;
	}
};