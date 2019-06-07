#include "priority_queue.h"

PriorityQueue::PriorityQueue() {
    queue = [];

}

PriorityQueue::~PriorityQueue() {
    queue.clear();
}

int PriorityQueue::get_key(Item *itm) {
    return itm->key;
}
int PriorityQueue::get_prior(Item *itm) {
    return itm->prior;
}

void PriorityQueue::insert(int prior,int key) {
    Item* new_itm = new Item;
    new_itm->prior = prior;
    new_itm->key = key;
    queue.push_back(Item);
}


void PriorityQueue::decrease_prior(Item *itm, int new_prior) {
    itm->prior = new_prior;
}

void PriorityQueue::size() {
    return queue.size();
}

Item PriorityQueue::extractMaximum() {
    int maxpos = 0;
    Item* curmax;
    Item* cur;
    for (int i = 0;i < queue.size();i++)
    {
        curmax = queue[maxpos];
        cur = queue[i];
        if (curmax->prior < cur->prior)
        {
            maxpos = i;
        }
    }
    return queue[max];
}





