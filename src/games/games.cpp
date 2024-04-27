#include "games.h"


namespace games {


  void play_binary_search_number(
    unsigned const int from,
    unsigned const int to
  ) {
    binary_search_number::play(from, to);
  }


  void play_bubble_sort() {
    bubble_sort_vector::play();
  }
}
