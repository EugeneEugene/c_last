#ifndef LINKED_LIST_HPP
#define LINKED_LIST_HPP
#include "song.hpp"

class Node {
    public:
    Song item; 
    Node *next;

    Node(Song const &song);

};

class LinkedList {
    Node *_first; 
    public:
    void push_back(Song const &song);
    void push_front(Song const &song);
    Song pop_back();
    Song pop_front();
};

#endif