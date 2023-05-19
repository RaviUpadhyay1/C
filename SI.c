# include <stdio.h>
# include <stdio.h>
int main(){
    float P,T,R,SI;
    printf("Enter the principal:");
    scanf("%f",&P);
    printf("Enter the Year:");
    scanf("%f",&T);
    printf("Enter the Rate:");
    scanf("%f",&R);
    SI = (P*T*R)/100;
    printf("The SI is %f",SI);
    return 0;
}