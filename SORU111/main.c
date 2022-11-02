//project1
#include <stdio.h>
#include <stdlib.h>


int ucvebes(int toplam) 

   {

int i;		//Deðiþken tanýmlamalarý

    for ( i = 1; i < 1000; i++)	
	{		// for döngüsü baþlatýlýyor.
			
		{
		if ( i %3 == 0 )					// 3 ün katlarý toplanýyor
			toplam = toplam + i;
	
		if ( i %5 == 0)					// 5 in katlarý toplanýyor
			toplam = toplam + i;
	
		if ( i %15 == 0 )				// hem 3 ve hem 5 in katlarý iki kere toplanmasýn diye 15 in katý olanlar çýkarýlýyor
			toplam = toplam - i;
}
	}
    

return toplam;	
	

}
int main() 
	{
	int x;
	
	printf ("1-1000 arasidaki sayilar icin sonuc = %d\n" , ucvebes(x));    		// cevabýmýz yazdýlýrmýþtýr.
	printf("SORUNUZ CEVAPLANMISTIR :D ");
	
	
}

