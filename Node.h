using namespace std;
#include <iostream>

template<class T>
class Node{
public:
	T Value;
	Node* Next;

	class NodeOperations {
	public:
		void ExampleMethod() {
			cout << "Created by Int32 DataType." << '\n';
			Node<int>::NodeOperations nodeOp;
			Node<int>* head = new Node<int>();
			Node<int>* second = new Node<int>();
			Node<int>* third = new Node<int>();

			head->Value = 1;
			head->Next = second;
			second->Value = 2;
			second->Next = third;
			third->Value = 3;
			third->Next = NULL;

			nodeOp.ImportAtTheEnd(&head, (int)4);
			nodeOp.PrintList(head);
		}
		void PrintList(Node* node) {
			while (node != NULL)
			{
				cout << node->Value << endl;
				node = node->Next;
			}
		}
		template<typename T>
		void ImportAtTheEnd(Node** head, T newValue) {
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