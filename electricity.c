#include<stdio.h>
int main()
{
    int d;
    printf("\n\t\t\t Electricity Bill Calculator \n");
    printf("\t\t\t ---------------------------\n\n");
    printf("Enter how many devices you have=");
    scanf("%d",&d);
    float ar[d+1];
    for(int i=1;i<=d;i++)
    {
        int ch;
        printf("\n\t\tInput the information for device %d:\n\n",i);
        printf("1.Calculate Unit consumed- \n");
        printf("2.Calculate the Bill Directly- \n\n");
        printf("Choose =");
        scanf("%d",&ch);
        if(ch==1)
        {
            float watt,time,Ecm,Ecs,cpu;
            printf("\t\t\t\t Calculate Unit \n");
            printf("\t\t\t\t ---------------\n\n");
            printf("1.Enter the Wattage in Kilowatt-");
            scanf("%f",&watt);
            printf("\n2.Enter the time in hours -");
            scanf("%f",&time);
            Ecm=watt*time;
            printf("\nEnergy Consumption: (%0.4f * %0.4f) = %0.4f kWh",watt,time,Ecm);
            printf("\n\nCost per unit =");
            scanf("%f",&cpu);
            Ecs=Ecm*cpu;
            printf("\n Total cost for this device: (%0.4f * %0.4f) = %0.4f Taka",Ecm,cpu,Ecs);
            ar[i]=Ecs;

        }
        else if(ch==2)
        {
            float Ecm,Ecs,cpu;
             printf("\t\t\t\t Calculate Cost \n");
            printf("\t\t\t\t ---------------\n\n");
            printf("\nEnergy Consumption=");
            scanf("%f",&Ecm);
            printf("\n\nCost per unit =");
            scanf("%f",&cpu);
            Ecs=Ecm*cpu;
            printf("\n Total cost for this device: (%0.4f * %0.4f) = %0.4f Taka",Ecm,cpu,Ecs);
            ar[i]=Ecs;
        }
        else
        {
            printf("Invalid input , Please Enter a valid Input.\n\n\n");
            break ;
        }
        printf("\n\n\n");

    }
    float tc=0;
    for(int i=1;i<=d;i++)
    {
        tc=tc+ar[i];
    }
    printf("The total cost of the %d devices is= %f",d,tc);

}
