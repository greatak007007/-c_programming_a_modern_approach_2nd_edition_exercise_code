/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* repdigit.c (Chapter 8, page 166) */
/* Checks numbers for repeated digits */

#include <stdbool.h>   /* C99 only */
#include <stdio.h>

int main(void)
{
  bool digit_seen[10] = {false};
  int occurrences[10] = {0};
  int digit, i;
  long n;

  printf("Enter a number: ");
  fflush(stdout);
  scanf("%ld", &n);

  while (n > 0) {
    digit = n % 10;
    occurrences[digit]++;
    if (!digit_seen[digit])
        digit_seen[digit] = true;
    n /= 10;
  }
  printf("Digit:       ");
  fflush(stdout);
  for(i=0; i < 10; i++){
      printf("%2d", i);
      fflush(stdout);
  }
  printf("\n");
  fflush(stdout);

  printf("Occurrences: ");
  fflush(stdout);
  for(i=0; i < 10; i++){
      printf("%2d", occurrences[i]);
      fflush(stdout);
  }
  printf("\n");
  fflush(stdout);

  return 0;
}
