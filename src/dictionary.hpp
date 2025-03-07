#pragma once

#include <algorithm>
#include <fstream>
#include <iostream>
#include <set>
#include <string>
#include <string_view>
#include <vector>

#include "levenshtein.hpp"
#include "trie/trie.hpp"

#define MIN_LENGTH_OF_WORD 2

class Dictionary {
 public:
  const Trie& get_dictionary() const;

  std::vector<std::string> get_suggestions(const std::string& word) const;

  bool load_from_file(std::string_view filename);

 private:
  Trie m_trie;
};