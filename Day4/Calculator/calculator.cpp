#include <array>
#include <calculator>
#include <vector>

namespace calculator {

double cap(double original, double maximum, double minimum) {
    if (original < maximum && original > minimum) {
      return original;
    } else if (original < maximum && original < minimum) {
      return minimum;
    } else {
      return maximum;
    }
}

std::array arrayCap(std::array original) {
  std::array<double, original.size()> capped = { };
  for (i = 0; i < original.size(); i++) {
    if (original[i] < maximum && original[i] > minimum) {
      capped[i] = original[i];
    } else if (original < maximum && original < minimum) {
      capped[i] = minimum;
    } else {
      capped[i] = maximum;
    }
  }
  return capped;
}

double average(std::array original) {
  double sum;
  for (i = original.size(); i != 0; i--) {
    sum += original[i];
  }
  sum /= original.size();
  return sum
}

bool sign(double original) {
  if (original < 0) {
    return false;
  } else {
    return true;
  }
}

double median(std::array original) {
  return original[original.size()/2]
}

double mode(std::array original) {
  int currentVal = 0;
  int modeAmount = 0;
  int mode = 0;
  std::vector<int> uniqueNums = { };
  std::vector<int>::iterator = finder;
  }
  for (i = 0; i < original.size(); i++) {
    currentVal = std::count (original, original + original.size(), uniqueNums[i])
    if (currentVal > mode) {
      modeAmount = currentVal;
      mode = original[i]
      finder = uniqueNums.find(original[i]);
      if (finder == uniqueNums.end()) {
        uniqueNums[i] = original[i];
      }
    }
  }
}

std::array difference(std::array original1, std::array original2) {
  std::array<int, original1.size()> subtracted = { };
  for (i = 0; i < original1.size(); i++) {
    subtracted[i] = original1[i] - original2[i];
  }
  return subtracted;
}

}
