#include <stdio.h>
enum type {INT,DOUBLE};
int comopare( void* value1, void* value2, enum type t)
{
    enum t;
    switch(t)
    {
    case INT:
        if(*(int*)value1 == *(int*)value2) return 0;
        else if(*(int*)value1 > *(int*)value2) return 1;
        else return -1;
    case DOUBLE:
        if(*(double*)value1 == *(double*)value2) return 0;
        else if(*(double*)value1 > *(double*)value2) return 1;
        else return -1;
    }
}

int main()
{
    int x1=5, x2=6, x3=5;
    double y1=10.3, y2=8.3, y3=11.9;
    //

    printf("Compare x1 and x2 gives %d\r\n",comopare(&x1,&x2,INT));
    printf("Compare x1 and x3 gives %d\r\n",comopare(&x1,&x3,INT));
    printf("Compare y1 and y2 gives %d\r\n",comopare(&y1,&y2,DOUBLE));
    printf("Compare y1 and y3 gives %d\r\n",comopare(&y1,&y3,DOUBLE));

}

