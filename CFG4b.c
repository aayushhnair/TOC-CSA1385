#include <stdio.h>
#include <string.h>

void main() {
  char a[100];
  int i, n, flag = 1;
  printf("Enter a string: ");
  
  scanf("%s", a);
  n = strlen(a);
  for (i=0;i<n/2;i++) {
    if (a[i]!=a[n-i-1]) {
      flag = 0;
      break;
    }
  }
  
  if (flag) {
    printf("The string is accepted.\n");
  } else {
    printf("The string is not-accepted.\n");
  }
}
