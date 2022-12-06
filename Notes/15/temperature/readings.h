#ifndef __READINGS_H
#define __READINGS_H
#include "reading.h"
#include <string>
#include <vector>

class Readings {
  public:
    Readings(std::istream& ist);
    int size();                  // Number of readings 
    Reading reading(int index);  // Reading[index]
    std::string graph();         // Return char graph of data
  private:
    std::vector<Reading> _readings;
};
#endif
