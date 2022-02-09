#include<stdio.h>

void input(float *base, float *height){
  printf("please enter the value of base of the triangle\n");
  scanf("%f",base);

  printf("please enter the value of height of the triangle\n");
   scanf("%f",height);

}

void find_area(float base,float height,float *area){
  *area=(base*height)/2;

}

void output(float base, float height, float area){
  printf("the area of the triangle with base %f and height %f is %f",base,height,area);
}

int main(){
  float a,b,c;
  input(&a,&b);
  find_area(a,b,&c);
  output(a,b,c);
  return 0;

}
  
