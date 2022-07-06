#include<stdio.h>
#include<stdlib.h>

struct SData
{
    unsigned char data1;
    unsigned int data2;
    unsigned char data3;
    unsigned short data4;
}gData;

void print_memory_range(char* base, int size)
//pointer that points to first location
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("%p \t %x \n",base,(unsigned char)*base);
        // %p : to print adresses
        base++;
    }
}
int main() {
    gData.data1=0x11;
    gData.data2=0xFFFFEEEE;
    gData.data3=0x22;
    gData.data4=0xABCD;

    print_memory_range(&gData,sizeof(gData));
    //notice the padding in the output
    return 0;
}
