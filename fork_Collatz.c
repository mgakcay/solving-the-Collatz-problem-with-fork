// Mahmut Görkem AKÇAY
// 1711012018

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>



int main(){
	
	int pid;
	pid= fork();
	
	if(pid>0){
	  //parent process kısmı
	
		wait(NULL);
		
    printf("\nchild ve parent basarili bir sekilde calismistir..");
	}
	

  if(pid==0){
	  //child process kısmı
	  int y;	
	  printf("\nBir pozitif tamsayi giriniz : ");
	  scanf("%d",&y);
	  int x = y;
		
	  printf("\nCollatz probleminden onceki sayi: %d \n",x);
	
	    if(y>0){	
		
		    while(y != 1){
		
			    if(y%2==0){
				    y = y/2;
			    }	 
          else {
				     y = (3*y)+1;
			    }
	
      	} 
	

	   printf("\nCollatz probleminden sonraki sayi: %d \n",y);
		
	} 
 }
}
