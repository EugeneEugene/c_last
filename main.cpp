#include "song_list.hpp"
#include "song.hpp"
#include <string>
#include <iostream>
#include <linked_list.hpp>

void test_add() {
    SongList sl;
    
    sl.add(Song{std::string("a"),std::string("a"),std::string("a"),7});
    sl.add(Song{std::string("b"),std::string("c"),std::string("a"),19}); 
    sl.add(Song{std::string("Klubnaja Muzika Remix Bass BUsted Dj LaZzzzzY"),std::string("c"),std::string("a"),19}); 
    auto song = sl.find_longest();
    std::cout << song.name << std::endl;
    auto time = sl.total_time();
    std::cout << time << std::endl;
    sl.print_songs();
    
}

void test_lsd(){
    LinkedList list;
    // Node node{Song{std::string("sa"),std::string("c"),std::string("a"),19}}; 
    list.push_back(Song{std::string("sa"),std::string("c"),std::string("a"),19});
    list.push_back(Song{std::string("sb"),std::string("a"),std::string("a"),7});
    list.push_back(Song{std::string("sc"),std::string("a"),std::string("a"),7}); 
    auto song = list.pop_back();
    std::cout << "hui " << song.name << std::endl;

    song = list.pop_front();
    std::cout <<" pizda " << song.name << std::endl;

        song = list.pop_front();
    std::cout <<" pizda " << song.name << std::endl; 

    list.push_front(Song{std::string("gay1"),std::string("c"),std::string("a"),19}); 
        list.push_front(Song{std::string("gay2"),std::string("c"),std::string("a"),19}); 
        list.push_back(Song{std::string("sa"),std::string("c"),std::string("a"),19});
    song = list.pop_back(); 
     std::cout <<" pizda " << song.name << std::endl; 
    song = list.pop_back(); 
     std::cout <<" pizda " << song.name << std::endl; 

}

int main() {
    test_lsd(); 

}