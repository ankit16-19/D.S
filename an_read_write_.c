#include<stdio.h>


int arr[],num,i;
void main()
{
    printf("Enter the no. of elements you wants to take in the array: ");
    scanf("%d",&num);
    int i;
    printf("Enter the numbers: ");
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The array you entered is: \n");
    for(i=0;i<num;i++)
    {
        printf("%d ",arr[i]);
    }
    modify();
}

void modify(void)
{
    system("cls");
    printf("You have following options:\n");
    printf("Modify at the start of the array. Enter 1  \n");
    printf("Modify at the END of the array. Enter 2 \n");
    printf("Modify in the middle of the array. Enter 3 \n");
    int ans;
    scanf("%d",&ans);
    int value,j,b,modians,k;
    printf("To add press 1:\n To delete press 2:\n ");
    scanf("%d",&modians);
    if(modians==1)
    b = num+1;
    if(modians==2)
    b = num-1;
    int temp[b];
    if(modians==1){
    switch(ans)
    {

    case 1:
        printf("Enter the value you want to add at the start: ");
        scanf("%d",&value);
        temp[0] = value;
        for(i=1,j=0;i<b,j<num;i++,j++)
        {
            temp[i] = arr[j];
        }
        printf("The modified array is: ");
        for(i=0;i<b;i++)
        {
            printf("%d",temp[i]);
        }
        break;
    case 2:
        printf("Enter the value you want to add at the END: ");
        scanf("%d",&value);
        temp[b-1] = value;
       for(i=0,j=0;i<b-1,j<num;i++,j++)
        {
            temp[i] = arr[j];
        }
        printf("The modified array is: ");
        for(i=0;i<b;i++)
        {
            printf("%d",temp[i]);
        }
        break;
    case 3:
        printf("Enter the value you want to add at the Middle: ");
        scanf("%d",&value);
        int f;
        f = num/2;
        temp[f]=value;
        for(i=0,j=0;i<f,j<f;i++,j++)
        {
            temp[i] = arr[j];
        }
        int h;
        for(h=i+1;i<b,j<num;h++,j++)
        {
            temp[h] = arr[j];
        }
        printf("\n");
        printf("The modified array is: \n");
        for(i=0;i<b;i++)
        {
            printf("%d",temp[i]);
        }
        break;
    }
    }
    if(modians==2)
    {
        switch(ans)
        {
        case 1:
            for(i=0,j=1;i<b,j<num;i++,j++)
                temp[i] = arr[j];
            printf("The modified array is: \n");
            for(i=0;i<b;i++)
                printf("%d",temp[i]);
                break;
        case 2:
            for(i=0,j=0;i<b,j<num-1;i++,j++)
                temp[i] = arr[j];
            printf("The modified array is: \n");
            for(i=0;i<b;i++)
                printf("%d",temp[i]);
                break;
        case 3:
            k = num/2;
            for(i=0,j=0;i<k;i++,j++)
                temp[i]=arr[j];
            int l;
            for(l =j+1;i<b,l<num;i++,l++)
                temp[i] = arr[l];
            for(i=0;i<b;i++)
                    printf("%d",temp[i]);
            break;
        }
    }

}
