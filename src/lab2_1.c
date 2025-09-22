#include <stdio.h>

int sum_to_n(int n) {
  int sum = 0;
  for (int i = 1; i <= n; i++) {
    sum += i;
  }
}

int main() {
  int n;
  printf("Enter a positive integer n: ");
  scanf("%d", &n);

  if (n < 1) {
    printf("Error: n must be a positive integer.\n");
  } else {
    int result = sum_to_n(n);
    printf("The sum of integers from 1 to %d is %d\n", n, result);
  }

  return 0;
}
