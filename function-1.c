
/*
Functions :-
Definitions and working with Function
Scope of Variables - Local / Global variable
Recursion/Fibonacci,Factorial.



# Function Prototype
data_type function_name(int, float);

Defining a function :-
data_type function_name(int x, int y)
{
    block of codes
}

Calling a function :-
function_name(10,20);
function_name(35,65);
function_name(98,100);
function_name(10,20);



#include <stdio.h>

int main()
{
    int x, y;

    int message(int x, int y){

    }
}

int -> return always integers
void -> it will not return anything

Assignments :-
1. Take 2 user input(may be integers or float) and calculate the sum, difference, multiplication, devision, square.
2. Take 4 user input and print the sum of all the integers.
calsum(10,20,30,40) = The addition of 10, 20, 30 and 40 is 100.
3. Take a user input 'n' and check that if the number is greater than 10 and also less than 90,
print/return 'n' else return n + 32.


*/

/*
#include <stdio.h>

int addition(int x, int y);  //Function Prototype


// Defining a function
void main()
{
    int x = 45, y = 105;
    int num1 = 10, num2 = 20;
    printf("Addition of %d and %d is %d.\n",x, y, addition(x, y));  // calling a function
    printf("Square of %d is %d.\n",num1, square(num1));
    printf("Square of %d is %d.\n",num2, square(num2));
}

int addition(int x, int y){
    return (x + y);
}

int square(int num)
{
    return (num * num);
}

*/

/*
#include <stdio.h>

int main()
{
    printf("I am in Main function.\n");
    italy();
    printf("I am finally back in Main function.\n");
    return 0;
}

void italy()
{
    printf("I am in Italy.\n");
    brazil();
    printf("I am back in Italy.\n");
}

void brazil()
{
    printf("I am in brazil.\n");
    argentina();
}

void argentina()
{
    printf("I am in argentina.\n");
}
*/

/*
#include <stdio.h>

int main()
{
    int x = 5;
    x++;
    x++;
    x--;
    x--;
    x++;
    printf("%d", x);
    --x;
    x++;
    ++x;
    printf("%d", x);
    return 0;
}
*/



//function :-
//no return type and no argument
//with return type and no argument
//with return type and with argument
//no return type and with argument


//with return type and with argument
/*
int addition(int x, int y, int z)
{
    int c;
    c = a + b;
    return c;
}

addition(5,10,20);
*/

//with return type and no argument
/*
int addition()
{
    int x = 100, y = 220, c;
    c = x + y;
    return c;
}


void main()
{
    printf("%d", addition());
}
*/


//no return type and no argument
/*
#include <stdio.h>
void addition(){
    int a = 200, b = 350, c;
    c = a + b;
    //return c;
    printf("%d\n", c);
}

void main()
{
    addition();
}

*/

// no return type and with argument
/*
void addition(int x, int y)
{
    int c;
    c = x + y;
    printf("%d",c);
}

void main()
{
    addition(15,25);
}
*/

#include<stdio.h>
void main()
{
    int x=20;
    printf("%d,%d,%d,%d,%d\n",x, x++,x++, ++x, x--);
    printf("%d,%d,%d\n",x++, ++x, x--);
    //printf("%d,%d,%d\n",++x, ++x, ++x);
}

/*
#include <stdio.h>

void main()
{
    int i = 5;
    printf("%d",i);

}
*/


//# Take user input(n) and find the fibonacci series in range n.
//0 1 1 2 3 5







































