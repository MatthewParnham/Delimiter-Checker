#ifndef INOUT_H
#define INOUT_H

#include <fstream>
#include <iostream>

using namespace std;

class InOut {
public:
  InOut(); //default constructor
  ~InOut(); //destructor

  void openIn(string path); //open ifstream
  void closeIn(); //close ifstream
  string readLine(); //reads a line

  void openOut(string path);
  void closeOut();
  void writeLine(string s);
  void write(string s);

  ifstream in;
  ofstream out;
};

#endif
