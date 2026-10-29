#include <stdio.h>

int main(void) {

  int i = 3;
  int f = 3.14;
  char *s = "Hello World\n";

  printf("%s i = %d and f = %f!\n", s, i, f);
  
  printf("==== Bools ====\n");
  printf("C23 comes with the bool type. If you need it on previous C's, use <stdbool.h>\n");
  bool lie = true;
  if (lie == true){
      printf("LIAR\n");
  }

  printf("==== sizeof ====\n");
  printf("sizeof() operator tells you the size in bytes of the _type_ of an expression\n");
  printf("The result of sizeof() will have the type size_t\n");
  printf("For printf, \%zu is the format specifier for positive nubmers and \%zd for negative\n"); 
  
  int a = 999;
  printf("sizeof(a) = %zu\n", sizeof(a));
  printf("sizeof(1 + 4) = %zu\n", sizeof(1 + 4));
  printf("sizeof(3.14) = %zu\n", sizeof(3.14));
}
