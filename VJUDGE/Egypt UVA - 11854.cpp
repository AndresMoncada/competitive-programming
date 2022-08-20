#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c;
  while (true) {
    cin >> a >> b >> c;
    if (a == 0 && b ==0 && c == 0) {
      break;
    }
    if ((b * b + c * c == a * a)||
        (a * a + c * c == b * b)||
        (a * a + b * b == c * c)) {
      cout << "right"<<endl;
    } else {
      cout << "wrong"<<endl;
    }
  }
}