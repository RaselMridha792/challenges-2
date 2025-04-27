#include <stdio.h>

int main (int argc, char *argv[]) {
      int x;
      printf("please enter your day in number: ");
            
      scanf("%d", &x);
      if (x == 1)
      {
            printf("saturday");
      }else if (x == 2)
      {
            printf("sunday");
            /* code */
      }
      else if (x == 3)
      {
            printf("monday");
            /* code */
      }
      else if (x == 4)
      {
            printf("tuesday");
            /* code */
      }
      else if (x == 5)
      {
            printf("wednesday");
            /* code */
      }
      else if (x == 6)
      {
            printf("thursday");
            /* code */
      }
      else if (x == 7)
      {
            printf("friday");
            /* code */
      }else{
            printf("please enter a valid number");
      }
      
    return 0;
}