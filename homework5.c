#include <stdio.h>
#include <stdlib.h>
#include <time.h.

#define constant_numbers = 10

int main()
{
    int numbers [constant_numbers];
    int sum = 0;
    int smallest , largest;
    
    // Making numbers by accident:
    for (int i=0; i< constant_numbers; i++) 
    {
        numbers[i] = rand() % 100 ;
        sum += numbers[i];
    }
    printf("The numbers  been chose:");
    for(int i=0; i< constant_numbers; i++)
    {
        printf("%d", numbers[i]);
    }
    //Finding the smallest and largest number:
    smallest = largest = numbers[0];
    for (int i=1; i< constant_numbers; i++)
    {
        if(numbers[i] < smallest)
        {
            smallest = numbers[i];
        }
        if(numbers[i] > largest )
        {
            largest = numbers[i];
        }
    }    
    
//print the largest and smallest numbers
printf("\n smallest number: %d \n", smallest);
printf("\n largest number: %d \n" , largest);

// sort the largest and smallest numbers:
for (int i = 0; i < constant_numbers-1; i++)
{
    for (int j = i+1; j < constant_numbers; j++)
    {
        if (numbers [i] > numbers [j])
        {
            int temp = numbers [j];
            numbers [i] = numbers [j];
            numbers [j] = temp;
        }
        
        
    }
    
}

// print the numbers that sorted:
printf("The numbers those sorted from the smallest to the largest:");

for (int i = 0; i < constant_numbers; i++)
{
    printf("%d" , numbers [i]);
}
printf("\n");

return 0;

}