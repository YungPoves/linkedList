#include <iostream>
#include "TemplateNode.h"
#include "LinkedList.h"

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

  intList->PrintList();
  intList->PrintAtIndex(2);
  intList->PrintAtIndex(5);

  return 0;
}