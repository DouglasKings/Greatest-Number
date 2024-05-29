#include <stdio.h>

int calculateGreatestNumber(int Number1, int Number2, int Number3);

int main(){
    int Number1, Number2, Number3, Max;

    printf("Enter the three numbers: \n");
    scanf("%d%d%d", &Number1, &Number2, &Number3);

    Max = calculateGreatestNumber(Number1, Number2, Number3);

    printf("The greatest number is %d \n ", Max);

    return 0;
}

int calculateGreatestNumber(int Number1, int Number2, int Number3){
    return (Number1 > Number2) ? ((Number1 > Number3) ? Number1 : Number3) : ((Number2 > Number3) ? Number2 : Number3);
}