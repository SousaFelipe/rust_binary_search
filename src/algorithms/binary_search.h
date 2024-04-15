#ifndef BINARY_SEARCH_MODULE
#define BINARY_SEARCH_MODULE
#endif


namespace binary_search {


  #ifndef BINARY_RESULT
  #define BINARY_RESULT

  struct Result {
    bool found;
    unsigned int index;
    unsigned int rounds;
  };

  #endif


  Result execute(
    const std::vector<unsigned int> &sorted,
    unsigned const int search
  );
}
