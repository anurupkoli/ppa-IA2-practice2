#include<stdio.h>

int input_side(){
  int a;
  printf("please enter the value of base1 of triangle\n");
  scanf("%d",&a);
  return a;

}

int check_scalene(int a, int b, int c){
int scalene[3]={1,2,3};


  if(a==b && a==c)
    return scalene[2];
  
  else if(a==b && b==c && c==a)
    return scalene[1];

  else
  return scalene[0];
  
}

void output(int a, int b, int c, int scalene){
   
  if(scalene==1)
  printf("triangle is scalene\n");
 
  else 
  printf("triangle is not scalene\n");
}

int main(){
  int a,b,c, scalene;
  a= input_side();
  b= input_side();
  c= input_side();

 scalene= check_scalene(a,b,c);

output(a,b,c,scalene);
  return 0;
}
