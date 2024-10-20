#include <iostream>
#include "TemplateNode.h"
#include "LinkedList.h"
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

  strList->PrintList();

  return 0;
}