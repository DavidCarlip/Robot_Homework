#include <vector>
#include <iostream>

int numOfNums = 0;
std::vector<int> sorted = { };
std::vector sort() {
  std::cout << "How many numbers do you want to sort?" << '\n';
  std::cin >> numOfNums;
  for (i = 0; i < numOfNums; i++) {
    std::cout << "Input one integer" << "\n";
    std::cin >> sorted[i];
  }
  return std::sort(std::begin(sorted), std::end(sorted));
}
