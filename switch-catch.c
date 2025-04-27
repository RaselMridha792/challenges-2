#include <stdio.h>

int main (int argc, char *argv[]) {
      int x;
      printf("please enter your number: ");
      scanf("%d", &x);
      switch (x)
      {
      case 1:
            /* code */
            printf("saturday");
            break;
      case 2:
            printf("sunday");
            break;
      case 3:
            printf("monday");
            break;
      case 4:
            printf("tuesday");
            break;
      case 5:
            printf("wednesday");
            break;
      case 6:
            printf("thursday");
            break;
      case 7:
            printf("friday");
            break;
      
      default:
            printf("invalid number");
            break;
      }

      return 0;
}