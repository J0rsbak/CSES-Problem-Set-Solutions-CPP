#include <bits/stdc++.h>
int main() {
  size_t n;
  std::cin >> n;
  if (n == 2 || n == 3) {
    std::cout << "NO SOLUTION";
    return 0;
  }
  for (size_t i = 2; i <= n; i += 2) {
    std::cout << i << ' ';
  }
  for (size_t i = 1; i <= n; i += 2) {
    std::cout << i << ' ';
  }
  return 0;
}
