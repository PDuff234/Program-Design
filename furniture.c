/*
Patrick Duffany
U22664456
This program will act as a calculator to calculate the amount owed based on the furniture and time they are using the furniture
*/

#include <stdio.h>

int main (void)
{
    //Presents User with Options for Input
    printf ("Please select an option from the following menu: \n 1. Sofa, 2. Loveseat, 3. 4 Post Bed, 4. Dresser, 5. Kitchen Table \n");

    //Asks and scans User input on furniture selected
    int selection;
    printf ("Enter Selection Here: ");
    scanf ("%d", &selection);

    //Data Validation on furniture selected
    while (selection < 1 || selection > 5)
    {
        printf ("Your selection is not within the range of 1 to 5. \n");
        printf ("Please enter a number within the range of 1 to 5: ");
        scanf ("%d", &selection);
    }

    //Asks and scans User input for months rented
    int months;
    printf ("Enter months rented: ");
    scanf ("%d", &months);

    //Data validation for months rented
    while (months < 1 || months > 12)
    {
        printf ("Please choose an amount between 1 and 12: \n");
        scanf ("%d", &months);
    }

    //Creating methods for costs
    int firstMonth, monthlyCost;
    switch (selection)
    {
        case 0: break;
        case 1: firstMonth = 20;
                monthlyCost = 12;
                break;
        case 2: firstMonth = 15;
                monthlyCost = 10;
                break;
        case 3: firstMonth = 25;
                monthlyCost = 8;
                break;
        case 4: firstMonth = 10;
                monthlyCost = 5;
                break;
        case 5: firstMonth = 25;
                monthlyCost = 10;
                break;
    }
    int maxCost [5] = {100, 80, 105, 50, 120};

    //Creating and calculating costs
    int costs;
    costs = firstMonth + (months - 1) * monthlyCost;
    //costs = firstMonth [selection - 1] + (months - 1) * monthlyCost [selection - 1];

    //Data validation to make sure costs is not more than maxCost
    if (costs > maxCost [selection - 1])
    {
        costs = maxCost [selection - 1];
    }

    //Returning final amount
    printf ("Amount due ($): %d \n", costs);
    return 0;
}
