#ifndef SONG_LIST_HPP
#define SONG_LIST_HPP

#include <string>
#include "song.hpp" 
#include <list>

class SongList {
    public:
    SongList();
    SongList(SongList const &song_list);
    SongList operator= (SongList &left);

    static SongList load(std::string const &path);
    void save(std::string const &path);

    void clear();
    void add(Song const &item, bool at_begin=true);
    void remove(bool first=false);
    Song find_longest();
    int total_time();
    void print_songs();

    // ~SongList();

    private:
    std::list<Song>_list;
};

#endif