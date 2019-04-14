#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "mrowka.h"

void step_ant(int ** p, int x, int y, int orient, int ruch, int sekwencja[], int sekwencja_size, int roz) {
  if (ruch == 0) ruch = RUCH_DEFAULT;
  if (orient == 0) orient = UP;

  for (int i = 1; i <= ruch; i++) {
    p[x][y]++;
    if (p[x][y] >= sekwencja_size)
      p[x][y] = 0;

    if (orient == UP) {
      if (y == 0)
        y = roz - 1;
      else
        y -= 1;

      if (sekwencja[p[x][y]] == 0) {
        orient = RIGHT;
      } else if (sekwencja[p[x][y]] == 1) {
        orient = LEFT;
      }

    } else if (orient == LEFT) {
      if (x == 0)
        x = roz - 1;
      else
        x -= 1;

      if (sekwencja[p[x][y]] == 0) {
        orient = UP;
      } else if (sekwencja[p[x][y]] == 1) {
        orient = DOWN;
      }

    } else if (orient == DOWN) {
      if (y == roz - 1)
        y = 0;
      else
        y += 1;

      if (sekwencja[p[x][y]] == 0) {
        orient = LEFT;
      } else if (sekwencja[p[x][y]] == 1) {
        orient = RIGHT;
      }

    } else if (orient == RIGHT) {
      if (x == roz - 1)
        x = 0;
      else
        x += 1;

      if (sekwencja[p[x][y]] == 0) {
        orient = DOWN;
      } else if (sekwencja[p[x][y]] == 1) {
        orient = UP;
      }

    }
  }
}
