#include <cstddef>
#include <stdio.h>
#include "../node/Node.h"

class LList
{
  private:
    struct Node * head;
  public:
    LList(int data);
    void AddToHead(int data);
    void AddToTail(int data);
    void PrintList();
    void DeleteHead();
};

LList::LList(int data)
{
  head = new struct Node();
  
  head->data = data;
  head->next = NULL;
}

void LList::AddToHead(int data)
{
  Node * newNode = new Node();
  newNode->data = data;
  newNode->next = head;

  head = newNode;
}

void LList::AddToTail(int data)
{
  Node * newNode = new struct Node;

  newNode->data = data;
  newNode->next = NULL;

  Node * temp = head;
  while(temp->next)
  {
    temp = temp->next;
  }

  temp->next = newNode;
}

void LList::PrintList()
{
  Node * temp = new struct Node;
  
  temp = head;

  while(temp != NULL)
  {
    printf("%d\n", temp->data);
    temp = temp->next;
  }

  if (temp == NULL)
  {
    printf("NULL\n");
  }  
}

void LList::DeleteHead()
{
  Node * temp = new struct Node();
  
  temp = head->next;

  delete head;

  head = temp;
}