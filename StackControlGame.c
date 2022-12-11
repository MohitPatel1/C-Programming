#include <stdio.h>
#include <stdbool.h>

int main()
{
    int st[10]={};
    int key,num,inx=0;
    bool flag = true;
    while (flag==true){
    printf("Press 1 to add a number\nPress 2 to remove a number \nPress 0 to terminate the process\n");
        scanf("%d",&key);
        if(key-(int)key==0){
            switch(key)
            {
            case 1:
                printf("enter a number\n");
                scanf("%d",&num);
                st[inx]=num;
                inx+=1;
                break;
                
            case 2:
                printf("enter a number:\n");
                scanf("%d",&num);
                st[inx]=num;
                inx-=1;
                
                break;
            
            case 0:
                printf("This is the final stack \n");
                for(int x=0 ; x<inx ; x++)
                    {
                       printf("%d",st[x]);
                    }
                flag = false;
                break;
                
            default:
                printf("enter a valid integer number\n");
            }
        }
        else{
            printf("enter an integer\n");
        }
    }
    return 0;
}
