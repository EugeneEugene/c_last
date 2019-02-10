#include <string>

template <class ItemT>
class SongList {
    public:
    SongList();
    SongList(SongList const &song_list);
    SongList operator= (SongList &left);

    static SongList load(std::string const &path);
    void save(std::string const &path);

    void clear();
    void add(ItemT item, bool at_begin=true);
    void remove(bool first=false);
    ItemT find_longest();
    void total_time();
    void print_songs();

    ~SongList();

    private:
};
