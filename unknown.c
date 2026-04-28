#include <stdio.h>
int main(){
    double a,b;
    printf("enter two numbers :\n");
    scanf("%lf%lf",&a,&b);
    double area=a*b;
    double perimeter=2*(a+b);
    printf("area of rectegle is :%lf\n",area);
    printf("perimeter of rectegle is :%lf\n",perimeter);
   return 0;
}