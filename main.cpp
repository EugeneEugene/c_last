#include "song_list.hpp"
#include "song.hpp"
#include <string>
#include <iostream>

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



int main() {
    test_add();
}