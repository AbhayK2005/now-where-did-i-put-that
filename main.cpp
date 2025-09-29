#include <iostream>

#include "src/where.hpp"

int main() {
  int a = find("The quick brown fox", 'e');
  cout << a << endl;
  int b = find("The quick brown fox", "e");
  cout << b << endl;
  int c = find("The quick brown fox", " ");
  cout << c << endl;
  int d = find("The quick brown fox", "quick");
  cout << d << endl;
  int e = find("The quick brown fox", "quiet");
  cout << e << endl;
  return 0;
}
