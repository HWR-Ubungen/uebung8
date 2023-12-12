#include <stdio.h>

#define SIZE 20

int upperLetterCount(char *input){
    int count = 0;
    for (int i = 0; i < SIZE; ++i) {
        if(input[i] >= 'A' && input[i] <= 'Z') {
            count++;
        }
    }
    return count;
}

int main() {
    char test[8] = {'A', 'f', 's', 'a', 'A', 't', 'f', 'Q'};
    printf("%d", upperLetterCount(test));
    return 0;
}
