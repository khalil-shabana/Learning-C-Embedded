#include<stdio.h>
#include<stdlib.h>

//Example on Enum & Union
enum NUMType {INT,FLOAT,DOUBLE};
        //     0    1     2
union UNUMValue
{
    int u_intValue; //4-bytes
    float u_floatValue; //4-bytes
    double u_doubleValue; //8-bytes
};
union UNUMValue add(union UNUMValue value1,union UNUMValue value2,enum NUMType type)
{
    union UNUMValue result ;
    switch(type)
    {
    case INT:
        result.u_intValue= value1.u_intValue + value2.u_intValue;
        break;
    case FLOAT:
        result.u_floatValue= value1.u_floatValue + value2.u_floatValue;
        break;
    case DOUBLE:
        result.u_doubleValue= value1.u_doubleValue + value2.u_doubleValue;
        break;
    }
    return result;
}

int main() {

    union UNUMValue v1,v2,R;
    printf("The size of UNUMValue union is %d bytes\n\n",sizeof(union UNUMValue));

    v1.u_intValue=9898;
    v2.u_intValue=8776;
    R=add(v1,v2,INT);
    printf("int: %d + %d = %d\n",v1.u_intValue,v2.u_intValue,R.u_intValue);

    v1.u_floatValue=86.82;
    v2.u_floatValue=83.11;
    R=add(v1,v2,FLOAT);
    printf("float: %f + %f = %f\n",v1.u_floatValue,v2.u_floatValue,R.u_floatValue);

    v1.u_doubleValue=821.8;
    v2.u_doubleValue=988.2;
    R=add(v1,v2,DOUBLE);
    printf("double: %lf + %lf = %lf\n",v1.u_doubleValue,v2.u_doubleValue,R.u_doubleValue);

    return 0;
}
