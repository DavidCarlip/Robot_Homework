#include <iostream>
#include<map>

class Library {
  std::string date;
  std::string search;
  std::vector<patron> patrons;
  std::map<std::string, bool> books;
  std::map<bool, patron>::iterator finder;
  class patron {
   public:
    std::map<std::string, int> patronBooks>;
    void checkOut(std::string bookName);
    bool checkIfOut(std::string bookName);
    int getDateForBooks(std::string bookName);
    bool checkDue(std::string bookName);
  }
  void addPatron(std::string patronName);
  void addBook(std::string bookName);
  bool search(std::string bookName);
}
