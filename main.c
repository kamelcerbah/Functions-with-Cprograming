#include <stdio.h>
#include <stdlib.h>

//adding the f_max function
#include "Header Functions/max.h"

int main()
{       // testing the max function

        float n1,n2;
        printf("Enter two numbers :\n");
        scanf("%f%f",&n1,&n2);
         printf("\n Max is : %.2f \t",f_max(n1,n2));
    return 0;
}
