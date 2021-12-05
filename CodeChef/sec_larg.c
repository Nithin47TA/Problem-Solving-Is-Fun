#include <stdio.h>

void main(){
    int a[10],size,largest=-1,larg_2;

printf("Enter the size of list:\n");
scanf("%d",&size);
printf("Enter the numbers:\n");
for (int i = 0; i < size; i++)
{
    scanf("%d",&a[i]);
}
for (int i = 0; i < size; i++)
{
    if(largest<a[i]){
        larg_2=largest;
        largest=a[i];
    }
    
}

printf("\n%d\n",larg_2);







}