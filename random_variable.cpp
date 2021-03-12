#include <stdio.h>
#include <stdlib.h>
 
 void randomVariable(){
 
 int c, n;
 	for (c = 1; c <= 100; c++) {
    n = rand() % 1000 +1;
    printf("%d ", n);
  }
 }
 
 void BegintoEndVariable(){
  int c, n;
  
  for (c = 1; c <= 100; c++) {
    
    printf("%d ", c);
  }	
  
}
 	
void EndtoBeginVariable(){
int c, n;
   for (c = 100; 0 <= c; c--) {         
    
    printf("%d ", c);
  }	
	
} 	

int main() {
  
 randomVariable();   // random variables , between to 0 and 100
 
 BegintoEndVariable();// 1 to 100
  
  EndtoBeginVariable(); // 100 to 1
 
 

  
  
  
  
 
 
 
  return 0;
}
