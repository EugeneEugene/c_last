#include "song_list.hpp"
#include "song.hpp"
#include <iostream>
#include <iomanip>

SongList::SongList() {
    
}

void SongList::add(Song const &item, bool at_begin) {
    if (at_begin) {
        this->_list.push_front(item);
    } else {
        this->_list.push_back(item);
    }
}

void SongList::remove(bool first) {
    if(first) {
        this->_list.pop_front();
    } else {
        this->_list.pop_back();
    }
}

Song SongList::find_longest() {
    Song best_song; 
    int best_length = 0;
    for (auto const &song : this->_list) {
        if (song.length > best_length) {
            best_song = song;
            best_length = song.length;
        }
    }
    return best_song;
}

int SongList::total_time() {
    int total_time = 0;
    for (auto const &song : this->_list) {
        total_time += song.length;
    }
    return total_time;
}

void SongList::print_songs() {
    std::cout
        << std::setw(15) << "Name"
        << std::setw(15) << "Album"
        << std::setw(15) << "Artist"
        << std::setw(10) << "Length"
        << std::endl;
    for (auto const &song : this->_list) {
        std::cout
        << std::setw(15) << song.name
        << std::setw(15) << song.album
        << std::setw(15) << song.artist
        << std::setw(10) << song.length
        << std::endl;
    }
}