// The program creates linked lists  with Students Daphne, Sarah, Kim
#include <iostream>
#include <string>
#include "Node.h"
#include "Student.h"

void add(Student* newStudent);
void print(Node* next);

Node* head = NULL;

int main() {
		char name[80];
    // adding variables to the linked list
    Student* daphne = new Student();
    strcpy(name, "Daphne");
    daphne->setName(name);
    add(daphne);
    Student* sarah = new Student();
    strcpy(name, "Sarah");
    sarah->setName(name);
    add(sarah);
    Student* kim = new Student();
    strcpy(name, "Kim");
    kim->setName(name);
    add(kim);
    // printing the list
    print(head);

}

//Adds student
void add(Student* newStudent) {
	Node* current = head;
	if (current == NULL) {
		head = new Node();
		head->setStudent(newStudent);
	}
	else {
		while (current->getNext() != NULL) {
			current = current->getNext();
		}
		current->setNext(new Node());
		current->getNext()->setStudent(newStudent);
	}
}

//prints student
void print(Node* next) {
	if (next == head) {
		cout << "list: ";
	}
	if (next != NULL) {
		cout << next->getStudent()->getName() << " ";
		print(next->getNext());
	}
}