#include "song_list.hpp"
#include "song.hpp"

SongList::SongList() {
    
}

void SongList::add(Song const &item, bool at_begin) {
    if (at_begin) {
        this->_list.push_front(item);
    } else {
        this->_list.push_back(item);
    }
}