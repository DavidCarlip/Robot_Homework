#include <iostream>
#include<map>

class library {
  std::string date = "00000000";
  std::string search = "";
  std::vector<patron> patrons;
  std::map<std::string, bool> books {
    {"The Adventures of Tom Sawyer", 0}
    { "The Adventures of Huckleberry Funn", 1}
  };
  std::map<bool, patron>::iterator finder;
  class patron {
  public:
    std::map<std::string, int> patronBooks {
    };
    void checkOut(std::string bookName) {
      std::cout << "What is the date (yyyymmdd)?";
      std::cin >> date;
      finder = books.find(bookName);
      if (finder != books.end()) {
        patronBooks[bookName] = date;
      }
    }
    bool checkIfOut(std::string bookName) {
      finder = books.find(bookName);
      if (finder != books.end()) {
        return true;
      } else {
        return false;
      }
    }
    int getDateForBook(std::string bookName) {
      finder = books.find(bookName);
      if (finder != books.end()) {
        return patronBooks[finder];
      }
    }
    bool checkDue(std::string bookName) {
      finder = books.find(bookName);
      if (finder != books.end() && books[bookName] = 1) {
        for (i = patrons.size(); i != 0; i--) {
          if (patrons[i].checkIfOut(bookName) == true) {
            std::cout << "What is the date (yyyymmdd)?";
            std::cin >> date;
            if (date - patrons[i].getDateForBooks(bookName) > 10000000) {
              return true;
            }
          }
        }
      }
    return false;
    }
  }
  void addPatron(std::string patronName) {
    patron patronName;
    patrons.push_back() patronName
  }
  void addBook(std::string bookName) {
    books[bookName] = 0
  }
  bool search(std::string bookName) {
    finder = books.find(bookName);
    if (finder != books.end()) {
      return true
    }
    return false
  }
}
