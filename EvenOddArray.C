// programe to read an aray of 10 integers and count total no.of even and odd elements.
#include <stdio.h>

int main() {
    int even=0,odd=0,i,a[10];
    printf("enter array elements");
    for(i=0;i<10;i++)
    {
    scanf("%d",&a[i]);
    if(a[i]%2==0)
    even=even+1;
    else
    odd=odd+1;
    }
    printf("total even elements are %d",even);
    printf("\n total odd elements are %d",odd);
}
