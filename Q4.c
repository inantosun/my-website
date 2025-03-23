/* Q4: Function Versions of Home Value Calculation */
#include <stdio.h>
#include <math.h>

int computeHomeValue (int popularity, int size);

int main ()
{

    int popularity, size; 
    
    printf("Enter popularity : \n"); 
    scanf("%d",&popularity);  

    printf("Enter size : \n");  
    scanf("%d",&size); 

    printf("Home Value : %d \n" , computeHomeValue ( popularity , size ) );  

    return 0;  

}

int computeHomeValue ( int popularity , int size )
{
    return (((pow( popularity , 3 ))  +  (pow(size , 2))) * 10000 ); 
}


Enter popularity :
5
Enter size :
2
Home Value : 1290000

--------------------------------
Process exited after 3.2 seconds with return value 0
Press any key to continue . . .


// Part B: Void function with internal scanf/printf


#include <stdio.h>
#include <math.h>

void computeHomeValue (void);

int main (void)
{

    computeHomeValue ();



    return 0 ; 
} 

void computeHomeValue (void)
{
    int popularity, size;  
    int homeValue;

    printf("Enter popularity : \n"); 
    scanf( "%d", &popularity ); 

    printf("Enter size : \n");
    scanf("%d", &size);  

    homeValue = ( (pow(popularity,3) + pow(size, 2))* 10000 );  

    printf("\nHome Value : %d \n", homeValue);  
}




Enter popularity :
5
Enter size :
2

Home Value : 1290000

--------------------------------
Process exited after 2.266 seconds with return value 0
Press any key to continue . . .







