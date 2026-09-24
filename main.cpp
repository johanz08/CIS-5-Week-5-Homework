#include <iostream>

// Homework 5 — Johan Zuniga
// CIS 5 Week 05 · Rule engine lite

int main() {
  int score = 0;
  int attendance = 0;

  std::cout << "Score 0-100? ";
  std::cin >> score;

  std::cout << "Attendance percent 0-100? ";
  std::cin >> attendance;

  // Edge values: score 69 / 70 / 71; attendance 79 / 80 / 81.

  // Invalid input is checked first so an out-of-range value cannot get a pass, warn, or fail result.
  if (score < 0 || score > 100 || attendance < 0 || attendance > 100) {
    std::cout << "Result: invalid input\n";
  }
  // Both requirements must be met to pass, so this condition uses &&.
  else if (score >= 70 && attendance >= 80) {
    std::cout << "Result: pass\n";
  }
  else if (score >= 70 || attendance >= 80) {
    std::cout << "Result: warn - one requirement met\n";
  }
  else {
    std::cout << "Result: fail\n";
  }

  return 0;
}
