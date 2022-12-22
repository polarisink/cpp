#include <iostream>
using namespace std;
int f(int n, int k);
int main(int argc, char const *argv[])
{
  cout << "input:" << endl;
  int n, k;
  cin >> n;
  cin >> k;
  cout << f(n, k) << endl;
  return 0;
}

int f(int n, int k)
{

  return ((n == k) || (k == 0)) ? 1 : f(n - 1, k - 1) + f(n - 1, k);
}