#include <iostream>

#include "termcolor.hpp"

int main() {
  std::string word;

  std::cout << "Please type the word to see if it is a palindrome: ";
  std::cin >> word;
  std::cout << std::endl;

  for(int i = 0; i < word.length() / 2; i++) {
    if(word[i] != word[word.length() - 1 - i]) {
      std::cout << termcolor::red << "IS NOT a Palindrome" << termcolor::reset << std::endl;

      return 0;
    }
  }

  std::cout << termcolor::green << "The Word IS a Palindrome" << termcolor::reset << std::endl;
  return 0;
}
