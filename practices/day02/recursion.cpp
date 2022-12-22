#include <iostream>
using namespace std;


int f(int n);
int main()
{
  cout << "input x:";
  int x;
  cin >> x;
  cout << f(x) << endl;
  return 0;
}

int f(int n)
{
  return n == 0 ? 1 : n * f(n - 1);
}