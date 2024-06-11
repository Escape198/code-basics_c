#include <stdio.h>

void km_to_mi(void) {
  // BEGIN (write your solution here)
  float kilometers, miles;
  float lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  for (kilometers = lower; kilometers <= upper; kilometers += step) {
    miles = kilometers * 0.621;
    printf("%.2f : %.2f\n", kilometers, miles);
  }
  // END
}
