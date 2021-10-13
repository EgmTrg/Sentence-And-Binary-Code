using namespace std;
#include <iostream>
#include <string>
#include "Node.h"

template<typename T>
void AddNtoN(Node<T>* head, T N, T toN) {
	Node<int>::NodeOperations NodeOp;
	//Node<T>* head = new Node<T>();
	for (int i = N; i <= toN; i++)
		NodeOp.ImportAtTheEnd(&head, (T)i);
}

//void AddNtoNExample() {
//	Node<int>::NodeOperations NodeOp;
//
//	Node<int>* head = new Node<int>();
//	AddNtoN<int>(head, 1, 20);
//	NodeOp.PrintList(head);
//}

Node<string>* SeperateWords(string line) {
	Node<string>::NodeOperations NodeOp;
	Node<string>* head = new Node<string>();

	string word;
	for (int i = 0; i < line.length(); i++)
		if (line[i] != ' ')
			word += line[i];
		else {
			NodeOp.ImportAtTheEnd(&head, word);
			word = "";
		}

	return head;
}

int main() {
	Node<string>::NodeOperations NodeOp;

	string line;
	getline(cin, line);
	Node<string>* wordsList = SeperateWords(line + " ");
	NodeOp.PrintList(wordsList);
}