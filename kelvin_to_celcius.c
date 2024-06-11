#include <stdio.h>

void kelvin_to_celcius(void) {
  // BEGIN (write your solution here)
  int celsius, kelvin;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  for (celsius = lower; celsius <= upper; celsius += step) {
    kelvin = celsius + 273;
    printf("%d : %d\n", celsius, kelvin);
  }
  // END
}
