#include <stdio.h>

void rectangle(){
    double a,b;
    printf("enter two numbers :");
    scanf("%lf%lf",&a,&b);
    double area=.5*a*b;
    double perimeter=2*(a+b);
    printf("area of rectegle is :%lf\n",area);
    printf("perimeter of rectegle is :%lf\n",perimeter);
}

void average(){
    double a,b,c;
    printf("enter three numbers :"); 
    scanf("%lf%lf%lf",&a,&b,&c);
    double avarage=(a+b+c)/3;
    printf("avarage of three numbers is :%lf\n",avarage);
}

int main(){
    int choice;
    printf("1. Rectangle\n");
    printf("2. Average\n");
    printf("Choice: ");
    scanf("%d",&choice);
    if(choice==1) rectangle();
    else if(choice==2) average();
    else printf("invalid choice!\n");
    return 0;
}