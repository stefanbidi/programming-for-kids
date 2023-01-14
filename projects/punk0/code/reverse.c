#include <stdio.h>
#include <stdlib.h>
typedef struct list {
  int len;
  int *data;
} list;

// reverse the input list
//   [1,2,3,4]
// returns:
//   [4,3,2,1]
list reverse(list x) {
  // start with len=0 and allocate space
  // for x.len elements, 4 bytes each
  list r = {0, malloc(x.len * 4)};
  for (int i = 0; i < x.len; i++) {
    // example if x.len is 4:
    // 4 - 1 - 0 = 3
    // 4 - 1 - 1 = 2
    // 4 - 1 - 2 = 1
    // 4 - 1 - 3 = 0
    int v = x.data[x.len - 1 - i];
    r.data[r.len++] = v;
  }
  return r;
}

int main(void) {
  list x = {
      .len = 10,
      .data = malloc(x.len * 4),
  };

  int n = 0;
  x.data[n++] = 1;
  x.data[n++] = 1;
  x.data[n++] = 2;
  x.data[n++] = 3;
  x.data[n++] = 3;
  x.data[n++] = 4;
  x.data[n++] = 1;
  x.data[n++] = 2;
  x.data[n++] = 7;
  x.data[n++] = 1;

  list r = reverse(x);
  printf("[");
  for (int i = 0; i < r.len; i++) {
    printf("%d", r.data[i]);
    if (i != r.len - 1) {
      printf(" ");
    }
  }
  printf("]\n");
}
