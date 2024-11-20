#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "TemplateNode.h"
using std::cout;

template<typename T> class LinkedList
{
  private:
    TNode<T> * head;
  public:
    LinkedList();
    void PrintList();
    void PrintAtIndex(int index);
    void InsertInFront(T data);
    void InsertAtEnd(T data);
};

template<typename T>LinkedList<T>::LinkedList()
{
  head = nullptr;
}
template<typename T>void LinkedList<T>::PrintList()
{
  if(head != nullptr)
  {
    TNode<T> * temp = new TNode<T>();
    temp = head;

    while(temp != nullptr)
    {
      cout << temp->data << "->";
      temp = temp->next;
    }
    cout << "NULL\r\n";
  }
  else
    cout << "List is empty.\r\n";
}
template<typename T>void LinkedList<T>::PrintAtIndex(int index)
{
  int iterator = 1;
  TNode<T> * temp = new TNode<T>();
  temp = head;

  while(iterator < index)
  {
    iterator++;
    temp = temp->next;
  }
  cout << temp->data << "\r\n";
}
template<typename T>void LinkedList<T>::InsertInFront(T data)
{
  TNode<T> * newNode = new TNode<T>();
  newNode->data = data;
  newNode->next = head;

  head = newNode;
}
template<typename T>void LinkedList<T>::InsertAtEnd(T data)
{
  TNode<T> * newNode = new TNode<T>();
  newNode->data = data;
  newNode->next = nullptr;

  TNode<T> * temp = head;
  if(temp != nullptr)
  {
    while(temp->next != nullptr)
    {
      temp = temp->next;
    }
    temp->next = newNode;
  }
}
#endif