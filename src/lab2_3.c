#include <stdio.h>

int is_prime(int n) {
  if (n <= 1) return 0;
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) return 0;
  }
  return 1;
}

int main() {
  int n;
  printf("Enter a positive integer n: ");
  scanf("%d", &n);

  if (n < 1) {
    printf("Error: n must be a positive integer.\n");
  } else {
    printf("Prime numbers up to %d are:\n", n);
    for (int i = 2; i <= n; i++) {
      if (is_prime(i)) {
        printf("%d ", i);
      }
    }
    printf("\n");
  }

  return 0;
}
