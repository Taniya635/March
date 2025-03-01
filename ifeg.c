// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("enter the number");
//     scanf("%d",&num);
//     if(num%5==0 && num%11==0)  // num%55==0
//     {
//         printf("% d is divisibale by both 5 and 11",num);
//     }
//     else{
//         printf("%d is not divisible by both 5 and 11",num);
//     }
//     return 78;
// }

// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("enter the number");
//     scanf("%d",&num);
//     if(num%2==0)  // num%55==0
//     {
//         printf("% d is even",num);
//     }
//     else{
//         printf("%d is odd",num);
//     }
//     return 78;
// }

// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("enter the number");
//     scanf("%d",&num);
//     if(num>=1 && num<=100)  // num%55==0
//     {
//         printf("% d is in between",num);
//     }
//     else{
//         printf("%d is not in between",num);
//     }
//     return 78;
// }


#include<stdio.h>
int main(){
    int n,i,j,num=1;
    printf("enter the number");
    scanf("%d",&n);
    // printf("%d",\n)
    for(i=1; i<=n; i++){
        for(j=1; j<=i; i++){
            printf("%d floyd's triangle is:",n);
        }
        printf("\n");
    }
    return 45;
}