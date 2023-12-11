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
  bool digit_rep[10] = {false};
  int digit, i = 0, j = 0;
  long n;

  printf("Enter a number: ");
  fflush(stdout);
  scanf("%ld", &n);

  while (n > 0) {
    digit = n % 10;
    if (digit_seen[digit]) {
        if(!digit_rep[digit]){
            digit_rep[digit] = true;
            i++;
        }

    }
    else{
        digit_seen[digit] = true;
    }

    n /= 10;
  }

  if (i > 0) {
      printf("Repeated digit(s):");
      fflush(stdout);
      for (j=0; j < 10; j++)
      {
          if(digit_rep[j]){
              printf("%2d", j);
              fflush(stdout);
          }

      }
      printf("\n");
      fflush(stdout);
  }
  else {
      printf("No repeated digit\n");
      fflush(stdout);
  }

  return 0;
}
