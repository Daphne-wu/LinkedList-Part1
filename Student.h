
#ifndef STUDENT_H
#define STUDENT_H
#include <cstring>

using namespace std;
//create class student
class Student {
 public:
 //constructor and destructor
  Student();
  ~Student();
 //sets and gets the name of student
  char* getName();
  void setName(char* name);
 private:
 //variables
  char* name;
};
#endif