using namespace std;
#include <iostream>
#include "Node.h"

int main() {
	Node<char>::NodeOperations NodeOp;

	Node<char>* head = new Node<char>();
	for (int i = 65; i <= 75; i++)
		NodeOp.ImportAtTheEnd(&head, (char)i);
	NodeOp.PrintList(head);

	cout << '\n' << "-------------------" << '\n';

	NodeOp.ExampleMethod();
}