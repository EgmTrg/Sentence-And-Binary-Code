using namespace std;
#include <iostream>
#include <list>

#define FILE_ADDRESS "data.txt"

class Node {
public:
	int Value;
	Node* Next;

	class NodeOperations {
	public:
		void ExampleMethod() {
			Node::NodeOperations nodeOp;
			Node* head = new Node();
			Node* second = new Node();
			Node* third = new Node();

			head->Value = 1;
			head->Next = second;
			second->Value = 2;
			second->Next = third;
			third->Value = 3;
			third->Next = NULL;

			nodeOp.ImportAtTheEnd(&head, 4);
			nodeOp.PrintList(head);
		}
		void PrintList(Node* node) {
			while (node != NULL)
			{
				cout << node->Value << endl;
				node = node->Next;
			}
		}
		void ImportAtTheEnd(Node** head, int newValue) {
			// Create a new node for import.
			Node* newNode = new Node();
			newNode->Value = newValue;
			newNode->Next = NULL;

			// Be head if has no head.
			if (*head == NULL)
			{
				*head = newNode;
				return;
			}

			// Find the last node.
			Node* last = *head;
			while (last->Next != NULL)
				last = last->Next;

			// Import the new node to last node->next
			last->Next = newNode;
		}
	};
};

int main() {
	Node::NodeOperations nodeOp;
	nodeOp.ExampleMethod();
}