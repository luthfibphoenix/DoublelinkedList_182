#include <iostream>
#include <string>
using namespace std;

class Node {
public:
	int noMhs;
	string name;
	Node* next;
	Node* prev;
};

class DoubleLinkedList {
private:
	Node* START;
public:
	DoubleLinkedList();
	void addNode();
	bool search(int rollNo, Node** previous, Node** current);
	bool deleteNode(int rollNo);
	bool listEmpty();
	void traverseO();
	void revtraverse();
	void hapus();
	void searchData();
};

DoubleLinkedList::DoubleLinkedList() {
	START = NULL;
}

void DoubleLinkedList::addNode() {
	int nim;
	string nm;
	cout << "\nEnter the roll number of the student: ";
	cin >> nim;
	cout << "\nEnter the name of the student: ";
	cin >> nm;
	Node* newNode = new Node(); //step1
	newNode->noMhs = nim;//step2
	newNode->name = nm; //step2

	/*insert a node in the biginning of a doubly - linked list*/
	if (START == NULL || nim <= START->noMhs) {
		if (START != NULL && nim == START->noMhs) {
			cout << "\nDuplicate number not allowed" << endl;
		}
		newNode->next = START; //step3
		if (START != NULL)
			START->prev = newNode; //step4
		newNode->prev = NULL; //step5
		START = newNode; //step6
		return;
	}

	/*Inserting a Node Beetwen The Nodes in the List*/
	Node* current = START; //step1.a
	Node* previous = NULL; //step1.b
	while (current->next != NULL && current->next->noMhs < nim) //step1.c
	{
		previous = current; //1.d
		current = current->next; //1.e
	}
	
	if (current->next != NULL && nim == current->next->noMhs) {

	}
}