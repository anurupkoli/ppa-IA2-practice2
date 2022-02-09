#include<stdio.h>

int input_array_size(){
  int n;
  printf("enter the size of array\n");
  scanf("%d", &n);
  return n;
}
void input_array(int n, int a[n]){
  for(int i=0; i<=n; i++ ){
  printf("enter the element %d \n", i+1);
  scanf("%d", &a[i]);
  }
}

int sum_composite_numbers(int n, int a[n]){
  int sum=0;
for(int i=0; i<n; i++){
  sum+=a[i];
}
return sum;
}
void output(int n, int a[n], int sum){
 printf("%d", sum);
}

int main(){
  int n, a[n], sum;

  n= input_array_size();
  input_array(n, a);

  sum= sum_composite_numbers(n, a);

  output(n, a, sum);

  return 0;
}