#include <stdio.h>

int main(){
    int MAX;
    MAX = 10;
    int queue[MAX];
    int rear = 0;
    int front = 0;
    int add;

    printf("what integer do you want to insert?\n");
    scanf("%d", &add);
    if(rear < MAX){
        queue[rear] = add;
    }
    printf("%d", queue[rear]);
    return 0 ;
}