# include <stdio.h>

int main(){
    float celcius,far;
    printf("Enter the celcius:");
    scanf("%f",&celcius);
    far = (celcius*9/5)+32;
    printf("%.2f celcius =  %.2f faranheit",celcius,far);
    return 0;
}