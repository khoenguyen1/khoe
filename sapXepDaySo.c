#include <stdio.h>

int sort(int mang[]);
void display(int mang[]);
int main(void) {
  //sap xep day so
  int mang[5] = {
    3,
    23,
    45,
    19,
    27
  };
  sort(mang);
  display(mang);
}

int sort(int mang[]) {
  int i = 0, j = 0;
  int tmp;

  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      if (mang[j] < mang[j + 1]) {
        tmp = mang[j + 1];
        mang[j + 1] = mang[j];
        mang[j] = tmp;
      }
    }
  }
}
void display(int mang[]) {
  printf("arrange from big to small : %d, %d, %d, %d,%d", mang[0], mang[1], mang[2], mang[3], mang[4]);
}