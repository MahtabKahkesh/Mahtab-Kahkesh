#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Determinating constant numbers in the set.
const int constant_numbers = 10 ;
int main()
 {
    int numbers [constant_numbers];
    int sum =0;
    double mean , variance , std_deviation;

    //Making numbers by accident.
    for (int i = 0; i < constant_numbers; i++)
    {
        numbers [i] = rand()%100;
        sum += numbers[i];
    }

    //Calculating the average
    mean = (double) sum / constant_numbers;
    double sum_esquared_diff = 0.0;
    for (int i = 0; i < constant_numbers; i++)
    {
        sum_esquared_diff += pow(numbers[i] - mean, 2);
    }

    //Calculating the variance
    variance = sum_esquared_diff / constant_numbers;

    //Calculating the std deviation
    std_deviation = sqrt(variance);
    printf(" The numbers  been chose:");
    for (int i = 0; i < constant_numbers; i++)
    {
       printf("%d" , numbers[i]);
    }

     printf("\n average:%.2f\n Variance:%.2f\n std deviation:%.2f\n \a", mean,variance,std_deviation );

     return 0;

}
