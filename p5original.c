#include<stdio.h>

int input(){
  int n;
  printf("enter a number\n");
  scanf("%d", &n);
  return n;
}

int gcd(int a, int b){
  if(b!=0)
  return gcd(b, a%b);

  else
  return a;

}

void output(int a, int b, int c){

  printf("gcd is %d\n",c);
}

int main(){
  int a, b, c;

  a=input();
  b=input();
  c=gcd(a,b);
  output(a, c, c);
  return 0;
}