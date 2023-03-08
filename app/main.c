#include <stdio.h>

#include "myfunc.h"
#include "kvadrat.h"

int main()
{
    //1797693134862315
    double x1,x2;
//    printf("%d\n", kvadrat(0,0,0,&x1,&x2));
//    printf("%d\n", kvadrat(0,0,1,&x1,&x2));
//    printf("%d\n", kvadrat(0,1,0,&x1,&x2));
//    printf("%d\n", kvadrat(1,0,0,&x1,&x2));
    kvadrat(1,3,-4,&x1,&x2);
    printf("%.2f %.2f\n",x1,x2);
//    kvadrat(1,-4,4,&x1,&x2);
//    printf("%.2f %.2f\n",x1,x2);
//    if(kvadrat(1,-5,9,&x1,&x2) != 1)
//        printf("%.2f %.2f\n",x1,x2);
//    else
//        printf("Err\n");
    return myfunc(2);
}
