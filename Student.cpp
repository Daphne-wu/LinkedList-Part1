#include <iostream>
#include <cstring>
#include "Student.h"

using namespace std;

Student::Student() {
  name = new char();
}

Student::~Student() {
  delete name;
}

//getters
char* Student::getName() {
  return name;
}

void Student::setName(char* nameE) {
	name = new char[strlen(nameE) + 1];
	strcpy(name, nameE);
}