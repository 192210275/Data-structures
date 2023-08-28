 #include<stdio.h>
 int main()
{
    int numbers[15]={1,1,2,2,2,3,4,5,6,6,7,7,7,8,9},i,j;
    for(i=0;i<15;i++)
    {
        for(j=i;j<14;j++)
        {
            if(numbers[i]==numbers[j+1])
            {
                printf("Number %d has duplicate values\n",numbers[i]);
            }
        }
    }
    return 0;
}

