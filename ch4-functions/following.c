#include <stdio.h>

int foo(void); // foo function prototype
               //
// Definetely use "void" in the prototype for empty parameter list. Weird behavior if not
void bar(void); 

int plus_one(int n)
{
    return n + 1;
}

void hello(void)
{
    printf("Hello World!\n");
}


int main(void)
{
    int i = 10;
    int j = plus_one(i);
    printf("i + 1 is %d\n", j);
    
    hello();
}


int foo(void) //Function is able to be declared after main because there's a prototype
{
    return 1337;
}

// Not using "void" in the parameter list is allowed in C23
// Pre-C23 compilers have the liberty of letting you know or not if you pass along
// an argument by mistake when calling bar
void bar() 
{
    printf("BAR\n");
}
