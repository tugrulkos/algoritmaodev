//project1
#include <stdio.h>
#include <stdlib.h>


int ucvebes(int toplam) 

   {

int i;		//De�i�ken tan�mlamalar�

    for ( i = 1; i < 1000; i++)	
	{		// for d�ng�s� ba�lat�l�yor.
			
		{
		if ( i %3 == 0 )					// 3 �n katlar� toplan�yor
			toplam = toplam + i;
	
		if ( i %5 == 0)					// 5 in katlar� toplan�yor
			toplam = toplam + i;
	
		if ( i %15 == 0 )				// hem 3 ve hem 5 in katlar� iki kere toplanmas�n diye 15 in kat� olanlar ��kar�l�yor
			toplam = toplam - i;
}
	}
    

return toplam;	
	

}
int main() 
	{
	int x;
	
	printf ("1-1000 arasidaki sayilar icin sonuc = %d\n" , ucvebes(x));    		// cevab�m�z yazd�l�rm��t�r.
	printf("SORUNUZ CEVAPLANMISTIR :D ");
	
	
}

