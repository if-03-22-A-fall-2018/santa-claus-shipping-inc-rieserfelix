#include <stdlib.h>
#include "list.h"

struct _node{

  void* _data;
  struct _node* _next;

};

struct _list{

  struct _node* _head;
  struct _node* node;

};



List* list_create()
{
  List* list = (List*)malloc(sizeof(struct _list));
  return list;
}

void list_delete(List *list)
{
  free(list);
}

void list_add(List *list, void *data)
{
  Node *newNode = (Node*)malloc(sizeof(Node));
  newNode->_data = data;

  if (list->_head == 0) {
    list->_head = newNode;
  }

  else{
    newNode->_next = list->_head;
    list->_head = newNode;
  }
}







void list_insert_after(Node *node, void *data)
{
  Node *newNode = (Node*)malloc(sizeof(Node));

  node->_next = newNode;

  newNode->_data = data;
}
Node* list_get_first(List *list)
{
  return list->_head;
}
Node* list_get_next(Node *node)
{
  return node->_next;
}
void* list_get_data(Node *node)
{
 return node->_data;
}
