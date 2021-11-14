/**
 * @file functions.c
 * @author Doug Funnie
 */

#import <math.h>
#import <stdio.h>
#import <stdlib.h>

/**
 * @brief Print a random integer
 * @return int the same printed number
 */
int doSomething() {
  int val = rand();
  printf("Here's a random integer: %d\n", val);
  return val;
}

/**
 * @brief Whenever called, this will greet the user
 * @see [The history of Hello, World!](https://en.wikipedia.org/wiki/%22Hello,_World!%22_program)
 */
void greetings() {
  printf("Hello, World!\n");
}
