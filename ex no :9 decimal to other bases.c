#include<stdio.h>    
#include<stdlib.h>  
int main(){  
int a[10],n,i;    
system ("cls");  
printf("Enter the number to convert: ");    
scanf("%d",&n);    
for(i=0;n>0;i++)    
{    
a[i]=n%2;    
n=n/2;    
}    
printf("\nBinary of Given Number is=");    
for(i=i-1;i>=0;i--)    
{    
printf("%d",a[i]);    
}    
return 0;  
}  
int convertDecimalToOctal(int decimalNumber)
{
    int octalNumber = 0, i = 1;

    while (decimalNumber != 0)
    {
        octalNumber += (decimalNumber % 8) * i;
        decimalNumber /= 8;
        i *= 10;
    }

    return octalNumber;
}










#include <stdio.h>
#include <conio.h>
void swap(char *s1, char *s2)
{
char temp;
temp = *s1;
*s1 = *s2;
*s2 = temp;
}
void reverse(char *str, int length)
{
int start = 0;
int end = length -1;
while (start < end)
{
swap(&str[start], &str[end]);
start++;
end--;
}
}char* convert(int num, char str[100], int base)
{
int i = 0;
if (num == 0)
{
str[i++] = '0';
str[i] = '\0';
return str;
}
while (num != 0)
{
int rem = num % base;
str[i++] = (rem > 9)? (rem-10) + 'a' : rem + '0';
num = num/base;
}
str[i] = '\0'; // Append string terminator
// Reverse the string
reverse(str, i);
return str;
}
void main()
{
char str[100];
int n;
clrscr();
printf("Enter the given decimal number : ");
scanf("%d",&n);
printf("\nThe Binary value : %s\n",convert(n,str,2));
printf("\nThe Octal value : %s\n",convert(n,str,8));
printf("\nThe Hexa value : %s\n",convert(n,str,16));
getch();
}


