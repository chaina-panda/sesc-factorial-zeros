#include <math.h>
#include <stdio.h>
int main() {
int a, i, b;
a = 0;
scanf("%d", &i);
for (i; i>0; i--){
  b = i;
  while (b%5 == 0){
  a = a+1;
  b = b/5;}
}
printf("%d", a);
return 0;
}