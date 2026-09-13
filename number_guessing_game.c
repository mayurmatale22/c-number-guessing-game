#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){

int secret_number = 5;
int guess = 0;
int guessCount = 0;
int guessLimit = 3;
int outofguesses = 0;

while ( guess != secret_number && outofguesses == 0){
    if (guessCount < guessLimit){

    
    printf("Enter a number:");
    scanf("%d" , &guess);
    guessCount++;
    }
    else{
        outofguesses = 1;
    }
}
if (outofguesses == 1){
    printf("Sorry You're out of guesses\n");
}
else{
printf("CONGRATS! YOU WIN!\n");
}


    return 0;
}
