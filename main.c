#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
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
int ex12(){
    char select = '0';
    printf("Por favor escriba la tecla indicada en el menu\n");
    printf("B.- BEBÉ\n");
    printf("A.- ADOLESCENTE\n");
    printf("M.- MUJER\n");
    printf("H.- HOMBRE\n");
    
    scanf(" %c",&select); // to avoid scnaf fuckups put space where newline or other special characters would be
    switch(select){
        case('B'):
        printf("Es un bebé");
        break;
        case('A'):
        printf("Es un adolescente");
        break;
        case('M'):
        printf("Es una mujer");
        break;
        case('H'):
        printf("Es un hombre");
        break;
    }
}
int ex13(){
    int age = 0;
    char name[100];
    printf("Por favor introduzca su nombre, con una ocupacion menor de 100 caracteres, y posteriormente su edad\n");
    scanf("  %s %i",&name,&age);
    if(age<32){
        printf("Es joven");
    }
    if(age>32 && age<75){
        printf("Es adulta");
    }
    if(age>75){
        printf("Es anciana");
    }
}
int ex14(){
    char character = '0';
    printf("Introduzca un caracter:  ");
    scanf("%c",&character);
    switch(character){
        case('a'): case('A'): case('e'): case('E'): case('i'): case('I'): case('o'): case('O'): case('u'): case ('U'):
        printf("Es una vocal");
        break;
        case('/'): case('*'): case('-'): case('+'):
        printf("Es un caracter special");
        break;
        default:
        printf("Es una consonante");
        break;
        case('0'): case('1'): case('2'): case('3'): case('4'): case('5'): case('6'): case('7'): case('8'): case ('9'):
        printf("Es un digito");
        break;
    }
}
int ex15(){
    int parit = 0;
    int rest = 0;
    printf("Piense un numero\n");
    printf("Es el numero par(2) o impar(1):  ");
    scanf("%i",&parit);
    printf("Cual es el resto de ese numero dividido entre 5?\n");
    scanf("%i",&rest);
    if(parit == 1){
        switch(rest){
            case(0):
            printf("El numero en el que piensa es 5");
            break;
            case(1):
            printf("El numero en el que piensa es 1");
            break;
            case(2):
            printf("El numero en el que piensa es 7");
            break;
            case(3):
            printf("El numero en el que piensa es 3");
            break;
            case(4):
            printf("El numero en el que piensa es 9");
            break;
        }
    }
    else{
        switch(rest){
            case(0):
            printf("El numero en el que piensa es 10");
            break;
            case(1):
            printf("El numero en el que piensa es 6");
            break;
            case(2):
            printf("El numero en el que piensa es 2");
            break;
            case(3):
            printf("El numero en el que piensa es 8");
            break;
            case(4):
            printf("El numero en el que piensa es 4");
            break;
        }
    }
}
int ex16(){
    int month;
    printf("Introduzca el numero del mes\n");
    scanf(" %s",&month);
    if(month = 4){
        printf("Ya que el mes es febrero, por favor introduzca el año para saber si es bisiesto\n");
        int año = 0;
        scanf("%i",&año);
        if(año%4 == 0 || año%100 == 0 || año%400 == 0){
            printf("El año es bisiesto\n");
        }
    } // para resolver este ejercicio utilizar el switch con el numero del mes. colocar el if dentro del caso de febrero
}
int ex17(){
    // lo mismo que los de comparacion de edad pero sacando el imc primero
}
int ex18(){
int i =0;
float notas[6];
int contador = 0;
for(i;i<6;i++){
printf("Por favor introduzca la nota en orden, en formato XX.XX, y introduzca 0 si no se ha presentado\n");
scanf("%f",&notas[i]); // fills out the array
if(notas[i] == 0){
    contador++;
}
}
float sum = 0;
int b = 0;
for (b;b<6;b++){
    sum = sum + notas[b];
}
    
    float mediaconceros = sum/6;
    float mediasinceros = sum/(6-contador);
    printf("%f %f",mediaconceros,mediasinceros);
// el resto del ejercicio se realiza mediante dos cadenas de if, una para cada media
}
int ex19(){
    int numberdivided = 0;
    for(numberdivided;numberdivided<100;numberdivided++){
        if((numberdivided%2)!=0){
            printf("%i Impar\n",numberdivided);
        }
        else if((numberdivided%2)==0){
            printf("%i par\n",numberdivided);
        }
    }
}
// saltados del 23 al 27
int ex20(){
int i = 0;
long int num1 = 0;
long int num2 = 0;
long int num3 = 0;
int c = 0;
int b = 0;
for (i;i<=100;i++){
    num1 = num1+i;
}
while(b<=100){
  num2 = num2+b;
  b++;
}
do{
  num3 = num3+c;
  c++;
}
while(c<=100);
printf("%li %li %li",num1,num2,num3);
} 
int ex21(){ // para el examen recuerda que el while y el do while existen
int numero = 0;
int suma = 0;
printf("Introduzca los numeros, con un 0 para finalizar la suma\n");
do{
    scanf("%d",&numero);
    suma = suma+numero;
}while(numero!=0);
printf("la suma es %i",suma);
}
int ex22(){
    float numero = 0;
    float suma = 0;
    int contador = 0;
    printf("Introduzca los numeros deseados y presione ENTER para finalizar el programa\n");
    do{
        scanf("%f",&numero);
        suma = suma + numero;
        contador++;
    }while(getchar()!='\n');
    float media = suma/contador;
    printf("La media es %f",media);

}
int ex23(){
    printf("Por favor introduzca los numeros\n");
    int numero = 0;
    int suma =0;
    int sumaimpar = 0;
    do{
    scanf("%d",&numero);
    if(numero%2 == 0){
        suma = suma+numero;
    }
    else{
        sumaimpar = sumaimpar + numero;
    }
}while(numero!=0);
printf("Suma par = %i\n",suma);
printf("Suma impar = %i",sumaimpar);
}
int ex24(){
printf("Presione la tecla c para mostrar la lista de años bisiestos del siglo XX\n");
    long int añoxx = 1900;
    long int añoxix = 1800;
    do{
        if((añoxix%4 == 0) && (añoxix%100 != 0)){
          printf("El año %i es bisiesto",añoxix);  
        }
        añoxix++;
    }while(añoxix<=1899 && getchar()!='c');
    do{
    if((añoxx%4 == 0) && (añoxx%100 != 0)){
          printf("El año %i es bisiesto",añoxx);  
        }
        añoxx++;
    }while(añoxx<=1999);
exit(ex24);
}
int ex25(){
    int pot = 0;
    int num = 0;
    printf("Por favor introduzca el numero seguido de la potencia a la que desea elevarlo\n");
    scanf("%i %i",&num,&pot);
    if(pot>0){
    int finalnum = pow(num,pot);
    printf("%i is the number",finalnum);
    }else{
        printf("Please input a positive power number\n");
    }
}
int ex26(){
    int num = 0;
    printf("Por favor introduzca un numero entero positivo para calcular su factorial\n");
    scanf("%i",&num);
    int i = num-1;
    for(i;i>1;i--){
        num = num*i;
    }
    printf("%i is the factorial of the number you input",num);

}
int ex27(){
    printf("Por favor introduzca un valor mayor que zero para obtener el tamaño de la sucesion de Fibonacci\n");
    int size = 0;
    int i = 2;
    scanf("%i",&size);
    printf("0 1");
    for(i;i<=size;i++){
        int printnum = (i-1)+(i-2); // doesnt work but its the formula stated in wiki wtf?
        printf(" %i",printnum);
    }
}
int ex28(){
    printf("Introduzca numeros o letras, sino se le sumaran errores. Para finalizar el programa escriba el caracter F\n");
    int counter = 0;
    char charscan = '0';
    do{
        scanf(" %c",&charscan);
        if(!isalpha(charscan) && !isdigit(charscan)){
            counter++;
        }
    }while(charscan != 'F'); // avoid getchar it is dogshit use charscan and put a finish condition here
    printf("Used ha tenido %i errores",counter);// runs into infinite loop if you use getchar
}
int ex29(){
    printf("Por favor introduzca un numero\n");
    int num = 0;
    int quot = 1;
    int rest = 0;
    scanf("%i",&num);
    do{
        rest = num%2;
        num = num/2;
        printf("%i",rest);

    }while(num>=1);
}
int ex30(){
    // el mastermind. 
    // for the game's purposes we will imagine that the input is secret
    int i = 0;
    printf("Please input the secret code as a string \n");
    char secretcode[4];
    scanf("%s",secretcode);
    char publiccode[4];
    int i = 0;
    int blkpeg = 0;
    int wpeg = 0;
    printf("You have 12 tries to guess the correct code. For every color in the correct posion one black peg will be added. For every correct color a white one will be added\n");
    do{
    printf("Please enter your guess, 4 letters\n");
    scanf("%s",publiccode);
    if(strcmp(secretcode[i],publiccode[i]) == 0){
        blkpeg++;
    }else if(trcmp(secretcode,publiccode[i]) == 0 ){
        wpeg++;
    }
    i++;
    }while(i<13);
    printf("You're finished");
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
    case(12):
    ex12();
    break;
    case(13):
    ex13();
    break;
    case(14):
    ex14();
    break;
    case(15):
    ex15();
    break;
    case(16):
    ex16();
    break;
    case(18):
    ex18();
    break;
    case(19):
    ex19();
    break;
    case(20):
    ex20();
    break;
    case(21):
    ex21();
    break;
    case(22):
    ex22();
    break;
    case(23):
    ex23();
    break;    
    case(24):
    ex24();
    break;
    case(25):
    ex25();
    break;
    case(26):
    ex26();
    break;
    case(27):
    ex27();
    break;
    case(28):
    ex28();
    break;
    case(29):
    ex29();
    break;
    case(30):
    ex30();
    break;
}

}
// apparently there is a missing semicolon that doesnt really exist. Program compiles perfectly vs code moment guh
