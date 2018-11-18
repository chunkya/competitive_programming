#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<bool> isprime(n, true);
  for (int i = 2; i < n; i++) {
    if (isprime[i]) {
      for (int j = 2 * i; j < n; j += i) {
	isprime[j] = false;
      }
    }
  }
  for (int i = 2; i < n; i++) {
    cout << i << ' ' << isprime[i] << endl;
  }
}