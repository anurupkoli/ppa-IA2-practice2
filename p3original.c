#include<stdio.h>

int input_number(){
  int n;
  printf("please enter a number\n");
  scanf("%d", &n);
  return n;
}

int is_composite(int n){
  int i=0, f=1,a=0, b=1;

  while(f<=n){
    if(n%f==0)
    i++;
    f++;

  }

  if(i>2)
  return a;

  else
  return b;
}

void output(int n, int composite){
  if(composite==0)
  printf("%d is composite\n", n);

  else
  printf("%d is not composite\n", n);
}

int main(){
  int n,composite;
  n = input_number();
  composite = is_composite(n);
  output(n,composite);
  return 0;
}