#include <iostream>
#include "node/TemplateNode.h"
#include "linkedlist/LinkedList.h"
using std::string;

int main()
{
  LinkedList<int> * intList = new LinkedList<int>();  
  intList->InsertInFront(23);
  intList->InsertAtEnd(666);
  intList->InsertInFront(32);
  intList->InsertAtEnd(333);
  intList->InsertInFront(0);
  intList->InsertInFront(10);
  intList->InsertAtEnd(11);

  LinkedList<string> * strList = new LinkedList<string>();
  strList->InsertInFront("Hello");
  strList->InsertAtEnd("world!");

  intList->PrintList();
  intList->PrintAtIndex(2);
  intList->PrintAtIndex(5);

  std::cout << std::endl; 

  LinkedList<double> * doubList = new LinkedList<double>();
  // doubList->InsertInFront(33.36);
  doubList->InsertAtEnd(123.3);
  doubList->PrintList();

  std::cout << std::endl; 

  strList->PrintList();

  return 0;
}