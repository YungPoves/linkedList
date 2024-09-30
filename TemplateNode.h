#ifndef TEMPLATENODE_H
#define TEMPLATENODE_H

template <typename T> struct TNode
{
  T data;
  struct TNode<T> * next;
};

#endif