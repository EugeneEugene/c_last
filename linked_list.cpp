#include <linked_list.hpp>
#include <song.hpp>
#include <iostream>

Node::Node(Song const &song){
    this->item = song;
    this->next = NULL;
}

/*
void Node::push_back(Song const &song) {
    Node *last_item = this;
    while(last_item->next != NULL) {
        last_item = last_item->next;
    }
    last_item->next = new Node(song);
}

Song Node::pop_back() {
    Node *last_item = this;
    while(last_item->next->next != NULL) {
        last_item = last_item->next;
        std::cout<<last_item->item.name<<std::endl;
    }
    Song song = last_item->next->item;
    delete last_item->next;
    last_item->next = NULL;
    return song;
} 
*/

void LinkedList::push_back(Song const &song) {
    Node *last_item = _first;
    if(_first == NULL) {
        _first = new Node(song); 
    } else {
        while(last_item->next != NULL) {
            last_item = last_item->next;
        }
        last_item->next = new Node(song);
    }
}

Node* find_penult(Node *node) {
    Node *last_item = node;
    // if (last_item->next->next == NULL) {
    //     return last_item;
    // }
    while(last_item->next->next != NULL) {
        last_item = last_item->next;
        std::cout<<last_item->item.name<<std::endl;
    }
    return last_item;
}

Song LinkedList::pop_back() {
    // Node *last_item = _first;
    if(_first == NULL) {
        std::cout<<"idi nahui pidor"<<std::endl;
        return Song();
    }
    if(_first->next == NULL) {
        Song song = _first->item;
        delete _first;
        _first=NULL;
    }
    auto penult = find_penult(_first);
    Song song = penult->next->item;
    delete penult->next;
    penult->next = NULL;
    return song;
}                

Song LinkedList::pop_front() {
    if (_first == NULL) {
        std::cout<<"idi nahui cuckold"<<std::endl;
        return Song();
    } 
    Song song = _first->item; 
    auto next = _first->next;
    delete _first; 
    _first = next;
    return song;
}

void LinkedList::push_front(Song const &song) {
    if(_first == NULL) {
        _first = new Node(song); 
        // _first->item = song; 
        _first->next = NULL;
    } else { 
        auto new_first = new Node(song);
        // new_first->song = song;
        new_first->next = _first;
        _first = new_first;
    }
}

bool is_empty() {
    return _first == NULL;
}