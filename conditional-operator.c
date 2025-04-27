#include <stdio.h>

int main (int argc, char *argv[]) {
      int a, b, c;
      printf("enter your numbers");
      scanf("%d" "%d" "%d", &a, &b, &c);
      if (a > b && a > c)
      {
            printf("the biggest number is a %d :", a);
      }else if (b > a && b > c)
      {
            printf("the biggest number is b %d :", b);
      }else{
            printf("the biggest number is c %d :", c);

      }
      return 0;
}