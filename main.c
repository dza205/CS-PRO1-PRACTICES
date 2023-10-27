#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
int ex1(){
    printf("Input a whole number\n");
    int num = 0;
    char t[] = "true";
    char f[] = "false";
    scanf("%i");
    printf("The number is %s",(num<0)?t:f);
}
int ex2(){
    printf("Please input a whole number\n");
    int num = 0;
    scanf("%i",&num);
    if((num % 2) != 0){
        printf("The number is even");
    }
    else{
        printf("The number is odd");
    }

}
int ex3(){
    printf("Please input two whole numbers\n");
    int n1,n2;
    scanf("%i %i",&n1,&n2);
    if((n1%n2) != 0){
        printf("The first number is divisible by the other");
    }
    else{
        printf("The first number is not divisible by the other");
    }
}
int ex4(){
    printf("Please input 3 numbers\n");
    int n1,n2,n3;
    scanf("%i %i %i",&n1,&n2,&n3);
    int largerbetweeen2 =((n1>n2)?n1:n2);
    int finalnum = ((largerbetweeen2>n3)?largerbetweeen2:n3);
    printf("%i is the largest number",finalnum);
}
int ex5(){
    printf("Please input 3 numbers\n"); 
    int n1,n2,n3; // declare array of 3 numbers
    scanf("%i %i %i",&n1,&n2,&n3);
    unsigned int largerbetweeen2 =((n1>n2)?n1:n2);
    unsigned int finalnum = ((largerbetweeen2>n3)?largerbetweeen2:n3);
    unsigned int smallest = (n1 + n2 +n3) - largerbetweeen2 - finalnum; // unsigned moment
    printf("The numbers in order are %i %i %i",smallest,largerbetweeen2,finalnum);
}
int ex6(){
    printf("Input the number of correct answers by the students followed by the total number of answers\n");
    long int correct,total;
    scanf("%li %li",&correct,&total);
    float n = ((float)correct/(float)total)*100;
    int perc = ((100<=n)?10:00);
    int perc1 = ((90>n && n>=75)?11:01);
    int perc2 = ((75>n && n>=50)?12:02);
    int perc3 = ((50<n)?13:03);
    switch(perc,perc1,perc2,perc3){
        case(10):
        printf("The percentage is maximum\n");
        break;
        case(11):
        printf("The percentage is medium\n");
        break;
        case(12):
        printf("The percentage is regular\n");
        break;
        case(13):
        printf("The percentage is failing\n");
        break;
    }
    // revisar, se puede hacer con el if else a saco pero si se puede averiguar una forma mas eficiente mejor la vdd. 
    

}
int ex7(){
printf("Please input the three coeficients of the quadratic function a b and c in that order\n");
int a=0,b=0,c=0;
scanf("%i %i %i",&a,&b,&c);
float xpos= (-b+sqrt((b^2)-4*a*c))/(2*a);
float xneg= (-b-sqrt((b^2)-4*a*c))/(2*a);
// TODO FINISH THIS
}
int ex8(){
int a=0,b=0,c=0;
printf("Please input the coefficients a b and c in that order\n");
scanf("%i %i %i",&a,&b,&c);
double xpos= (-b+sqrt(pow(b,2)-(4*a*c)))/(2*a); // ^ IS THE FUCKING XOR OPERATOR AAAAAAAAAA
double xneg= (-b-sqrt(pow(b,2)-(4*a*c)))/(2*a);
printf("Las dos soluciones son %lf %lf",xpos,xneg);
}
int ex9(){
    int n[3] = {0,0,0};
    printf("Please input three numbers\n");
    scanf("%i %i %i",&n[0],&n[1],&n[2]);
    // int largerbetweeen2 =((n1>n2)?n1:n2); ESTO NO FUNCIONA ESTE ALGORITMO ES UNA MIERDA NO USAR ESTO IF ELSE Y PUNTO
    // int finalnum = ((largerbetweeen2>n3)?largerbetweeen2:n3);
    // int smallest = (n1 + n2 +n3) - largerbetweeen2 - finalnum;
    int i = 0;
    for(i;i < 3;i++){
    if(n[0]<n[i]){
        n[0] = n[i];
    }
    }
    i = 0;
    for(i;i<3;i++){
    if(n[2]>n[i]){
        n[2] = n[i];
    }
    }
    int rest = 0;
    float quotient = 0;
    quotient = n[0]/n[2];
    rest = n[0]%n[2];
    printf("%i dividido|entre %i\nC:%.0f R:%i    --------",n[0],n[2],quotient,rest);

    return 0;
}
int ex10(){
    int n1=0,n2=0,n3=0;
    printf("Please input the sides of the triangle in cm\n");
    scanf("%i %i %i",&n1,&n2,&n3);;
    if(n1==n2 && n2==n3 && n3==n1){
        printf("The triangle is equilateral\n");
        exit(ex10);
    }
    if(n1==n2 || n2==n3 || n3==n1){
        printf("The triangle is isosceles\n");
        exit(ex10);
    }
    if(n1!=n2 && n2!=n3 && n3!=n1){
        printf("The triangle is escalene\n");
        exit(ex10);
    }
}
int ex11(){
 printf("Please input two positive numbers, one with three ciphers and one with one cipher\n");
 int n1=0,n2=0;
 scanf("%i %i",&n1,&n2);
 if(n1<100 || n1<0){
    printf("This number either does not contain three ciphers or is negative. Start over\n");
    exit(ex11());
 }
 if(n2>10 || n2<0){
    printf("This number either does not contain one cipher or is negative. Start over\n");
    exit(ex11());
 }
 int result = n1*n2;
 printf("%i\n",n1);
 printf(" x%i\n",n2);
 printf("-------\n");
 printf("%i",result);
}

int main(){
    printf("Input the number of the exercise you'd like to execute\n");
    int exnum = 0;
    scanf("%i",&exnum);

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
    case(5):
    ex5();
    break;
    case(6):
    ex6();
    break;
    case(7):
    ex7();
    break;
    case(8):
    ex8();
    break;
    case(9):
    ex9();
    break;
    case(10):
    ex10();
    break;
    case(11):
    ex11();
    break;
}

}
// apparently there is a missing semicolon that doesnt really exist. Program compiles perfectly vs code moment guh
