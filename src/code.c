/**
 * @file code.c
 * @author Doug Funnie
 */

#import "functions.h"

/**
  * @brief Main program loop
  * @param repeat Defines whether the loops runs once or infinitely
  *
  * Id dolor incididunt incididunt consectetur. Qui exercitation aliqua mollit non aliqua non. Qui voluptate Lorem quis
  * magna incididunt et. Ut aute incididunt occaecat officia. Minim ut officia elit consectetur voluptate magna.
  *
  * @see https://www.google.com
  */
void loop(int repeat) {
  greetings();

  do {
    doSomething();
  } while (repeat);
}

/**
 * Program entry point
 *
 * @return the exit code
 */
int main() {
  loop(1);

  return 0;
}
