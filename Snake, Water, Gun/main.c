#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int SnakeWaterGun (char you, char comp) {


    if (you == comp) {
        return 0;
    }

    if (you == 's' && comp == 'w'){
        return 1;
    }
    else if(you == 'w' && comp == 's'){
        return -1;
    }

    if (you == 's' && comp == 'g') {
        return -1;
    }
    else if (you == 'g' && comp == 's'){
        return 1;
    }

    if (you == 'g' && comp == 'w') {
        return -1;
    }
    else if (you == 'w' && comp == 'g'){
        return 1;
    }
}

int main()
{
    char you;
    char comp;

    srand(time(0));
    int number = rand()%100 + 1;

    if(number < 33) {
        comp = 's';
    }
    else if (number > 33 && number < 66){
        comp = 'w';
    }
    else {
        comp = 'g';
    }

    printf("Enter 's' for 'Snake', 'w' for Water and 'g' for Gun\n");
    scanf("%c", &you);

    int result = SnakeWaterGun(you, comp);

    printf("You chose %c and the computer chose %c.\n", you, comp);

    if (result == 0) {
        printf("The match is a tie!!");
    }

    else if (result == 1) {
        printf("You have won");
    }

    else {
        printf("You lose");
    }

    return 0;
}
