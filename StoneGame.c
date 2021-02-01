#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("There are 20 stones.\nYou and I will pick stones one by one.\n We can only choose 1, 2 or 3 stones at once\n\n");
    int n;
    int stonepick;
    for(n=20;n>0;){
    scanf("%d",&stonepick);
    
    // everytime user pick stone ,,comp have to pick stone so that total stones picked at that turn is 4
    // so that last stone is everytime picked by comp and user never wins
    
    if(stonepick==1){
            n=n-stonepick-3;
            printf("%d stones are left\n\n",n);
    }
    else if(stonepick==2){
            n=n-stonepick-2;
            printf("%d stones are left\n\n",n);
    }
    else if(stonepick==3){
            n=n-stonepick-1;
            printf("%d stones are left\n\n",n);
    }
    else {
    printf("%d stones are left\n\n",n);
    printf("Enter a Valid Number:");
    }
    if(n==0){
        printf("\n\nYou Loose\n\n");
        break;
    }
    }
}
