#ifndef SINGLE_LINKED_LIST_HPP
#define SINGLE_LINKED_LIST_HPP

#include <bits/stdc++.h>
using namespace std;

// template <typename int>
struct sllNode
{
    int data;
    sllNode *next;

    sllNode(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// A class to represent a Singly Linked List
// template <typename int>
class SingleLL
{
private:
    sllNode *head;
    sllNode *tail;
    int length;

public:
    SingleLL();
    void push_back(int data);
    void push_front(int data);
    void insert(int data, int pos);
    void remove(int pos);
    void print();
    int size();
    int get(int pos);
    void reverse();
    void reverseRecursive();
    void reverseRecursive(sllNode *prev, sllNode *curr);
    void reverseRecursive(sllNode *prev, sllNode *curr, sllNode *next);
};

#endif