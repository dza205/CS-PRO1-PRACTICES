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

}

}
