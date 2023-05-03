/*
	Algoritma, 1'den belirtilen bir üst sınır sayısına kadar olan tüm sayıları sırayla kontrol eder. 
	Her sayı için, eğer sayı 3'e tam bölünüyorsa, "Fizz" yazdırılır. Eğer sayı 5'e tam bölünüyorsa, 
	"Buzz" yazdırılır. Eğer sayı hem 3'e hem de 5'e tam bölünüyorsa, "FizzBuzz" yazdırılır. Eğer sayı
	3'e veya 5'e tam bölünmüyorsa, sayı kendisi yazdırılır.
*/
#include <stdio.h>

int main()
{
    for(int i = 1; i <= 100; i++)
    {
        if(i % 3 == 0 && i % 5 == 0)
        {
            printf("FizzBuzz\n");
        }
        else if(i % 3 == 0)
        {
            printf("Fizz\n");
        }
        else if(i % 5 == 0)
        {
            printf("Buzz\n");
        }
        else
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
