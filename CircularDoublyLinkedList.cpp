#include "CircularDoublyLinkedList.hpp"
Node:: CircularDoublyLinkedListNode(int val)
{
    value = val;
    next = NULL;
    prev = NULL;
}

CircularDoublyLinkedList:: CircularDoublyLinkedList()
{
    len = 0;
    curr = NULL;
    head = NULL;
    tail = NULL;
}

void CircularDoublyLinkedList:: addNode(int value)
{
    Node *newItem = new Node(value);
    if(head == NULL)
    {
        curr = newItem;
        head = newItem;
        tail = newItem;
    }else
    {
        head->prev = newItem;
        newItem->prev = tail;
        tail->next = newItem;
        tail = newItem;
    }
}