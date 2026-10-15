#include<stdio.h>
//function to find factorial of a number
long int Fact (int n){
    int i;
    long int f=1;
for(int i=1;i<=n;i++)
    f=f*i;
    return f;
}

int main (){
    int n,r;
    long int ncr;
    printf("Enter the value of n and r: ");
    scanf("%d %d",&n,&r);
    if(n<0||r<0||r>n){
        printf("Invalid input!\n");
    }
    else{
        ncr = Fact(n)/(Fact(r)*Fact(n-r));
        printf("The value of NCR=%ld\n",ncr);
    }

    return 0;
}