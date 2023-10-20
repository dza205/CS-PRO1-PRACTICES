#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
int ex1(){
    int dd = 0;
    int mm = 0;
    printf("Introduzca la fecha en la que se sitúa dentro del año en formato dia y mes\n");
    scanf("%d %d",&dd,&mm);
    int situation = (30.4166666667*(mm-1)+dd);
    printf("Le quedan %d dias del año\n",situation);
}
int ex2(){
 int ndd;
 int nmm;
 int nyy;
 int birthdd;
 int birthmm;
 int birthyy;
 int life = ((nyy - birthyy)*365+(30.4166666667*(nmm-birthmm))+(ndd-birthdd)); 
 printf("Please input your birthday in day month year format day month year\n");
 scanf("%d %d %d",&birthdd,&birthmm,&birthyy);
 printf("Please input today's date in the same format as your birthday\n");
 scanf("%d %d %d",&ndd,&nmm,&nyy);
 printf("you are %lf days old",life);

}

int ex3(){
float salary;
int kids;
printf("What is your salary?\n");
scanf("%f",&salary);
printf("How many children do you have?\n");
scanf("%d",&kids);
float irpfcalc = (salary*0.15);
printf("The IRPF you have to pay is %f \n",(irpfcalc*(kids*0.1)));
}

int ex4(){
    int a,b,c;
    printf("Please input the three coeficients of a second grade equation\n");
    scanf("%d %d %d",&a,&b,&c);
    double x1 = (((-b)+sqrt((b^2)-(4*a*c)))/2);
    double x2 = (((-b)-sqrt((b^2)-(4*a*c)))/2);
    printf("The two possible solutions are %lf and %lf",x1,x2);

}

int ex5(){
    
}

int main(int, char**){
int exnum;
printf("Input the number of the exercise you want to execute\n");
scanf("%d",&exnum);
switch(exnum)
{
    case(1):
    ex1();
    break;
    case(2):
    ex2();
    break;
    case(3):
    ex3();
    break;
    case(4):
    ex4();
    break;

}

}
