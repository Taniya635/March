#include <stdio.h>
int main(){
    int a, b, sum;
    printf("Enter the number: ");
    scanf("%d %d",&a, &b);
    sum = a+b;
    printf("The sum of %d and %d is %d\n:",a,b,sum);
    return 0; 
}

#include <stdio.h>

int main() {
    int a, b, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    sum = a + b;
    printf("The sum of %d and %d is %d\n", a, b, sum);
    return 0;
}
