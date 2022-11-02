//project2
#include <stdio.h>
int x,a,toplam3, toplam1;
kareler(x){
	int i,toplam3,toplam1,toplam2; 
	
	
	toplam1 = 0;	     
	toplam2 = 0;
	
	
	for(i=0;i<=100;i++){   
	
	
	
	toplam1 +=(i*i);    
	
	toplam2 += i;
	toplam3 = (toplam2*toplam2);   
	}
	a=toplam3-toplam1;
	return a;
} 



int main() {
 kareler(x);
 printf(" SONUCUNUZ = %d \n " , a );     

return 0;
}
