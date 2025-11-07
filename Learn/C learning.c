/*#include <stdio.h>
int main() {

    printf("Hello World\n");
    printf("I am Ramiru\n");
    printf("My age is\t 20");
    return 0;
}*/

//________________data types______________ [(Integer - %d or %i), (float - %f), (character - '%c'), (Boolean - %d, <stdbool.h>)]
/*#include <stdio.h>
#include <limits.h>
#include <stdbool.h>
int main() {

    char x = 12;
    printf("%d\n", x);
    printf("%zu bytes\n", sizeof(x));

    unsigned char y = 125;
    printf("%d\n", y);
    printf("%zu bytes\n", sizeof(y));

    signed char z = -123; 
    printf("%d\n", z);
    printf("%zu bytes\n", sizeof(z));

    int p = 100000;
    printf("%d\n", p);
    printf("%zu bytes\n", sizeof(p));

    short a = -10000;
    printf("%d\n", a);
    printf("%zu bytes\n", sizeof(a));

    long b = 1000002;
    printf("%d\n", b);
    printf("%zu bytes\n", sizeof(b));


    float q = 3.14;
    printf("%.3f\n", q);
    printf("%zu bytes\n", sizeof(q));

    double w = 3.147936738292;
    printf("%.15f\n", w);
    printf("%zu bytes\n", sizeof(w));

    long double r = 3.1463638922725233112637383330;
    printf("%f\n", r);
    printf("%zu bytes\n", sizeof(r));

    char u = 'A';
    printf("%c\n", u);
    printf("%zu bytes\n", sizeof(u));

    bool t = true;
    printf("%d\n", t);
    printf("%zu bytes\n", sizeof(t));
    return 0;
}*/

//___________variables___________________________
/*#include <stdio.h>

int main(void) {
    int number = 15;
    char eng_number = 'A';
    float f_number = 3.14;

    printf("My favorite number is %d ", number);
    printf("and my favorite english character is %c ", eng_number);
    printf("and my favorite float number is %f ", f_number);

    return 0;
}*/
//_______________________constants______________________
/*#include <stdio.h>

int main(void) {

    const int minutesperhour = 60;
    printf("%d", minutesperhour);


    return 0;
}*/
//______________scanf___________________
/*#include <stdio.h>

int main() {

    int n;
    float x;
    char character;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Enter GPA: ");
    scanf("%f", &x);

    printf("Enter the character: ");
    scanf(" %c", &character);

    printf("You entered %d\n", n);
    printf("Your GPA is %f\n", x);
    printf("You chose %c\n", character);

    return 0;
}*/


//______________________Arithmatic operators_________
/*#include <stdio.h>

int main(){
    int a = 2;
    int b = 8;

    printf("%d\n", a+b);
    printf("%d\n", a-b);
    printf("%d\n", a*b);
    printf("%d\n", b/a);
    printf("%d\n", a/b);
    //printf("%d\n", a%b); //modulus
    //printf("%d\n", a++); //(post increment)
    //printf("%d\n", a);
    //printf("%d\n", ++a); //(Pre increment)
    //printf("%d\n", a); 
    //printf("%d\n", b--); //(Post decrement)
    //printf("%d\n", b);
    printf("%d\n", --b);
    printf("%d\n",b);

    return 0;
}*/

/*__________________If condition____________________*/
/*#include <stdio.h>

int main() {

    int x = 8;
    if (x>5 && x>6) { //&& = AND gate
        printf("x is greater than 5 and less than 60\n");
    }
    if (x!=10 || x>9) { // || = OR gate
        printf("x is greater than 5\n");
    }

    printf("C language");

    return 0;
}*/

//____________If else condition________________________

/*#include <stdio.h>

int main(){

    int x;
    
    printf("Enter number: ");
    scanf("%d", &x);

    if (x>0){
        printf("Given number is positive");
    }
    else{
        printf("Given number is 0 or negative");
    }

        return 0;
}*/

//________________ternary operator_________________________
/*#include <stdio.h>

int main(){

    int x = 7;

    int y = (x>3) ? 77 : 777 ;
    char z = (x>10) ? 'T' : 'F' ;
    const char* q = (x>=7) ? "True" : "False" ; // since a word is outputted

    printf("%d\n", y);
    printf("%c\n", z);
    printf("%s\n", q);

    return 0;
}*/

//________________if elif________________
/*#include <stdio.h>

int main(){

    int number;

    printf("Enter number: ");
    scanf("%d", &number);
    printf("You entered %d\n", number);

    if (number > 0){
        printf("Positive");
    }
    else if (number < 0){
        printf("Negative");
    }
    else{
        printf("Zero");
    }

    return 0;You have obtained an A
}*/

//Grading using marks
/*#include <stdio.h>

int main(){

    int mark;

    printf("Enter mark: ");
    scanf("%d", &mark);
    printf("You entered %d\n", mark);

    if (mark >= 75 && mark<= 100) {
        printf("You have obtained an A");
    }
    else if (mark>=65 && mark<=74){
        printf("You have obtained an B");
    }
    else if (mark>=55 && mark<=64){
        printf("You have obtained an C");
    }
    else if (mark>=35 && mark<=54){
        printf("You have obtained an S");
    }
    else if (mark>=0 && mark<=34){
        printf("You have obtained an F");
    }
    else{
        printf("Marks not in range, retry");
    }

    return 0;
}*/

//____________nested if___________________

/*#include <stdio.h>

int main(){
    int x,y,z ;

    printf("x = ");
    scanf("%d", &x);

    printf("y = ");
    scanf("%d", &y);

    printf("z = ");
    scanf("%d", &z);

    if (x==3){
        printf("x is 3\n");
        if (y==5){
            printf("y is 5\n");
            if (z==6){
                printf("z is 6\n");
        }
    }

    return 0;
}*/

//_______Switch case statement____________
/*#include <stdio.h>

int main(){

    int choice;

    printf(" 1. Red\n 2. Blue\n 3. Green\n");
    printf("Select color: ");
    scanf("%d", &choice);

    switch(choice){
        case 1: printf("You chose red");
        break;
        case 2: printf("You chose Blue");
        break;
        case 3: printf("You chose Green");
        break;
        default : printf("Invalid choice");
        break;
    }
}*/

//__________________Loops____________________
//while loop

/*#include <stdio.h>

int main(){

    int i = 0;
    while (i<5){
        printf("Hello world\n");
        i++;
    }
}*/

/*#include <stdio.h>

int main(){

    int i = 5;
    while (i){ // goes until 0 and since 0 = False, while loop becomes false and stops
        printf("Hello world\n");
        i--;
    }
}*/

/*#include <stdio.h>

int main(){

    int n, sum=0;

    printf("Enter a number: ");
    scanf("%d", &n);

    int i = 1;

    while (i <=n){
        printf("%d", sum);
        sum +=i;
        i++;
    }

printf("Sum is %d", sum);

return 0;
}*/

//for loop

/*#include <stdio.h>

int main(){

    for (int i=1; i<=20; i+=1){ //format --> for(initialization; condiition, update){}
        printf("%d\n", i);
    }

    return 0;
}*/

/*#include <stdio.h>

int main(){

    int n, sum=0;

    printf("enter number: ");
    scanf("%d", &n);

    for (int i =1; i<=n; i++){
        printf("%d\n", sum);
        sum+=i;
    } 
    printf("Final sum is %d", sum);
    return 0;
}*/
