#ifndef LIFO_PRIORITY_QUEUE_H
#define LIFO_PRIORITY_QUEUE_H

#include <iostream>
#include <vector>
using namespace std;

struct Item
{
    int prior;
    int key;
};



class PriorityQueue
{
public:
    PriorityQueue();
    ~PriorityQueue();
    vector<Item> queue;
    void insert(item, prior);
    void decrease_prior(Item* itm, int new_prior);
    Item extractMaximum();
    int size();
    int get_prior(Item* itm);
    int get_key(Item *itm);

};



#endif //LIFO_PRIORITY_QUEUE_H
