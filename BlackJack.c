#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <stdbool.h>
#include <time.h>

#define COLOR_BOLD  "\e[1m"
#define COLOR_ITALICIZE "\e[3m"
#define COLOR_CYAN "\e[36m"
#define COLOR_MAGENTA "\e[35m"
#define COLOR_OFF   "\e[m"

int mainMenuCompare(char a)
{
    char mainMenuChoice;
    mainMenuChoice = a;

    // printf("%c <--- This is from the function.\n", mainMenuChoice); // TESTER

    char mainMenuOptionOne = '1'; // PLAY
    char mainMenuOptionTwo = '2'; // HOW TO PLAY
    char mainMenuOptionThree = '3'; // GAME SETTINGS
    char mainMenuOptionFour = '4'; // GAME CREDITS
    char mainMenuOptionFive = '5'; // EXIT GAME

    // Need to add more if we do more main menu options! <--- NOTE TO SELF!!!

    if (mainMenuChoice == mainMenuOptionOne)
    {
        // Main game
        return 1;
    }
    else if (mainMenuChoice == mainMenuOptionTwo)
    {
        // How to Play
        return 2;
    }
    else if (mainMenuChoice == mainMenuOptionThree)
    {
        // Settings
        return 3;
    }
    else if (mainMenuChoice == mainMenuOptionFour)
    {
        //Game Credits
        return 4;
    }
    else if (mainMenuChoice == mainMenuOptionFive)
    {
        // Exits the Game
        return 5;
    }
    else
    {
        // Invalid option
        printf("\n\nInvalid option, please input a number corresponding to available existing option!\n\n");
        return 9;
    }

}

int tableSelectionCompare(char a)
{
    char tableSelectionChoice;
    tableSelectionChoice = a;

    char tableSelectionOptionOne = '1';
    char tableSelectionOptionTwo = '2';
    char tableSelectionOptionThree = '3';
    char tableSelectionOptionFour = '4';
    char tableSelectionOptionFive = '5';
    char tableSelectionOptionSix = '6';

    if (tableSelectionChoice == tableSelectionOptionOne)
    {
        // Table 1
        return 1;
    }
    else if (tableSelectionChoice == tableSelectionOptionTwo)
    {
        // Table 2
        return 2;
    }
    else if (tableSelectionChoice == tableSelectionOptionThree)
    {
        // Table 3
        return 3;
    }
    else if (tableSelectionChoice == tableSelectionOptionFour)
    {
        // Table 4
        return 4;
    }
    else if (tableSelectionChoice == tableSelectionOptionFive)
    {
        // Table 5
        return 5;
    }
    else if (tableSelectionChoice == tableSelectionOptionSix)
    {
        // Back to Main Menu Option
        return 6;
    }
    else
    {
        // Invalid option
        return 9;
    }

}

int entryDigitValidator(char a)
{
    char enteredDigit;
    enteredDigit = a;
    
    char optionZero = '0';
    char optionOne = '1';
    char optionTwo = '2';
    char optionThree = '3';
    char optionFour = '4';
    char optionFive = '5';
    char optionSix = '6';
    char optionSeven = '7';
    char optionEight = '8';

    if (enteredDigit == optionZero)
    {
        // Will be reserved for returning to menu or abstaining from action.
        // printf("%d ZERO",enteredDigit);
        return 0;
    }
    else if (enteredDigit == optionOne)
    {
        // printf("%d ONE",enteredDigit);
        return 1;
    }
    else if (enteredDigit == optionTwo)
    {
        // printf("%d TWO",enteredDigit);
        return 2;
    }
    else if (enteredDigit == optionThree)
    {
        // printf("%d THREE",enteredDigit);
        return 3;
    }
    else if (enteredDigit == optionFour)
    {
        // printf("%d FOUR",enteredDigit);
        return 4;
    }
    else if (enteredDigit == optionFive)
    {
        // printf("%d FIVE",enteredDigit);
        return 5;
    }
    else if (enteredDigit == optionSix)
    {
        // printf("%d SIX",enteredDigit);
        return 6;
    }
    else if (enteredDigit == optionSeven)
    {
        // printf("%d SEVEN",enteredDigit);
        return 7;
    }
    else if (enteredDigit == optionEight)
    {
        // printf("%d",enteredDigit);
        return 8;
    }
    else
    {
        // Invalid option
        // printf("%d",enteredDigit);
        return 9;
    }
}

int seedRandom(int lower, int upper, int count)
{
    int i;
    
    for (i = 0; i < count; i ++)
    {
        int num = (rand() % (upper - lower + 1)) + lower;
        return num;
    }
}

// Recieved from GeeksforGeeks.org -- Upendra Bartwal

int printRandoms(int lower, int upper, int count)
{
    int i;

    for (i = 0; i < count; i++) {
        int num = (rand() %
        (upper - lower + 1)) + lower;
        return num;
    }
}

// End credit

int pairRandom(int lower, int upper, int count)
{
    int i;

    for (i = 0; i < count; i++) {
        int num = (rand() %
        (upper - lower + 1)) + lower;
        return num;
    }
}

int sleepRandom(int lower, int upper, int count)
{
    int i;

    for (i = 0; i < count; i++) {
        int num = (rand() %
        (upper - lower + 1)) + lower;
        return num;
    }
}

int cardPrintf(int card) {

    int aceCard = 1; // Ace Card will = 1 on rand
    int twoCard = 2; // 2 Card will = 2 on rand
    int threeCard = 3; // 3 Card will = 3 on rand
    int fourCard = 4; // 4 Card will = 4 on rand
    int fiveCard = 5; // 5 Card will = 5 on rand
    int sixCard = 6; // 6 Card will = 6 on rand
    int sevenCard = 7; // 7 Card will = 7 on rand
    int eightCard = 8; // 8 Card will = 8 on rand
    int nineCard = 9; // 9 Card will = 9 on rand
    int tenCard = 10; // 10 Card will = 10 on rand
    int jackCard = 11; // Jack Card will = 11 on rand
    int queenCard = 12; // Queen Card will = 12 on rand
    int kingCard = 13; // King Card will = 13 on rand
    int aceCard2 = 14; // Ace Card will value of 11 = 14 on rand

    int dealtCard = card;

    if (dealtCard == aceCard)
    {
        printf("[A]  ");
        return 1;
    }
    else if (dealtCard == twoCard)
    {
        printf("[2]  ");
        return 2;
    }
    else if (dealtCard == threeCard)
    {
        printf("[3]  ");
        return 3;
    }
    else if (dealtCard == fourCard)
    {
        printf("[4]  ");
        return 4;
    }
    else if (dealtCard == fiveCard)
    {
        printf("[5]  ");
        return 5;
    }
    else if (dealtCard == sixCard)
    {
        printf("[6]  ");
        return 6;
    }
    else if (dealtCard == sevenCard)
    {
        printf("[7]  ");
        return 7;
    }
    else if (dealtCard == eightCard)
    {
        printf("[8]  ");
        return 8;
    }
    else if (dealtCard == nineCard)
    {
        printf("[9]  ");
        return 9;
    }
    else if (dealtCard == tenCard)
    {
        printf("[T]  ");
        return 10;
    }
    else if (dealtCard == jackCard)
    {
        printf("[J]  ");
        return 10;
    }
    else if (dealtCard == queenCard)
    {
        printf("[Q]  ");
        return 10;
    }
    else if (dealtCard == kingCard)
    {
        printf("[K]  ");
        return 10;
    }
    else if (dealtCard == aceCard2)
    {
        printf("[A]  ");
        return 11;
    }
    else
    {
        return 0;
    }
}

int cardValuation(int card)
{

    int aceCard = 1; // Ace Card will = 1 on rand
    int twoCard = 2; // 2 Card will = 2 on rand
    int threeCard = 3; // 3 Card will = 3 on rand
    int fourCard = 4; // 4 Card will = 4 on rand
    int fiveCard = 5; // 5 Card will = 5 on rand
    int sixCard = 6; // 6 Card will = 6 on rand
    int sevenCard = 7; // 7 Card will = 7 on rand
    int eightCard = 8; // 8 Card will = 8 on rand
    int nineCard = 9; // 9 Card will = 9 on rand
    int tenCard = 10; // 10 Card will = 10 on rand
    int jackCard = 11; // Jack Card will = 11 on rand
    int queenCard = 12; // Queen Card will = 12 on rand
    int kingCard = 13; // King Card will = 13 on rand
    int aceCard2 = 14; // Ace Card with value of 11

    int dealtCard = card;

    if (dealtCard == aceCard)
    {
        return 1;
    }
    else if (dealtCard == twoCard)
    {
        return 2;
    }
    else if (dealtCard == threeCard)
    {
        return 3;
    }
    else if (dealtCard == fourCard)
    {
        return 4;
    }
    else if (dealtCard == fiveCard)
    {
        return 5;
    }
    else if (dealtCard == sixCard)
    {
        return 6;
    }
    else if (dealtCard == sevenCard)
    {
        return 7;
    }
    else if (dealtCard == eightCard)
    {
        return 8;
    }
    else if (dealtCard == nineCard)
    {
        return 9;
    }
    else if (dealtCard = tenCard)
    {
        return 10;
    }
    else if (dealtCard == jackCard)
    {
        return 10;
    }
    else if (dealtCard == queenCard)
    {
        return 10;
    }
    else if (dealtCard == kingCard)
    {
        return 10;
    }
    else if (dealtCard == aceCard2)
    {
        return 11;
    }
    else
    {
        return 0;
    }
}

// Recieved from StackOverflow, but I will explain what is going on.

void printfspace2 (unsigned long long int n) { // Receives number from printfspace.
    if (n < 1000) { // If the number is less than 1000 (only three digits), it does not need comma formatting and will print the number and exit the function.
        printf ("%d", n); // Prints the value.
        return;
    }
    printfspace2 (n/1000); // Divides n by 1000 and sends it back to the function.
    printf (",%03d", n%1000); // Prints 3 digits from n. Divides until there is a remainder. -- ???
}

void printfspace (unsigned long long int n) { // Send all numbers that need formatting here first, in the case that there's a negative number.
    if (n < 0) { // Determines if the number sent into the function is negative (less than zero).
        printf ("-"); // If true, it will print out a negative sign to publicly display its negativity.
        n = -n; // It will convert the inputted number (n) into a posivite number by multiplying it by -1.
    }
    printfspace2 (n); // It will then send the positive number into printfspace2 for proper formatting (only accepts positive numbers).
}

// Stores all of the relevant player data, separate from the main code to avoid direct interactions.
struct playerData
{

    unsigned long long int money; //Balance of the player ($)
    /*
    NOTE TO SELF: Need a code to ensure that all inputted bets meet the minimum bet and do not exceed the player's balance (money)
    */
    int mainBet; //How much the player currently has bet
    int mainBetEarnings;
    int splitBet;
    int pairBet;
    int insuranceBet;

};

int main(void)
{

    // Card values in respect to Blackjack rules. Ace card can be 1 or 11; however, will not be given a value due to the high conditionality.

    // Ace Card will likely have a base value of 11, but be changed conditionally to 1 if it benefits the hand.

    int aceCard; // Ace Card will = 1 on rand
    int twoCard = 2; // 2 Card will = 2 on rand
    int threeCard = 3; // 3 Card will = 3 on rand
    int fourCard = 4; // 4 Card will = 4 on rand
    int fiveCard = 5; // 5 Card will = 5 on rand
    int sixCard = 6; // 6 Card will = 6 on rand
    int sevenCard = 7; // 7 Card will = 7 on rand
    int eightCard = 8; // 8 Card will = 8 on rand
    int nineCard = 9; // 9 Card will = 9 on rand
    int tenCard = 10; // 10 Card will = 10 on rand
    int jackCard = 10; // Jack Card will = 11 on rand
    int queenCard = 10; // Queen Card will = 12 on rand
    int kingCard = 10; // King Card will = 13 on rand

    int pairLower = 1;
    int pairUpper = 59;
    int pairNum;

    int sleepLower = 50;
    int sleepUpper = 1801;
    int sleepNum;

    int i;
    int lower = 1;
    int upper = 13;
    int count = 1;

    int seedLower = 1;
    int seedUpper = 998;
    int seedCount = 1;
    int seedAdd = 1;

    int drawPair;

    struct playerData playerData;
    playerData.money = 750; // Intitializes the player's money prior to the loading in of the game. Player always starts off with 750 cash.
    playerData.mainBet = 0;
    playerData.splitBet = 0;
    playerData.pairBet = 0;
    playerData.insuranceBet = 0;

    int betSource = 0;

    int splitHandCheck;

    int handHitCheck;

    int handOneStandCheck;
    int handTwoStandCheck;

    int handOneCanDouble;
    int handTwoCanDouble;

    int canSplitHand;

    char mainMenuOption; // Variable holder to log player main menu navigation choice.
    int mainMenuSelection;
    int goToMainMenuChecker;
    bool hasPlayedBefore = false; // Determines whether the player has played before.

    char tableSelectionOption; // Variable holder to long player table selection choice.
    int tableSelection;

    char MenuNavigationOption;
    int MenuNavigation;

    int enterKeyPress = 0;

    // Table wager ranges settings:

    // Table One wager ranges
    int tableOneMin = 10;
    int tableOneMax = 200;

    //Table One wager intervals
    int tableOneInterval1 = 10;
    int tableOneInterval2 = 25;
    int tableOneInterval3 = 50;
    int tableOneInterval4 = 100;

    //Table One pair max
    int tableOnePairMax = 50;

    //Table One pair bet intervals
    int tableOnePair1 = 5;
    int tableOnePair2 = 10;
    int tableOnePair3 = 25;
    int tableOnePair4 = 50;

    // Table Two wager ranges
    int tableTwoMin = 250;
    int tableTwoMax = 5000;

    //Table Two wager intervals
    int tableTwoInterval1 = 250;
    int tableTwoInterval2 = 500;
    int tableTwoInterval3 = 1000;
    int tableTwoInterval4 = 2500;

    //Table Two pair max
    int tableTwoPairMax = 250;

    //Table Two pair bet intervals
    int tableTwoPair1 = 25;
    int tableTwoPair2 = 50;
    int tableTwoPair3 = 100;
    int tableTwoPair4 = 250;

    // Table Three wager ranges
    int tableThreeMin = 1000;
    int tableThreeMax = 20000;

    //Table Three wager intervals
    int tableThreeInterval1 = 1000;
    int tableThreeInterval2 = 2500;
    int tableThreeInterval3 = 5000;
    int tableThreeInterval4 = 10000;

    //Table Three pair max
    int tableThreePairMax = 2500;

    //Table Three pair bet intervals
    int tableThreePair1 = 250;
    int tableThreePair2 = 500;
    int tableThreePair3 = 1000;
    int tableThreePair4 = 2500;

    // Table Four wager ranges
    int tableFourMin = 5000;
    int tableFourMax = 100000;

    //Table Four wager intervals
    int tableFourInterval1 = 5000;
    int tableFourInterval2 = 10000;
    int tableFourInterval3 = 25000;
    int tableFourInterval4 = 50000;

    //Table Four pair max
    int tableFourPairMax = 10000;

    //Table Four pair bet intervals
    int tableFourPair1 = 1000;
    int tableFourPair2 = 2500;
    int tableFourPair3 = 5000;
    int tableFourPair4 = 10000;

    // Table Five wager ranges
    int tableFiveMin = 10000;
    int tableFiveMax = 1000000;

    //Table Five wager intervals
    int tableFiveInterval1 = 10000;
    int tableFiveInterval2 = 25000;
    int tableFiveInterval3 = 100000;
    int tableFiveInterval4 = 500000;

    //Table Five pair max
    int tableFivePairMax = 100000;

    //Table Five pair bet intervals
    int tableFivePair1 = 10000;
    int tableFivePair2 = 25000;
    int tableFivePair3 = 50000;
    int tableFivePair4 = 100000;

    int activeTableMin;
    int activeTableMax;

    int activeTableInterval1;
    int activeTableInterval2;
    int activeTableInterval3;
    int activeTableInterval4;

    int activeTablePairMax;

    int activeTablePair1;
    int activeTablePair2;
    int activeTablePair3;
    int activeTablePair4;

    // Player Bets Section
    char playerMainBetEntry;
    int playerMainBet; // Self-explanatory

    char playerSplitBetEntry;
    int playerSplitBet; // Only if the player is dealth a pair of cards and can afford to double their wage.

    char playerPairBetEntry;
    int playerPairBet; // Prior to the dealing of cards.

    char playerInsuranceBetEntry;
    int playerInsuranceBet; // Only if the dealer shows an Ace -- Player must bet HALF of their wager.
    // Section END

    

    GameMainMenu: // Game Main Menu Section -- Checkpoint

    printf("\nWELCOME TO BLACKJACK!\n\n");

    printf("MENU OPTIONS\n\n");

    if(hasPlayedBefore == false) // Calls on the value of the boolean to see whether the player has played before.
    {
        printf("1) PLAY\n");
    }
    else
    {
        printf("1) CONTINUE\n");
    }
    printf("2) HOW TO PLAY\n");
    printf("3) SETTINGS\n");
    printf("4) CREDITS\n");
    printf("5) EXIT GAME\n");

    printf("\nINPUT OPTION NUMBER:\t");
    scanf(" %c", &mainMenuOption); // Scanning player decision
    // printf("%c\n", mainMenuOption); // TESTER

    mainMenuSelection = mainMenuCompare(mainMenuOption);

    if(mainMenuSelection == 1)
    {
        //Runs the game

        if(hasPlayedBefore == false) // Plays irrelevant backstory if the game hasn't been booted up before.
        {
            // Irrelevant backstory (for lore purposes)
            printf("\n\n\nYou are stuck in a dead-end job with measely pay.\n");
            Sleep(2000);
            printf("\nYou need $1750 to pay for rent back in California and at least another $500 to get by until the next paycheck.\n");
            Sleep(2000);
            printf("\nYour recent paycheck amounted to roughly $500, but this only covers basic expenses since your roomates moved out.\n");
            Sleep(2000);
            printf("\nYou liquidate your paycheck and tap into your savings because YOU'RE HEADING TO VEGAS BABY!\n");
            Sleep(2000);
            printf("\nWith only $750 and an itch to go BIG or go BROKE, you hit the BLACKJACK table.\n");
            Sleep(2000);
            printf("\n\nYour legendary tale begins with your first bet...\n\n\n");
        }
        else // Welcomes the player back, skips the irrelevant backstory.
        {
            printf("\n\nWELCOME BACK!\n\n");
        }

        TableSelectionMenu: // Checkpoint of Table selection menu.

        printf("\n\nBLACKJACK TABLE STAKES\n\n");

        printf("1) TABLE ONE\t MINIMUM: $");
        printfspace2(tableOneMin);
        printf("\t\t MAXIMUM: $");
        printfspace2(tableOneMax);
        printf("\t\t\t PAIR BET MAX: $");
        printfspace2(tableOnePairMax);
        printf("\n");

        printf("2) TABLE TWO\t MINIMUM: $");
        printfspace2(tableTwoMin);
        printf("\t\t MAXIMUM: $");  
        printfspace2(tableTwoMax);
        printf("\t\t PAIR BET MAX: $");
        printfspace2(tableTwoPairMax);
        printf("\n");

        printf("3) TABLE THREE\t MINIMUM: $");
        printfspace2(tableThreeMin);
        printf("\t MAXIMUM: $");
        printfspace2(tableThreeMax);
        printf("\t\t PAIR BET MAX: $");
        printfspace2(tableThreePairMax);
        printf("\n");

        printf("4) TABLE FOUR\t MINIMUM: $");
        printfspace2(tableFourMin);
        printf("\t MAXIMUM: $");
        printfspace2(tableFourMax);
        printf("\t\t PAIR BET MAX: $");
        printfspace2(tableFourPairMax);
        printf("\n");

        printf("5) TABLE FIVE\t MINIMUM: $");
        printfspace2(tableFiveMin);
        printf("\t MAXIMUM: $");
        printfspace2(tableFiveMax);
        printf("\t\t PAIR BET MAX: $");
        printfspace2(tableFivePairMax);
        printf("\n");

        printf("\n6) RETURN TO MAIN MENU\n\n");

        printf("Please select the table stakes you wish to participate in by entering the corresponding number: ");
        scanf(" %c", &tableSelectionOption);

        tableSelection = tableSelectionCompare(tableSelectionOption);

        /* Table Selection (for different tiers)

        Table 1: Min $10 ; Max $200
        Table 2: Min $250 ; Max $25,000
        Table 3: Min $1,000 ; Max $100,000
        Table 4: Min $5,000 ; Max $500,000
        Table 5: Min $10,000 ; Max $1,000,000

        */

       if (tableSelection == 1)
       {
        if (playerData.money < tableOneMin) // Checks if the player meets the table's wager minimum requirements ($10)
        {
            // This instance should be impossible as the game would end if the player dropped below $10 (only number possible being $0).
            // If somehow the player returned to the menu while at $0 and attempted to return to the table, this will ensure that the program ends in 'GAME OVER'.
            printf("\n\nOh no! You lack the funds to enter the minimum bet for this table! (Less than $");
            printfspace2(tableOneMin);
            printf(")\n");
            printf("Unfortunately this means you went broke trying to avoid going broke!\n\n");
            printf("GAME OVER!\n");
            Sleep(3000);
            return 0; // Ends program
        }
        else
        {
            // GAME RUNS WITH TABLE ONE SETTINGS
            activeTableMin = tableOneMin;
            activeTableMax = tableOneMax;

            activeTableInterval1 = tableOneInterval1;
            activeTableInterval2 = tableOneInterval2;
            activeTableInterval3 = tableOneInterval3;
            activeTableInterval4 = tableOneInterval4;

            activeTablePairMax = tableOnePairMax;

            activeTablePair1 = tableOnePair1;
            activeTablePair2 = tableOnePair2;
            activeTablePair3 = tableOnePair3;
            activeTablePair4 = tableOnePair4;

            goto GameStart;
            // Change settings, then goto GameStart:
        }
       }
       else if (tableSelection == 2)
       {
        if (playerData.money < tableTwoMin) // Checks if the player meets the table's wager minimum requirements ($250)
        {
            printf("\n\nOh no! You lack the funds to enter the minimum bet for this table! (Less than $");
            printfspace2(tableTwoMin);
            printf(")\n");
            printf("Please select another option!\n\n");
            Sleep(3000);
            goto TableSelectionMenu;
        }
        else
        {
            // GAME RUNS WITH TABLE TWO SETTINGS
            activeTableMin = tableTwoMin;
            activeTableMax = tableTwoMax;

            activeTableInterval1 = tableTwoInterval1;
            activeTableInterval2 = tableTwoInterval2;
            activeTableInterval3 = tableTwoInterval3;
            activeTableInterval4 = tableTwoInterval4;

            activeTablePairMax = tableTwoPairMax;

            activeTablePair1 = tableTwoPair1;
            activeTablePair2 = tableTwoPair2;
            activeTablePair3 = tableTwoPair3;
            activeTablePair4 = tableTwoPair4;

            goto GameStart;
            // Change settings, then goto GameStart:
        }
       }
       else if (tableSelection == 3)
       {
        if (playerData.money < tableThreeMin)
        {
            printf("\n\nOh no! You lack the funds to enter the minimum bet for this table! (Less than $");
            printfspace2(tableThreeMin);
            printf(")\n");
            printf("Please select another option!\n\n");
            Sleep(3000);
            goto TableSelectionMenu;
        }
        else
        {
            // GAME RUNS WITH TABLE THREE SETTINGS
            activeTableMin = tableThreeMin;
            activeTableMax = tableThreeMax;

            activeTableInterval1 = tableThreeInterval1;
            activeTableInterval2 = tableThreeInterval2;
            activeTableInterval3 = tableThreeInterval3;
            activeTableInterval4 = tableThreeInterval4;

            activeTablePairMax = tableThreePairMax;

            activeTablePair1 = tableThreePair1;
            activeTablePair2 = tableThreePair2;
            activeTablePair3 = tableThreePair3;
            activeTablePair4 = tableThreePair4;

            goto GameStart;
            // Change settings, then goto GameStart:
        }
       }
       else if (tableSelection == 4)
       {
        if (playerData.money < tableFourMin)
        {
            printf("\n\nOh no! You lack the funds to enter the minimum bet for this table! (Less than $");
            printfspace2(tableFourMin);
            printf(")\n");
            printf("Please select another option!\n\n");
            Sleep(3000);
            goto TableSelectionMenu;
        }
        else
        {
            // GAME RUNS WITH TABLE FOUR SETTINGS
            activeTableMin = tableFourMin;
            activeTableMax = tableFourMax;

            activeTableInterval1 = tableFourInterval1;
            activeTableInterval2 = tableFourInterval2;
            activeTableInterval3 = tableFourInterval3;
            activeTableInterval4 = tableFourInterval4;

            activeTablePairMax = tableFourPairMax;

            activeTablePair1 = tableFourPair1;
            activeTablePair2 = tableFourPair2;
            activeTablePair3 = tableFourPair3;
            activeTablePair4 = tableFourPair4;

            goto GameStart;
            // Change settings, then goto GameStart:
        }
       }
       else if (tableSelection == 5)
       {
        if (playerData.money < tableFiveMin)
        {
            printf("\n\nOh no! You lack the funds to enter the minimum bet for this table! (Less than $");
            printfspace2(tableFiveMin);
            printf(")\n");
            printf("Please select another option!\n\n");
            Sleep(3000);
            goto TableSelectionMenu;
        }
        else
        {
            // GAME RUNS WITH TABLE FIVE SETTINGS
            activeTableMin = tableFiveMin;
            activeTableMax = tableFiveMax;

            activeTableInterval1 = tableFiveInterval1;
            activeTableInterval2 = tableFiveInterval2;
            activeTableInterval3 = tableFiveInterval3;
            activeTableInterval4 = tableFiveInterval4;

            activeTablePairMax = tableFivePairMax;

            activeTablePair1 = tableFivePair1;
            activeTablePair2 = tableFivePair2;
            activeTablePair3 = tableFivePair3;
            activeTablePair4 = tableFivePair4;

            goto GameStart;
            // Change settings, then goto GameStart:
        }
       }
       else if (tableSelection == 6)
       {
        //PLAYER CALLS TO GO BACK TO MAIN MENU
        printf("\n\nRETURNING TO THE MAIN MENU\n\n");
        Sleep(2000);
        goto GameMainMenu;
       }
       else
       {
        // Invalid option
        printf("\nINVALID OPTION, PLEASE INPUT A NUMBER CORRESPONDING TO AVAILABLE EXISTING OPTION!\n\n");
        Sleep(3000);
        goto TableSelectionMenu;
       }

        GameStart: //Beginning of the game. Point of reference to return to after the result of a play-through.

        hasPlayedBefore = true;

        // Going to assume that both the player and dealer can hit a maximum number of 20 times (very unrealistic).
        // The dealer will likely never reach this; however, the player has an infinitely small chance of reaching this ceiling.

        int dealerHand[20] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        int dealerHandValue[20] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        int dealerHandTotal = 0;
        int dealerHandTotal2 = 0;

        int playerHand[20] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        int playerHandValue[20] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        int playerHandTotal = 0;
        int playerHandTotal2 = 0;

        int playerSecondHand[20] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; // Only on split bets off of pairs
        int playerSecondHandValue[20] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        int playerSecondHandTotal = 0;
        int playerSecondHandTotal2 = 0;

        int playerHandAces = 0;
        int playerHand2Aces = 0;

        int dealerHandAces = 0;

        drawPair = 0;

        playerData.mainBet = 0;
        playerData.mainBetEarnings = 0;
        playerData.pairBet = 0;
        playerData.splitBet = 0;
        playerData.insuranceBet = 0;

        betSource = 0;

        splitHandCheck = 0;
        handHitCheck = 0;
        handOneStandCheck = 0;
        handTwoStandCheck = 0;

        handOneCanDouble = 1;
        handTwoCanDouble = 1;

        canSplitHand = 1;

        enterKeyPress = 0;

        MainWager:

        printf("\n\n");

        // Displays user money
        printf("CASH: $");
        printfspace2(playerData.money);
        printf("\t\t\t");

        // Displays current table's minimum and maximum bets (settings)
        printf("MINIMUM: $");
        printfspace2(activeTableMin);
        printf("\t\t");
        printf("MAXIMUM: $");
        printfspace2(activeTableMax);
        printf("\t\t");
        printf("MAX PAIR BET: $");
        printfspace2(activeTablePairMax);
        printf("\t\t\tENTER '0' TO GO TO MAIN MENU!");
        printf("\nCURRENT MAIN WAGER: $");
        printfspace2(playerData.mainBet);
        printf("\t\t");
        printf("\n\n\n\n\n\n\n");

        printf("WAGER OPTIONS:\t\t");
        printf("1) ADD $");
        printfspace2(activeTableInterval1);
        printf("\t\t");
        printf("2) ADD $");
        printfspace2(activeTableInterval2);
        printf("\t\t");
        printf("3) ADD $");
        printfspace2(activeTableInterval3);
        printf("\t\t");
        printf("4) ADD $");
        printfspace2(activeTableInterval4);
        printf("\t\t");
        printf("5) RESET WAGER\t\t");
        printf("6) CONTINUE TO PAIR BET\t\t");

        printf("\n\nENTER YOUR WAGER USING THE OPTIONS LISTED:\t");
        scanf(" %c", &playerMainBetEntry);
        
        playerMainBet = entryDigitValidator(playerMainBetEntry);

        if (playerMainBet == 0)
        {
            printf("\n\nRETURNING TO THE MAIN MENU\n\n\n");
            playerData.money = playerData.money + playerData.mainBet;
            playerData.mainBet = 0;
            Sleep(2000);
            goto GameMainMenu;
        }
        else if (playerMainBet == 1)
        {
            MainBetOption1:

            if (playerData.money < activeTableInterval1)
            {
                printf("\n\nERROR! YOU DON'T HAVE ENOUGH MONEY TO PLACE THIS WAGER INCREASE!\n");
                printf("WAGER INCREASE REQUESTED: $");
                printfspace2(activeTableInterval1);
                printf("\n");
                printf("YOUR CURRENT CASH BALANCE: $");
                printfspace2(playerData.money);
                printf("\n\n");
                Sleep(3000);
                goto MainWager;
            }
            else if (playerData.mainBet + activeTableInterval1 > activeTableMax)
            {
                printf("\n\n\nERROR! YOU HAVE ALREADY EXCEEDED OR WILL EXCEED THE MAXIMUM WAGER AMOUNT WITH THIS WAGER ADDITION! (MAXIMUM OF $");
                printfspace2(activeTableMax);
                printf(" ALLOWED!)");
                printf("\n\n\n");
                Sleep(3000);
                goto MainWager;
            }
            else
            {

                printf("\n\nYOUR CURRENT WAGER IS: \t$");
                printfspace2(playerData.mainBet);
                printf("\n\nDO YOU WISH TO ADD THE ADDITIONAL WAGER TOKENS? (ADDING $");
                printfspace2(activeTableInterval1);
                printf(")\n\n");
                printf("1) YES\t\t2) NO\n");
                printf("ENTER YOUR CHOICE: ");
                scanf(" %c", &MenuNavigationOption);
                MenuNavigation = entryDigitValidator(MenuNavigationOption);
                if (MenuNavigation == 1)
                {
                    playerData.mainBet = playerData.mainBet + activeTableInterval1;
                    playerData.money = playerData.money - activeTableInterval1;
                    goto MainWager;
                }
                else if (MenuNavigation == 2)
                {
                    goto MainWager;
                }
                else
                {
                    printf("\nERROR! INVALID OPTION!\n");
                    Sleep(3000);
                    goto MainBetOption1;
                }
            }

        }
        else if (playerMainBet == 2)
        {
            MainBetOption2:

            if (playerData.money < activeTableInterval2)
            {
                printf("\n\nERROR! YOU DON'T HAVE ENOUGH MONEY TO PLACE THIS WAGER INCREASE!\n");
                printf("WAGER INCREASE REQUESTED: $");
                printfspace2(activeTableInterval2);
                printf("\n");
                printf("YOUR CURRENT CASH BALANCE: $");
                printfspace2(playerData.money);
                printf("\n\n");
                Sleep(3000);
                goto MainWager;
            }
            else if (playerData.mainBet + activeTableInterval2 > activeTableMax)
            {
                printf("\n\n\nERROR! YOU HAVE ALREADY EXCEEDED OR WILL EXCEED THE MAXIMUM WAGER AMOUNT WITH THIS WAGER ADDITION! (MAXIMUM OF $");
                printfspace2(activeTableMax);
                printf(" ALLOWED!)");
                printf("\n\n\n");
                Sleep(3000);
                goto MainWager;
            }
            else
            {
                
                printf("\n\nYOUR CURRENT WAGER IS: \t$");
                printfspace2(playerData.mainBet);
                printf("\n\nDO YOU WISH TO ADD THE ADDITIONAL WAGER TOKENS? (ADDING $");
                printfspace2(activeTableInterval2);
                printf(")\n\n");
                printf("1) YES\t\t2) NO\n");
                printf("ENTER YOUR CHOICE: ");
                scanf(" %c", &MenuNavigationOption);
                MenuNavigation = entryDigitValidator(MenuNavigationOption);
                if (MenuNavigation == 1)
                {
                    playerData.mainBet = playerData.mainBet + activeTableInterval2;
                    playerData.money = playerData.money - activeTableInterval2;
                    goto MainWager;
                }
                else if (MenuNavigation == 2)
                {
                    goto MainWager;
                }
                else
                {
                    printf("\nERROR! INVALID OPTION!\n");
                    Sleep(3000);
                    goto MainBetOption2;
                }
            }

        }
        else if (playerMainBet == 3)
        {
            MainBetOption3:

            if (playerData.money < activeTableInterval3)
            {
                printf("\n\nERROR! YOU DON'T HAVE ENOUGH MONEY TO PLACE THIS WAGER INCREASE!\n");
                printf("WAGER INCREASE REQUESTED: $");
                printfspace2(activeTableInterval3);
                printf("\n");
                printf("YOUR CURRENT CASH BALANCE: $");
                printfspace2(playerData.money);
                printf("\n\n");
                Sleep(3000);
                goto MainWager;
            }
            else if (playerData.mainBet + activeTableInterval3 > activeTableMax)
            {
                printf("\n\n\nERROR! YOU HAVE ALREADY EXCEEDED OR WILL EXCEED THE MAXIMUM WAGER AMOUNT WITH THIS WAGER ADDITION! (MAXIMUM OF $");
                printfspace2(activeTableMax);
                printf(" ALLOWED!)");
                printf("\n\n\n");
                Sleep(3000);
                goto MainWager;
            }
            else
            {

                printf("\n\nYOUR CURRENT WAGER IS: \t$");
                printfspace2(playerData.mainBet);
                printf("\n\nDO YOU WISH TO ADD THE ADDITIONAL WAGER TOKENS? (ADDING $");
                printfspace2(activeTableInterval3);
                printf(")\n\n");
                printf("1) YES\t\t2) NO\n");
                printf("ENTER YOUR CHOICE: ");
                scanf(" %c", &MenuNavigationOption);
                MenuNavigation = entryDigitValidator(MenuNavigationOption);
                if (MenuNavigation == 1)
                {
                    playerData.mainBet = playerData.mainBet + activeTableInterval3;
                    playerData.money = playerData.money - activeTableInterval3;
                    goto MainWager;
                }
                else if (MenuNavigation == 2)
                {
                    goto MainWager;;
                }
                else
                {
                    printf("\nERROR! INVALID OPTION!\n");
                    Sleep(3000);
                    goto MainBetOption3;
                }
            }

        }
        else if (playerMainBet == 4)
        {
            MainBetOption4:

            if (playerData.money < activeTableInterval4)
            {
                printf("\n\nERROR! YOU DON'T HAVE ENOUGH MONEY TO PLACE THIS WAGER INCREASE!\n");
                printf("WAGER INCREASE REQUESTED: $");
                printfspace2(activeTableInterval4);
                printf("\n");
                printf("YOUR CURRENT CASH BALANCE: $");
                printfspace2(playerData.money);
                printf("\n\n");
                Sleep(3000);
                goto MainWager;
            }
            else if (playerData.mainBet + activeTableInterval4 > activeTableMax)
            {
                printf("\n\n\nERROR! YOU HAVE ALREADY EXCEEDED OR WILL EXCEED THE MAXIMUM WAGER AMOUNT WITH THIS WAGER ADDITION! (MAXIMUM OF $");
                printfspace2(activeTableMax);
                printf(" ALLOWED!)");
                printf("\n\n\n");
                Sleep(3000);
                goto MainWager;
            }
            else
            {

                printf("\n\nYOUR CURRENT WAGER IS: \t$");
                printfspace2(playerData.mainBet);
                printf("\n\nDO YOU WISH TO ADD THE ADDITIONAL WAGER TOKENS? (ADDING $");
                printfspace2(activeTableInterval4);
                printf(")\n\n");
                printf("1) YES\t\t2) NO\n");
                printf("ENTER YOUR CHOICE: ");
                scanf(" %c", &MenuNavigationOption);
                MenuNavigation = entryDigitValidator(MenuNavigationOption);
                if (MenuNavigation == 1)
                {
                    playerData.mainBet = playerData.mainBet + activeTableInterval4;
                    playerData.money = playerData.money - activeTableInterval4;
                    goto MainWager;
                }
                else if (MenuNavigation == 2)
                {
                    goto MainWager;
                }
                else
                {
                    printf("\nERROR! INVALID OPTION!\n");
                    Sleep(3000);
                    goto MainBetOption4;
                }
            }

        }
        else if (playerMainBet == 5)
        {
            MainBetOption5:

            printf("\n\nARE YOU SURE YOU WISH TO RESET YOUR CURRENT WAGER TO $0?\n");
            printf("1) YES\t\t2) NO\n");
            printf("ENTER YOUR CHOICE: ");
            scanf(" %c", &MenuNavigationOption);
            MenuNavigation = entryDigitValidator(MenuNavigationOption);
            if (MenuNavigation == 1)
            {
                playerData.money = playerData.money + playerData.mainBet;
                playerData.mainBet = 0;

                printf("\n\nDONE!\n\n");
                goto MainWager;
            }
            else if (MenuNavigation == 2)
            {
                goto MainWager;
            }
            else
            {
                printf("\nERROR! INVALID OPTION!\n");
                Sleep(3000);
                goto MainBetOption5;
            }
        }
        else if (playerMainBet == 6)
        {
            MainBetOption6:

            if (playerData.mainBet == 0)
            {
                printf("\nYOU MUST PLACE A WAGER IN ORDER TO CONTINUE!\n");
                printf("YOUR CURRENT WAGER AMOUNT: $");
                printfspace2(playerData.mainBet);
                printf("\n\n\n");
                Sleep(3000);
                goto MainWager;
            }
            else
            {
                goto PairBet;
            }
        }
        else if (playerMainBet == 9)
        {
            printf("\nINVALID OPTION! PLEASE INPUT A NUMBER CORRESPONDING TO AVAILABLE EXISTING OPTION!\n\n");
            Sleep(3000);
            goto MainWager;
        }

        // CONTINUES TO PAIR BET
        PairBet:
        printf("\n\n");

        // Displays user money
        printf("CASH: $");
        printfspace2(playerData.money);
        printf("\t\t\t");

        // Displays current table's minimum and maximum bets (settings)
        printf("MINIMUM: $");
        printfspace2(activeTableMin);
        printf("\t\t");
        printf("MAXIMUM: $");
        printfspace2(activeTableMax);
        printf("\t\t");
        printf("MAX PAIR BET: $");
        printfspace2(activeTablePairMax);
        printf("\t\t\tENTER '0' TO GO TO MAIN MENU!");
        printf("\nCURRENT MAIN WAGER: $");
        printfspace2(playerData.mainBet);
        printf("\t\t");
        printf("\nCURRENT PAIR BET: $");
        printfspace2(playerData.pairBet);
        printf("\t\t");
        printf("\n\n\n\n\n\n\n");

        printf("PAIR BET OPTIONS:\t\t");
        printf("1) ADD $");
        printfspace2(activeTablePair1);
        printf("\t\t");
        printf("2) ADD $");
        printfspace2(activeTablePair2);
        printf("\t\t");
        printf("3) ADD $");
        printfspace2(activeTablePair3);
        printf("\t\t");
        printf("4) ADD $");
        printfspace2(activeTablePair4);
        printf("\t\t");
        printf("5) RESET PAIR BET\t\t");
        if (playerData.pairBet == 0)
        {
            printf("6) SKIP\t\t");
        }
        else
        {
            printf("6) CONTINUE\t\t");
        }

        printf("\n\nENTER YOUR PAIR BET USING THE OPTIONS LISTED:\t");
        scanf(" %c", &playerPairBetEntry);
        
        playerPairBet = entryDigitValidator(playerPairBetEntry);

        if (playerPairBet == 0)
        {
            printf("\n\nRETURNING TO THE MAIN MENU\n\n\n");
            playerData.money = playerData.money + playerData.mainBet;
            playerData.mainBet = 0;
            playerData.money = playerData.money + playerData.pairBet;
            playerData.pairBet = 0;
            Sleep(2000);
            goto GameMainMenu;
        }
        else if (playerPairBet == 1)
        {
            PairBetOption1:

            if (playerData.money < activeTablePair1)
            {
                printf("\n\nERROR! YOU DON'T HAVE ENOUGH MONEY TO PLACE THIS PAIR BET INCREASE!\n");
                printf("PAIR BET INCREASE REQUESTED: $");
                printfspace2(activeTablePair1);
                printf("\n");
                printf("YOUR CURRENT CASH BALANCE: $");
                printfspace2(playerData.money);
                printf("\n\n");
                Sleep(3000);
                goto PairBet;
            }
            else if (playerData.pairBet + activeTablePair1 > activeTablePairMax)
            {
                printf("\n\n\nERROR! YOU HAVE ALREADY EXCEEDED OR WILL EXCEED THE MAXIMUM PAIR BET AMOUNT WITH THIS ADDITION! (MAXIMUM OF $");
                printfspace2(activeTablePairMax);
                printf(" ALLOWED!)");
                printf("\n\n\n");
                Sleep(3000);
                goto PairBet;
            }
            else
            {

                printf("\n\nYOUR CURRENT PAIR BET IS: \t$");
                printfspace2(playerData.pairBet);
                printf("\n\nDO YOU WISH TO INCREASE YOUR PAIR BET? (ADDING $");
                printfspace2(activeTablePair1);
                printf(")\n\n");
                printf("1) YES\t\t2) NO\n");
                printf("ENTER YOUR CHOICE: ");
                scanf(" %c", &MenuNavigationOption);
                MenuNavigation = entryDigitValidator(MenuNavigationOption);
                if (MenuNavigation == 1)
                {
                    playerData.pairBet = playerData.pairBet + activeTablePair1;
                    playerData.money = playerData.money - activeTablePair1;
                    goto PairBet;
                }
                else if (MenuNavigation == 2)
                {
                    goto PairBet;
                }
                else
                {
                    printf("\nERROR! INVALID OPTION!\n");
                    Sleep(3000);
                    goto PairBetOption1;
                }
            }

        }
        else if (playerPairBet == 2)
        {
            PairBetOption2:

            if (playerData.money < activeTablePair2)
            {
                printf("\n\nERROR! YOU DON'T HAVE ENOUGH MONEY TO PLACE THIS PAIR BET INCREASE!\n");
                printf("PAIR BET INCREASE REQUESTED: $");
                printfspace2(activeTablePair2);
                printf("\n");
                printf("YOUR CURRENT CASH BALANCE: $");
                printfspace2(playerData.money);
                printf("\n\n");
                Sleep(3000);
                goto PairBet;
            }
            else if (playerData.pairBet + activeTablePair2 > activeTablePairMax)
            {
                printf("\n\n\nERROR! YOU HAVE ALREADY EXCEEDED OR WILL EXCEED THE MAXIMUM PAIR BET AMOUNT WITH THIS ADDITION! (MAXIMUM OF $");
                printfspace2(activeTablePairMax);
                printf(" ALLOWED!)");
                printf("\n\n\n");
                Sleep(3000);
                goto PairBet;
            }
            else
            {

                printf("\n\nYOUR CURRENT PAIR BET IS: \t$");
                printfspace2(playerData.pairBet);
                printf("\n\nDO YOU WISH TO INCREASE YOUR PAIR BET? (ADDING $");
                printfspace2(activeTablePair2);
                printf(")\n\n");
                printf("1) YES\t\t2) NO\n");
                printf("ENTER YOUR CHOICE: ");
                scanf(" %c", &MenuNavigationOption);
                MenuNavigation = entryDigitValidator(MenuNavigationOption);
                if (MenuNavigation == 1)
                {
                    playerData.pairBet = playerData.pairBet + activeTablePair2;
                    playerData.money = playerData.money - activeTablePair2;
                    goto PairBet;
                }
                else if (MenuNavigation == 2)
                {
                    goto PairBet;
                }
                else
                {
                    printf("\nERROR! INVALID OPTION!\n");
                    Sleep(3000);
                    goto PairBetOption2;
                }
            }

        }
        else if (playerPairBet == 3)
        {
            PairBetOption3:

            if (playerData.money < activeTablePair3)
            {
                printf("\n\nERROR! YOU DON'T HAVE ENOUGH MONEY TO PLACE THIS PAIR BET INCREASE!\n");
                printf("PAIR BET INCREASE REQUESTED: $");
                printfspace2(activeTablePair3);
                printf("\n");
                printf("YOUR CURRENT CASH BALANCE: $");
                printfspace2(playerData.money);
                printf("\n\n");
                Sleep(3000);
                goto PairBet;
            }
            else if (playerData.pairBet + activeTablePair3 > activeTablePairMax)
            {
                printf("\n\n\nERROR! YOU HAVE ALREADY EXCEEDED OR WILL EXCEED THE MAXIMUM PAIR BET AMOUNT WITH THIS ADDITION! (MAXIMUM OF $");
                printfspace2(activeTablePairMax);
                printf(" ALLOWED!)");
                printf("\n\n\n");
                Sleep(3000);
                goto PairBet;
            }
            else
            {

                printf("\n\nYOUR CURRENT PAIR BET IS: \t$");
                printfspace2(playerData.pairBet);
                printf("\n\nDO YOU WISH TO INCREASE YOUR PAIR BET? (ADDING $");
                printfspace2(activeTablePair3);
                printf(")\n\n");
                printf("1) YES\t\t2) NO\n");
                printf("ENTER YOUR CHOICE: ");
                scanf(" %c", &MenuNavigationOption);
                MenuNavigation = entryDigitValidator(MenuNavigationOption);
                if (MenuNavigation == 1)
                {
                    playerData.pairBet = playerData.pairBet + activeTablePair3;
                    playerData.money = playerData.money - activeTablePair3;
                    goto PairBet;
                }
                else if (MenuNavigation == 2)
                {
                    goto PairBet;
                }
                else
                {
                    printf("\nERROR! INVALID OPTION!\n");
                    Sleep(3000);
                    goto PairBetOption3;
                }
            }

        }
        else if (playerPairBet == 4)
        {
            PairBetOption4:

            if (playerData.money < activeTablePair4)
            {
                printf("\n\nERROR! YOU DON'T HAVE ENOUGH MONEY TO PLACE THIS PAIR BET INCREASE!\n");
                printf("PAIR BET INCREASE REQUESTED: $");
                printfspace2(activeTablePair4);
                printf("\n");
                printf("YOUR CURRENT CASH BALANCE: $");
                printfspace2(playerData.money);
                printf("\n\n");
                Sleep(3000);
                goto PairBet;
            }
            else if (playerData.pairBet + activeTablePair4 > activeTablePairMax)
            {
                printf("\n\n\nERROR! YOU HAVE ALREADY EXCEEDED OR WILL EXCEED THE MAXIMUM PAIR BET AMOUNT WITH THIS ADDITION! (MAXIMUM OF $");
                printfspace2(activeTablePairMax);
                printf(" ALLOWED!)");
                printf("\n\n\n");
                Sleep(3000);
                goto PairBet;
            }
            else
            {

                printf("\n\nYOUR CURRENT PAIR BET IS: \t$");
                printfspace2(playerData.pairBet);
                printf("\n\nDO YOU WISH TO INCREASE YOUR PAIR BET? (ADDING $");
                printfspace2(activeTablePair4);
                printf(")\n\n");
                printf("1) YES\t\t2) NO\n");
                printf("ENTER YOUR CHOICE: ");
                scanf(" %c", &MenuNavigationOption);
                MenuNavigation = entryDigitValidator(MenuNavigationOption);
                if (MenuNavigation == 1)
                {
                    playerData.pairBet = playerData.pairBet + activeTablePair4;
                    playerData.money = playerData.money - activeTablePair4;
                    goto PairBet;
                }
                else if (MenuNavigation == 2)
                {
                    goto PairBet;
                }
                else
                {
                    printf("\nERROR! INVALID OPTION!\n");
                    Sleep(3000);
                    goto PairBetOption4;
                }
            }

        }
        else if (playerPairBet == 5)
        {
            PairBetOption5:

            printf("\n\nARE YOU SURE YOU WISH TO RESET YOUR CURRENT PAIR BET TO $0?\n");
            printf("1) YES\t\t2) NO\n");
            printf("ENTER YOUR CHOICE: ");
            scanf(" %c", &MenuNavigationOption);
            MenuNavigation = entryDigitValidator(MenuNavigationOption);
            if (MenuNavigation == 1)
            {
                playerData.money = playerData.money + playerData.pairBet;
                playerData.pairBet = 0;

                printf("\n\nDONE!\n\n");
                goto PairBet;
            }
            else if (MenuNavigation == 2)
            {
                goto PairBet;
            }
            else
            {
                printf("\nERROR! INVALID OPTION!\n");
                Sleep(3000);
                goto PairBetOption5;
            }
        }
        else if (playerPairBet == 6)
        {
            if (playerData.pairBet == 0)
            {
                printf("\nYOU CHOSE TO NOT PLACE A PAIR BET.\n\n");
                Sleep(2000);
                goto MainGameDealFirst;
            }
            else
            {
                printf("\nYOU PLACED A PAIR BET OF $");
                printfspace2(playerData.pairBet);
                printf("\n\n");
                Sleep(2000);
                goto MainGameDealFirst;
            }
        }
        else if (playerMainBet == 9)
        {
            printf("\nINVALID OPTION! PLEASE INPUT A NUMBER CORRESPONDING TO AVAILABLE EXISTING OPTION!\n\n");
            Sleep(3000);
            goto PairBet;
        }
        
        MainGameDealFirst:
        
        srand((unsigned) time(NULL) + seedAdd); // Game Randomizer Seed

        seedAdd = seedRandom(seedLower, seedUpper, seedCount);

        printf("\n\n");

        // Displays user money
        printf("CASH: $");
        printfspace2(playerData.money);
        printf("\t\t\t");

        // Displays current table's minimum and maximum bets (settings)
        printf("MINIMUM: $");
        printfspace2(activeTableMin);
        printf("\t\t");
        printf("MAXIMUM: $");
        printfspace2(activeTableMax);
        printf("\t\t");
        printf("MAX PAIR BET: $");
        printfspace2(activeTablePairMax);
        printf("\t\t\tFINISH THE ROUND TO RETURN TO MAIN MENU!");
        printf("\nCURRENT MAIN WAGER: $");
        printfspace2(playerData.mainBet);
        printf("\t\t");
        printf("\nCURRENT PAIR BET: $");
        printfspace2(playerData.pairBet);
        printf("\t\t");
        printf("\n\n\t\t\t\t\t\t\tPRESS ENTER TO DEAL EACH CARD:\n"); // Needs to be adjusted accordingly to fit the desired game dimensions (consistency).

        // Hand would be dealt here first before options are listed.

        

        for(i=0; i<2; i++)
        {
            dealerHand[i] = (printRandoms(lower, upper, count));
            dealerHandValue[i] = cardValuation(dealerHand[i]);
            while (enterKeyPress != '\r' && enterKeyPress != '\n') { enterKeyPress = getchar(); }
            enterKeyPress = 0;
            if (i == 0)
            {
                pairNum = (pairRandom(pairLower, pairUpper, count));
                if (pairNum == 1)
                {
                    Sleep(0);
                }
                else
                {
                    sleepNum = (sleepRandom(sleepLower, sleepUpper, count));
                    Sleep(sleepNum);
                }
            }
            else
            {
                Sleep(0);
            }

        }

        printf("\t\t\t\t\t\t\tDEALER'S HAND:\t");        
        cardPrintf(dealerHand[0]);
        Sleep(500);
        printf("[?]  ");
        printf("\n");

        for(i=0; i<2; i++)
        {
            playerHand[i] = (printRandoms(lower, upper, count));
            playerHandValue[i] = cardValuation(playerHand[i]);
            while (enterKeyPress != '\r' && enterKeyPress != '\n') { enterKeyPress = getchar(); }
            enterKeyPress = 0;
            if (i == 0)
            {
                if (drawPair == 1 && i == 1)
                {
                    playerHand[i] = playerHand[0];
                    playerHandValue[i] = cardValuation(playerHand[i]);
                }
                else
                {
                    Sleep(0);
                }

                pairNum = (pairRandom(pairLower, pairUpper, count));
                if (pairNum == 1)
                {
                    drawPair = 1;
                    Sleep(0);
                }
                else
                {
                    sleepNum = (sleepRandom(sleepLower, sleepUpper, count));
                    Sleep(sleepNum);
                }
            }
            else
            {
                Sleep(0);
            }
        }

        drawPair = 0;

        printf("\t\t\t\t\t\t\tPLAYER'S HAND:\t");        
        cardPrintf(playerHand[0]);
        Sleep(500);
        if (playerData.pairBet > 0) // If the player bet that they'll have a pair,
        {
            cardPrintf(playerHand[1]);
            if (playerHand[0] == playerHand[1]) // Player has a pair.
            {
                printf("\n\n\n\nCONGRATS! YOUR HAND WAS A PAIR! YOUR PAIR BET WAS: $");
                printfspace2(playerData.pairBet);
                printf("\nYOU WIN 11:1 THIS BET! (+ $");
                printfspace2(playerData.pairBet * 11);
                printf(")");

                playerData.money = playerData.money + (playerData.pairBet * 12);
                playerData.pairBet = 0;
            }
            else // Player does not have a pair.
            {
                printf("\n\n\n\nUNFORTUNATELY, YOUR HAND WAS NOT A PAIR! YOU LOST YOUR PAIR BET OF: $");
                printfspace2(playerData.pairBet);
                
                playerData.pairBet = 0;
            }
        }
        else // Player did not bet that they'll have a pair (default).
        {
            cardPrintf(playerHand[1]);
        }

        if(dealerHandValue[0] == 10)
        {
            printf("\n\nChecking for Dealer Blackjack");
            for(i=0; i<3; i++)
            {
                printf(".");
                Sleep(1000);
            }
            if(dealerHand[1] == 1)
            {
                // Blackjack
                printf("\tSORRY! DEALER HAS BLACKJACK!\n\n");
                Sleep(1000);

                playerData.mainBet = 0;

                // Displays user money
                printf("CASH: $");
                printfspace2(playerData.money);
                printf("\t\t\t");

                // Displays current table's minimum and maximum bets (settings)
                printf("MINIMUM: $");
                printfspace2(activeTableMin);
                printf("\t\t");
                printf("MAXIMUM: $");
                printfspace2(activeTableMax);
                printf("\t\t");
                printf("MAX PAIR BET: $");
                printfspace2(activeTablePairMax);
                printf("\t\t\tFINISH THE ROUND TO RETURN TO MAIN MENU!");
                printf("\nCURRENT MAIN WAGER: $");
                printfspace2(playerData.mainBet);
                printf(" (LOST)");
                printf("\t\t");
                printf("\n\n\n\n");

                printf("\t\t\t\t\t\t\tDEALER'S HAND:\t");
                cardPrintf(dealerHand[0]);
                Sleep(500);
                cardPrintf(dealerHand[1]);
                printf("\t\t(BLACKJACK!)");
                printf("\n\n\n");

                printf("\t\t\t\t\t\t\tPLAYER'S HAND:\t");
                cardPrintf(playerHand[0]);
                cardPrintf(playerHand[1]);

                printf("\n\n");

                Sleep(2000);
                printf("\n\n\nSTARTING A NEW ROUND!");
                printf("\n\n\n");
                Sleep(1000);

                goto GameStart;

            }
            else
            {
                printf("\tRelax! (No Blackjack)");
            }
            
        }

        if((playerHandValue[0] == 1 && playerHandValue[1] == 10) || (playerHandValue[0] == 10 && playerHandValue[1] == 1)) // Checks if player was dealt an Ace with a card with a value of 10 (Blackjack)
        {
            printf("\nWOW! BLACKJACK!\n");
            Sleep(2000);

            printf("\n\n\n");

            // Displays user money
            printf("CASH: $");
            printfspace2(playerData.money);
            printf("\t\t\t");

            // Displays current table's minimum and maximum bets (settings)
            printf("MINIMUM: $");
            printfspace2(activeTableMin);
            printf("\t\t");
            printf("MAXIMUM: $");
            printfspace2(activeTableMax);
            printf("\t\t");
            printf("MAX PAIR BET: $");
            printfspace2(activeTablePairMax);
            printf("\t\t\tFINISH THE ROUND TO RETURN TO MAIN MENU!");
            printf("\nCURRENT MAIN WAGER: $");
            printfspace2(playerData.mainBet);
            printf("\t\t");
            printf("\nCURRENT PAIR BET: $");
            printfspace2(playerData.pairBet);
            printf("\t\t");

            if((dealerHandValue[0] == 10 && dealerHandValue[1] == 1)) // COMPLETED -- PUSH RESULT SPECIFICALLY
            {
                printf("\n\n\n\n");

                printf("\t\t\t\t\t\t\tDEALER'S HAND:\t");
                cardPrintf(dealerHand[0]);
                Sleep(500);
                cardPrintf(dealerHand[1]);
                printf("\t\tBLACKJACK!");
                printf("\n\n\n");

                printf("\t\t\t\t\t\t\tPLAYER'S HAND:\t");
                cardPrintf(playerHand[0]);
                cardPrintf(playerHand[1]);
                if((playerHandValue[0] == 1 && playerHandValue[1] == 10) || (playerHandValue[0] == 10 && playerHandValue[1] == 1))
                {
                    printf("\t\t(BLACKJACK!)");
                }
                else
                {
                    // Prints nothing
                }
                printf("\n\n");

                printf("UNFORTUNATELY THE DEALER ALSO HAS BLACKJACK! (PUSH)\n\n");

                playerData.money = (playerData.money + playerData.mainBet);
                playerData.mainBetEarnings = 0;
                playerData.mainBet = 0;

                Sleep(2000);
                printf("\n\n\nSTARTING A NEW ROUND!");
                printf("\n\n\n");
                Sleep(1000);

                goto GameStart;
            }
            else if (dealerHand[0] == 1)
            {
                goto InsuranceBet;
            }
            else
            {
                printf("\n\n\n\n");

                printf("\t\t\t\t\t\t\tDEALER'S HAND:\t");
                cardPrintf(dealerHand[0]);
                Sleep(500);
                cardPrintf(dealerHand[1]);
                printf("\n\n\n");

                printf("\t\t\t\t\t\t\tPLAYER'S HAND:\t");
                cardPrintf(playerHand[0]);
                cardPrintf(playerHand[1]);
                if((playerHandValue[0] == 1 && playerHandValue[1] == 10) || (playerHandValue[0] == 10 && playerHandValue[1] == 1))
                {
                    printf("\t\t(BLACKJACK!)");
                }
                else
                {
                    // Prints nothing
                }

                printf("\n\n");
                printf("\nTHE DEALER DOES NOT HAVE BLACKJACK!\n");
                Sleep(2000);

                playerData.mainBetEarnings = (playerData.mainBet + (playerData.mainBet/2));

                printf("\nYOU HAVE WON A 3:2 PAYOUT! (+ $");
                printfspace2(playerData.mainBetEarnings);
                printf(")\n\n");

                playerData.money = (playerData.money + playerData.mainBetEarnings + playerData.mainBet);
                playerData.mainBet = 0;
                playerData.mainBetEarnings = 0;

                Sleep(2000);
                printf("\n\n\nSTARTING A NEW ROUND!");
                printf("\n\n\n");
                Sleep(1000);

                goto GameStart;
            }
            

        }
        else
        {
            // Nothing happens if the player does not have Blackjack.
        }

        if (dealerHand[0] == 1) // Checks if the Dealer was dealt an Ace (that is facing upwards)
        {
            InsuranceBet:

            printf("\n\nDEALER HAS BEEN DEALT AN ACE!\n");
            printf("DO YOU WANT TO BUY INSURANCE?\n");
            printf("1) YES\t\t2) NO\n");
            printf("ENTER YOUR DECISION: ");
            scanf(" %c", &MenuNavigationOption);

            MenuNavigation = entryDigitValidator(MenuNavigationOption);

            dealerHand[0] = 14;
            for(i=0; i<2; i++)
            {
            dealerHandValue[i] = cardValuation(dealerHand[i]);
            }
            dealerHandTotal = (dealerHandValue[0] + dealerHandValue[1]);

            if (MenuNavigation == 1)
            {
                if (playerData.money < (playerData.mainBet/2) && playerData.mainBetEarnings < (playerData.mainBet/2))
                {
                    printf("\nERROR! YOU DO NOT HAVE ENOUGH MONEY TO AFFORD THE INSURANCE BET!\n");
                }
                else
                {
                    printf("\nYOU PLACED AN INSURANCE BET OF: $");
                    printfspace2(playerData.mainBet/2);
                    printf("\n\n\n");
                    Sleep(2000);

                    if (playerData.mainBetEarnings >= (playerData.mainBet/2))
                    {
                        playerData.insuranceBet = (playerData.mainBet/2);
                        playerData.mainBetEarnings = (playerData.mainBetEarnings - playerData.insuranceBet);
                        
                        betSource = 1;
                    }
                    else
                    {
                        playerData.insuranceBet = (playerData.mainBet/2);
                        playerData.money = (playerData.money - playerData.insuranceBet);

                        betSource = 2;
                    }

                    if (dealerHandTotal == 21)
                    {
                        // Need a reveal UI

                        // Displays user money
                        printf("CASH: $");
                        printfspace2(playerData.money);
                        printf("\t\t\t");

                        // Displays current table's minimum and maximum bets (settings)
                        printf("MINIMUM: $");
                        printfspace2(activeTableMin);
                        printf("\t\t");
                        printf("MAXIMUM: $");
                        printfspace2(activeTableMax);
                        printf("\t\t");
                        printf("MAX PAIR BET: $");
                        printfspace2(activeTablePairMax);
                        printf("\t\t\tFINISH THE ROUND TO RETURN TO MAIN MENU!");
                        printf("\nCURRENT MAIN WAGER: $");
                        printfspace2(playerData.mainBet);
                        printf("\t\t");
                        printf("\nCURRENT INSURANCE BET: $");
                        printfspace2(playerData.insuranceBet);
                        printf("\t\t");
                        printf("\n\n\n\n");

                        printf("\t\t\t\t\t\t\tDEALER'S HAND:\t");
                        cardPrintf(dealerHand[0]);
                        Sleep(500);
                        cardPrintf(dealerHand[1]);
                        printf("\t\t(BLACKJACK!)");
                        printf("\n\n\n");

                        printf("\t\t\t\t\t\t\tPLAYER'S HAND:\t");
                        cardPrintf(playerHand[0]);
                        cardPrintf(playerHand[1]);
                        if((playerHandValue[0] == 1 && playerHandValue[1] == 10) || (playerHandValue[0] == 10 && playerHandValue[1] == 1))
                        {
                            printf("\t\t(BLACKJACK!)");
                        }
                        else
                        {
                            // Prints nothing
                        }

                        printf("\n\n");

                        printf("\nDEALER HAS BLACKJACK! WITH A PAYOUT OF 2:1, YOU WIN: $");
                        printfspace2(playerData.insuranceBet*(2));

                        playerData.money = (playerData.money + (playerData.insuranceBet * 2));

                        if((playerHandValue[0] == 1 && playerHandValue[1] == 10) || (playerHandValue[0] == 10 && playerHandValue[1] == 1))
                        {
                            printf("\n\nWOW! BOTH THE DEALER AND THE PLAYER HAVE BLACKJACK! (PUSH)\n\n");
                            if (betSource == 1)
                            {
                                playerData.insuranceBet = 0;
                            }
                            else
                            {
                                playerData.money = (playerData.money + playerData.insuranceBet);
                                playerData.insuranceBet = 0;
                            }

                            playerData.money = (playerData.money + playerData.mainBet); // Push
                            playerData.mainBet = 0;
                            playerData.mainBetEarnings = 0;
                        }
                        else
                        {
                            printf("YOU LOST YOUR MAIN BET THOUGH...");
                            playerData.mainBet = 0; // Bet is lost.
                            playerData.mainBetEarnings = 0;
                        }

                        Sleep(2000);
                        printf("\n\n\nSTARTING A NEW ROUND!");
                        printf("\n\n\n");
                        Sleep(1000);

                        goto GameStart;
                    }
                    else // Dealer does not have a Blackjack (MIGHT HAVE ERRORS)
                    {
                        // Displays user money
                        printf("CASH: $");
                        printfspace2(playerData.money);
                        printf("\t\t\t");

                        // Displays current table's minimum and maximum bets (settings)
                        printf("MINIMUM: $");
                        printfspace2(activeTableMin);
                        printf("\t\t");
                        printf("MAXIMUM: $");
                        printfspace2(activeTableMax);
                        printf("\t\t");
                        printf("MAX PAIR BET: $");
                        printfspace2(activeTablePairMax);
                        printf("\t\t\tFINISH THE ROUND TO RETURN TO MAIN MENU!");
                        printf("\nCURRENT MAIN WAGER: $");
                        printfspace2(playerData.mainBet);
                        printf("\t\t");
                        printf("\nCURRENT INSURANCE BET: $");
                        printfspace2(playerData.insuranceBet);
                        printf("\t\t");
                        printf("\n\n\n\n");

                        printf("\t\t\t\t\t\t\tDEALER'S HAND:\t");
                        cardPrintf(dealerHand[0]);
                        Sleep(500);
                        printf("[?]  ");
                        printf("\n\n\n");

                        printf("\t\t\t\t\t\t\tPLAYER'S HAND:\t");
                        cardPrintf(playerHand[0]);
                        cardPrintf(playerHand[1]);
                        if((playerHandValue[0] == 1 && playerHandValue[1] == 10) || (playerHandValue[0] == 10 && playerHandValue[1] == 1))
                        {
                            printf("\t\t(BLACKJACK!)");
                        }
                        else
                        {
                            // Prints nothing
                        }

                        printf("\n\n");

                        printf("\nDEALER DOES NOT HAVE BLACKJACK.\n\n");
                        Sleep(2000);

                        playerData.insuranceBet = 0;
                        dealerHand[0] = 1;

                        if((playerHandValue[0] == 1 && playerHandValue[1] == 10) || (playerHandValue[0] == 10 && playerHandValue[1] == 1))
                        {
                            playerData.mainBetEarnings = (playerData.mainBet + (playerData.mainBet/2));

                            printf("\nYOU HAVE WON A 3:2 PAYOUT! (+ $");
                            printfspace2(playerData.mainBetEarnings);
                            printf(")\n\n");

                            playerData.money = (playerData.money + playerData.mainBetEarnings + playerData.mainBet);
                            playerData.mainBet = 0;
                            playerData.mainBetEarnings = 0;

                            Sleep(2000);
                            printf("\n\n\nSTARTING A NEW ROUND!");
                            printf("\n\n\n");
                            Sleep(1000);

                            goto GameStart;
                        }
                        
                    }

                }
            }
            else if (MenuNavigation == 2)
            {
                printf("\nYOU DECIDED NOT TO PLACE AN INSURANCE BET.\n\n\n");
                Sleep(2000);

                if (dealerHandTotal == 21)
                {
                    // Need a UI to reveal Blackjack

                    // Displays user money
                    printf("CASH: $");
                    printfspace2(playerData.money);
                    printf("\t\t\t");

                    // Displays current table's minimum and maximum bets (settings)
                    printf("MINIMUM: $");
                    printfspace2(activeTableMin);
                    printf("\t\t");
                    printf("MAXIMUM: $");
                    printfspace2(activeTableMax);
                    printf("\t\t");
                    printf("MAX PAIR BET: $");
                    printfspace2(activeTablePairMax);
                    printf("\t\t\tFINISH THE ROUND TO RETURN TO MAIN MENU!");
                    printf("\nCURRENT MAIN WAGER: $");
                    printfspace2(playerData.mainBet);
                    printf("\t\t");
                    printf("\nCURRENT INSURANCE BET: $");
                    printfspace2(playerData.insuranceBet);
                    printf("\t\t");
                    printf("\n\n\n\n");

                    printf("\t\t\t\t\t\t\tDEALER'S HAND:\t");
                    cardPrintf(dealerHand[0]);
                    Sleep(500);
                    cardPrintf(dealerHand[1]);
                    printf("\t\t(BLACKJACK!)");
                    printf("\n\n\n");

                    printf("\t\t\t\t\t\t\tPLAYER'S HAND:\t");
                    cardPrintf(playerHand[0]);
                    cardPrintf(playerHand[1]);
                    if((playerHandValue[0] == 1 && playerHandValue[1] == 10) || (playerHandValue[0] == 10 && playerHandValue[1] == 1))
                    {
                        printf("\t\t(BLACKJACK!)");
                    }
                    else
                    {
                        // Prints nothing
                    }

                    printf("\n\n");

                    if((playerHandValue[0] == 1 && playerHandValue[1] == 10) || (playerHandValue[0] == 10 && playerHandValue[1] == 1))
                        {
                            printf("\n\nWOW! BOTH THE DEALER AND THE PLAYER HAVE BLACKJACK!\n\n");

                            playerData.money = (playerData.money + playerData.mainBet); // Push
                            playerData.mainBet = 0;
                            playerData.mainBetEarnings = 0;
                        }
                        else
                        {
                            printf("\nSORRY, DEALER HAS BLACKJACK.\n\n");
                            playerData.mainBet = 0; // Bet is lost.
                            playerData.mainBetEarnings = 0;
                        }

                    Sleep(2000);
                    printf("STARTING A NEW ROUND!\n\n\n");
                    Sleep(1000);

                    playerData.mainBet = 0;

                    goto GameStart;
                }
                else
                {
                    printf("\n\n");

                    // Displays user money
                    printf("CASH: $");
                    printfspace2(playerData.money);
                    printf("\t\t\t");

                    // Displays current table's minimum and maximum bets (settings)
                    printf("MINIMUM: $");
                    printfspace2(activeTableMin);
                    printf("\t\t");
                    printf("MAXIMUM: $");
                    printfspace2(activeTableMax);
                    printf("\t\t");
                    printf("MAX PAIR BET: $");
                    printfspace2(activeTablePairMax);
                    printf("\t\t\tFINISH THE ROUND TO RETURN TO MAIN MENU!");
                    printf("\nCURRENT MAIN WAGER: $");
                    printfspace2(playerData.mainBet);
                    printf("\t\t");
                    printf("\nCURRENT INSURANCE BET: $");
                    printfspace2(playerData.insuranceBet);
                    printf("\t\t");
                    printf("\n\n\n\n");

                    printf("\t\t\t\t\t\t\tDEALER'S HAND:\t");
                    cardPrintf(dealerHand[0]);
                    Sleep(500);
                    printf("[?]  ");
                    printf("\n\n\n");

                    printf("\t\t\t\t\t\t\tPLAYER'S HAND:\t");
                    cardPrintf(playerHand[0]);
                    cardPrintf(playerHand[1]);

                    printf("\n\n");
                    printf("\nDEALER DOES NOT HAVE BLACKJACK!\n\n");

                    playerData.insuranceBet = 0;
                    dealerHand[0] = 1;

                    // Continues
                }
            }
            else
            {
                printf("\nERROR! INVALID OPTION!\n\n");
                Sleep(2000);
                goto InsuranceBet;
            }
        }

        for(i=0; i<2; i++)
        {
            if(playerHand[i] == 1)
            {
                playerHandAces = 1;
                playerHandTotal = (playerHandTotal + 1);
                if (playerHandTotal2 <= 10)
                {
                    playerHandTotal2 = (playerHandTotal2 + 11);                    
                }
                else
                {
                    playerHandTotal2 = (playerHandTotal2 + 1);
                }

            }
            else
            {
                playerHandTotal = (playerHandTotal + playerHandValue[i]);
                playerHandTotal2 = (playerHandTotal2 + playerHandValue[i]);
            }
        }

        if ((playerHandTotal2<22 && playerHandAces == 1) && (playerHandTotal != playerHandTotal2))
        {
            printf("\n\nYOUR HAND TOTAL: %d/%d\n", playerHandTotal, playerHandTotal2);
        }
        else
        {
            printf("\n\nYOUR HAND TOTAL: %d", playerHandTotal);
        }

        printf("\n\nHAND OPTIONS:\t\t");
        printf("1) SURRENDER");
        printf("\t\t");
        printf("2) SPLIT");
        printf("\t\t");
        printf("3) DOUBLE");
        printf("\t\t|\t");
        printf("4) HIT");
        printf("\t\t");
        printf("5) STAND");

        GameOptions:

        betSource = 0;

        printf("\n\nENTER YOUR DECISION:\t");
        scanf(" %c", &MenuNavigationOption);

        MenuNavigation = entryDigitValidator(MenuNavigationOption);

        if (MenuNavigation == 1) //Player Surrenders their hand
        {
            Sleep(500);
            printf("\n\nYOU CHOSE TO SURRENDER (FOLD) YOUR HAND!\n");
            Sleep(1000);
            printf("YOU WILL RECEIVE HALF OF YOUR WAGER BACK ($");
            printfspace2((playerData.mainBet/2));
            if (playerData.splitBet > 0)
            {
                printf(" FROM MAIN WAGER AND $");
                printfspace2((playerData.splitBet/2));
                printf(" FROM SPLIT BET");
            }
            else
            {
                // Prints nothing
            }
            printf(").");

            playerData.money = (playerData.money + (playerData.mainBet/2));
            playerData.mainBet = 0;
            playerData.money = (playerData.money + (playerData.splitBet/2));
            playerData.splitBet = 0;

            Sleep(2000);
            printf("\n\n");

            // Displays user money
            printf("CASH: $");
            printfspace2(playerData.money);
            printf("\t\t\t");

            // Displays current table's minimum and maximum bets (settings)
            printf("MINIMUM: $");
            printfspace2(activeTableMin);
            printf("\t\t");
            printf("MAXIMUM: $");
            printfspace2(activeTableMax);
            printf("\t\t");
            printf("MAX PAIR BET: $");
            printfspace2(activeTablePairMax);
            printf("\t\t\tFINISH THE ROUND TO RETURN TO MAIN MENU!");
            printf("\nCURRENT MAIN WAGER: $");
            printfspace2(playerData.mainBet);
            printf(" (FOLDED)");
            if (splitHandCheck == 1)
            {
                printf("\nCURRENT SPLIT BET: $");
                printfspace2(playerData.splitBet);
                printf(" (FOLDED)");
            }
            else
            {
                // Prints nothing
            }
            printf("\t\t");
            printf("\n\n\n\n");

            printf("\t\t\t\t\t\t\tDEALER'S HAND:\t");
            cardPrintf(dealerHand[0]);
            printf("[?]  ");
            printf("\n\n\n");

            printf("\t\t\t\t\t\t\tPLAYER'S HAND (FOLDED):\t");
            cardPrintf(playerHand[0]);
            for(i=1; i<20; i++)
            {
                if(playerHand[i] == 0)
                {
                    goto SkipPrintOption1;
                }
                else
                {
                    cardPrintf(playerHand[i]);
                }
            }

            SkipPrintOption1:

            if (splitHandCheck == 1)
            {
                printf("\n\t\t\t\t\t\t\tPLAYER'S SECOND HAND (FOLDED):\t");
                cardPrintf(playerSecondHand[0]);
                for(i=1; i<20; i++)
                {
                    if(playerSecondHand[i] == 0)
                    {
                        goto SkipPrintOption12;
                    }
                    else
                    {
                        cardPrintf(playerSecondHand[i]);
                    }
                }
            }
            else
            {
                // Prints nothing
            }

            SkipPrintOption12:

            playerHandTotal = 0;
            playerHandTotal2 = 0;
            playerSecondHandTotal = 0;
            playerSecondHandTotal2 = 0;

            for(i=0; i<20; i++)
            {
                if(playerHand[i] == 1)
                {
                    playerHandAces = 1;
                    playerHandTotal = (playerHandTotal + 1);
                    if (playerHandTotal2 <= 10)
                    {
                        playerHandTotal2 = (playerHandTotal2 + 11);                    
                    }
                    else
                    {
                        playerHandTotal2 = (playerHandTotal2 + 1);
                    }

                }
                else
                {
                    playerHandTotal = (playerHandTotal + playerHandValue[i]);
                    playerHandTotal2 = (playerHandTotal2 + playerHandValue[i]);
                }
            }

            if ((playerHandTotal2<22 && playerHandAces == 1) && (playerHandTotal != playerHandTotal2))
            {
                printf("\n\nYOUR HAND TOTAL: %d/%d\n", playerHandTotal, playerHandTotal2);
            }
            else
            {
                printf("\n\nYOUR HAND TOTAL: %d", playerHandTotal);
            }
            
            if (splitHandCheck == 1)
            {
                if((playerSecondHandTotal2<22 && playerHand2Aces == 1) && (playerSecondHandTotal != playerSecondHandTotal2))
                {
                    printf("\n\nYOUR SPLIT (SECOND) HAND TOTAL: %d/%d\n", playerSecondHandTotal, playerSecondHandTotal2);
                }
                else
                {
                    printf("\n\nYOU SPLIT (SECOND) TOTAL: %d", playerSecondHandTotal);
                }
            }
            else
            {
                // Prints nothing
            }

            Sleep(2000);
            printf("\n\n\n\t\t\t\t\t\t\t\t\tSTARTING A NEW ROUND!\n\n\n");
            Sleep(1000);

            goto GameStart;
        }
        else if (MenuNavigation == 2) //Player Splits their hand
        {
            if (playerHand[0] == playerHand[1] && playerHand[2] == 0 && playerSecondHand[0] == 0)
            {
                // A valid pair was identified

                if ((playerData.money < playerData.mainBet) && (playerData.mainBetEarnings < playerData.mainBet)) // CAN'T AFFORD
                {
                    printf("\n\nERROR! YOU CANNOT AFFORD TO SPLIT YOUR HAND!\n\n");
                    printf("REQUIRED FUNDS: $");
                    printfspace2(playerData.mainBet);
                    printf("\nYOUR CASH: $");
                    printfspace2(playerData.money);
                    printf("\n\n");
                    Sleep(2000);

                    printf("\n\n");
            
                    // Displays user money
                    printf("CASH: $");
                    printfspace2(playerData.money);
                    printf("\t\t\t");

                    // Displays current table's minimum and maximum bets (settings)
                    printf("MINIMUM: $");
                    printfspace2(activeTableMin);
                    printf("\t\t");
                    printf("MAXIMUM: $");
                    printfspace2(activeTableMax);
                    printf("\t\t");
                    printf("MAX PAIR BET: $");
                    printfspace2(activeTablePairMax);
                    printf("\t\t\tFINISH THE ROUND TO RETURN TO MAIN MENU!");
                    printf("\nCURRENT MAIN WAGER: $");
                    printfspace2(playerData.mainBet);
                    printf("\t\t");
                    printf("\n\n\n\n");

                    printf("\t\t\t\t\t\t\tDEALER'S HAND:\t");
                    cardPrintf(dealerHand[0]);
                    printf("[?]  ");
                    printf("\n\n\n");

                    printf("\t\t\t\t\t\t\tPLAYER'S HAND:\t");
                    cardPrintf(playerHand[0]);
                    cardPrintf(playerHand[1]);
                    for(i=2; i<20; i++)
                    {
                        if(playerHand[i] == 0)
                        {
                            goto SkipPrintOption24;
                        }
                        else
                        {
                            cardPrintf(playerHand[i]);
                        }
                    }

                    SkipPrintOption24:

                    playerHandTotal = 0;
                    playerHandTotal2 = 0;
                    playerSecondHandTotal = 0;
                    playerSecondHandTotal2 = 0;

                    for(i=0; i<20; i++)
                    {
                        if(playerHand[i] == 1)
                        {
                            playerHandAces = 1;
                            playerHandTotal = (playerHandTotal + 1);
                            if (playerHandTotal2 <= 10)
                            {
                                playerHandTotal2 = (playerHandTotal2 + 11);                    
                            }
                            else
                            {
                                playerHandTotal2 = (playerHandTotal2 + 1);
                            }

                        }
                        else
                        {
                            playerHandTotal = (playerHandTotal + playerHandValue[i]);
                            playerHandTotal2 = (playerHandTotal2 + playerHandValue[i]);
                        }
                    }

                    if (playerHandTotal2<22 && playerHandAces == 1)
                    {
                        printf("\n\nYOUR HAND TOTAL: %d/%d\n", playerHandTotal, playerHandTotal2);
                    }
                    else
                    {
                        printf("\n\nYOUR HAND TOTAL: %d", playerHandTotal);
                    }

                    printf("\n\nHAND OPTIONS:\t\t");
                    printf("1) SURRENDER");
                    printf("\t\t");
                    printf("2) SPLIT");
                    printf("\t\t");
                    printf("3) DOUBLE");
                    printf("\t\t|\t");
                    printf("4) HIT");
                    printf("\t\t");
                    printf("5) STAND");
                

                    goto GameOptions;
                }
                else // CAN AFFORD AND IS VALID
                {
                    //Split
                    splitHandCheck = 1;

                    if (playerData.mainBetEarnings >= playerData.mainBet)
                    {
                        playerData.mainBetEarnings = (playerData.mainBetEarnings - playerData.mainBet);
                        playerData.splitBet = playerData.mainBet;
                        betSource = 1;
                    }
                    else
                    {
                        playerData.money = (playerData.money - playerData.mainBet);
                        playerData.splitBet = playerData.mainBet;
                        betSource = 2;
                    }

                    playerSecondHand[0] = playerHand[1];
                    playerSecondHandValue[0] = playerHandValue[1];

                    playerHand[1] = 0;
                    playerHandValue[1] = 0;

                    printf("\n\n");
            
                    // Displays user money
                    printf("CASH: $");
                    printfspace2(playerData.money);
                    printf("\t\t\t");

                    // Displays current table's minimum and maximum bets (settings)
                    printf("MINIMUM: $");
                    printfspace2(activeTableMin);
                    printf("\t\t");
                    printf("MAXIMUM: $");
                    printfspace2(activeTableMax);
                    printf("\t\t");
                    printf("MAX PAIR BET: $");
                    printfspace2(activeTablePairMax);
                    printf("\t\t\tFINISH THE ROUND TO RETURN TO MAIN MENU!");
                    printf("\nCURRENT MAIN WAGER: $");
                    printfspace2(playerData.mainBet);
                    printf("\nCURRENT SPLIT BET: $");
                    printfspace2(playerData.splitBet);
                    printf("\t\t");
                    printf("\n\n\n\n");

                    printf("\t\t\t\t\t\t\tDEALER'S HAND:\t");
                    cardPrintf(dealerHand[0]);
                    printf("[?]  ");
                    printf("\n\n\n");

                    printf("\t\t\t\t\t\t\tPLAYER'S HAND:\t");
                    cardPrintf(playerHand[0]);
                    
                    printf("\n\t\t\t\t\t\t\tPLAYER'S SECOND HAND:\t");
                    cardPrintf(playerSecondHand[0]);

                    playerHandTotal = 0;
                    playerHandTotal2 = 0;
                    playerSecondHandTotal = 0;
                    playerSecondHandTotal2 = 0;

                    for(i=0; i<20; i++)
                    {
                        if(playerSecondHand[i] == 1)
                        {
                            playerHand2Aces = 1;
                            playerSecondHandTotal = (playerSecondHandTotal + 1);
                            if (playerSecondHandTotal2 <= 10)
                            {
                                playerSecondHandTotal2 = (playerSecondHandTotal2 + 11);                    
                            }
                            else
                            {
                                playerSecondHandTotal2 = (playerSecondHandTotal2 + 1);
                            }

                        }
                        else
                        {
                            playerSecondHandTotal = (playerSecondHandTotal + playerSecondHandValue[i]);
                            playerSecondHandTotal2 = (playerSecondHandTotal2 + playerSecondHandValue[i]);
                        }
                    }

                    for(i=0; i<20; i++)
                    {
                        if(playerHand[i] == 1)
                        {
                            playerHandAces = 1;
                            playerHandTotal = (playerHandTotal + 1);
                            if (playerHandTotal2 <= 10)
                            {
                                playerHandTotal2 = (playerHandTotal2 + 11);                    
                            }
                            else
                            {
                                playerHandTotal2 = (playerHandTotal2 + 1);
                            }

                        }
                        else
                        {
                            playerHandTotal = (playerHandTotal + playerHandValue[i]);
                            playerHandTotal2 = (playerHandTotal2 + playerHandValue[i]);
                        }
                    }

                    if (playerHandTotal2<22 && playerHandAces == 1)
                    {
                        printf("\n\nYOUR HAND TOTAL: %d/%d\n", playerHandTotal, playerHandTotal2);
                    }
                    else
                    {
                        printf("\n\nYOUR HAND TOTAL: %d", playerHandTotal);
                    }
                    if(playerSecondHandTotal2<22 && playerHand2Aces == 1)
                    {
                        printf("\nSPLIT HAND TOTAL: %d/%d\n", playerSecondHandTotal, playerSecondHandTotal2);
                    }
                    else
                    {
                        printf("\nSPLIT HAND TOTAL: %d", playerSecondHandTotal);
                    }

                    printf("\n\nHAND OPTIONS:\t\t");
                    printf("1) SURRENDER");
                    printf("\t\t");
                    printf("2) SPLIT");
                    printf("\t\t");
                    printf("3) DOUBLE");
                    printf("\t\t|\t");
                    printf("4) HIT");
                    printf("\t\t");
                    printf("5) STAND");
                    

                    goto GameOptions;

                }
            }
            else if ((playerHand[2] != 0) || (playerSecondHand[0] != 0))
            {
                printf("\n\nYOU CAN ONLY SPLIT YOUR HAND AS THE FIRST DECISION!\n\n");
                Sleep(2000);

                printf("\n\n");
            
                // Displays user money
                printf("CASH: $");
                printfspace2(playerData.money);
                printf("\t\t\t");

                // Displays current table's minimum and maximum bets (settings)
                printf("MINIMUM: $");
                printfspace2(activeTableMin);
                printf("\t\t");
                printf("MAXIMUM: $");
                printfspace2(activeTableMax);
                printf("\t\t");
                printf("MAX PAIR BET: $");
                printfspace2(activeTablePairMax);
                printf("\t\t\tFINISH THE ROUND TO RETURN TO MAIN MENU!");
                printf("\nCURRENT MAIN WAGER: $");
                printfspace2(playerData.mainBet);
                if (splitHandCheck == 1)
                {
                    printf("\nCURRENT SPLIT BET: $");
                    printfspace2(playerData.splitBet);
                }
                else
                {
                    // Prints nothing
                }
                printf("\t\t");
                printf("\n\n\n\n");

                printf("\t\t\t\t\t\t\tDEALER'S HAND:\t");
                cardPrintf(dealerHand[0]);
                printf("[?]  ");
                printf("\n\n\n");

                printf("\t\t\t\t\t\t\tPLAYER'S HAND:\t");
                cardPrintf(playerHand[0]);
                for(i=1; i<20; i++)
                {
                    cardPrintf(playerHand[i]);
                }

                playerHandTotal = 0;
                playerHandTotal2 = 0;
                playerSecondHandTotal = 0;
                playerSecondHandTotal2 = 0;

                if(splitHandCheck == 1)
                {
                    printf("\n\t\t\t\t\t\t\tPLAYER'S SECOND HAND:\t");
                    cardPrintf(playerSecondHand[0]);
                    for (i=1; i<20; i++)
                    {
                        cardPrintf(playerSecondHand[i]);
                    }

                    for(i=0; i<20; i++)
                    {
                        if(playerSecondHand[i] == 1)
                        {
                            playerHand2Aces = 1;
                            playerSecondHandTotal = (playerSecondHandTotal + 1);
                            if (playerSecondHandTotal2 <= 10)
                            {
                                playerSecondHandTotal2 = (playerSecondHandTotal2 + 11);                    
                            }
                            else
                            {
                                playerSecondHandTotal2 = (playerSecondHandTotal2 + 1);
                            }

                        }
                        else
                        {
                            playerSecondHandTotal = (playerSecondHandTotal + playerSecondHandValue[i]);
                            playerSecondHandTotal2 = (playerSecondHandTotal2 + playerSecondHandValue[i]);
                        }
                    }
                }
                else
                {
                    // Prints nothing
                }

                for(i=0; i<20; i++)
                {
                    if(playerHand[i] == 1)
                    {
                        playerHandAces = 1;
                        playerHandTotal = (playerHandTotal + 1);
                        if (playerHandTotal2 <= 10)
                        {
                            playerHandTotal2 = (playerHandTotal2 + 11);                    
                        }
                        else
                        {
                            playerHandTotal2 = (playerHandTotal2 + 1);
                        }

                    }
                    else
                    {
                        playerHandTotal = (playerHandTotal + playerHandValue[i]);
                        playerHandTotal2 = (playerHandTotal2 + playerHandValue[i]);
                    }
                }

                if (playerHandTotal2<22 && playerHandAces == 1)
                {
                    printf("\n\nYOUR HAND TOTAL: %d/%d\n", playerHandTotal, playerHandTotal2);
                }
                else
                {
                    printf("\n\nYOUR HAND TOTAL: %d", playerHandTotal);
                }

                if (splitHandCheck == 1)
                {
                    if(playerSecondHandTotal2<22 && playerHand2Aces == 1)
                    {
                        printf("\nSPLIT HAND TOTAL: %d/%d\n", playerSecondHandTotal, playerSecondHandTotal2);
                    }
                    else
                    {
                        printf("\nSPLIT HAND TOTAL: %d", playerSecondHandTotal);
                    }  
                }
                else
                {
                    // Prints nothing
                }

                printf("\n\nHAND OPTIONS:\t\t");
                printf("1) SURRENDER");
                printf("\t\t");
                printf("2) SPLIT");
                printf("\t\t");
                printf("3) DOUBLE");
                printf("\t\t|\t");
                printf("4) HIT");
                printf("\t\t");
                printf("5) STAND");

                goto GameOptions;
            }
            else
            {
                printf("\n\nYOU CANNOT SPLIT THIS HAND! YOU WERE NOT DEALT A MATCHING PAIR!\n\n");
                Sleep(2000);

                printf("\n\n");
            
                // Displays user money
                printf("CASH: $");
                printfspace2(playerData.money);
                printf("\t\t\t");

                // Displays current table's minimum and maximum bets (settings)
                printf("MINIMUM: $");
                printfspace2(activeTableMin);
                printf("\t\t");
                printf("MAXIMUM: $");
                printfspace2(activeTableMax);
                printf("\t\t");
                printf("MAX PAIR BET: $");
                printfspace2(activeTablePairMax);
                printf("\t\t\tFINISH THE ROUND TO RETURN TO MAIN MENU!");
                printf("\nCURRENT MAIN WAGER: $");
                printfspace2(playerData.mainBet);
                printf("\t\t");
                printf("\n\n\n\n");

                printf("\t\t\t\t\t\t\tDEALER'S HAND:\t");
                cardPrintf(dealerHand[0]);
                printf("[?]  ");
                printf("\n\n\n");

                printf("\t\t\t\t\t\t\tPLAYER'S HAND:\t");
                cardPrintf(playerHand[0]);
                cardPrintf(playerHand[1]);
                for(i=2; i<20; i++)
                {
                    if(playerHand[i] == 0)
                    {
                        goto SkipPrintOption23;
                    }
                    else
                    {
                        cardPrintf(playerHand[i]);
                    }
                }

                SkipPrintOption23:

                playerHandTotal = 0;
                playerHandTotal2 = 0;
                playerSecondHandTotal = 0;
                playerSecondHandTotal2 = 0;

                for(i=0; i<20; i++)
                {
                    if(playerHand[i] == 1)
                    {
                        playerHandAces = 1;
                        playerHandTotal = (playerHandTotal + 1);
                        if (playerHandTotal2 <= 10)
                        {
                            playerHandTotal2 = (playerHandTotal2 + 11);                    
                        }
                        else
                        {
                            playerHandTotal2 = (playerHandTotal2 + 1);
                        }

                    }
                    else
                    {
                        playerHandTotal = (playerHandTotal + playerHandValue[i]);
                        playerHandTotal2 = (playerHandTotal2 + playerHandValue[i]);
                    }
                }

                if (playerHandTotal2<22 && playerHandAces == 1)
                {
                    printf("\n\nYOUR HAND TOTAL: %d/%d\n", playerHandTotal, playerHandTotal2);
                }
                else
                {
                    printf("\n\nYOUR HAND TOTAL: %d", playerHandTotal);
                }

                printf("\n\nHAND OPTIONS:\t\t");
                printf("1) SURRENDER");
                printf("\t\t");
                printf("2) SPLIT");
                printf("\t\t");
                printf("3) DOUBLE");
                printf("\t\t|\t");
                printf("4) HIT");
                printf("\t\t");
                printf("5) STAND");
                

                goto GameOptions;

            }
        }
        else if (MenuNavigation == 3) // PLAYER DOUBLES DOWN ON THEIR HAND
        {
            if (handOneStandCheck == 0 && handOneCanDouble == 1)
            {
                handOneCanDouble = 0;
                if ((playerData.money < playerData.mainBet) && (playerData.mainBetEarnings < playerData.mainBet))
                {
                    // Player does not have enough funds
                    printf("\nERROR! YOU DO NOT HAVE ENOUGH MONEY TO DOUBLE DOWN YOUR BET!\n");

                    // UI to return to GameOptions
                    Sleep(2000);

                    printf("\n\n");
                
                    // Displays user money
                    printf("CASH: $");
                    printfspace2(playerData.money);
                    printf("\t\t\t");

                    // Displays current table's minimum and maximum bets (settings)
                    printf("MINIMUM: $");
                    printfspace2(activeTableMin);
                    printf("\t\t");
                    printf("MAXIMUM: $");
                    printfspace2(activeTableMax);
                    printf("\t\t");
                    printf("MAX PAIR BET: $");
                    printfspace2(activeTablePairMax);
                    printf("\t\t\tFINISH THE ROUND TO RETURN TO MAIN MENU!");
                    printf("\nCURRENT MAIN WAGER: $");
                    printfspace2(playerData.mainBet);
                    if (splitHandCheck == 1)
                    {
                        printf("\nCURRENT SPLIT BET: $");
                        printfspace2(playerData.splitBet);
                    }
                    else
                    {
                        // Prints nothing
                    }
                    printf("\t\t");
                    printf("\n\n\n\n");

                    printf("\t\t\t\t\t\t\tDEALER'S HAND:\t");
                    cardPrintf(dealerHand[0]);
                    printf("[?]  ");
                    printf("\n\n\n");

                    printf("\t\t\t\t\t\t\tPLAYER'S HAND:\t");
                    cardPrintf(playerHand[0]);
                    for(i=1; i<20; i++)
                    {
                        cardPrintf(playerHand[i]);
                    }

                    playerHandTotal = 0;
                    playerHandTotal2 = 0;
                    playerSecondHandTotal = 0;
                    playerSecondHandTotal2 = 0;

                    if(splitHandCheck == 1)
                    {
                        printf("\n\t\t\t\t\t\t\tPLAYER'S SECOND HAND:\t");
                        cardPrintf(playerSecondHand[0]);
                        for (i=1; i<20; i++)
                        {
                            cardPrintf(playerSecondHand[i]);
                        }

                        for(i=0; i<20; i++)
                        {
                            if(playerSecondHand[i] == 1)
                            {
                                playerHand2Aces = 1;
                                playerSecondHandTotal = (playerSecondHandTotal + 1);
                                if (playerSecondHandTotal2 <= 10)
                                {
                                    playerSecondHandTotal2 = (playerSecondHandTotal2 + 11);                    
                                }
                                else
                                {
                                    playerSecondHandTotal2 = (playerSecondHandTotal2 + 1);
                                }

                            }
                            else
                            {
                                playerSecondHandTotal = (playerSecondHandTotal + playerSecondHandValue[i]);
                                playerSecondHandTotal2 = (playerSecondHandTotal2 + playerSecondHandValue[i]);
                            }
                        }
                    }
                    else
                    {
                        // Prints nothing
                    }

                    for(i=0; i<20; i++)
                    {
                        if(playerHand[i] == 1)
                        {
                            playerHandAces = 1;
                            playerHandTotal = (playerHandTotal + 1);
                            if (playerHandTotal2 <= 10)
                            {
                                playerHandTotal2 = (playerHandTotal2 + 11);                    
                            }
                            else
                            {
                                playerHandTotal2 = (playerHandTotal2 + 1);
                            }

                        }
                        else
                        {
                            playerHandTotal = (playerHandTotal + playerHandValue[i]);
                            playerHandTotal2 = (playerHandTotal2 + playerHandValue[i]);
                        }
                    }

                    if (playerHandTotal2<22 && playerHandAces == 1)
                    {
                        printf("\n\nYOUR HAND TOTAL: %d/%d\n", playerHandTotal, playerHandTotal2);
                    }
                    else
                    {
                        printf("\n\nYOUR HAND TOTAL: %d", playerHandTotal);
                    }

                    if (splitHandCheck == 1)
                    {
                        if(playerSecondHandTotal2<22 && playerHand2Aces == 1)
                        {
                            printf("\nSPLIT HAND TOTAL: %d/%d\n", playerSecondHandTotal, playerSecondHandTotal2);
                        }
                        else
                        {
                            printf("\nSPLIT HAND TOTAL: %d", playerSecondHandTotal);
                        }  
                    }
                    else
                    {
                        // Prints nothing
                    }

                    printf("\n\nHAND OPTIONS:\t\t");
                    printf("1) SURRENDER");
                    printf("\t\t");
                    printf("2) SPLIT");
                    printf("\t\t");
                    printf("3) DOUBLE");
                    printf("\t\t|\t");
                    printf("4) HIT");
                    printf("\t\t");
                    printf("5) STAND");

                    goto GameOptions;
                }
                else // Can afford
                {
                    betSource = 0;

                    if(playerData.mainBetEarnings >= playerData.mainBet)
                    {
                        playerData.mainBetEarnings = (playerData.mainBetEarnings - playerData.mainBet);
                        playerData.mainBet = (playerData.mainBet * 2);

                        betSource = 1;
                    }
                    else
                    {
                        playerData.money = (playerData.money - playerData.mainBet);
                        playerData.mainBet = (playerData.mainBet * 2);

                        betSource = 2;
                    }

                    handOneStandCheck = 1;
                    if (splitHandCheck == 0) // Goes to Showdown
                    {
                        printf("\n\nYOU DOUBLE DOWN ON YOUR MAIN HAND AND HIT IT!\n");

                        for (i=1; i<20; i++)
                        {
                            if (playerHand[i] == 0 && handHitCheck == 0)
                            {
                                playerHand[i] = (printRandoms(lower, upper, count));
                                playerHandValue[i] = cardValuation(playerHand[i]);

                                playerHandTotal = 0;
                                playerHandTotal2 = 0;

                                for(i=0; i<20; i++)
                                {
                                    if(playerHand[i] == 1)
                                    {
                                        playerHandAces = 1;
                                        playerHandTotal = (playerHandTotal + 1);
                                        if (playerHandTotal2 <= 10)
                                        {
                                            playerHandTotal2 = (playerHandTotal2 + 11);                    
                                        }
                                        else
                                        {
                                            playerHandTotal2 = (playerHandTotal2 + 1);
                                        }

                                    }
                                    else
                                    {
                                        playerHandTotal = (playerHandTotal + playerHandValue[i]);
                                        playerHandTotal2 = (playerHandTotal2 + playerHandValue[i]);
                                    }
                                }

                                handHitCheck = 1;
                            }
                        }

                        if (playerHandTotal > 21) // PLAYER BUSTS WITH ONLY ONE HAND -- GAMEOVER
                        {
                            Sleep(2000);

                            printf("\n\n");
                        
                            // Displays user money
                            printf("CASH: $");
                            printfspace2(playerData.money);
                            printf("\t\t\t");

                            // Displays current table's minimum and maximum bets (settings)
                            printf("MINIMUM: $");
                            printfspace2(activeTableMin);
                            printf("\t\t");
                            printf("MAXIMUM: $");
                            printfspace2(activeTableMax);
                            printf("\t\t");
                            printf("MAX PAIR BET: $");
                            printfspace2(activeTablePairMax);
                            printf("\t\t\tFINISH THE ROUND TO RETURN TO MAIN MENU!");
                            printf("\nCURRENT MAIN WAGER: $");
                            printfspace2(playerData.mainBet);
                            printf(" (LOST)");
                            if (splitHandCheck == 1)
                            {
                                printf("\nCURRENT SPLIT BET: $");
                                printfspace2(playerData.splitBet);
                            }
                            else
                            {
                                // Prints nothing
                            }
                            printf("\t\t");
                            printf("\n\n\n\n");

                            printf("\t\t\t\t\t\t\tDEALER'S HAND:\t");
                            cardPrintf(dealerHand[0]);
                            printf("[?]  ");
                            printf("\n\n\n");

                            printf("\t\t\t\t\t\t\tPLAYER'S HAND:\t");
                            cardPrintf(playerHand[0]);
                            for(i=1; i<20; i++)
                            {
                                cardPrintf(playerHand[i]);
                            }
                            printf("\t\t(BUSTED!)");

                            playerHandTotal = 0;
                            playerHandTotal2 = 0;
                            playerSecondHandTotal = 0;
                            playerSecondHandTotal2 = 0;

                            if(splitHandCheck == 1)
                            {
                                printf("\n\t\t\t\t\t\t\tPLAYER'S SECOND HAND:\t");
                                cardPrintf(playerSecondHand[0]);
                                for (i=1; i<20; i++)
                                {
                                    cardPrintf(playerSecondHand[i]);
                                }

                                for(i=0; i<20; i++)
                                {
                                    if(playerSecondHand[i] == 1)
                                    {
                                        playerHand2Aces = 1;
                                        playerSecondHandTotal = (playerSecondHandTotal + 1);
                                        if (playerSecondHandTotal2 <= 10)
                                        {
                                            playerSecondHandTotal2 = (playerSecondHandTotal2 + 11);                    
                                        }
                                        else
                                        {
                                            playerSecondHandTotal2 = (playerSecondHandTotal2 + 1);
                                        }

                                    }
                                    else
                                    {
                                        playerSecondHandTotal = (playerSecondHandTotal + playerSecondHandValue[i]);
                                        playerSecondHandTotal2 = (playerSecondHandTotal2 + playerSecondHandValue[i]);
                                    }
                                }
                            }
                            else
                            {
                                // Prints nothing
                            }

                            for(i=0; i<20; i++)
                            {
                                if(playerHand[i] == 1)
                                {
                                    playerHandAces = 1;
                                    playerHandTotal = (playerHandTotal + 1);
                                    if (playerHandTotal2 <= 10)
                                    {
                                        playerHandTotal2 = (playerHandTotal2 + 11);                    
                                    }
                                    else
                                    {
                                        playerHandTotal2 = (playerHandTotal2 + 1);
                                    }

                                }
                                else
                                {
                                    playerHandTotal = (playerHandTotal + playerHandValue[i]);
                                    playerHandTotal2 = (playerHandTotal2 + playerHandValue[i]);
                                }
                            }

                            if ((playerHandTotal2<22 && playerHandAces == 1) && (playerHandTotal != playerHandTotal2))
                            {
                                printf("\n\nYOUR HAND TOTAL: %d/%d\n", playerHandTotal, playerHandTotal2);
                            }
                            else
                            {
                                printf("\n\nYOUR HAND TOTAL: %d", playerHandTotal);
                            }

                            if (splitHandCheck == 1)
                            {
                                if((playerSecondHandTotal2<22 && playerHand2Aces == 1)  && (playerSecondHandTotal != playerSecondHandTotal2))
                                {
                                    printf("\nSPLIT HAND TOTAL: %d/%d\n", playerSecondHandTotal, playerSecondHandTotal2);
                                }
                                else
                                {
                                    printf("\nSPLIT HAND TOTAL: %d", playerSecondHandTotal);
                                }  
                            }
                            else
                            {
                                // Prints nothing
                            }
                            Sleep(2000);
                            printf("\n\nYOU DREW TOO MANY! YOU LOST YOUR BET OF $");
                            printfspace2(playerData.mainBet);

                            Sleep(2000);
                            printf("\n\nSTARTING A NEW ROUND!\n\n\n");
                            Sleep(1000);

                            playerData.mainBet = 0;

                            goto GameStart;

                        }
                        else if (playerHandTotal < 21) // PLAYER DOES NOT BUST/BLACKJACK WITH ONLY ONE HAND -- GOES TO SHOWDOWN
                        {
                            Sleep(2000);

                            printf("\n\n");
                        
                            // Displays user money
                            printf("CASH: $");
                            printfspace2(playerData.money);
                            printf("\t\t\t");

                            // Displays current table's minimum and maximum bets (settings)
                            printf("MINIMUM: $");
                            printfspace2(activeTableMin);
                            printf("\t\t");
                            printf("MAXIMUM: $");
                            printfspace2(activeTableMax);
                            printf("\t\t");
                            printf("MAX PAIR BET: $");
                            printfspace2(activeTablePairMax);
                            printf("\t\t\tFINISH THE ROUND TO RETURN TO MAIN MENU!");
                            printf("\nCURRENT MAIN WAGER: $");
                            printfspace2(playerData.mainBet);
                            if (splitHandCheck == 1)
                            {
                                printf("\nCURRENT SPLIT BET: $");
                                printfspace2(playerData.splitBet);
                            }
                            else
                            {
                                // Prints nothing
                            }
                            printf("\t\t");
                            printf("\n\n\n\n");

                            printf("\t\t\t\t\t\t\tDEALER'S HAND:\t");
                            cardPrintf(dealerHand[0]);
                            printf("[?]  ");
                            printf("\n\n\n");

                            printf("\t\t\t\t\t\t\tPLAYER'S HAND:\t");
                            cardPrintf(playerHand[0]);
                            for(i=1; i<20; i++)
                            {
                                cardPrintf(playerHand[i]);
                            }
                            printf("\t\t(DOUBLED!)");

                            playerHandTotal = 0;
                            playerHandTotal2 = 0;
                            playerSecondHandTotal = 0;
                            playerSecondHandTotal2 = 0;

                            if(splitHandCheck == 1)
                            {
                                printf("\n\t\t\t\t\t\t\tPLAYER'S SECOND HAND:\t");
                                cardPrintf(playerSecondHand[0]);
                                for (i=1; i<20; i++)
                                {
                                    cardPrintf(playerSecondHand[i]);
                                }

                                for(i=0; i<20; i++)
                                {
                                    if(playerSecondHand[i] == 1)
                                    {
                                        playerHand2Aces = 1;
                                        playerSecondHandTotal = (playerSecondHandTotal + 1);
                                        if (playerSecondHandTotal2 <= 10)
                                        {
                                            playerSecondHandTotal2 = (playerSecondHandTotal2 + 11);                    
                                        }
                                        else
                                        {
                                            playerSecondHandTotal2 = (playerSecondHandTotal2 + 1);
                                        }

                                    }
                                    else
                                    {
                                        playerSecondHandTotal = (playerSecondHandTotal + playerSecondHandValue[i]);
                                        playerSecondHandTotal2 = (playerSecondHandTotal2 + playerSecondHandValue[i]);
                                    }
                                }
                            }
                            else
                            {
                                // Prints nothing
                            }

                            for(i=0; i<20; i++)
                            {
                                if(playerHand[i] == 1)
                                {
                                    playerHandAces = 1;
                                    playerHandTotal = (playerHandTotal + 1);
                                    if (playerHandTotal2 <= 10)
                                    {
                                        playerHandTotal2 = (playerHandTotal2 + 11);                    
                                    }
                                    else
                                    {
                                        playerHandTotal2 = (playerHandTotal2 + 1);
                                    }

                                }
                                else
                                {
                                    playerHandTotal = (playerHandTotal + playerHandValue[i]);
                                    playerHandTotal2 = (playerHandTotal2 + playerHandValue[i]);
                                }
                            }

                            if ((playerHandTotal2<22 && playerHandAces == 1) && (playerHandTotal != playerHandTotal2))
                            {
                                printf("\n\nYOUR HAND TOTAL: %d/%d\n", playerHandTotal, playerHandTotal2);
                            }
                            else
                            {
                                printf("\n\nYOUR HAND TOTAL: %d", playerHandTotal);
                            }

                            if (splitHandCheck == 1)
                            {
                                if((playerSecondHandTotal2<22 && playerHand2Aces == 1) && (playerSecondHandTotal != playerSecondHandTotal2))
                                {
                                    printf("\nSPLIT HAND TOTAL: %d/%d\n", playerSecondHandTotal, playerSecondHandTotal2);
                                }
                                else
                                {
                                    printf("\nSPLIT HAND TOTAL: %d", playerSecondHandTotal);
                                }  
                            }
                            else
                            {
                                // Prints nothing
                            }

                            Sleep(1000);
                            printf("\n\nYOU DOUBLE DOWN ON YOUR MAIN HAND.\n");
                            Sleep(1000);
                            printf("\nPROCEEDING TO SHOWDOWN!\n");

                            goto Showdown;
                        }
                        else // PLAYER GETS BLACKJACK WITH ONLY ONE HAND -- GOES TO SHOWDOWN
                        {
                            Sleep(2000);

                            printf("\n\n");
                        
                            // Displays user money
                            printf("CASH: $");
                            printfspace2(playerData.money);
                            printf("\t\t\t");

                            // Displays current table's minimum and maximum bets (settings)
                            printf("MINIMUM: $");
                            printfspace2(activeTableMin);
                            printf("\t\t");
                            printf("MAXIMUM: $");
                            printfspace2(activeTableMax);
                            printf("\t\t");
                            printf("MAX PAIR BET: $");
                            printfspace2(activeTablePairMax);
                            printf("\t\t\tFINISH THE ROUND TO RETURN TO MAIN MENU!");
                            printf("\nCURRENT MAIN WAGER: $");
                            printfspace2(playerData.mainBet);
                            if (splitHandCheck == 1)
                            {
                                printf("\nCURRENT SPLIT BET: $");
                                printfspace2(playerData.splitBet);
                            }
                            else
                            {
                                // Prints nothing
                            }
                            printf("\t\t");
                            printf("\n\n\n\n");

                            printf("\t\t\t\t\t\t\tDEALER'S HAND:\t");
                            cardPrintf(dealerHand[0]);
                            printf("[?]  ");
                            printf("\n\n\n");

                            printf("\t\t\t\t\t\t\tPLAYER'S HAND:\t");
                            cardPrintf(playerHand[0]);
                            for(i=1; i<20; i++)
                            {
                                cardPrintf(playerHand[i]);
                            }
                            printf("\t\t(DOUBLED! + BLACKJACK!)");
                            
                            playerHandTotal = 0;
                            playerHandTotal2 = 0;
                            playerSecondHandTotal = 0;
                            playerSecondHandTotal2 = 0;

                            if(splitHandCheck == 1)
                            {
                                printf("\n\t\t\t\t\t\t\tPLAYER'S SECOND HAND:\t");
                                cardPrintf(playerSecondHand[0]);
                                for (i=1; i<20; i++)
                                {
                                    cardPrintf(playerSecondHand[i]);
                                }

                                for(i=0; i<20; i++)
                                {
                                    if(playerSecondHand[i] == 1)
                                    {
                                        playerHand2Aces = 1;
                                        playerSecondHandTotal = (playerSecondHandTotal + 1);
                                        if (playerSecondHandTotal2 <= 10)
                                        {
                                            playerSecondHandTotal2 = (playerSecondHandTotal2 + 11);                    
                                        }
                                        else
                                        {
                                            playerSecondHandTotal2 = (playerSecondHandTotal2 + 1);
                                        }

                                    }
                                    else
                                    {
                                        playerSecondHandTotal = (playerSecondHandTotal + playerSecondHandValue[i]);
                                        playerSecondHandTotal2 = (playerSecondHandTotal2 + playerSecondHandValue[i]);
                                    }
                                }
                            }
                            else
                            {
                                // Prints nothing
                            }

                            for(i=0; i<20; i++)
                            {
                                if(playerHand[i] == 1)
                                {
                                    playerHandAces = 1;
                                    playerHandTotal = (playerHandTotal + 1);
                                    if (playerHandTotal2 <= 10)
                                    {
                                        playerHandTotal2 = (playerHandTotal2 + 11);                    
                                    }
                                    else
                                    {
                                        playerHandTotal2 = (playerHandTotal2 + 1);
                                    }

                                }
                                else
                                {
                                    playerHandTotal = (playerHandTotal + playerHandValue[i]);
                                    playerHandTotal2 = (playerHandTotal2 + playerHandValue[i]);
                                }
                            }

                            if ((playerHandTotal2<22 && playerHandAces == 1) && (playerHandTotal != playerHandTotal2))
                            {
                                printf("\n\nYOUR HAND TOTAL: %d/%d\n", playerHandTotal, playerHandTotal2);
                            }
                            else
                            {
                                printf("\n\nYOUR HAND TOTAL: %d", playerHandTotal);
                            }

                            if (splitHandCheck == 1)
                            {
                                if((playerSecondHandTotal2<22 && playerHand2Aces == 1) && (playerSecondHandTotal != playerSecondHandTotal2))
                                {
                                    printf("\nSPLIT HAND TOTAL: %d/%d\n", playerSecondHandTotal, playerSecondHandTotal2);
                                }
                                else
                                {
                                    printf("\nSPLIT HAND TOTAL: %d", playerSecondHandTotal);
                                }  
                            }
                            else
                            {
                                // Prints nothing
                            }

                            Sleep(1000);
                            printf("\n\nYOU DOUBLED DOWN ON YOUR MAIN HAND.\n");
                            Sleep(1000);
                            printf("\nBRILLIANT! BLACKJACK!");
                            Sleep(2000);
                            printf("\nPROCEEDING TO SHOWDOWN!\n");

                            goto Showdown;
                        }
                        
                    }
                    else // returns to gameOptions
                    {
                        if (playerHandTotal > 21) // PLAYER BUSTS HAND ONE BUT HAS SECOND HAND -- GAME OPTIONS
                        {

                        }
                        else if (playerHandTotal < 21) // PLAYER DOES NOT BUST/BLACKJACK HAND ONE, HAS SECOND HAND -- GAME OPTIONS
                        {

                        }
                        else // PLAYER GETS BLACKJACK WITH HAND ONE, HAS A SEOND HAND  -- GAME OPTIONS
                        {

                        }
                    }
                }
                
            }
            else if (handTwoStandCheck == 0 && handTwoCanDouble == 1 && splitHandCheck == 1 && handOneStandCheck == 1) // Is Second Hand, Goes to Showdown or Game Over
            {
                handTwoCanDouble = 0;
                if ((playerData.money < playerData.splitBet) && playerData.mainBetEarnings < playerData.splitBet)
                {
                    // Player does not have enough funds
                    printf("\nERROR! YOU DO NOT HAVE ENOUGH MONEY TO DOUBLE DOWN YOUR BET!\n");

                    // UI to return to GameOptions
                    Sleep(2000);

                    printf("\n\n");
                
                    // Displays user money
                    printf("CASH: $");
                    printfspace2(playerData.money);
                    printf("\t\t\t");

                    // Displays current table's minimum and maximum bets (settings)
                    printf("MINIMUM: $");
                    printfspace2(activeTableMin);
                    printf("\t\t");
                    printf("MAXIMUM: $");
                    printfspace2(activeTableMax);
                    printf("\t\t");
                    printf("MAX PAIR BET: $");
                    printfspace2(activeTablePairMax);
                    printf("\t\t\tFINISH THE ROUND TO RETURN TO MAIN MENU!");
                    printf("\nCURRENT MAIN WAGER: $");
                    printfspace2(playerData.mainBet);
                    if (handOneStandCheck == 1)
                    {
                        printf(" (STAND)");
                    }
                    else if (playerHandTotal > 21)
                    {
                        printf(" (LOST)");
                    }
                    else
                    {
                        printf(" (BLACKJACK!)");
                    }
                    if (splitHandCheck == 1)
                    {
                        printf("\nCURRENT SPLIT BET: $");
                        printfspace2(playerData.splitBet);
                    }
                    else
                    {
                        // Prints nothing
                    }
                    printf("\t\t");
                    printf("\n\n\n\n");

                    printf("\t\t\t\t\t\t\tDEALER'S HAND:\t");
                    cardPrintf(dealerHand[0]);
                    printf("[?]  ");
                    printf("\n\n\n");

                    printf("\t\t\t\t\t\t\tPLAYER'S HAND:\t");
                    cardPrintf(playerHand[0]);
                    for(i=1; i<20; i++)
                    {
                        cardPrintf(playerHand[i]);
                    }

                    playerHandTotal = 0;
                    playerHandTotal2 = 0;
                    playerSecondHandTotal = 0;
                    playerSecondHandTotal2 = 0;

                    if(splitHandCheck == 1)
                    {
                        printf("\n\t\t\t\t\t\t\tPLAYER'S SECOND HAND:\t");
                        cardPrintf(playerSecondHand[0]);
                        for (i=1; i<20; i++)
                        {
                            cardPrintf(playerSecondHand[i]);
                        }

                        for(i=0; i<20; i++)
                        {
                            if(playerSecondHand[i] == 1)
                            {
                                playerHand2Aces = 1;
                                playerSecondHandTotal = (playerSecondHandTotal + 1);
                                if (playerSecondHandTotal2 <= 10)
                                {
                                    playerSecondHandTotal2 = (playerSecondHandTotal2 + 11);                    
                                }
                                else
                                {
                                    playerSecondHandTotal2 = (playerSecondHandTotal2 + 1);
                                }

                            }
                            else
                            {
                                playerSecondHandTotal = (playerSecondHandTotal + playerSecondHandValue[i]);
                                playerSecondHandTotal2 = (playerSecondHandTotal2 + playerSecondHandValue[i]);
                            }
                        }
                    }
                    else
                    {
                        // Prints nothing
                    }

                    for(i=0; i<20; i++)
                    {
                        if(playerHand[i] == 1)
                        {
                            playerHandAces = 1;
                            playerHandTotal = (playerHandTotal + 1);
                            if (playerHandTotal2 <= 10)
                            {
                                playerHandTotal2 = (playerHandTotal2 + 11);                    
                            }
                            else
                            {
                                playerHandTotal2 = (playerHandTotal2 + 1);
                            }

                        }
                        else
                        {
                            playerHandTotal = (playerHandTotal + playerHandValue[i]);
                            playerHandTotal2 = (playerHandTotal2 + playerHandValue[i]);
                        }
                    }

                    if ((playerHandTotal2<22 && playerHandAces == 1) && (playerHandTotal != playerHandTotal2))
                    {
                        printf("\n\nYOUR HAND TOTAL: %d/%d\n", playerHandTotal, playerHandTotal2);
                    }
                    else
                    {
                        printf("\n\nYOUR HAND TOTAL: %d", playerHandTotal);
                    }

                    if (splitHandCheck == 1)
                    {
                        if((playerSecondHandTotal2<22 && playerHand2Aces == 1) && (playerSecondHandTotal != playerSecondHandTotal2))
                        {
                            printf("\nSPLIT HAND TOTAL: %d/%d\n", playerSecondHandTotal, playerSecondHandTotal2);
                        }
                        else
                        {
                            printf("\nSPLIT HAND TOTAL: %d", playerSecondHandTotal);
                        }  
                    }
                    else
                    {
                        // Prints nothing
                    }

                    printf("\n\nHAND OPTIONS:\t\t");
                    printf("1) SURRENDER");
                    printf("\t\t");
                    printf("2) SPLIT");
                    printf("\t\t");
                    printf("3) DOUBLE");
                    printf("\t\t|\t");
                    printf("4) HIT");
                    printf("\t\t");
                    printf("5) STAND");

                    goto GameOptions;
                }
                else // Has enough funds
                {
                    handTwoStandCheck = 1;
                    
                    betSource = 0;
                    if (playerData.mainBetEarnings >= playerData.splitBet)
                    {
                        playerData.mainBetEarnings = (playerData.mainBetEarnings - playerData.splitBet);
                        playerData.splitBet = (playerData.splitBet * 2);

                        betSource = 1;
                    }
                    else
                    {
                        playerData.money = (playerData.money - playerData.splitBet);
                        playerData.splitBet = (playerData.splitBet * 2);

                        betSource = 2;
                    }

                    printf("\n\nYOU DOUBLE DOWN ON YOUR SPLIT (SECOND) HAND AND HIT IT!\n");

                    handHitCheck = 0;
                    for (i=1; i<20; i++)
                    {
                        if (playerSecondHand[i] == 0 && handHitCheck == 0)
                        {
                            playerSecondHand[i] = (printRandoms(lower, upper, count));
                            playerSecondHandValue[i] = cardValuation(playerSecondHand[i]);

                            playerSecondHandTotal = 0;
                            playerSecondHandTotal2 = 0;

                            for(i=0; i<20; i++)
                            {
                                if(playerSecondHand[i] == 1)
                                {
                                    playerHand2Aces = 1;
                                    playerSecondHandTotal = (playerSecondHandTotal + 1);
                                    if (playerSecondHandTotal2 <= 10)
                                    {
                                        playerSecondHandTotal2 = (playerSecondHandTotal2 + 11);                    
                                    }
                                    else
                                    {
                                        playerSecondHandTotal2 = (playerSecondHandTotal2 + 1);
                                    }

                                }
                                else
                                {
                                    playerSecondHandTotal = (playerSecondHandTotal + playerSecondHandValue[i]);
                                    playerSecondHandTotal2 = (playerSecondHandTotal2 + playerSecondHandValue[i]);
                                }
                            }

                            handHitCheck = 1;
                        }
                    }

                    if (playerSecondHandTotal > 21) // SECOND HAND BUSTS
                    {
                        if (playerHandTotal > 21) // AND FIRST HAND BUSTED -- GAME OVER
                        {
                            Sleep(2000);

                            printf("\n\n");
                
                            // Displays user money
                            printf("CASH: $");
                            printfspace2(playerData.money);
                            printf("\t\t\t");

                            // Displays current table's minimum and maximum bets (settings)
                            printf("MINIMUM: $");
                            printfspace2(activeTableMin);
                            printf("\t\t");
                            printf("MAXIMUM: $");
                            printfspace2(activeTableMax);
                            printf("\t\t");
                            printf("MAX PAIR BET: $");
                            printfspace2(activeTablePairMax);
                            printf("\t\t\tFINISH THE ROUND TO RETURN TO MAIN MENU!");
                            printf("\nCURRENT MAIN WAGER: $");
                            printfspace2(playerData.mainBet);
                            if ((playerHandTotal == 21 || playerHandTotal2 == 21))
                            {
                                printf(" (BLACKJACK!)");
                            }
                            else if (playerHandTotal > 21)
                            {
                                printf(" (LOST)");
                            }    
                            else
                            {
                                printf(" (STAND)");
                            }
                            if (splitHandCheck == 1)
                            {
                                printf("\nCURRENT SPLIT BET: $");
                                printfspace2(playerData.splitBet);
                            }
                            else
                            {
                                // Prints nothing
                            }
                            printf(" (LOST)");
                            printf("\t\t");
                            printf("\n\n\n\n");

                            printf("\t\t\t\t\t\t\tDEALER'S HAND:\t");
                            cardPrintf(dealerHand[0]);
                            printf("[?]  ");
                            printf("\n\n\n");

                            printf("\t\t\t\t\t\t\tPLAYER'S HAND:\t");
                            cardPrintf(playerHand[0]);
                            for(i=1; i<20; i++)
                            {
                                cardPrintf(playerHand[i]);
                            }
                            if ((playerHandTotal == 21 || playerHandTotal2 == 21))
                            {
                                printf("\t\t(BLACKJACK!)");
                            }
                            else if (playerHandTotal > 21)
                            {
                                printf("\t\t(BUSTED!)");
                            }
                            else
                            {
                                printf("\t\t(STAND)");
                            }

                            playerSecondHandTotal = 0;
                            playerSecondHandTotal2 = 0;

                            if(splitHandCheck == 1)
                            {
                                printf("\n\t\t\t\t\t\t\tPLAYER'S SECOND HAND:\t");
                                cardPrintf(playerSecondHand[0]);
                                for (i=1; i<20; i++)
                                {
                                    cardPrintf(playerSecondHand[i]);
                                }
                                printf("\t\t(BUSTED!)");

                                for(i=0; i<20; i++)
                                {
                                    if(playerSecondHand[i] == 1)
                                    {
                                        playerHand2Aces = 1;
                                        playerSecondHandTotal = (playerSecondHandTotal + 1);
                                        if (playerSecondHandTotal2 <= 10)
                                        {
                                            playerSecondHandTotal2 = (playerSecondHandTotal2 + 11);                    
                                        }
                                        else
                                        {
                                            playerSecondHandTotal2 = (playerSecondHandTotal2 + 1);
                                        }

                                    }
                                    else
                                    {
                                        playerSecondHandTotal = (playerSecondHandTotal + playerSecondHandValue[i]);
                                        playerSecondHandTotal2 = (playerSecondHandTotal2 + playerSecondHandValue[i]);
                                    }
                                }
                            }
                            else
                            {
                                // Prints nothing
                            }

                            if ((playerHandTotal2<22 && playerHandAces == 1) && (playerHandTotal != playerHandTotal2))
                            {
                                printf("\n\nYOUR HAND TOTAL: %d/%d\n", playerHandTotal, playerHandTotal2);
                            }
                            else
                            {
                                printf("\n\nYOUR HAND TOTAL: %d", playerHandTotal);
                            }
                            
                            if (splitHandCheck == 1)
                            {
                                if((playerSecondHandTotal2<22 && playerHand2Aces == 1) && (playerSecondHandTotal != playerSecondHandTotal2))
                                {
                                    printf("\nSPLIT HAND TOTAL: %d/%d\n", playerSecondHandTotal, playerSecondHandTotal2);
                                }
                                else
                                {
                                    printf("\nSPLIT HAND TOTAL: %d", playerSecondHandTotal);
                                }  
                            }
                            else
                            {
                                // Prints nothing
                            }

                            Sleep(1000);
                            printf("\n\nYOU DOUBLED DOWN ON YOUR SPLIT (SECOND) HAND AND DREW TOO MANY! YOU LOST YOUR BET OF $");
                            printfspace2(playerData.splitBet);

                            Sleep(2000);
                            printf("\nBOTH PLAYER HANDS HAVE BUSTED!\n");
                            Sleep(1000);

                            playerData.splitBet = 0;

                            printf("\n\nSTARTING A NEW ROUND!\n\n\n");
                            Sleep(1000);

                            playerData.mainBet = 0;

                            goto GameStart;
                        }
                        else // SHOWDOWN
                        {
                            Sleep(2000);

                            printf("\n\n");
                
                            // Displays user money
                            printf("CASH: $");
                            printfspace2(playerData.money);
                            printf("\t\t\t");

                            // Displays current table's minimum and maximum bets (settings)
                            printf("MINIMUM: $");
                            printfspace2(activeTableMin);
                            printf("\t\t");
                            printf("MAXIMUM: $");
                            printfspace2(activeTableMax);
                            printf("\t\t");
                            printf("MAX PAIR BET: $");
                            printfspace2(activeTablePairMax);
                            printf("\t\t\tFINISH THE ROUND TO RETURN TO MAIN MENU!");
                            printf("\nCURRENT MAIN WAGER: $");
                            printfspace2(playerData.mainBet);
                            if ((playerHandTotal == 21 || playerHandTotal2 == 21))
                            {
                                printf(" (BLACKJACK!)");
                            }
                            else if (playerHandTotal > 21)
                            {
                                printf(" (LOST)");
                            }    
                            else
                            {
                                printf(" (STAND)");
                            }
                            if (splitHandCheck == 1)
                            {
                                printf("\nCURRENT SPLIT BET: $");
                                printfspace2(playerData.splitBet);
                            }
                            else
                            {
                                // Prints nothing
                            }
                            printf(" (LOST)");
                            printf("\t\t");
                            printf("\n\n\n\n");

                            printf("\t\t\t\t\t\t\tDEALER'S HAND:\t");
                            cardPrintf(dealerHand[0]);
                            printf("[?]  ");
                            printf("\n\n\n");

                            printf("\t\t\t\t\t\t\tPLAYER'S HAND:\t");
                            cardPrintf(playerHand[0]);
                            for(i=1; i<20; i++)
                            {
                                cardPrintf(playerHand[i]);
                            }
                            if ((playerHandTotal == 21 || playerHandTotal2 == 21))
                            {
                                printf("\t\t(BLACKJACK!)");
                            }
                            else if (playerHandTotal > 21)
                            {
                                printf("\t\t(BUSTED!)");
                            }
                            else
                            {
                                printf("\t\t(STAND)");
                            }

                            playerSecondHandTotal = 0;
                            playerSecondHandTotal2 = 0;

                            if(splitHandCheck == 1)
                            {
                                printf("\n\t\t\t\t\t\t\tPLAYER'S SECOND HAND:\t");
                                cardPrintf(playerSecondHand[0]);
                                for (i=1; i<20; i++)
                                {
                                    cardPrintf(playerSecondHand[i]);
                                }
                                printf("\t\t(BUSTED!)");

                                for(i=0; i<20; i++)
                                {
                                    if(playerSecondHand[i] == 1)
                                    {
                                        playerHand2Aces = 1;
                                        playerSecondHandTotal = (playerSecondHandTotal + 1);
                                        if (playerSecondHandTotal2 <= 10)
                                        {
                                            playerSecondHandTotal2 = (playerSecondHandTotal2 + 11);                    
                                        }
                                        else
                                        {
                                            playerSecondHandTotal2 = (playerSecondHandTotal2 + 1);
                                        }

                                    }
                                    else
                                    {
                                        playerSecondHandTotal = (playerSecondHandTotal + playerSecondHandValue[i]);
                                        playerSecondHandTotal2 = (playerSecondHandTotal2 + playerSecondHandValue[i]);
                                    }
                                }
                            }
                            else
                            {
                                // Prints nothing
                            }

                            if ((playerHandTotal2<22 && playerHandAces == 1) && (playerHandTotal != playerHandTotal2))
                            {
                                printf("\n\nYOUR HAND TOTAL: %d/%d\n", playerHandTotal, playerHandTotal2);
                            }
                            else
                            {
                                printf("\n\nYOUR HAND TOTAL: %d", playerHandTotal);
                            }
                            
                            if (splitHandCheck == 1)
                            {
                                if((playerSecondHandTotal2<22 && playerHand2Aces == 1) && (playerHandTotal != playerHandTotal2))
                                {
                                    printf("\nSPLIT HAND TOTAL: %d/%d\n", playerSecondHandTotal, playerSecondHandTotal2);
                                }
                                else
                                {
                                    printf("\nSPLIT HAND TOTAL: %d", playerSecondHandTotal);
                                }  
                            }
                            else
                            {
                                // Prints nothing
                            }

                            Sleep(1000);
                            printf("\n\nYOU DOUBLED DOWN ON YOUR SPLIT (SECOND) HAND AND DREW TOO MANY! YOU LOST YOUR BET OF $");
                            printfspace2(playerData.splitBet);

                            Sleep(2000);
                            printf("\nPROCEEDING TO SHOWDOWN!\n");
                            Sleep(1000);

                            playerData.splitBet = 0;

                            goto Showdown;
                        }
                    }
                    else if (playerSecondHandTotal < 21) // SECOND HAND DOES NOT BUST -- SHOWDOWN
                    {
                        Sleep(2000);

                        printf("\n\n");
            
                        // Displays user money
                        printf("CASH: $");
                        printfspace2(playerData.money);
                        printf("\t\t\t");

                        // Displays current table's minimum and maximum bets (settings)
                        printf("MINIMUM: $");
                        printfspace2(activeTableMin);
                        printf("\t\t");
                        printf("MAXIMUM: $");
                        printfspace2(activeTableMax);
                        printf("\t\t");
                        printf("MAX PAIR BET: $");
                        printfspace2(activeTablePairMax);
                        printf("\t\t\tFINISH THE ROUND TO RETURN TO MAIN MENU!");
                        printf("\nCURRENT MAIN WAGER: $");
                        printfspace2(playerData.mainBet);
                        if ((playerHandTotal == 21 || playerHandTotal2 == 21))
                        {
                            printf(" (BLACKJACK!)");
                        }
                        else if (playerHandTotal > 21)
                        {
                            printf(" (LOST)");
                        }    
                        else
                        {
                            printf(" (STAND)");
                        }
                        if (splitHandCheck == 1)
                        {
                            printf("\nCURRENT SPLIT BET: $");
                            printfspace2(playerData.splitBet);
                        }
                        else
                        {
                            // Prints nothing
                        }
                        printf(" (DOUBLED!)");
                        printf("\t\t");
                        printf("\n\n\n\n");

                        printf("\t\t\t\t\t\t\tDEALER'S HAND:\t");
                        cardPrintf(dealerHand[0]);
                        printf("[?]  ");
                        printf("\n\n\n");

                        printf("\t\t\t\t\t\t\tPLAYER'S HAND:\t");
                        cardPrintf(playerHand[0]);
                        for(i=1; i<20; i++)
                        {
                            cardPrintf(playerHand[i]);
                        }
                        if ((playerHandTotal == 21 || playerHandTotal2 == 21))
                        {
                            printf("\t\t(BLACKJACK!)");
                        }
                        else if (playerHandTotal > 21)
                        {
                            printf("\t\t(BUSTED!)");
                        }
                        else
                        {
                            printf("\t\t(STAND)");
                        }

                        playerSecondHandTotal = 0;
                        playerSecondHandTotal2 = 0;

                        if(splitHandCheck == 1)
                        {
                            printf("\n\t\t\t\t\t\t\tPLAYER'S SECOND HAND:\t");
                            cardPrintf(playerSecondHand[0]);
                            for (i=1; i<20; i++)
                            {
                                cardPrintf(playerSecondHand[i]);
                            }
                            printf("\t\t(DOUBLED!)");

                            for(i=0; i<20; i++)
                            {
                                if(playerSecondHand[i] == 1)
                                {
                                    playerHand2Aces = 1;
                                    playerSecondHandTotal = (playerSecondHandTotal + 1);
                                    if (playerSecondHandTotal2 <= 10)
                                    {
                                        playerSecondHandTotal2 = (playerSecondHandTotal2 + 11);                    
                                    }
                                    else
                                    {
                                        playerSecondHandTotal2 = (playerSecondHandTotal2 + 1);
                                    }

                                }
                                else
                                {
                                    playerSecondHandTotal = (playerSecondHandTotal + playerSecondHandValue[i]);
                                    playerSecondHandTotal2 = (playerSecondHandTotal2 + playerSecondHandValue[i]);
                                }
                            }
                        }
                        else
                        {
                            // Prints nothing
                        }

                        if ((playerHandTotal2<22 && playerHandAces == 1) && (playerHandTotal != playerHandTotal2))
                        {
                            printf("\n\nYOUR HAND TOTAL: %d/%d\n", playerHandTotal, playerHandTotal2);
                        }
                        else
                        {
                            printf("\n\nYOUR HAND TOTAL: %d", playerHandTotal);
                        }
                        
                        if (splitHandCheck == 1)
                        {
                            if((playerSecondHandTotal2<22 && playerHand2Aces == 1) && (playerSecondHandTotal != playerSecondHandTotal2))
                            {
                                printf("\nSPLIT HAND TOTAL: %d/%d\n", playerSecondHandTotal, playerSecondHandTotal2);
                            }
                            else
                            {
                                printf("\nSPLIT HAND TOTAL: %d", playerSecondHandTotal);
                            }  
                        }
                        else
                        {
                            // Prints nothing
                        }

                        Sleep(1000);
                        printf("\n\nYOU DOUBLED DOWN ON YOUR SPLIT (SECOND) HAND.\n");
                        Sleep(2000);
                        printf("\nPROCEEDING TO SHOWDOWN!\n");

                        goto Showdown;
                    }
                    else // SECOND HAND BLACKJACK -- SHOWDOWN
                    {
                        Sleep(2000);

                        printf("\n\n");
            
                        // Displays user money
                        printf("CASH: $");
                        printfspace2(playerData.money);
                        printf("\t\t\t");

                        // Displays current table's minimum and maximum bets (settings)
                        printf("MINIMUM: $");
                        printfspace2(activeTableMin);
                        printf("\t\t");
                        printf("MAXIMUM: $");
                        printfspace2(activeTableMax);
                        printf("\t\t");
                        printf("MAX PAIR BET: $");
                        printfspace2(activeTablePairMax);
                        printf("\t\t\tFINISH THE ROUND TO RETURN TO MAIN MENU!");
                        printf("\nCURRENT MAIN WAGER: $");
                        printfspace2(playerData.mainBet);
                        if ((playerHandTotal == 21 || playerHandTotal2 == 21))
                        {
                            printf(" (BLACKJACK!)");
                        }
                        else if (playerHandTotal > 21)
                        {
                            printf(" (LOST)");
                        }    
                        else
                        {
                            printf(" (STAND)");
                        }
                        if (splitHandCheck == 1)
                        {
                            printf("\nCURRENT SPLIT BET: $");
                            printfspace2(playerData.splitBet);
                        }
                        else
                        {
                            // Prints nothing
                        }
                        printf(" (BLACKJACK!)");
                        printf("\t\t");
                        printf("\n\n\n\n");

                        printf("\t\t\t\t\t\t\tDEALER'S HAND:\t");
                        cardPrintf(dealerHand[0]);
                        printf("[?]  ");
                        printf("\n\n\n");

                        printf("\t\t\t\t\t\t\tPLAYER'S HAND:\t");
                        cardPrintf(playerHand[0]);
                        for(i=1; i<20; i++)
                        {
                            cardPrintf(playerHand[i]);
                        }
                        if ((playerHandTotal == 21 || playerHandTotal2 == 21))
                        {
                            printf("\t\t(BLACKJACK!)");
                        }
                        else if (playerHandTotal > 21)
                        {
                            printf("\t\t(BUSTED!)");
                        }
                        else
                        {
                            printf("\t\t(STAND)");
                        }

                        playerSecondHandTotal = 0;
                        playerSecondHandTotal2 = 0;

                        if(splitHandCheck == 1)
                        {
                            printf("\n\t\t\t\t\t\t\tPLAYER'S SECOND HAND:\t");
                            cardPrintf(playerSecondHand[0]);
                            for (i=1; i<20; i++)
                            {
                                cardPrintf(playerSecondHand[i]);
                            }
                            printf("\t\t(DOUBLED!) + (BLACKJACK!)");

                            for(i=0; i<20; i++)
                            {
                                if(playerSecondHand[i] == 1)
                                {
                                    playerHand2Aces = 1;
                                    playerSecondHandTotal = (playerSecondHandTotal + 1);
                                    if (playerSecondHandTotal2 <= 10)
                                    {
                                        playerSecondHandTotal2 = (playerSecondHandTotal2 + 11);                    
                                    }
                                    else
                                    {
                                        playerSecondHandTotal2 = (playerSecondHandTotal2 + 1);
                                    }

                                }
                                else
                                {
                                    playerSecondHandTotal = (playerSecondHandTotal + playerSecondHandValue[i]);
                                    playerSecondHandTotal2 = (playerSecondHandTotal2 + playerSecondHandValue[i]);
                                }
                            }
                        }
                        else
                        {
                            // Prints nothing
                        }

                        if ((playerHandTotal2<22 && playerHandAces == 1) && (playerHandTotal != playerHandTotal2))
                        {
                            printf("\n\nYOUR HAND TOTAL: %d/%d\n", playerHandTotal, playerHandTotal2);
                        }
                        else
                        {
                            printf("\n\nYOUR HAND TOTAL: %d", playerHandTotal);
                        }
                        
                        if (splitHandCheck == 1)
                        {
                            if((playerSecondHandTotal2<22 && playerHand2Aces == 1) && (playerSecondHandTotal != playerSecondHandTotal2))
                            {
                                printf("\nSPLIT HAND TOTAL: %d/%d\n", playerSecondHandTotal, playerSecondHandTotal2);
                            }
                            else
                            {
                                printf("\nSPLIT HAND TOTAL: %d", playerSecondHandTotal);
                            }  
                        }
                        else
                        {
                            // Prints nothing
                        }

                        Sleep(1000);
                        printf("\n\nYOU DOUBLED DOWN ON YOUR SPLIT (SECOND) HAND.\n");
                        Sleep(1000);
                        printf("\nBRILLIANT! BLACKJACK!");
                        Sleep(2000);
                        printf("\nPROCEEDING TO SHOWDOWN!\n");

                        goto Showdown;
                    }
                    
                }
            }
            else // CANNOT DOUBLE
            {
                Sleep(2000);
                printf("\n\nERROR! YOU CANNOT DOUBLE THIS HAND! YOU CAN ONLY DOUBLE DOWN ON YOUR FIRST HIT FOR THAT HAND!\n\n");
                Sleep(2000);
                // UI to return to GameOptions

                printf("\n\n");
            
                // Displays user money
                printf("CASH: $");
                printfspace2(playerData.money);
                printf("\t\t\t");

                // Displays current table's minimum and maximum bets (settings)
                printf("MINIMUM: $");
                printfspace2(activeTableMin);
                printf("\t\t");
                printf("MAXIMUM: $");
                printfspace2(activeTableMax);
                printf("\t\t");
                printf("MAX PAIR BET: $");
                printfspace2(activeTablePairMax);
                printf("\t\t\tFINISH THE ROUND TO RETURN TO MAIN MENU!");
                printf("\nCURRENT MAIN WAGER: $");
                printfspace2(playerData.mainBet);
                if ((playerHandTotal == 21 || playerHandTotal2 == 21))
                {
                    printf(" (BLACKJACK!)");
                }
                else if (playerHandTotal > 21)
                {
                    printf(" (LOST)");
                }    
                else if (handOneStandCheck == 0)
                {
                    printf(" (CANNOT DOUBLE!)");
                }
                else
                {
                    // Default
                    printf(" (STAND)");
                }
                if (splitHandCheck == 1)
                {
                    printf("\nCURRENT SPLIT BET: $");
                    printfspace2(playerData.splitBet);
                    if ((playerSecondHandTotal == 21 || playerSecondHandTotal2 == 21))
                    {
                        printf(" (BLACKJACK!)");
                    }
                    else if (playerSecondHandTotal > 21)
                    {
                        printf(" (LOST)");
                    }    
                    else if (handTwoStandCheck == 0 && handOneStandCheck == 0)
                    {
                        printf(" (CANNOT DOUBLE YET!)");
                    }
                    else if (handTwoStandCheck == 0 && handTwoCanDouble == 0)
                    {
                        printf(" (CANNOT DOUBLE!)");
                    }
                    else
                    {
                        // Default
                        printf(" (STAND)");
                    }
                }
                else
                {
                    // Prints nothing
                }
                printf("\t\t");
                printf("\n\n\n\n");

                printf("\t\t\t\t\t\t\tDEALER'S HAND:\t");
                cardPrintf(dealerHand[0]);
                printf("[?]  ");
                printf("\n\n\n");

                printf("\t\t\t\t\t\t\tPLAYER'S HAND:\t");
                cardPrintf(playerHand[0]);
                for(i=1; i<20; i++)
                {
                    cardPrintf(playerHand[i]);
                }
                if ((playerHandTotal == 21 || playerHandTotal2 == 21))
                {
                    printf("\t\t(BLACKJACK!)");
                }
                else if (playerHandTotal > 21)
                {
                    printf("\t\t(BUSTED!)");
                }
                else if (handOneStandCheck == 0)
                {
                    printf("\t\t(CANNOT DOUBLE!)");
                }
                else
                {
                    printf("\t\t(STAND)");
                }

                playerHandTotal = 0;
                playerHandTotal2 = 0;
                playerSecondHandTotal = 0;
                playerSecondHandTotal2 = 0;

                if(splitHandCheck == 1)
                {
                    printf("\n\t\t\t\t\t\t\tPLAYER'S SECOND HAND:\t");
                    cardPrintf(playerSecondHand[0]);
                    for (i=1; i<20; i++)
                    {
                        cardPrintf(playerSecondHand[i]);
                    }

                    for(i=0; i<20; i++)
                    {
                        if(playerSecondHand[i] == 1)
                        {
                            playerHand2Aces = 1;
                            playerSecondHandTotal = (playerSecondHandTotal + 1);
                            if (playerSecondHandTotal2 <= 10)
                            {
                                playerSecondHandTotal2 = (playerSecondHandTotal2 + 11);                    
                            }
                            else
                            {
                                playerSecondHandTotal2 = (playerSecondHandTotal2 + 1);
                            }

                        }
                        else
                        {
                            playerSecondHandTotal = (playerSecondHandTotal + playerSecondHandValue[i]);
                            playerSecondHandTotal2 = (playerSecondHandTotal2 + playerSecondHandValue[i]);
                        }
                    }
                }
                else
                {
                    // Prints nothing
                }

                for(i=0; i<20; i++)
                {
                    if(playerHand[i] == 1)
                    {
                        playerHandAces = 1;
                        playerHandTotal = (playerHandTotal + 1);
                        if (playerHandTotal2 <= 10)
                        {
                            playerHandTotal2 = (playerHandTotal2 + 11);                    
                        }
                        else
                        {
                            playerHandTotal2 = (playerHandTotal2 + 1);
                        }

                    }
                    else
                    {
                        playerHandTotal = (playerHandTotal + playerHandValue[i]);
                        playerHandTotal2 = (playerHandTotal2 + playerHandValue[i]);
                    }
                }

                if ((playerHandTotal2<22 && playerHandAces == 1) && (playerHandTotal != playerHandTotal2))
                {
                    printf("\n\nYOUR HAND TOTAL: %d/%d\n", playerHandTotal, playerHandTotal2);
                }
                else
                {
                    printf("\n\nYOUR HAND TOTAL: %d", playerHandTotal);
                }

                if (splitHandCheck == 1)
                {
                    if((playerSecondHandTotal2<22 && playerHand2Aces == 1) && (playerSecondHandTotal != playerSecondHandTotal2))
                    {
                        printf("\nSPLIT HAND TOTAL: %d/%d\n", playerSecondHandTotal, playerSecondHandTotal2);
                    }
                    else
                    {
                        printf("\nSPLIT HAND TOTAL: %d", playerSecondHandTotal);
                    }  
                }
                else
                {
                    // Prints nothing
                }

                printf("\n\nHAND OPTIONS:\t\t");
                printf("1) SURRENDER");
                printf("\t\t");
                printf("2) SPLIT");
                printf("\t\t");
                printf("3) DOUBLE");
                printf("\t\t|\t");
                printf("4) HIT");
                printf("\t\t");
                printf("5) STAND");

                goto GameOptions;
            }
        }
        else if (MenuNavigation == 4) // PLAYER HITS THEIR HAND
        {
            if (handOneStandCheck == 0)
            {
                handHitCheck = 0;
                printf("\n\nYOU HIT YOUR MAIN HAND.\n");
                handOneCanDouble = 0;

                for (i=1; i<20; i++)
                {
                    if (playerHand[i] == 0 && handHitCheck == 0)
                    {
                        playerHand[i] = (printRandoms(lower, upper, count));
                        playerHandValue[i] = cardValuation(playerHand[i]);

                        playerHandTotal = 0;
                        playerHandTotal2 = 0;

                        for(i=0; i<20; i++)
                        {
                            if(playerHand[i] == 1)
                            {
                                playerHandAces = 1;
                                playerHandTotal = (playerHandTotal + 1);
                                if (playerHandTotal2 <= 10)
                                {
                                    playerHandTotal2 = (playerHandTotal2 + 11);                    
                                }
                                else
                                {
                                    playerHandTotal2 = (playerHandTotal2 + 1);
                                }

                            }
                            else
                            {
                                playerHandTotal = (playerHandTotal + playerHandValue[i]);
                                playerHandTotal2 = (playerHandTotal2 + playerHandValue[i]);
                            }
                        }

                        handHitCheck = 1;
                    }
                }

                if (playerHandTotal > 21 && splitHandCheck == 0) // BUSTED WITH NO SECOND HAND
                {
                    handOneStandCheck = 1;
                    Sleep(2000);
                    
                    printf("\n\n");
            
                    // Displays user money
                    printf("CASH: $");
                    printfspace2(playerData.money);
                    printf("\t\t\t");

                    // Displays current table's minimum and maximum bets (settings)
                    printf("MINIMUM: $");
                    printfspace2(activeTableMin);
                    printf("\t\t");
                    printf("MAXIMUM: $");
                    printfspace2(activeTableMax);
                    printf("\t\t");
                    printf("MAX PAIR BET: $");
                    printfspace2(activeTablePairMax);
                    printf("\t\t\tFINISH THE ROUND TO RETURN TO MAIN MENU!");
                    printf("\nCURRENT MAIN WAGER: $");
                    printfspace2(playerData.mainBet);
                    printf(" (LOST)");
                    printf("\t\t");
                    printf("\n\n\n\n");

                    printf("\t\t\t\t\t\t\tDEALER'S HAND:\t");
                    cardPrintf(dealerHand[0]);
                    printf("[?]  ");
                    printf("\n\n\n");

                    printf("\t\t\t\t\t\t\tPLAYER'S HAND:\t");
                    cardPrintf(playerHand[0]);
                    for(i=1; i<20; i++)
                    {
                        cardPrintf(playerHand[i]);
                    }
                    printf("\t\t(BUSTED!)");

                    if ((playerHandTotal2<22 && playerHandAces == 1) && (playerHandTotal != playerHandTotal2))
                    {
                        printf("\n\nYOUR HAND TOTAL: %d/%d\n", playerHandTotal, playerHandTotal2);
                    }
                    else
                    {
                        printf("\n\nYOUR HAND TOTAL: %d", playerHandTotal);
                    }

                    Sleep(2000);
                    printf("\n\nYOU DREW TOO MANY! YOU LOST YOUR BET OF $");
                    printfspace2(playerData.mainBet);

                    Sleep(2000);
                    printf("\n\nSTARTING A NEW ROUND!\n\n\n");
                    Sleep(1000);

                    playerData.mainBet = 0;

                    goto GameStart;

                }
                else if (playerHandTotal < 21 && splitHandCheck == 0) // PLAYER HIT THEIR HAND, DOES NOT BUST, AND DOES NOT HAVE A SECOND HAND
                {
                    handOneStandCheck = 0;
                    Sleep(2000);

                    printf("\n\n");
            
                    // Displays user money
                    printf("CASH: $");
                    printfspace2(playerData.money);
                    printf("\t\t\t");

                    // Displays current table's minimum and maximum bets (settings)
                    printf("MINIMUM: $");
                    printfspace2(activeTableMin);
                    printf("\t\t");
                    printf("MAXIMUM: $");
                    printfspace2(activeTableMax);
                    printf("\t\t");
                    printf("MAX PAIR BET: $");
                    printfspace2(activeTablePairMax);
                    printf("\t\t\tFINISH THE ROUND TO RETURN TO MAIN MENU!");
                    printf("\nCURRENT MAIN WAGER: $");
                    printfspace2(playerData.mainBet);
                    printf("\t\t");
                    printf("\n\n\n\n");

                    printf("\t\t\t\t\t\t\tDEALER'S HAND:\t");
                    cardPrintf(dealerHand[0]);
                    printf("[?]  ");
                    printf("\n\n\n");

                    printf("\t\t\t\t\t\t\tPLAYER'S HAND:\t");
                    cardPrintf(playerHand[0]);
                    for(i=1; i<20; i++)
                    {
                        cardPrintf(playerHand[i]);
                    }

                    if ((playerHandTotal2<22 && playerHandAces == 1) && (playerHandTotal != playerHandTotal2))
                    {
                        printf("\n\nYOUR HAND TOTAL: %d/%d\n", playerHandTotal, playerHandTotal2);
                    }
                    else
                    {
                        printf("\n\nYOUR HAND TOTAL: %d", playerHandTotal);
                    }

                    printf("\n\nHAND OPTIONS:\t\t");
                    printf("1) SURRENDER");
                    printf("\t\t");
                    printf("2) SPLIT");
                    printf("\t\t");
                    printf("3) DOUBLE");
                    printf("\t\t|\t");
                    printf("4) HIT");
                    printf("\t\t");
                    printf("5) STAND");
                    

                    goto GameOptions;
                }
                else if ((playerHandTotal == 21 || playerHandTotal2 == 21) && splitHandCheck == 0) // PLAYER HAS A BLACKJACK BUT NO SECOND HAND
                {
                    handOneStandCheck = 1;
                    Sleep(2000);

                    printf("\n\n");
            
                    // Displays user money
                    printf("CASH: $");
                    printfspace2(playerData.money);
                    printf("\t\t\t");

                    // Displays current table's minimum and maximum bets (settings)
                    printf("MINIMUM: $");
                    printfspace2(activeTableMin);
                    printf("\t\t");
                    printf("MAXIMUM: $");
                    printfspace2(activeTableMax);
                    printf("\t\t");
                    printf("MAX PAIR BET: $");
                    printfspace2(activeTablePairMax);
                    printf("\t\t\tFINISH THE ROUND TO RETURN TO MAIN MENU!");
                    printf("\nCURRENT MAIN WAGER: $");
                    printfspace2(playerData.mainBet);
                    printf("\t\t");
                    printf("\n\n\n\n");

                    printf("\t\t\t\t\t\t\tDEALER'S HAND:\t");
                    cardPrintf(dealerHand[0]);
                    printf("[?]  ");
                    printf("\n\n\n");

                    printf("\t\t\t\t\t\t\tPLAYER'S HAND:\t");
                    cardPrintf(playerHand[0]);
                    for(i=1; i<20; i++)
                    {
                        cardPrintf(playerHand[i]);
                    }
                    printf("\t\t(BLACKJACK!)");

                    if ((playerHandTotal2<22 && playerHandAces == 1) && (playerHandTotal != playerHandTotal2))
                    {
                        printf("\n\nYOUR HAND TOTAL: %d/%d\n", playerHandTotal, playerHandTotal2);
                    }
                    else
                    {
                        printf("\n\nYOUR HAND TOTAL: %d", playerHandTotal);
                    }

                    Sleep(1000);
                    printf("\n\nAMAZING! BLACKJACK!\n");
                    Sleep(1000);

                    goto Showdown;
                }
                else if (playerHandTotal > 21 && splitHandCheck == 1) // PLAYER BUSTS FIRST HAND BUT STILL HAS A SECOND HAND
                {
                    handOneStandCheck = 1;
                    Sleep(2000);

                    printf("\n\n");
                
                    // Displays user money
                    printf("CASH: $");
                    printfspace2(playerData.money);
                    printf("\t\t\t");

                    // Displays current table's minimum and maximum bets (settings)
                    printf("MINIMUM: $");
                    printfspace2(activeTableMin);
                    printf("\t\t");
                    printf("MAXIMUM: $");
                    printfspace2(activeTableMax);
                    printf("\t\t");
                    printf("MAX PAIR BET: $");
                    printfspace2(activeTablePairMax);
                    printf("\t\t\tFINISH THE ROUND TO RETURN TO MAIN MENU!");
                    printf("\nCURRENT MAIN WAGER: $");                   
                    printfspace2(playerData.mainBet);
                    printf(" (LOST)");
                    if (splitHandCheck == 1)
                    {
                        printf("\nCURRENT SPLIT BET: $");
                        printfspace2(playerData.splitBet);
                    }
                    else
                    {
                        // Prints nothing
                    }
                    printf("\t\t");
                    printf("\n\n\n\n");

                    printf("\t\t\t\t\t\t\tDEALER'S HAND:\t");
                    cardPrintf(dealerHand[0]);
                    printf("[?]  ");
                    printf("\n\n\n");

                    printf("\t\t\t\t\t\t\tPLAYER'S HAND:\t");
                    cardPrintf(playerHand[0]);
                    for(i=1; i<20; i++)
                    {
                        cardPrintf(playerHand[i]);
                    }
                    printf("\t\t(BUSTED!)");

                    playerSecondHandTotal = 0;
                    playerSecondHandTotal2 = 0;

                    if(splitHandCheck == 1)
                    {
                        printf("\n\t\t\t\t\t\t\tPLAYER'S SECOND HAND:\t");
                        cardPrintf(playerSecondHand[0]);
                        for (i=1; i<20; i++)
                        {
                            cardPrintf(playerSecondHand[i]);
                        }

                        for(i=0; i<20; i++)
                        {
                            if(playerSecondHand[i] == 1)
                            {
                                playerHand2Aces = 1;
                                playerSecondHandTotal = (playerSecondHandTotal + 1);
                                if (playerSecondHandTotal2 <= 10)
                                {
                                    playerSecondHandTotal2 = (playerSecondHandTotal2 + 11);                    
                                }
                                else
                                {
                                    playerSecondHandTotal2 = (playerSecondHandTotal2 + 1);
                                }

                            }
                            else
                            {
                                playerSecondHandTotal = (playerSecondHandTotal + playerSecondHandValue[i]);
                                playerSecondHandTotal2 = (playerSecondHandTotal2 + playerSecondHandValue[i]);
                            }
                        }
                    }
                    else
                    {
                        // Prints nothing
                    }

                    if ((playerHandTotal2<22 && playerHandAces == 1) && (playerHandTotal != playerHandTotal2))
                    {
                        printf("\n\nYOUR HAND TOTAL: %d/%d\n", playerHandTotal, playerHandTotal2);
                    }
                    else
                    {
                        printf("\n\nYOUR HAND TOTAL: %d", playerHandTotal);
                    }

                    if (splitHandCheck == 1)
                    {
                        if((playerSecondHandTotal2<22 && playerHand2Aces == 1) && (playerSecondHandTotal != playerSecondHandTotal2))
                        {
                            printf("\nSPLIT HAND TOTAL: %d/%d\n", playerSecondHandTotal, playerSecondHandTotal2);
                        }
                        else
                        {
                            printf("\nSPLIT HAND TOTAL: %d", playerSecondHandTotal);
                        }  
                    }
                    else
                    {
                        // Prints nothing
                    }

                    printf("\n\nYOU DREW TOO MANY ON YOUR MAIN HAND AND LOST YOUR BET OF $");
                    printfspace2(playerData.mainBet);
                    printf("!\n");
                    Sleep(500);
                    printf("YOU CAN STILL PLAY YOUR SPLIT (SECOND) HAND THOUGH!");
                    Sleep(2000);

                    printf("\n\nHAND OPTIONS:\t\t");
                    printf("1) SURRENDER");
                    printf("\t\t");
                    printf("2) SPLIT");
                    printf("\t\t");
                    printf("3) DOUBLE");
                    printf("\t\t|\t");
                    printf("4) HIT");
                    printf("\t\t");
                    printf("5) STAND");

                    playerData.mainBet = 0;

                    goto GameOptions;
                }
                else if (playerHandTotal < 21 && splitHandCheck == 1 && playerHandTotal2 != 21) // PLAYER MAIN HAND DOES NOT BUST AND THEY HAVE A SECOND HAND
                {
                    handOneStandCheck = 0;
                    Sleep(2000);

                    printf("\n\n");
                
                    // Displays user money
                    printf("CASH: $");
                    printfspace2(playerData.money);
                    printf("\t\t\t");

                    // Displays current table's minimum and maximum bets (settings)
                    printf("MINIMUM: $");
                    printfspace2(activeTableMin);
                    printf("\t\t");
                    printf("MAXIMUM: $");
                    printfspace2(activeTableMax);
                    printf("\t\t");
                    printf("MAX PAIR BET: $");
                    printfspace2(activeTablePairMax);
                    printf("\t\t\tFINISH THE ROUND TO RETURN TO MAIN MENU!");
                    printf("\nCURRENT MAIN WAGER: $");
                    printfspace2(playerData.mainBet);
                    if (splitHandCheck == 1)
                    {
                        printf("\nCURRENT SPLIT BET: $");
                        printfspace2(playerData.splitBet);
                    }
                    else
                    {
                        // Prints nothing
                    }
                    printf("\t\t");
                    printf("\n\n\n\n");

                    printf("\t\t\t\t\t\t\tDEALER'S HAND:\t");
                    cardPrintf(dealerHand[0]);
                    printf("[?]  ");
                    printf("\n\n\n");

                    printf("\t\t\t\t\t\t\tPLAYER'S HAND:\t");
                    cardPrintf(playerHand[0]);
                    for(i=1; i<20; i++)
                    {
                        cardPrintf(playerHand[i]);
                    }

                    playerSecondHandTotal = 0;
                    playerSecondHandTotal2 = 0;

                    if(splitHandCheck == 1)
                    {
                        printf("\n\t\t\t\t\t\t\tPLAYER'S SECOND HAND:\t");
                        cardPrintf(playerSecondHand[0]);
                        for (i=1; i<20; i++)
                        {
                            cardPrintf(playerSecondHand[i]);
                        }

                        for(i=0; i<20; i++)
                        {
                            if(playerSecondHand[i] == 1)
                            {
                                playerHand2Aces = 1;
                                playerSecondHandTotal = (playerSecondHandTotal + 1);
                                if (playerSecondHandTotal2 <= 10)
                                {
                                    playerSecondHandTotal2 = (playerSecondHandTotal2 + 11);                    
                                }
                                else
                                {
                                    playerSecondHandTotal2 = (playerSecondHandTotal2 + 1);
                                }

                            }
                            else
                            {
                                playerSecondHandTotal = (playerSecondHandTotal + playerSecondHandValue[i]);
                                playerSecondHandTotal2 = (playerSecondHandTotal2 + playerSecondHandValue[i]);
                            }
                        }
                    }
                    else
                    {
                        // Prints nothing
                    }

                    if ((playerHandTotal2<22 && playerHandAces == 1) && (playerHandTotal != playerHandTotal2))
                    {
                        printf("\n\nYOUR HAND TOTAL: %d/%d\n", playerHandTotal, playerHandTotal2);
                    }
                    else
                    {
                        printf("\n\nYOUR HAND TOTAL: %d", playerHandTotal);
                    }

                    if (splitHandCheck == 1)
                    {
                        if((playerSecondHandTotal2<22 && playerHand2Aces == 1) && (playerSecondHandTotal != playerSecondHandTotal2))
                        {
                            printf("\nSPLIT HAND TOTAL: %d/%d\n", playerSecondHandTotal, playerSecondHandTotal2);
                        }
                        else
                        {
                            printf("\nSPLIT HAND TOTAL: %d", playerSecondHandTotal);
                        }  
                    }
                    else
                    {
                        // Prints nothing
                    }

                    printf("\n\nHAND OPTIONS:\t\t");
                    printf("1) SURRENDER");
                    printf("\t\t");
                    printf("2) SPLIT");
                    printf("\t\t");
                    printf("3) DOUBLE");
                    printf("\t\t|\t");
                    printf("4) HIT");
                    printf("\t\t");
                    printf("5) STAND");

                    goto GameOptions;
                }
                else if ((playerHandTotal == 21 || playerHandTotal2 == 21) && (splitHandCheck == 1)) // PLAYER HAS BLACKJACK ON MAIN HAND WITH SECOND HAND
                {
                    handOneStandCheck = 1;
                    Sleep(2000);

                    printf("\n\n");
            
                    // Displays user money
                    printf("CASH: $");
                    printfspace2(playerData.money);
                    printf("\t\t\t");

                    // Displays current table's minimum and maximum bets (settings)
                    printf("MINIMUM: $");
                    printfspace2(activeTableMin);
                    printf("\t\t");
                    printf("MAXIMUM: $");
                    printfspace2(activeTableMax);
                    printf("\t\t");
                    printf("MAX PAIR BET: $");
                    printfspace2(activeTablePairMax);
                    printf("\t\t\tFINISH THE ROUND TO RETURN TO MAIN MENU!");
                    printf("\nCURRENT MAIN WAGER: $");
                    printfspace2(playerData.mainBet);
                    if (splitHandCheck == 1)
                    {
                        printf("\nCURRENT SPLIT BET: $");
                        printfspace2(playerData.splitBet);
                    }
                    else
                    {
                        // Prints nothing
                    }
                    printf("\t\t");
                    printf("\n\n\n\n");

                    printf("\t\t\t\t\t\t\tDEALER'S HAND:\t");
                    cardPrintf(dealerHand[0]);
                    printf("[?]  ");
                    printf("\n\n\n");

                    printf("\t\t\t\t\t\t\tPLAYER'S HAND:\t");
                    cardPrintf(playerHand[0]);
                    for(i=1; i<20; i++)
                    {
                        cardPrintf(playerHand[i]);
                    }
                    printf("\t\t(BLACKJACK!)");

                    playerSecondHandTotal = 0;
                    playerSecondHandTotal2 = 0;

                    if(splitHandCheck == 1)
                    {
                        printf("\n\t\t\t\t\t\t\tPLAYER'S SECOND HAND:\t");
                        cardPrintf(playerSecondHand[0]);
                        for (i=1; i<20; i++)
                        {
                            cardPrintf(playerSecondHand[i]);
                        }

                        for(i=0; i<20; i++)
                        {
                            if(playerSecondHand[i] == 1)
                            {
                                playerHand2Aces = 1;
                                playerSecondHandTotal = (playerSecondHandTotal + 1);
                                if (playerSecondHandTotal2 <= 10)
                                {
                                    playerSecondHandTotal2 = (playerSecondHandTotal2 + 11);                    
                                }
                                else
                                {
                                    playerSecondHandTotal2 = (playerSecondHandTotal2 + 1);
                                }

                            }
                            else
                            {
                                playerSecondHandTotal = (playerSecondHandTotal + playerSecondHandValue[i]);
                                playerSecondHandTotal2 = (playerSecondHandTotal2 + playerSecondHandValue[i]);
                            }
                        }
                    }
                    else
                    {
                        // Prints nothing
                    }

                    if ((playerHandTotal2<22 && playerHandAces == 1) && (playerHandTotal != playerHandTotal2))
                    {
                        printf("\n\nYOUR HAND TOTAL: %d/%d\n", playerHandTotal, playerHandTotal2);
                    }
                    else
                    {
                        printf("\n\nYOUR HAND TOTAL: %d", playerHandTotal);
                    }
                    
                    if (splitHandCheck == 1)
                    {
                        if((playerSecondHandTotal2<22 && playerHand2Aces == 1) && (playerSecondHandTotal != playerSecondHandTotal2))
                        {
                            printf("\nSPLIT HAND TOTAL: %d/%d\n", playerSecondHandTotal, playerSecondHandTotal2);
                        }
                        else
                        {
                            printf("\nSPLIT HAND TOTAL: %d", playerSecondHandTotal);
                        }  
                    }
                    else
                    {
                        // Prints nothing
                    }

                    Sleep(1000);
                    printf("\n\nAMAZING! BLACKJACK!\n");
                    Sleep(1000);
                    printf("YOU WILL BE PAID AFTER SHOWDOWN!\n");
                    Sleep(1000);

                    printf("\n\nHAND OPTIONS:\t\t");
                    printf("1) SURRENDER");
                    printf("\t\t");
                    printf("2) SPLIT");
                    printf("\t\t");
                    printf("3) DOUBLE");
                    printf("\t\t|\t");
                    printf("4) HIT");
                    printf("\t\t");
                    printf("5) STAND");

                    goto GameOptions;

                }
                else
                {
                    // Shouldn't be possible
                }

            }
            else if (splitHandCheck == 1 && handTwoStandCheck == 0 && handOneStandCheck == 1) // Player has not stood/busted their second hand
            {
                handHitCheck = 0;
                handTwoCanDouble = 0;
                printf("\n\nYOU HIT YOUR SPLIT (SECOND) HAND!\n");

                for (i=1; i<20; i++)
                {
                    if (playerSecondHand[i] == 0 && handHitCheck == 0)
                    {
                        playerSecondHand[i] = (printRandoms(lower, upper, count));
                        playerSecondHandValue[i] = cardValuation(playerSecondHand[i]);

                        playerSecondHandTotal = 0;
                        playerSecondHandTotal2 = 0;

                        for(i=0; i<20; i++)
                        {
                            if(playerSecondHand[i] == 1)
                            {
                                playerHand2Aces = 1;
                                playerSecondHandTotal = (playerSecondHandTotal + 1);
                                if (playerSecondHandTotal2 <= 10)
                                {
                                    playerSecondHandTotal2 = (playerSecondHandTotal2 + 11);                    
                                }
                                else
                                {
                                    playerSecondHandTotal2 = (playerSecondHandTotal2 + 1);
                                }

                            }
                            else
                            {
                                playerSecondHandTotal = (playerSecondHandTotal + playerSecondHandValue[i]);
                                playerSecondHandTotal2 = (playerSecondHandTotal2 + playerSecondHandValue[i]);
                            }
                        }

                        handHitCheck = 1;
                    }
                }

                if (playerSecondHandTotal > 21) // PLAYER SECOND HAND IS BUSTED
                {
                    if (playerHandTotal > 21) // BOTH HANDS ARE BUSTED -- GAME OVER
                    {
                        handTwoStandCheck = 1;
                        Sleep(2000);

                        printf("\n\n");
            
                        // Displays user money
                        printf("CASH: $");
                        printfspace2(playerData.money);
                        printf("\t\t\t");

                        // Displays current table's minimum and maximum bets (settings)
                        printf("MINIMUM: $");
                        printfspace2(activeTableMin);
                        printf("\t\t");
                        printf("MAXIMUM: $");
                        printfspace2(activeTableMax);
                        printf("\t\t");
                        printf("MAX PAIR BET: $");
                        printfspace2(activeTablePairMax);
                        printf("\t\t\tFINISH THE ROUND TO RETURN TO MAIN MENU!");
                        printf("\nCURRENT MAIN WAGER: $");
                        printfspace2(playerData.mainBet);
                        printf(" (LOST)");
                        if (splitHandCheck == 1)
                        {
                            printf("\nCURRENT SPLIT BET: $");
                            printfspace2(playerData.splitBet);
                            printf(" (LOST)");
                        }
                        else
                        {
                            // Prints nothing
                        }
                        printf("\t\t");
                        printf("\n\n\n\n");

                        printf("\t\t\t\t\t\t\tDEALER'S HAND:\t");
                        cardPrintf(dealerHand[0]);
                        printf("[?]  ");
                        printf("\n\n\n");

                        printf("\t\t\t\t\t\t\tPLAYER'S HAND:\t");
                        cardPrintf(playerHand[0]);
                        for(i=1; i<20; i++)
                        {
                            cardPrintf(playerHand[i]);
                        }
                        printf("\t\t(BUSTED!)");

                        playerSecondHandTotal = 0;
                        playerSecondHandTotal2 = 0;

                        if(splitHandCheck == 1)
                        {
                            printf("\n\t\t\t\t\t\t\tPLAYER'S SECOND HAND:\t");
                            cardPrintf(playerSecondHand[0]);
                            for (i=1; i<20; i++)
                            {
                                cardPrintf(playerSecondHand[i]);
                            }
                            printf("\t\t(BUSTED!)");

                            for(i=0; i<20; i++)
                            {
                                if(playerSecondHand[i] == 1)
                                {
                                    playerHand2Aces = 1;
                                    playerSecondHandTotal = (playerSecondHandTotal + 1);
                                    if (playerSecondHandTotal2 <= 10)
                                    {
                                        playerSecondHandTotal2 = (playerSecondHandTotal2 + 11);                    
                                    }
                                    else
                                    {
                                        playerSecondHandTotal2 = (playerSecondHandTotal2 + 1);
                                    }

                                }
                                else
                                {
                                    playerSecondHandTotal = (playerSecondHandTotal + playerSecondHandValue[i]);
                                    playerSecondHandTotal2 = (playerSecondHandTotal2 + playerSecondHandValue[i]);
                                }
                            }
                        }
                        else
                        {
                            // Prints nothing
                        }

                        if ((playerHandTotal2<22 && playerHandAces == 1) && (playerHandTotal != playerHandTotal2))
                        {
                            printf("\n\nYOUR HAND TOTAL: %d/%d\n", playerHandTotal, playerHandTotal2);
                        }
                        else
                        {
                            printf("\n\nYOUR HAND TOTAL: %d", playerHandTotal);
                        }
                        
                        if (splitHandCheck == 1)
                        {
                            if((playerSecondHandTotal2<22 && playerHand2Aces == 1) && (playerSecondHandTotal != playerSecondHandTotal2))
                            {
                                printf("\nSPLIT HAND TOTAL: %d/%d\n", playerSecondHandTotal, playerSecondHandTotal2);
                            }
                            else
                            {
                                printf("\nSPLIT HAND TOTAL: %d", playerSecondHandTotal);
                            }  
                        }
                        else
                        {
                            // Prints nothing
                        }

                        Sleep(2000);
                        printf("\n\nYOU DREW TOO MANY! YOU LOST YOUR BET OF $");
                        printfspace2(playerData.splitBet);

                        Sleep(1000);
                        printf("\n\nBOTH OF YOUR HANDS HAVE BUSTED! DEALER WINS.\n");

                        Sleep(2000);
                        printf("\n\nSTARTING A NEW ROUND!\n\n\n");
                        Sleep(1000);

                        playerData.splitBet = 0;

                        goto GameStart;

                    }
                    else // ONLY SECOND HAND IS BUSTED -- SHOWDOWN TIME!
                    {
                        handTwoStandCheck = 1;
                        Sleep(2000);

                        printf("\n\n");
            
                        // Displays user money
                        printf("CASH: $");
                        printfspace2(playerData.money);
                        printf("\t\t\t");

                        // Displays current table's minimum and maximum bets (settings)
                        printf("MINIMUM: $");
                        printfspace2(activeTableMin);
                        printf("\t\t");
                        printf("MAXIMUM: $");
                        printfspace2(activeTableMax);
                        printf("\t\t");
                        printf("MAX PAIR BET: $");
                        printfspace2(activeTablePairMax);
                        printf("\t\t\tFINISH THE ROUND TO RETURN TO MAIN MENU!");
                        printf("\nCURRENT MAIN WAGER: $");
                        printfspace2(playerData.mainBet);
                        if (playerHandTotal < 21)
                        {
                            printf(" (STAND)");
                        }
                        else
                        {
                            printf(" (BLACKJACK!)");
                        }
                        if (splitHandCheck == 1)
                        {
                            printf("\nCURRENT SPLIT BET: $");
                            printfspace2(playerData.splitBet);
                            printf(" (LOST)");
                        }
                        else
                        {
                            // Prints nothing
                        }
                        printf("\t\t");
                        printf("\n\n\n\n");

                        printf("\t\t\t\t\t\t\tDEALER'S HAND:\t");
                        cardPrintf(dealerHand[0]);
                        printf("[?]  ");
                        printf("\n\n\n");

                        printf("\t\t\t\t\t\t\tPLAYER'S HAND:\t");
                        cardPrintf(playerHand[0]);
                        for(i=1; i<20; i++)
                        {
                            cardPrintf(playerHand[i]);
                        }
                        if ((playerHandTotal == 21 || playerHandTotal2 == 21))
                        {
                            printf("\t\t(BLACKJACK!)");
                        }
                        else
                        {
                            printf("\t\t(STAND)");
                        }

                        playerSecondHandTotal = 0;
                        playerSecondHandTotal2 = 0;

                        if(splitHandCheck == 1)
                        {
                            printf("\n\t\t\t\t\t\t\tPLAYER'S SECOND HAND:\t");
                            cardPrintf(playerSecondHand[0]);
                            for (i=1; i<20; i++)
                            {
                                cardPrintf(playerSecondHand[i]);
                            }
                            printf("\t\t(BUSTED!)");

                            for(i=0; i<20; i++)
                            {
                                if(playerSecondHand[i] == 1)
                                {
                                    playerHand2Aces = 1;
                                    playerSecondHandTotal = (playerSecondHandTotal + 1);
                                    if (playerSecondHandTotal2 <= 10)
                                    {
                                        playerSecondHandTotal2 = (playerSecondHandTotal2 + 11);                    
                                    }
                                    else
                                    {
                                        playerSecondHandTotal2 = (playerSecondHandTotal2 + 1);
                                    }

                                }
                                else
                                {
                                    playerSecondHandTotal = (playerSecondHandTotal + playerSecondHandValue[i]);
                                    playerSecondHandTotal2 = (playerSecondHandTotal2 + playerSecondHandValue[i]);
                                }
                            }
                        }
                        else
                        {
                            // Prints nothing
                        }

                        if ((playerHandTotal2<22 && playerHandAces == 1) && (playerHandTotal != playerHandTotal2))
                        {
                            printf("\n\nYOUR HAND TOTAL: %d/%d\n", playerHandTotal, playerHandTotal2);
                        }
                        else
                        {
                            printf("\n\nYOUR HAND TOTAL: %d", playerHandTotal);
                        }
                        
                        if (splitHandCheck == 1)
                        {
                            if((playerSecondHandTotal2<22 && playerHand2Aces == 1) && (playerSecondHandTotal != playerSecondHandTotal2))
                            {
                                printf("\nSPLIT HAND TOTAL: %d/%d\n", playerSecondHandTotal, playerSecondHandTotal2);
                            }
                            else
                            {
                                printf("\nSPLIT HAND TOTAL: %d", playerSecondHandTotal);
                            }  
                        }
                        else
                        {
                            // Prints nothing
                        }

                        Sleep(2000);
                        printf("\n\nYOU DREW TOO MANY! YOU LOST YOUR BET OF $");
                        printfspace2(playerData.splitBet);
                        printf("\n");
                        Sleep(1000);

                        playerData.splitBet = 0;

                        goto Showdown;
                    }
                }
                else if (playerSecondHandTotal < 21 && playerSecondHandTotal2 != 21) // PLAYER SECOND HAND DOES NOT BUST AFTER HIT
                {
                    Sleep(2000);

                    printf("\n\n");
        
                    // Displays user money
                    printf("CASH: $");
                    printfspace2(playerData.money);
                    printf("\t\t\t");

                    // Displays current table's minimum and maximum bets (settings)
                    printf("MINIMUM: $");
                    printfspace2(activeTableMin);
                    printf("\t\t");
                    printf("MAXIMUM: $");
                    printfspace2(activeTableMax);
                    printf("\t\t");
                    printf("MAX PAIR BET: $");
                    printfspace2(activeTablePairMax);
                    printf("\t\t\tFINISH THE ROUND TO RETURN TO MAIN MENU!");
                    printf("\nCURRENT MAIN WAGER: $");
                    printfspace2(playerData.mainBet);
                    if ((playerHandTotal == 21 || playerHandTotal2 == 21))
                    {
                        printf(" (BLACKJACK!)");
                    }
                    else if (playerHandTotal > 21)
                    {
                        printf(" (LOST)");
                    }    
                    else
                    {
                        printf(" (STAND)");
                    }
                    if (splitHandCheck == 1)
                    {
                        printf("\nCURRENT SPLIT BET: $");
                        printfspace2(playerData.splitBet);
                    }
                    else
                    {
                        // Prints nothing
                    }
                    printf("\t\t");
                    printf("\n\n\n\n");

                    printf("\t\t\t\t\t\t\tDEALER'S HAND:\t");
                    cardPrintf(dealerHand[0]);
                    printf("[?]  ");
                    printf("\n\n\n");

                    printf("\t\t\t\t\t\t\tPLAYER'S HAND:\t");
                    cardPrintf(playerHand[0]);
                    for(i=1; i<20; i++)
                    {
                        cardPrintf(playerHand[i]);
                    }
                    if ((playerHandTotal == 21 || playerHandTotal2 == 21))
                    {
                        printf("\t\t(BLACKJACK!)");
                    }
                    else if (playerHandTotal > 21)
                    {
                        printf("\t\t(BUSTED!)");
                    }
                    else
                    {
                        printf("\t\t(STAND)");
                    }

                    playerSecondHandTotal = 0;
                    playerSecondHandTotal2 = 0;

                    if(splitHandCheck == 1)
                    {
                        printf("\n\t\t\t\t\t\t\tPLAYER'S SECOND HAND:\t");
                        cardPrintf(playerSecondHand[0]);
                        for (i=1; i<20; i++)
                        {
                            cardPrintf(playerSecondHand[i]);
                        }

                        for(i=0; i<20; i++)
                        {
                            if(playerSecondHand[i] == 1)
                            {
                                playerHand2Aces = 1;
                                playerSecondHandTotal = (playerSecondHandTotal + 1);
                                if (playerSecondHandTotal2 <= 10)
                                {
                                    playerSecondHandTotal2 = (playerSecondHandTotal2 + 11);                    
                                }
                                else
                                {
                                    playerSecondHandTotal2 = (playerSecondHandTotal2 + 1);
                                }

                            }
                            else
                            {
                                playerSecondHandTotal = (playerSecondHandTotal + playerSecondHandValue[i]);
                                playerSecondHandTotal2 = (playerSecondHandTotal2 + playerSecondHandValue[i]);
                            }
                        }
                    }
                    else
                    {
                        // Prints nothing
                    }

                    if ((playerHandTotal2<22 && playerHandAces == 1) && (playerHandTotal != playerHandTotal2))
                    {
                        printf("\n\nYOUR HAND TOTAL: %d/%d\n", playerHandTotal, playerHandTotal2);
                    }
                    else
                    {
                        printf("\n\nYOUR HAND TOTAL: %d", playerHandTotal);
                    }
                    
                    if (splitHandCheck == 1)
                    {
                        if((playerSecondHandTotal2<22 && playerHand2Aces == 1) && (playerSecondHandTotal != playerSecondHandTotal2))
                        {
                            printf("\nSPLIT HAND TOTAL: %d/%d\n", playerSecondHandTotal, playerSecondHandTotal2);
                        }
                        else
                        {
                            printf("\nSPLIT HAND TOTAL: %d", playerSecondHandTotal);
                        }  
                    }
                    else
                    {
                        // Prints nothing
                    }

                    printf("\n\nHAND OPTIONS:\t\t");
                    printf("1) SURRENDER");
                    printf("\t\t");
                    printf("2) SPLIT");
                    printf("\t\t");
                    printf("3) DOUBLE");
                    printf("\t\t|\t");
                    printf("4) HIT");
                    printf("\t\t");
                    printf("5) STAND");                    

                    goto GameOptions;
                }
                else if ((playerSecondHandTotal == 21 || playerSecondHandTotal2 == 21)) // PLAYER SECOND HAND IS A BLACKJACK -- SHOWDOWN TIME!
                {
                    handTwoStandCheck = 1;
                    Sleep(2000);

                    printf("\n\n");
        
                    // Displays user money
                    printf("CASH: $");
                    printfspace2(playerData.money);
                    printf("\t\t\t");

                    // Displays current table's minimum and maximum bets (settings)
                    printf("MINIMUM: $");
                    printfspace2(activeTableMin);
                    printf("\t\t");
                    printf("MAXIMUM: $");
                    printfspace2(activeTableMax);
                    printf("\t\t");
                    printf("MAX PAIR BET: $");
                    printfspace2(activeTablePairMax);
                    printf("\t\t\tFINISH THE ROUND TO RETURN TO MAIN MENU!");
                    printf("\nCURRENT MAIN WAGER: $");
                    printfspace2(playerData.mainBet);
                    if ((playerHandTotal == 21 || playerHandTotal2 == 21))
                    {
                        printf(" (BLACKJACK!)");
                    }
                    else if (playerHandTotal > 21)
                    {
                        printf(" (LOST)");
                    }
                    else
                    {
                        printf(" (STAND)");
                    }
                    if (splitHandCheck == 1)
                    {
                        printf("\nCURRENT SPLIT BET: $");
                        printfspace2(playerData.splitBet);
                        printf(" (BLACKJACK!)");
                    }
                    else
                    {
                        // Prints nothing
                    }
                    printf("\t\t");
                    printf("\n\n\n\n");

                    printf("\t\t\t\t\t\t\tDEALER'S HAND:\t");
                    cardPrintf(dealerHand[0]);
                    printf("[?]  ");
                    printf("\n\n\n");

                    printf("\t\t\t\t\t\t\tPLAYER'S HAND:\t");
                    cardPrintf(playerHand[0]);
                    for(i=1; i<20; i++)
                    {
                        cardPrintf(playerHand[i]);
                    }
                    if ((playerHandTotal == 21 || playerHandTotal2 == 21))
                    {
                        printf("\t\t(BLACKJACK!)");
                    }
                    else if (playerHandTotal > 21)
                    {
                        printf("\t\t(BUSTED!)");
                    }
                    else
                    {
                        printf("\t\t(STAND)");
                    }

                    playerSecondHandTotal = 0;
                    playerSecondHandTotal2 = 0;

                    if(splitHandCheck == 1)
                    {
                        printf("\n\t\t\t\t\t\t\tPLAYER'S SECOND HAND:\t");
                        cardPrintf(playerSecondHand[0]);
                        for (i=1; i<20; i++)
                        {
                            cardPrintf(playerSecondHand[i]);
                        }
                        printf("\t\t(BLACKJACK!)");

                        for(i=0; i<20; i++)
                        {
                            if(playerSecondHand[i] == 1)
                            {
                                playerHand2Aces = 1;
                                playerSecondHandTotal = (playerSecondHandTotal + 1);
                                if (playerSecondHandTotal2 <= 10)
                                {
                                    playerSecondHandTotal2 = (playerSecondHandTotal2 + 11);                    
                                }
                                else
                                {
                                    playerSecondHandTotal2 = (playerSecondHandTotal2 + 1);
                                }

                            }
                            else
                            {
                                playerSecondHandTotal = (playerSecondHandTotal + playerSecondHandValue[i]);
                                playerSecondHandTotal2 = (playerSecondHandTotal2 + playerSecondHandValue[i]);
                            }
                        }
                    }
                    else
                    {
                        // Prints nothing
                    }

                    if ((playerHandTotal2<22 && playerHandAces == 1) && (playerHandTotal != playerHandTotal2))
                    {
                        printf("\n\nYOUR HAND TOTAL: %d/%d\n", playerHandTotal, playerHandTotal2);
                    }
                    else
                    {
                        printf("\n\nYOUR HAND TOTAL: %d", playerHandTotal);
                    }
                    
                    if (splitHandCheck == 1)
                    {
                        if((playerSecondHandTotal2<22 && playerHand2Aces == 1) && (playerSecondHandTotal != playerSecondHandTotal2))
                        {
                            printf("\nSPLIT HAND TOTAL: %d/%d\n", playerSecondHandTotal, playerSecondHandTotal2);
                        }
                        else
                        {
                            printf("\nSPLIT HAND TOTAL: %d", playerSecondHandTotal);
                        }  
                    }
                    else
                    {
                        // Prints nothing
                    }

                    Sleep(1000);
                    printf("\n\nAMAZING! BLACKJACK!\n");
                    Sleep(1000);

                    goto Showdown;
                }
                else
                {
                    // Not reachable
                }
            }
            else
            {
                // Does nothing, shouldn't be obtainable
            }
        }
        else if (MenuNavigation == 5) // PLAYER STANDS THEIR HAND
        {
            if (handOneStandCheck == 0)
            {
                handOneStandCheck = 1;
                if (splitHandCheck == 0)
                {
                    Sleep(1000);
                    printf("\n\nYOU STAND ON YOUR MAIN HAND.\n");
                    Sleep(1000);
                    printf("\nPROCEEDING TO SHOWDOWN!\n");

                    goto Showdown;
                }
                else
                {
                    Sleep(1000);
                    printf("\n\nYOU STAND ON YOUR MAIN HAND.\n");
                    Sleep(2000);

                    printf("\n\n");
        
                    // Displays user money
                    printf("CASH: $");
                    printfspace2(playerData.money);
                    printf("\t\t\t");

                    // Displays current table's minimum and maximum bets (settings)
                    printf("MINIMUM: $");
                    printfspace2(activeTableMin);
                    printf("\t\t");
                    printf("MAXIMUM: $");
                    printfspace2(activeTableMax);
                    printf("\t\t");
                    printf("MAX PAIR BET: $");
                    printfspace2(activeTablePairMax);
                    printf("\t\t\tFINISH THE ROUND TO RETURN TO MAIN MENU!");
                    printf("\nCURRENT MAIN WAGER: $");
                    printfspace2(playerData.mainBet);
                    if ((playerHandTotal == 21 || playerHandTotal2 == 21))
                    {
                        printf(" (BLACKJACK!)");
                    }
                    else if (playerHandTotal > 21)
                    {
                        printf(" (LOST)");
                    }    
                    else
                    {
                        printf(" (STAND)");
                    }
                    if (splitHandCheck == 1)
                    {
                        printf("\nCURRENT SPLIT BET: $");
                        printfspace2(playerData.splitBet);
                    }
                    else
                    {
                        // Prints nothing
                    }
                    printf("\t\t");
                    printf("\n\n\n\n");

                    printf("\t\t\t\t\t\t\tDEALER'S HAND:\t");
                    cardPrintf(dealerHand[0]);
                    printf("[?]  ");
                    printf("\n\n\n");

                    printf("\t\t\t\t\t\t\tPLAYER'S HAND:\t");
                    cardPrintf(playerHand[0]);
                    for(i=1; i<20; i++)
                    {
                        cardPrintf(playerHand[i]);
                    }
                    if ((playerHandTotal == 21 || playerHandTotal2 == 21))
                    {
                        printf("\t\t(BLACKJACK!)");
                    }
                    else if (playerHandTotal > 21)
                    {
                        printf("\t\t(BUSTED!)");
                    }
                    else
                    {
                        printf("\t\t(STAND)");
                    }

                    playerHandTotal = 0;
                    playerHandTotal2 = 0;
                    playerSecondHandTotal = 0;
                    playerSecondHandTotal2 = 0;

                    if(splitHandCheck == 1)
                    {
                        printf("\n\t\t\t\t\t\t\tPLAYER'S SECOND HAND:\t");
                        cardPrintf(playerSecondHand[0]);
                        for (i=1; i<20; i++)
                        {
                            cardPrintf(playerSecondHand[i]);
                        }

                        for(i=0; i<20; i++)
                        {
                            if(playerSecondHand[i] == 1)
                            {
                                playerHand2Aces = 1;
                                playerSecondHandTotal = (playerSecondHandTotal + 1);
                                if (playerSecondHandTotal2 <= 10)
                                {
                                    playerSecondHandTotal2 = (playerSecondHandTotal2 + 11);                    
                                }
                                else
                                {
                                    playerSecondHandTotal2 = (playerSecondHandTotal2 + 1);
                                }

                            }
                            else
                            {
                                playerSecondHandTotal = (playerSecondHandTotal + playerSecondHandValue[i]);
                                playerSecondHandTotal2 = (playerSecondHandTotal2 + playerSecondHandValue[i]);
                            }
                        }
                    }
                    else
                    {
                        // Prints nothing
                    }

                    for(i=0; i<20; i++)
                    {
                        if(playerHand[i] == 1)
                        {
                            playerHandAces = 1;
                            playerHandTotal = (playerHandTotal + 1);
                            if (playerHandTotal2 <= 10)
                            {
                                playerHandTotal2 = (playerHandTotal2 + 11);                    
                            }
                            else
                            {
                                playerHandTotal2 = (playerHandTotal2 + 1);
                            }

                        }
                        else
                        {
                            playerHandTotal = (playerHandTotal + playerHandValue[i]);
                            playerHandTotal2 = (playerHandTotal2 + playerHandValue[i]);
                        }
                    }

                    if ((playerHandTotal2<22 && playerHandAces == 1) && (playerHandTotal != playerHandTotal2))
                    {
                        printf("\n\nYOUR HAND TOTAL: %d/%d\n", playerHandTotal, playerHandTotal2);
                    }
                    else
                    {
                        printf("\n\nYOUR HAND TOTAL: %d", playerHandTotal);
                    }
                    
                    if (splitHandCheck == 1)
                    {
                        if((playerSecondHandTotal2<22 && playerHand2Aces == 1) && (playerSecondHandTotal != playerSecondHandTotal2))
                        {
                            printf("\nSPLIT HAND TOTAL: %d/%d\n", playerSecondHandTotal, playerSecondHandTotal2);
                        }
                        else
                        {
                            printf("\nSPLIT HAND TOTAL: %d", playerSecondHandTotal);
                        }  
                    }
                    else
                    {
                        // Prints nothing
                    }

                    printf("\n\nHAND OPTIONS:\t\t");
                    printf("1) SURRENDER");
                    printf("\t\t");
                    printf("2) SPLIT");
                    printf("\t\t");
                    printf("3) DOUBLE");
                    printf("\t\t|\t");
                    printf("4) HIT");
                    printf("\t\t");
                    printf("5) STAND");                    

                    goto GameOptions;

                }
            }
            else
            {
                handTwoStandCheck = 1;
                Sleep(1000);
                printf("\n\nYOU STAND ON YOUR SPLIT (SECOND) HAND.\n");
                Sleep(1000);
                printf("\nPROCEEDING TO SHOWDOWN!\n");

                goto Showdown;
            }
        }
        else // Invalid Option
        {
            printf("\n\n\nERROR! INVALID OPTION!\n\n");
            Sleep(2000);

            printf("\n\n");
            
            // Displays user money
            printf("CASH: $");
            printfspace2(playerData.money);
            printf("\t\t\t");

            // Displays current table's minimum and maximum bets (settings)
            printf("MINIMUM: $");
            printfspace2(activeTableMin);
            printf("\t\t");
            printf("MAXIMUM: $");
            printfspace2(activeTableMax);
            printf("\t\t");
            printf("MAX PAIR BET: $");
            printfspace2(activeTablePairMax);
            printf("\t\t\tFINISH THE ROUND TO RETURN TO MAIN MENU!");
            printf("\nCURRENT MAIN WAGER: $");
            printfspace2(playerData.mainBet);
            if (splitHandCheck == 1)
            {
                printf("\nCURRENT SPLIT BET: $");
                printfspace2(playerData.splitBet);
            }
            else
            {
                // Prints nothing
            }
            printf("\t\t");
            printf("\n\n\n\n");

            printf("\t\t\t\t\t\t\tDEALER'S HAND:\t");
            cardPrintf(dealerHand[0]);
            printf("[?]  ");
            printf("\n\n\n");

            printf("\t\t\t\t\t\t\tPLAYER'S HAND:\t");
            cardPrintf(playerHand[0]);
            cardPrintf(playerHand[1]);
            for(i=2; i<20; i++)
            {
                if(playerHand[i] == 0)
                {
                    goto SkipPrintOption5;
                }
                else
                {
                    cardPrintf(playerHand[i]);
                }
            }
            if(splitHandCheck == 1)
            {
                printf("\n\t\t\t\t\t\t\tPLAYER'S SECOND HAND:\t");
                cardPrintf(playerSecondHand[0]);
                for (i=1; i<20; i++)
                {
                    if(playerSecondHand[i] == 0)
                    {
                        goto SkipPrintOption5;
                    }
                    else
                    {
                        cardPrintf(playerSecondHand[i]);
                    }
                }

                playerHandTotal = 0;
                playerHandTotal2 = 0;
                playerSecondHandTotal = 0;
                playerSecondHandTotal2 = 0;

                for(i=0; i<20; i++)
                {
                    if(playerSecondHand[i] == 1)
                    {
                        playerHand2Aces = 1;
                        playerSecondHandTotal = (playerSecondHandTotal + 1);
                        if (playerSecondHandTotal2 <= 10)
                        {
                            playerSecondHandTotal2 = (playerSecondHandTotal2 + 11);                    
                        }
                        else
                        {
                            playerSecondHandTotal2 = (playerSecondHandTotal2 + 1);
                        }

                    }
                    else
                    {
                        playerSecondHandTotal = (playerSecondHandTotal + playerSecondHandValue[i]);
                        playerSecondHandTotal2 = (playerSecondHandTotal2 + playerSecondHandValue[i]);
                    }
                }
            }
            else
            {
                // Prints nothing
            }

            SkipPrintOption5:

            for(i=0; i<20; i++)
            {
                if(playerHand[i] == 1)
                {
                    playerHandAces = 1;
                    playerHandTotal = (playerHandTotal + 1);
                    if (playerHandTotal2 <= 10)
                    {
                        playerHandTotal2 = (playerHandTotal2 + 11);                    
                    }
                    else
                    {
                        playerHandTotal2 = (playerHandTotal2 + 1);
                    }

                }
                else
                {
                    playerHandTotal = (playerHandTotal + playerHandValue[i]);
                    playerHandTotal2 = (playerHandTotal2 + playerHandValue[i]);
                }
            }

            if ((playerHandTotal2<22 && playerHandAces == 1) && (playerHandTotal != playerHandTotal2))
            {
                printf("\n\nYOUR HAND TOTAL: %d/%d\n", playerHandTotal, playerHandTotal2);
            }
            else
            {
                printf("\n\nYOUR HAND TOTAL: %d", playerHandTotal);
            }
            if (splitHandCheck == 1)
            {
                if((playerSecondHandTotal2<22 && playerHand2Aces == 1) && (playerSecondHandTotal != playerSecondHandTotal2))
                {
                    printf("\nSPLIT HAND TOTAL: %d/%d\n", playerSecondHandTotal, playerSecondHandTotal2);
                }
                else
                {
                    printf("\nSPLIT HAND TOTAL: %d", playerSecondHandTotal);
                }  
            }
            else
            {
                // Prints nothing
            }

            printf("\n\nHAND OPTIONS:\t\t");
            printf("1) SURRENDER");
            printf("\t\t");
            printf("2) SPLIT");
            printf("\t\t");
            printf("3) DOUBLE");
            printf("\t\t|\t");
            printf("4) HIT");
            printf("\t\t");
            printf("5) STAND");
            

            goto GameOptions;
        }

        Showdown:

        printf("\nIT'S SHOWDOWN TIME!\n\n");
        Sleep(1000);

        // FINAL PORTION OF THE GAME.

        // Initialize the hand totals of the player (possibly excessive, but idc. I'm playing it safe)

        playerHandTotal = 0;
        playerHandTotal2 = 0;
        playerSecondHandTotal = 0;
        playerSecondHandTotal2 = 0;

        playerHandAces = 0;
        playerHand2Aces = 0;

        dealerHandTotal = 0;
        dealerHandTotal2 = 0;

        dealerHandAces = 0;

        for(i=0; i<20; i++)
        {
            if(playerHand[i] == 1)
            {
                playerHandAces = 1;
                playerHandTotal = (playerHandTotal + 1);
                if (playerHandTotal2 <= 10)
                {
                    playerHandTotal2 = (playerHandTotal2 + 11);                    
                }
                else
                {
                    playerHandTotal2 = (playerHandTotal2 + 1);
                }

            }
            else
            {
                playerHandTotal = (playerHandTotal + playerHandValue[i]);
                playerHandTotal2 = (playerHandTotal2 + playerHandValue[i]);
            }
        }

        for(i=0; i<20; i++)
        {
            if(playerSecondHand[i] == 1)
            {
                playerHand2Aces = 1;
                playerSecondHandTotal = (playerSecondHandTotal + 1);
                if (playerSecondHandTotal2 <= 10)
                {
                    playerSecondHandTotal2 = (playerSecondHandTotal2 + 11);                    
                }
                else
                {
                    playerSecondHandTotal2 = (playerSecondHandTotal2 + 1);
                }

            }
            else
            {
                playerSecondHandTotal = (playerSecondHandTotal + playerSecondHandValue[i]);
                playerSecondHandTotal2 = (playerSecondHandTotal2 + playerSecondHandValue[i]);
            }
        }

        printf("\n\nPRESS ENTER TO REVEAL DEALT CARDS.\n\n");

        for(i=0; i<20; i++)
        {
            if(dealerHand[i] == 1)
            {
                dealerHandAces = 1;
                dealerHandTotal = (dealerHandTotal + 1);
                if (dealerHandTotal2 <= 10)
                {
                    dealerHandTotal2 = (dealerHandTotal2 + 11);                    
                }
                else
                {
                    dealerHandTotal2 = (dealerHandTotal2 + 1);
                }

            }
            else
            {
                dealerHandTotal = (dealerHandTotal + dealerHandValue[i]);
                dealerHandTotal2 = (dealerHandTotal2 + dealerHandValue[i]);
            }
        }

        for(i=2; i<20; i++)
        {
            if (((dealerHandTotal < 17) && (dealerHandTotal2 <= 17)) || (dealerHandTotal < 17))
            {
                dealerHand[i] = (printRandoms(lower, upper, count));
                dealerHandValue[i] = cardValuation(dealerHand[i]);
                while (enterKeyPress != '\r' && enterKeyPress != '\n') { enterKeyPress = getchar(); }
                enterKeyPress = 0;
                pairNum = (pairRandom(pairLower, pairUpper, count));
                if (pairNum == 1)
                {
                    Sleep(0);
                }
                else
                {
                    sleepNum = (sleepRandom(sleepLower, sleepUpper, count));
                    Sleep(sleepNum);
                }

            }

            if(dealerHand[i] == 1)
            {
                dealerHandAces = 1;
                dealerHandTotal = (dealerHandTotal + 1);
                if (dealerHandTotal2 <= 10)
                {
                    dealerHandTotal2 = (dealerHandTotal2 + 11);                    
                }
                else
                {
                    dealerHandTotal2 = (dealerHandTotal2 + 1);
                }

            }
            else
            {
                dealerHandTotal = (dealerHandTotal + dealerHandValue[i]);
                dealerHandTotal2 = (dealerHandTotal2 + dealerHandValue[i]);
            }
        }

        printf("\n\n");

        // Displays user money
        printf("CASH: $");
        printfspace2(playerData.money);
        printf("\t\t\t");

        // Displays current table's minimum and maximum bets (settings)
        printf("MINIMUM: $");
        printfspace2(activeTableMin);
        printf("\t\t");
        printf("MAXIMUM: $");
        printfspace2(activeTableMax);
        printf("\t\t");
        printf("MAX PAIR BET: $");
        printfspace2(activeTablePairMax);
        printf("\t\t\tFINISH THE ROUND TO RETURN TO MAIN MENU!");
        printf("\nCURRENT MAIN WAGER: $");
        printfspace2(playerData.mainBet);
        if ((playerHandTotal == 21 || playerHandTotal2 == 21))
        {
            printf(" (BLACKJACK!)");
        }
        else if (playerHandTotal > 21)
        {
            printf(" (LOST)");
        }    
        else
        {
            printf(" (STAND)");
        }
        if (splitHandCheck == 1)
        {
            printf("\nCURRENT SPLIT BET: $");
            printfspace2(playerData.splitBet);
            if ((playerSecondHandTotal == 21 || playerSecondHandTotal2 == 21))
            {
                printf(" (BLACKJACK!)");
            }
            else if (playerSecondHandTotal > 21)
            {
                printf(" (LOST)");
            }    
            else
            {
                printf(" (STAND)");
            }
        }
        else
        {
            // Prints nothing
        }
        printf("\t\t");
        printf("\n\n\n\n");

        printf("\t\t\t\t\t\t\tDEALER'S HAND:\t");
        cardPrintf(dealerHand[0]);
        Sleep(500);
        cardPrintf(dealerHand[1]);  
        Sleep(500);
        for (i=2; i<20; i++)
        {
            cardPrintf(dealerHand[i]);
            if (dealerHand[i] != 0)
            {
                Sleep(500);
            }
            else
            {
                // Prints nothing
            }    
        }
        if ((dealerHandTotal == 21 || dealerHandTotal2 == 21))
        {
            printf("\t\t(BLACKJACK!)");
        }
        else if (dealerHandTotal > 21)
        {
            printf("\t\t(BUSTED!)");
        }
        else
        {
            printf("\t\t(STAND)");
        }
        printf("\n\n\n");

        printf("\t\t\t\t\t\t\tPLAYER'S HAND:\t");
        cardPrintf(playerHand[0]);
        for(i=1; i<20; i++)
        {
            cardPrintf(playerHand[i]);
        }
        if ((playerHandTotal == 21 || playerHandTotal2 == 21))
        {
            printf("\t\t(BLACKJACK!)");
        }
        else if (playerHandTotal > 21)
        {
            printf("\t\t(BUSTED!)");
        }
        else
        {
            printf("\t\t(STAND)");
        }

        if(splitHandCheck == 1)
        {
            printf("\n\t\t\t\t\t\t\tPLAYER'S SECOND HAND:\t");
            cardPrintf(playerSecondHand[0]);
            for (i=1; i<20; i++)
            {
                cardPrintf(playerSecondHand[i]);
            }
            if ((playerSecondHandTotal == 21 || playerSecondHandTotal2 == 21))
            {
                printf("\t\t(BLACKJACK!)");
            }
            else if (playerSecondHandTotal > 21)
            {
                printf("\t\t(BUSTED!)");
            }
            else
            {
                printf("\t\t(STAND)");
            }

        }
        else
        {
            // Prints nothing
        }

        if ((playerHandTotal2<22 && playerHandAces == 1) && (playerHandTotal != playerHandTotal2))
        {
            printf("\n\nYOUR HAND TOTAL: %d/%d\n", playerHandTotal, playerHandTotal2);
        }
        else
        {
            printf("\n\nYOUR HAND TOTAL: %d", playerHandTotal);
        }
        
        if (splitHandCheck == 1)
        {
            if((playerSecondHandTotal2<22 && playerHand2Aces == 1) && (playerSecondHandTotal != playerSecondHandTotal2))
            {
                printf("\nSPLIT HAND TOTAL: %d/%d\n", playerSecondHandTotal, playerSecondHandTotal2);
            }
            else
            {
                printf("\nSPLIT HAND TOTAL: %d", playerSecondHandTotal);
            }  
        }
        else
        {
            // Prints nothing
        }
        
        if ((dealerHandTotal2<22 && dealerHandAces == 1) && (dealerHandTotal != dealerHandTotal2))
        {
            printf("\n\nDEALER HAND TOTAL: %d/%d\n", dealerHandTotal, dealerHandTotal2);
        }
        else
        {
            printf("\n\nDEALER HAND TOTAL: %d", dealerHandTotal);
        }

        if (dealerHandTotal > 21) // CHECKS FOR DEALER BUST
        {
            if (splitHandCheck == 1)
            {
                if (playerHandTotal > 21) // FIRST HAND BUST
                {
                    // Rewards Split Hand
                    Sleep(2000);
                    printf("\n\nHOUSE BUSTED! YOUR SPLIT (SECOND) HAND WINS!\n");
                    printf("RESULT: (WIN!)\n");
                    Sleep(1000);

                    printf("PLAYER HAS WON A 1:1 PAYOUT OF $");
                    printfspace2(playerData.splitBet);
                    printf("!\n");
                    Sleep(2000);

                    playerData.money = (playerData.money + (playerData.splitBet * 2));
                    
                    printf("PLAYER HAS A NEW BALANCE OF: $");
                    printfspace2(playerData.money);
                    printf("\n\n");

                    playerData.splitBet = 0;
                }
                else if (playerSecondHandTotal > 21) // SECOND HAND BUST
                {
                    // Rewards Main Hand
                    Sleep(2000);
                    printf("\n\nHOUSE BUSTED! YOUR MAIN HAND WINS!\n");
                    printf("RESULT: (WIN!)\n");
                    Sleep(1000);

                    printf("PLAYER HAS WON A 1:1 PAYOUT OF $");
                    printfspace2(playerData.mainBet);
                    printf("!\n");
                    Sleep(2000);

                    playerData.money = (playerData.money + (playerData.mainBet * 2));
                    
                    printf("PLAYER HAS A NEW BALANCE OF: $");
                    printfspace2(playerData.money);
                    printf("\n\n");

                    playerData.mainBet = 0;
                }
                else
                {
                    // Rewards Both Hands
                    Sleep(2000);
                    printf("\n\nHOUSE BUSTED! BOTH OF YOUR HANDS WIN!\n");
                    printf("RESULT: (WIN!)\n");
                    Sleep(1000);

                    printf("PLAYER HAS WON A 1:1 TOTAL PAYOUT OF $");
                    printfspace2((playerData.mainBet + playerData.splitBet));
                    printf("!\n");
                    Sleep(2000);

                    playerData.money = (playerData.money + (playerData.mainBet * 2));
                    playerData.money = (playerData.money + (playerData.splitBet * 2));
                    
                    printf("PLAYER HAS A NEW BALANCE OF: $");
                    printfspace2(playerData.money);
                    printf("\n\n");

                    playerData.mainBet = 0;
                    playerData.splitBet = 0;
                }
            }
            else
            {
                // Rwards Main Hand
                Sleep(2000);
                printf("\n\nHOUSE BUSTED! YOUR MAIN HAND WINS!\n");
                printf("RESULT: (WIN!)\n");
                Sleep(1000);

                printf("PLAYER HAS WON A 1:1 PAYOUT OF $");
                printfspace2(playerData.mainBet);
                printf("!\n");
                Sleep(2000);

                playerData.money = (playerData.money + (playerData.mainBet * 2));
                
                printf("PLAYER HAS A NEW BALANCE OF: $");
                printfspace2(playerData.money);
                printf("\n\n");

                playerData.mainBet = 0;
            }

            Sleep(2000);
            printf("\n\n\nSTARTING A NEW ROUND!");
            printf("\n\n\n");
            Sleep(1000);

            goto GameStart;
        }

        if ((dealerHandTotal == 21 || dealerHandTotal2 == 21) && (playerHandTotal == 21 || playerHandTotal2 == 21) && splitHandCheck == 0)
        {
            // Both dealer and player's only hand have Blackjack (push)
            Sleep(2000);
            printf("\n\nTHE DEALER AND THE PLAYER BOTH HAVE BLACKJACK!\n");
            printf("RESULT: (PUSH)\n");
            Sleep(1000);

            printf("PLAYER WILL BE PAID BACK THEIR BET OF $");
            printfspace2(playerData.mainBet);
            printf("!\n");

            Sleep(2000);
            
            playerData.money = (playerData.money + playerData.mainBet);
            printf("PLAYER HAS A NEW BALANCE OF: $");
            printfspace2(playerData.money);
            printf("\n\n");

            playerData.mainBet = 0;

            Sleep(2000);
            printf("\n\n\nSTARTING A NEW ROUND!");
            printf("\n\n\n");
            Sleep(1000);

            goto GameStart;
        }
        else if ((dealerHandTotal == 21 || dealerHandTotal2 == 21) && (playerHandTotal < 21) && splitHandCheck == 0)
        {
            // Dealer has Blackjack but player does not have Blackjack (lose only hand) -- GAME OVER
            Sleep(2000);
            printf("\n\nSORRY, THE DEALER HAS BLACKJACK.\n");
            printf("RESULT: (LOSS)\n");
            Sleep(1000);

            printf("PLAYER LOST THEIR BET OF $");
            printfspace2(playerData.mainBet);
            printf("!\n");
            Sleep(2000);
            
            printf("PLAYER HAS CURRENT BALANCE OF: $");
            printfspace2(playerData.money);
            printf("\n\n");

            playerData.mainBet = 0;

            Sleep(2000);
            printf("\n\n\nSTARTING A NEW ROUND!");
            printf("\n\n\n");
            Sleep(1000);

            goto GameStart;
        }
        else if ((dealerHandTotal != 21 && dealerHandTotal2 != 21) && (playerHandTotal == 21 || playerHandTotal2 == 21) && splitHandCheck == 0)
        {
            // Dealer does not have Blackjack but the player has Blackjack (win on only hand) -- GAME OVER
            Sleep(2000);
            printf("\n\nTHE PLAYER WINS WITH BLACKJACK!\n");
            printf("RESULT: (WIN!)\n");
            Sleep(1000);

            printf("PLAYER HAS WON A 1:1 PAYOUT OF $");
            printfspace2(playerData.mainBet);
            printf("!\n");
            Sleep(2000);

            playerData.money = (playerData.money + (playerData.mainBet * 2));
            
            printf("PLAYER HAS A NEW BALANCE OF: $");
            printfspace2(playerData.money);
            printf("\n\n");

            playerData.mainBet = 0;

            Sleep(2000);
            printf("\n\n\nSTARTING A NEW ROUND!");
            printf("\n\n\n");
            Sleep(1000);

            goto GameStart;
        }
        else if ((playerHandTotal < 21) && (splitHandCheck == 0))
        {
            if ((dealerHandAces == 1 && playerHandAces == 1) && (dealerHandTotal2 < 21 && playerHandTotal2 < 21))
            {
                // Compares HandTotal2s
                if (dealerHandTotal2 > playerHandTotal2)
                {
                    // Player Loss -- GAME OVER
                    Sleep(2000);
                    printf("\n\nSORRY, THE DEALER HAS A HIGHER HAND (%d > %d).\n", dealerHandTotal2, playerHandTotal2);
                    printf("RESULT: (LOSS)\n");
                    Sleep(1000);

                    printf("PLAYER LOST THEIR BET OF $");
                    printfspace2(playerData.mainBet);
                    printf("!\n");
                    Sleep(2000);
                    
                    printf("PLAYER HAS CURRENT BALANCE OF: $");
                    printfspace2(playerData.money);
                    printf("\n\n");

                    playerData.mainBet = 0;

                    Sleep(2000);
                    printf("\n\n\nSTARTING A NEW ROUND!");
                    printf("\n\n\n");
                    Sleep(1000);

                    goto GameStart;
                }
                else if (dealerHandTotal2 == playerHandTotal2)
                {
                    // Draw (PUSH) -- GAME OVER
                    Sleep(2000);
                    printf("\n\nTHE DEALER'S HAND AND THE PLAYER'S HAND TIE!\n");
                    printf("RESULT: (PUSH)\n");
                    Sleep(1000);

                    printf("PLAYER WILL BE PAID BACK THEIR BET OF $");
                    printfspace2(playerData.mainBet);
                    printf("!\n");
                    Sleep(2000);

                    playerData.money = (playerData.money + playerData.mainBet);
                    
                    printf("PLAYER HAS A NEW BALANCE OF: $");
                    printfspace2(playerData.money);
                    printf("\n\n");

                    playerData.mainBet = 0;

                    Sleep(2000);
                    printf("\n\n\nSTARTING A NEW ROUND!");
                    printf("\n\n\n");
                    Sleep(1000);

                    goto GameStart;
                }
                else
                {
                    // Player Win -- GAME OVER
                    Sleep(2000);
                    printf("\n\nTHE PLAYER WINS WITH A HIGHER HAND (%d < %d)!\n", dealerHandTotal2, playerHandTotal2);
                    printf("RESULT: (WIN!)\n");
                    Sleep(1000);

                    printf("PLAYER HAS WON A 1:1 PAYOUT OF $");
                    printfspace2(playerData.mainBet);
                    printf("!\n");
                    Sleep(2000);

                    playerData.money = (playerData.money + (playerData.mainBet * 2));
                    
                    printf("PLAYER HAS A NEW BALANCE OF: $");
                    printfspace2(playerData.money);
                    printf("\n\n");

                    playerData.mainBet = 0;

                    Sleep(2000);
                    printf("\n\n\nSTARTING A NEW ROUND!");
                    printf("\n\n\n");
                    Sleep(1000);

                    goto GameStart;
                }
            }
            else if ((dealerHandAces == 1 && playerHandAces == 0) && dealerHandTotal2 < 21)
            {
                // Compares dealerHandTotal2 with playerHandTotal
                if (dealerHandTotal2 > playerHandTotal)
                {
                    // Player Loss -- GAME OVER
                    Sleep(2000);
                    printf("\n\nSORRY, THE DEALER HAS A HIGHER HAND (%d > %d).\n", dealerHandTotal2, playerHandTotal);
                    printf("RESULT: (LOSS)\n");
                    Sleep(1000);

                    printf("PLAYER LOST THEIR BET OF $");
                    printfspace2(playerData.mainBet);
                    printf("!\n");
                    Sleep(2000);
                    
                    printf("PLAYER HAS CURRENT BALANCE OF: $");
                    printfspace2(playerData.money);
                    printf("\n\n");

                    playerData.mainBet = 0;

                    Sleep(2000);
                    printf("\n\n\nSTARTING A NEW ROUND!");
                    printf("\n\n\n");
                    Sleep(1000);

                    goto GameStart;
                }
                else if (dealerHandTotal2 == playerHandTotal)
                {
                    // Draw (PUSH) -- GAME OVER
                    Sleep(2000);
                    printf("\n\nTHE DEALER'S HAND AND THE PLAYER'S HAND TIE!\n");
                    printf("RESULT: (PUSH)\n");
                    Sleep(1000);

                    printf("PLAYER WILL BE PAID BACK THEIR BET OF $");
                    printfspace2(playerData.mainBet);
                    printf("!\n");
                    Sleep(2000);

                    playerData.money = (playerData.money + playerData.mainBet);
                    
                    printf("PLAYER HAS A NEW BALANCE OF: $");
                    printfspace2(playerData.money);
                    printf("\n\n");

                    playerData.mainBet = 0;

                    Sleep(2000);
                    printf("\n\n\nSTARTING A NEW ROUND!");
                    printf("\n\n\n");
                    Sleep(1000);

                    goto GameStart;
                }
                else
                {
                    // Player Win -- GAME OVER
                    Sleep(2000);
                    printf("\n\nTHE PLAYER WINS WITH A HIGHER HAND (%d < %d)!\n", dealerHandTotal2, playerHandTotal);
                    printf("RESULT: (WIN!)\n");
                    Sleep(1000);

                    printf("PLAYER HAS WON A 1:1 PAYOUT OF $");
                    printfspace2(playerData.mainBet);
                    printf("!\n");
                    Sleep(2000);

                    playerData.money = (playerData.money + (playerData.mainBet * 2));
                    
                    printf("PLAYER HAS A NEW BALANCE OF: $");
                    printfspace2(playerData.money);
                    printf("\n\n");

                    playerData.mainBet = 0;

                    Sleep(2000);
                    printf("\n\n\nSTARTING A NEW ROUND!");
                    printf("\n\n\n");
                    Sleep(1000);

                    goto GameStart;
                }
            }
            else if ((dealerHandAces == 0 && playerHandAces == 1) && playerHandTotal2 < 21)
            {
                // Compares dealerHandTotal with playerHandTotal2
                if (dealerHandTotal > playerHandTotal2)
                {
                    // Player Loss -- GAME OVER
                    Sleep(2000);
                    printf("\n\nSORRY, THE DEALER HAS A HIGHER HAND (%d > %d).\n", dealerHandTotal, playerHandTotal2);
                    printf("RESULT: (LOSS)\n");
                    Sleep(1000);

                    printf("PLAYER LOST THEIR BET OF $");
                    printfspace2(playerData.mainBet);
                    printf("!\n");
                    Sleep(2000);
                    
                    printf("PLAYER HAS CURRENT BALANCE OF: $");
                    printfspace2(playerData.money);
                    printf("\n\n");

                    playerData.mainBet = 0;

                    Sleep(2000);
                    printf("\n\n\nSTARTING A NEW ROUND!");
                    printf("\n\n\n");
                    Sleep(1000);

                    goto GameStart;
                }
                else if (dealerHandTotal == playerHandTotal2)
                {
                    // Draw (PUSH) -- GAME OVER
                    Sleep(2000);
                    printf("\n\nTHE DEALER'S HAND AND THE PLAYER'S HAND TIE!\n");
                    printf("RESULT: (PUSH)\n");
                    Sleep(1000);

                    printf("PLAYER WILL BE PAID BACK THEIR BET OF $");
                    printfspace2(playerData.mainBet);
                    printf("!\n");
                    Sleep(2000);

                    playerData.money = (playerData.money + playerData.mainBet);
                    
                    printf("PLAYER HAS A NEW BALANCE OF: $");
                    printfspace2(playerData.money);
                    printf("\n\n");

                    playerData.mainBet = 0;

                    Sleep(2000);
                    printf("\n\n\nSTARTING A NEW ROUND!");
                    printf("\n\n\n");
                    Sleep(1000);

                    goto GameStart;
                }
                else
                {
                    // Player Win -- GAME OVER
                    Sleep(2000);
                    printf("\n\nTHE PLAYER WINS WITH A HIGHER HAND (%d < %d)!\n", dealerHandTotal, playerHandTotal2);
                    printf("RESULT: (WIN!)\n");
                    Sleep(1000);

                    printf("PLAYER HAS WON A 1:1 PAYOUT OF $");
                    printfspace2(playerData.mainBet);
                    printf("!\n");
                    Sleep(2000);

                    playerData.money = (playerData.money + (playerData.mainBet * 2));
                    
                    printf("PLAYER HAS A NEW BALANCE OF: $");
                    printfspace2(playerData.money);
                    printf("\n\n");

                    playerData.mainBet = 0;

                    Sleep(2000);
                    printf("\n\n\nSTARTING A NEW ROUND!");
                    printf("\n\n\n");
                    Sleep(1000);

                    goto GameStart;
                }
            }
            else
            {
                // Comapres HandTotals
                if (dealerHandTotal > playerHandTotal)
                {
                    // Player Loss -- GAME OVER
                    Sleep(2000);
                    printf("\n\nSORRY, THE DEALER HAS A HIGHER HAND (%d > %d).\n", dealerHandTotal, playerHandTotal);
                    printf("RESULT: (LOSS)\n");
                    Sleep(1000);

                    printf("PLAYER LOST THEIR BET OF $");
                    printfspace2(playerData.mainBet);
                    printf("!\n");
                    Sleep(2000);
                    
                    printf("PLAYER HAS CURRENT BALANCE OF: $");
                    printfspace2(playerData.money);
                    printf("\n\n");

                    playerData.mainBet = 0;

                    Sleep(2000);
                    printf("\n\n\nSTARTING A NEW ROUND!");
                    printf("\n\n\n");
                    Sleep(1000);

                    goto GameStart;
                }
                else if (dealerHandTotal == playerHandTotal)
                {
                    // Draw (PUSH) -- GAME OVER
                    Sleep(2000);
                    printf("\n\nTHE DEALER'S HAND AND THE PLAYER'S HAND TIE!\n");
                    printf("RESULT: (PUSH)\n");
                    Sleep(1000);

                    printf("PLAYER WILL BE PAID BACK THEIR BET OF $");
                    printfspace2(playerData.mainBet);
                    printf("!\n");
                    Sleep(2000);

                    playerData.money = (playerData.money + playerData.mainBet);
                    
                    printf("PLAYER HAS A NEW BALANCE OF: $");
                    printfspace2(playerData.money);
                    printf("\n\n");

                    playerData.mainBet = 0;

                    Sleep(2000);
                    printf("\n\n\nSTARTING A NEW ROUND!");
                    printf("\n\n\n");
                    Sleep(1000);

                    goto GameStart;
                }
                else
                {
                    // Player Win -- GAME OVER
                    Sleep(2000);
                    printf("\n\nTHE PLAYER WINS WITH A HIGHER HAND (%d < %d)!\n", dealerHandTotal, playerHandTotal);
                    printf("RESULT: (WIN!)\n");
                    Sleep(1000);

                    printf("PLAYER HAS WON A 1:1 PAYOUT OF $");
                    printfspace2(playerData.mainBet);
                    printf("!\n");
                    Sleep(2000);

                    playerData.money = (playerData.money + (playerData.mainBet * 2));
                    
                    printf("PLAYER HAS A NEW BALANCE OF: $");
                    printfspace2(playerData.money);
                    printf("\n\n");

                    playerData.mainBet = 0;

                    Sleep(2000);
                    printf("\n\n\nSTARTING A NEW ROUND!");
                    printf("\n\n\n");
                    Sleep(1000);

                    goto GameStart;
                }
            }
        }

        else if ((dealerHandTotal == 21 || dealerHandTotal2 == 21) && (playerHandTotal == 21 || playerHandTotal2 == 21) && splitHandCheck == 1)
        {
            // Both dealer and player have Blackjack (push), but player has second hand -- Continue Showdown
            Sleep(2000);
            printf("\n\nTHE DEALER AND THE PLAYER BOTH HAVE BLACKJACK!\n");
            printf("RESULT: (PUSH)\n");
            Sleep(1000);

            printf("PLAYER WILL BE PAID BACK THEIR BET OF $");
            printfspace2(playerData.mainBet);
            printf("!\n");

            Sleep(2000);
            
            playerData.money = (playerData.money + playerData.mainBet);
            printf("PLAYER HAS A NEW BALANCE OF: $");
            printfspace2(playerData.money);
            printf("\n\n");

            playerData.mainBet = 0;

            Sleep(2000);
            printf("\n\n\nNOW COMPARING SPLIT (SECOND) HAND!");
            printf("\n\n\n");

        }
        else if ((dealerHandTotal == 21 || dealerHandTotal2 == 21) && (playerHandTotal < 21) && splitHandCheck == 1)
        {
            // Dealer has Blackjack but player does not have Blackjack (lose first hand), but has second hand -- Continue Showdown
            Sleep(2000);
            printf("\n\nSORRY, THE DEALER HAS BLACKJACK.\n");
            printf("RESULT: (LOSS)\n");
            Sleep(1000);

            printf("PLAYER LOST THEIR BET OF $");
            printfspace2(playerData.mainBet);
            printf("!\n");
            Sleep(2000);
            
            printf("PLAYER HAS CURRENT BALANCE OF: $");
            printfspace2(playerData.money);
            printf("\n\n");

            playerData.mainBet = 0;

            Sleep(2000);
            printf("\n\n\nNOW COMPARING SPLIT (SECOND) HAND!");
            printf("\n\n\n");

        }
        else if ((dealerHandTotal != 21 && dealerHandTotal2 != 21) && (playerHandTotal == 21 || playerHandTotal2 == 21) && splitHandCheck == 1)
        {
            // Dealer does not have Blackjack but the player has Blackjack (win first hand) -- Continue Showdown
            Sleep(2000);
            printf("\n\nTHE PLAYER WINS WITH BLACKJACK!\n");
            printf("RESULT: (WIN!)\n");
            Sleep(1000);

            printf("PLAYER HAS WON A 1:1 PAYOUT OF $");
            printfspace2(playerData.mainBet);
            printf("!\n");
            Sleep(2000);

            playerData.money = (playerData.money + (playerData.mainBet * 2));
            
            printf("PLAYER HAS A NEW BALANCE OF: $");
            printfspace2(playerData.money);
            printf("\n\n");

            playerData.mainBet = 0;

            Sleep(2000);
            printf("\n\n\nNOW COMPARING SPLIT (SECOND) HAND!");
            printf("\n\n\n");

        }
        else if ((playerHandTotal < 21) && (splitHandCheck == 1))
        {
            if ((dealerHandAces == 1 && playerHandAces == 1) && (dealerHandTotal2 < 21 && playerHandTotal2 < 21))
            {
                // Compares HandTotal2s
                if (dealerHandTotal2 > playerHandTotal2)
                {
                    // Player Loss -- Continue Showdown
                    Sleep(2000);
                    printf("\n\nSORRY, THE DEALER HAS A HIGHER HAND (%d > %d).\n", dealerHandTotal2, playerHandTotal2);
                    printf("RESULT: (LOSS)\n");
                    Sleep(1000);

                    printf("PLAYER LOST THEIR BET OF $");
                    printfspace2(playerData.mainBet);
                    printf("!\n");
                    Sleep(2000);
                    
                    printf("PLAYER HAS CURRENT BALANCE OF: $");
                    printfspace2(playerData.money);
                    printf("\n\n");

                    playerData.mainBet = 0;
                    
                    Sleep(2000);
                    printf("\n\n\nNOW COMPARING SPLIT (SECOND) HAND!");
                    printf("\n\n\n");

                }
                else if (dealerHandTotal2 == playerHandTotal2)
                {
                    // Draw (PUSH) -- Continue Showdown
                    Sleep(2000);
                    printf("\n\nTHE DEALER'S HAND AND THE PLAYER'S HAND TIE!\n");
                    printf("RESULT: (PUSH)\n");
                    Sleep(1000);

                    printf("PLAYER WILL BE PAID BACK THEIR BET OF $");
                    printfspace2(playerData.mainBet);
                    printf("!\n");
                    Sleep(2000);

                    playerData.money = (playerData.money + playerData.mainBet);
                    
                    printf("PLAYER HAS A NEW BALANCE OF: $");
                    printfspace2(playerData.money);
                    printf("\n\n");

                    playerData.mainBet = 0;

                    Sleep(2000);
                    printf("\n\n\nNOW COMPARING SPLIT (SECOND) HAND!");
                    printf("\n\n\n");

                }
                else
                {
                    // Player Win -- Continue Showdown
                    Sleep(2000);
                    printf("\n\nTHE PLAYER WINS WITH A HIGHER HAND (%d < %d)!\n", dealerHandTotal2, playerHandTotal2);
                    printf("RESULT: (WIN!)\n");
                    Sleep(1000);

                    printf("PLAYER HAS WON A 1:1 PAYOUT OF $");
                    printfspace2(playerData.mainBet);
                    printf("!\n");
                    Sleep(2000);

                    playerData.money = (playerData.money + (playerData.mainBet * 2));
                    
                    printf("PLAYER HAS A NEW BALANCE OF: $");
                    printfspace2(playerData.money);
                    printf("\n\n");

                    playerData.mainBet = 0;

                    Sleep(2000);
                    printf("\n\n\nNOW COMPARING SPLIT (SECOND) HAND!");
                    printf("\n\n\n");

                }
            }
            else if ((dealerHandAces == 1 && playerHandAces == 0) && dealerHandTotal2 < 21)
            {
                // Compares dealerHandTotal2 with playerHandTotal
                if (dealerHandTotal2 > playerHandTotal)
                {
                    // Player Loss -- Continue Showdown
                    Sleep(2000);
                    printf("\n\nSORRY, THE DEALER HAS A HIGHER HAND (%d > %d).\n", dealerHandTotal2, playerHandTotal);
                    printf("RESULT: (LOSS)\n");
                    Sleep(1000);

                    printf("PLAYER LOST THEIR BET OF $");
                    printfspace2(playerData.mainBet);
                    printf("!\n");
                    Sleep(2000);
                    
                    printf("PLAYER HAS CURRENT BALANCE OF: $");
                    printfspace2(playerData.money);
                    printf("\n\n");

                    playerData.mainBet = 0;
                    
                    Sleep(2000);
                    printf("\n\n\nNOW COMPARING SPLIT (SECOND) HAND!");
                    printf("\n\n\n");
                }
                else if (dealerHandTotal2 == playerHandTotal)
                {
                    // Draw (PUSH) -- Continue Showdown
                    Sleep(2000);
                    printf("\n\nTHE DEALER'S HAND AND THE PLAYER'S HAND TIE!\n");
                    printf("RESULT: (PUSH)\n");
                    Sleep(1000);

                    printf("PLAYER WILL BE PAID BACK THEIR BET OF $");
                    printfspace2(playerData.mainBet);
                    printf("!\n");
                    Sleep(2000);

                    playerData.money = (playerData.money + playerData.mainBet);
                    
                    printf("PLAYER HAS A NEW BALANCE OF: $");
                    printfspace2(playerData.money);
                    printf("\n\n");

                    playerData.mainBet = 0;

                    Sleep(2000);
                    printf("\n\n\nNOW COMPARING SPLIT (SECOND) HAND!");
                    printf("\n\n\n");

                }
                else
                {
                    // Player Win -- Continue Showdown
                    Sleep(2000);
                    printf("\n\nTHE PLAYER WINS WITH A HIGHER HAND (%d < %d)!\n", dealerHandTotal2, playerHandTotal);
                    printf("RESULT: (WIN!)\n");
                    Sleep(1000);

                    printf("PLAYER HAS WON A 1:1 PAYOUT OF $");
                    printfspace2(playerData.mainBet);
                    printf("!\n");
                    Sleep(2000);

                    playerData.money = (playerData.money + (playerData.mainBet * 2));
                    
                    printf("PLAYER HAS A NEW BALANCE OF: $");
                    printfspace2(playerData.money);
                    printf("\n\n");

                    playerData.mainBet = 0;

                    Sleep(2000);
                    printf("\n\n\nNOW COMPARING SPLIT (SECOND) HAND!");
                    printf("\n\n\n");
                }
            }
            else if ((dealerHandAces == 0 && playerHandAces == 1) && playerHandTotal2 < 21)
            {
                // Compares dealerHandTotal with playerHandTotal2
                if (dealerHandTotal > playerHandTotal2)
                {
                    // Player Loss -- Continue Showdown
                    Sleep(2000);
                    printf("\n\nSORRY, THE DEALER HAS A HIGHER HAND (%d > %d).\n", dealerHandTotal, playerHandTotal2);
                    printf("RESULT: (LOSS)\n");
                    Sleep(1000);

                    printf("PLAYER LOST THEIR BET OF $");
                    printfspace2(playerData.mainBet);
                    printf("!\n");
                    Sleep(2000);
                    
                    printf("PLAYER HAS CURRENT BALANCE OF: $");
                    printfspace2(playerData.money);
                    printf("\n\n");

                    playerData.mainBet = 0;
                    
                    Sleep(2000);
                    printf("\n\n\nNOW COMPARING SPLIT (SECOND) HAND!");
                    printf("\n\n\n");
                }
                else if (dealerHandTotal == playerHandTotal2)
                {
                    // Draw (PUSH) -- Continue Showdown
                    Sleep(2000);
                    printf("\n\nTHE DEALER'S HAND AND THE PLAYER'S HAND TIE!\n");
                    printf("RESULT: (PUSH)\n");
                    Sleep(1000);

                    printf("PLAYER WILL BE PAID BACK THEIR BET OF $");
                    printfspace2(playerData.mainBet);
                    printf("!\n");
                    Sleep(2000);

                    playerData.money = (playerData.money + playerData.mainBet);
                    
                    printf("PLAYER HAS A NEW BALANCE OF: $");
                    printfspace2(playerData.money);
                    printf("\n\n");

                    playerData.mainBet = 0;

                    Sleep(2000);
                    printf("\n\n\nNOW COMPARING SPLIT (SECOND) HAND!");
                    printf("\n\n\n");

                }
                else
                {
                    // Player Win -- Continue Showdown
                    Sleep(2000);
                    printf("\n\nTHE PLAYER WINS WITH A HIGHER HAND (%d < %d)!\n", dealerHandTotal, playerHandTotal2);
                    printf("RESULT: (WIN!)\n");
                    Sleep(1000);

                    printf("PLAYER HAS WON A 1:1 PAYOUT OF $");
                    printfspace2(playerData.mainBet);
                    printf("!\n");
                    Sleep(2000);

                    playerData.money = (playerData.money + (playerData.mainBet * 2));
                    
                    printf("PLAYER HAS A NEW BALANCE OF: $");
                    printfspace2(playerData.money);
                    printf("\n\n");

                    playerData.mainBet = 0;

                    Sleep(2000);
                    printf("\n\n\nNOW COMPARING SPLIT (SECOND) HAND!");
                    printf("\n\n\n");
                }
            }
            else
            {
                // Comapres HandTotals
                if (dealerHandTotal > playerHandTotal)
                {
                    // Player Loss -- Continue Showdown
                    Sleep(2000);
                    printf("\n\nSORRY, THE DEALER HAS A HIGHER HAND (%d > %d).\n", dealerHandTotal, playerHandTotal);
                    printf("RESULT: (LOSS)\n");
                    Sleep(1000);

                    printf("PLAYER LOST THEIR BET OF $");
                    printfspace2(playerData.mainBet);
                    printf("!\n");
                    Sleep(2000);
                    
                    printf("PLAYER HAS CURRENT BALANCE OF: $");
                    printfspace2(playerData.money);
                    printf("\n\n");

                    playerData.mainBet = 0;
                    
                    Sleep(2000);
                    printf("\n\n\nNOW COMPARING SPLIT (SECOND) HAND!");
                    printf("\n\n\n");
                }
                else if (dealerHandTotal == playerHandTotal)
                {
                    // Draw (PUSH) -- Continue Showdown
                    Sleep(2000);
                    printf("\n\nTHE DEALER'S HAND AND THE PLAYER'S HAND TIE!\n");
                    printf("RESULT: (PUSH)\n");
                    Sleep(1000);

                    printf("PLAYER WILL BE PAID BACK THEIR BET OF $");
                    printfspace2(playerData.mainBet);
                    printf("!\n");
                    Sleep(2000);

                    playerData.money = (playerData.money + playerData.mainBet);
                    
                    printf("PLAYER HAS A NEW BALANCE OF: $");
                    printfspace2(playerData.money);
                    printf("\n\n");

                    playerData.mainBet = 0;

                    Sleep(2000);
                    printf("\n\n\nNOW COMPARING SPLIT (SECOND) HAND!");
                    printf("\n\n\n");

                }
                else
                {
                    // Player Win -- Continue Showdown
                    Sleep(2000);
                    printf("\n\nTHE PLAYER WINS WITH A HIGHER HAND (%d < %d)!\n", dealerHandTotal, playerHandTotal);
                    printf("RESULT: (WIN!)\n");
                    Sleep(1000);

                    printf("PLAYER HAS WON A 1:1 PAYOUT OF $");
                    printfspace2(playerData.mainBet);
                    printf("!\n");
                    Sleep(2000);

                    playerData.money = (playerData.money + (playerData.mainBet * 2));
                    
                    printf("PLAYER HAS A NEW BALANCE OF: $");
                    printfspace2(playerData.money);
                    printf("\n\n");

                    playerData.mainBet = 0;

                    Sleep(2000);
                    printf("\n\n\nNOW COMPARING SPLIT (SECOND) HAND!");
                    printf("\n\n\n");
                }
            }
        }
        else
        {
            Sleep(2000);
            printf("\n\nYOUR MAIN HAND COULD NOT BE COMPARED (BUSTED!)");
            Sleep(2000);
            printf("\n\n\nNOW COMPARING SPLIT (SECOND) HAND!");
            printf("\n\n\n");
        }

        
        if ((dealerHandTotal == 21 || dealerHandTotal2 == 21) && (playerSecondHandTotal == 21 || playerSecondHandTotal2 == 21) && splitHandCheck == 1)
        {
            // Both dealer and player's only hand have Blackjack (push second hand) -- GAME OVER
            Sleep(2000);
            printf("\n\nTHE DEALER AND THE PLAYER'S SPLIT HAND BOTH HAVE BLACKJACK!\n");
            printf("RESULT: (PUSH)\n");
            Sleep(1000);

            printf("PLAYER WILL BE PAID BACK THEIR SPLIT BET OF $");
            printfspace2(playerData.splitBet);
            printf("!\n");

            Sleep(2000);
            
            playerData.money = (playerData.money + playerData.splitBet);
            printf("PLAYER HAS A NEW BALANCE OF: $");
            printfspace2(playerData.money);
            printf("\n\n");

            playerData.splitBet = 0;

            Sleep(2000);
            printf("\n\n\nSTARTING A NEW ROUND!");
            printf("\n\n\n");
            Sleep(1000);

            goto GameStart;
        }
        else if ((dealerHandTotal == 21 || dealerHandTotal2 == 21) && (playerSecondHandTotal < 21) && splitHandCheck == 1)
        {
            // Dealer has Blackjack but player does not have Blackjack (lose second hand) -- GAME OVER
            Sleep(2000);
            printf("\n\nSORRY, THE DEALER HAS BLACKJACK.\n");
            printf("RESULT: (LOSS)\n");
            Sleep(1000);

            printf("PLAYER LOST THEIR SPLIT BET OF $");
            printfspace2(playerData.splitBet);
            printf("!\n");
            Sleep(2000);
            
            printf("PLAYER HAS CURRENT BALANCE OF: $");
            printfspace2(playerData.money);
            printf("\n\n");

            playerData.splitBet = 0;

            Sleep(2000);
            printf("\n\n\nSTARTING A NEW ROUND!");
            printf("\n\n\n");
            Sleep(1000);

            goto GameStart;
        }
        else if ((dealerHandTotal != 21 && dealerHandTotal2 != 21) && (playerSecondHandTotal == 21 || playerSecondHandTotal2 == 21) && splitHandCheck == 1)
        {
            // Dealer does not have Blackjack but the player has Blackjack (win second hand) -- GAME OVER
            Sleep(2000);
            printf("\n\nTHE PLAYER WINS WITH BLACKJACK!\n");
            printf("RESULT: (WIN!)\n");
            Sleep(1000);

            printf("PLAYER HAS WON A 1:1 PAYOUT OF $");
            printfspace2(playerData.splitBet);
            printf("!\n");
            Sleep(2000);

            playerData.money = (playerData.money + (playerData.splitBet * 2));
            
            printf("PLAYER HAS A NEW BALANCE OF: $");
            printfspace2(playerData.money);
            printf("\n\n");

            playerData.splitBet = 0;

            Sleep(2000);
            printf("\n\n\nSTARTING A NEW ROUND!");
            printf("\n\n\n");
            Sleep(1000);

            goto GameStart;
        }
        else if ((playerSecondHandTotal < 21) && (splitHandCheck == 1))
        {
            if ((dealerHandAces == 1 && playerHand2Aces == 1) && (dealerHandTotal2 < 21 && playerSecondHandTotal2 < 21))
            {
                // Compares HandTotal2s (Second)
                if (dealerHandTotal2 > playerSecondHandTotal2)
                {
                    // Player Loss -- GAME OVER
                    Sleep(2000);
                    printf("\n\nSORRY, THE DEALER HAS A HIGHER HAND (%d > %d).\n", dealerHandTotal2, playerSecondHandTotal2);
                    printf("RESULT: (LOSS)\n");
                    Sleep(1000);

                    printf("PLAYER LOST THEIR SPLIT BET OF $");
                    printfspace2(playerData.splitBet);
                    printf("!\n");
                    Sleep(2000);
                    
                    printf("PLAYER HAS CURRENT BALANCE OF: $");
                    printfspace2(playerData.money);
                    printf("\n\n");

                    playerData.splitBet = 0;

                    Sleep(2000);
                    printf("\n\n\nSTARTING A NEW ROUND!");
                    printf("\n\n\n");
                    Sleep(1000);

                    goto GameStart;
                }
                else if (dealerHandTotal2 == playerSecondHandTotal2)
                {
                    // Draw (PUSH) -- GAME OVER
                    Sleep(2000);
                    printf("\n\nTHE DEALER'S HAND AND THE PLAYER'S SPLIT HAND TIE!\n");
                    printf("RESULT: (PUSH)\n");
                    Sleep(1000);

                    printf("PLAYER WILL BE PAID BACK THEIR SPLIT BET OF $");
                    printfspace2(playerData.splitBet);
                    printf("!\n");
                    Sleep(2000);

                    playerData.money = (playerData.money + playerData.splitBet);
                    
                    printf("PLAYER HAS A NEW BALANCE OF: $");
                    printfspace2(playerData.money);
                    printf("\n\n");

                    playerData.splitBet = 0;

                    Sleep(2000);
                    printf("\n\n\nSTARTING A NEW ROUND!");
                    printf("\n\n\n");
                    Sleep(1000);

                    goto GameStart;
                }
                else
                {
                    // Player Win -- GAME OVER
                    Sleep(2000);
                    printf("\n\nTHE PLAYER WINS WITH A HIGHER HAND (%d < %d)!\n", dealerHandTotal2, playerSecondHandTotal2);
                    printf("RESULT: (WIN!)\n");
                    Sleep(1000);

                    printf("PLAYER HAS WON A 1:1 PAYOUT OF $");
                    printfspace2(playerData.splitBet);
                    printf("!\n");
                    Sleep(2000);

                    playerData.money = (playerData.money + (playerData.splitBet * 2));
                    
                    printf("PLAYER HAS A NEW BALANCE OF: $");
                    printfspace2(playerData.money);
                    printf("\n\n");

                    playerData.splitBet = 0;

                    Sleep(2000);
                    printf("\n\n\nSTARTING A NEW ROUND!");
                    printf("\n\n\n");
                    Sleep(1000);

                    goto GameStart;
                }
            }
            else if ((dealerHandAces == 1 && playerHand2Aces == 0) && dealerHandTotal2 < 21)
            {
                // Compares dealerHandTotal2 with playerSecondHandTotal
                if (dealerHandTotal2 > playerSecondHandTotal)
                {
                    // Player Loss -- GAME OVER
                    Sleep(2000);
                    printf("\n\nSORRY, THE DEALER HAS A HIGHER HAND (%d > %d).\n", dealerHandTotal2, playerSecondHandTotal);
                    printf("RESULT: (LOSS)\n");
                    Sleep(1000);

                    printf("PLAYER LOST THEIR SPLIT BET OF $");
                    printfspace2(playerData.splitBet);
                    printf("!\n");
                    Sleep(2000);
                    
                    printf("PLAYER HAS CURRENT BALANCE OF: $");
                    printfspace2(playerData.money);
                    printf("\n\n");

                    playerData.splitBet = 0;

                    Sleep(2000);
                    printf("\n\n\nSTARTING A NEW ROUND!");
                    printf("\n\n\n");
                    Sleep(1000);

                    goto GameStart;
                }
                else if (dealerHandTotal2 == playerSecondHandTotal)
                {
                    // Draw (PUSH) -- GAME OVER
                    Sleep(2000);
                    printf("\n\nTHE DEALER'S HAND AND THE PLAYER'S SPLIT HAND TIE!\n");
                    printf("RESULT: (PUSH)\n");
                    Sleep(1000);

                    printf("PLAYER WILL BE PAID BACK THEIR SPLIT BET OF $");
                    printfspace2(playerData.splitBet);
                    printf("!\n");
                    Sleep(2000);

                    playerData.money = (playerData.money + playerData.splitBet);
                    
                    printf("PLAYER HAS A NEW BALANCE OF: $");
                    printfspace2(playerData.money);
                    printf("\n\n");

                    playerData.splitBet = 0;

                    Sleep(2000);
                    printf("\n\n\nSTARTING A NEW ROUND!");
                    printf("\n\n\n");
                    Sleep(1000);

                    goto GameStart;
                }
                else
                {
                    // Player Win -- GAME OVER
                    Sleep(2000);
                    printf("\n\nTHE PLAYER WINS WITH A HIGHER HAND (%d < %d)!\n", dealerHandTotal2, playerSecondHandTotal);
                    printf("RESULT: (WIN!)\n");
                    Sleep(1000);

                    printf("PLAYER HAS WON A 1:1 PAYOUT OF $");
                    printfspace2(playerData.splitBet);
                    printf("!\n");
                    Sleep(2000);

                    playerData.money = (playerData.money + (playerData.splitBet * 2));
                    
                    printf("PLAYER HAS A NEW BALANCE OF: $");
                    printfspace2(playerData.money);
                    printf("\n\n");

                    playerData.splitBet = 0;

                    Sleep(2000);
                    printf("\n\n\nSTARTING A NEW ROUND!");
                    printf("\n\n\n");
                    Sleep(1000);

                    goto GameStart;
                }
            }
            else if ((dealerHandAces == 0 && playerHand2Aces == 1) && playerSecondHandTotal2 < 21)
            {
                // Compares dealerHandTotal with playerSecondHandTotal2
                if (dealerHandTotal > playerSecondHandTotal2)
                {
                    // Player Loss -- GAME OVER
                    Sleep(2000);
                    printf("\n\nSORRY, THE DEALER HAS A HIGHER HAND (%d > %d).\n", dealerHandTotal, playerSecondHandTotal2);
                    printf("RESULT: (LOSS)\n");
                    Sleep(1000);

                    printf("PLAYER LOST THEIR SPLIT BET OF $");
                    printfspace2(playerData.splitBet);
                    printf("!\n");
                    Sleep(2000);
                    
                    printf("PLAYER HAS CURRENT BALANCE OF: $");
                    printfspace2(playerData.money);
                    printf("\n\n");

                    playerData.splitBet = 0;

                    Sleep(2000);
                    printf("\n\n\nSTARTING A NEW ROUND!");
                    printf("\n\n\n");
                    Sleep(1000);

                    goto GameStart;
                }
                else if (dealerHandTotal == playerSecondHandTotal2)
                {
                    // Draw (PUSH) -- GAME OVER
                    Sleep(2000);
                    printf("\n\nTHE DEALER'S HAND AND THE PLAYER'S SPLIT HAND TIE!\n");
                    printf("RESULT: (PUSH)\n");
                    Sleep(1000);

                    printf("PLAYER WILL BE PAID BACK THEIR SPLIT BET OF $");
                    printfspace2(playerData.splitBet);
                    printf("!\n");
                    Sleep(2000);

                    playerData.money = (playerData.money + playerData.splitBet);
                    
                    printf("PLAYER HAS A NEW BALANCE OF: $");
                    printfspace2(playerData.money);
                    printf("\n\n");

                    playerData.splitBet = 0;

                    Sleep(2000);
                    printf("\n\n\nSTARTING A NEW ROUND!");
                    printf("\n\n\n");
                    Sleep(1000);

                    goto GameStart;
                }
                else
                {
                    // Player Win -- GAME OVER
                    Sleep(2000);
                    printf("\n\nTHE PLAYER WINS WITH A HIGHER HAND (%d < %d)!\n", dealerHandTotal, playerSecondHandTotal2);
                    printf("RESULT: (WIN!)\n");
                    Sleep(1000);

                    printf("PLAYER HAS WON A 1:1 PAYOUT OF $");
                    printfspace2(playerData.splitBet);
                    printf("!\n");
                    Sleep(2000);

                    playerData.money = (playerData.money + (playerData.splitBet * 2));
                    
                    printf("PLAYER HAS A NEW BALANCE OF: $");
                    printfspace2(playerData.money);
                    printf("\n\n");

                    playerData.splitBet = 0;

                    Sleep(2000);
                    printf("\n\n\nSTARTING A NEW ROUND!");
                    printf("\n\n\n");
                    Sleep(1000);

                    goto GameStart;
                }
            }
            else
            {
                // Comapres HandTotals (Second)
                if (dealerHandTotal > playerSecondHandTotal)
                {
                    // Player Loss -- GAME OVER
                    Sleep(2000);
                    printf("\n\nSORRY, THE DEALER HAS A HIGHER HAND (%d > %d).\n", dealerHandTotal, playerSecondHandTotal);
                    printf("RESULT: (LOSS)\n");
                    Sleep(1000);

                    printf("PLAYER LOST THEIR SPLIT BET OF $");
                    printfspace2(playerData.splitBet);
                    printf("!\n");
                    Sleep(2000);
                    
                    printf("PLAYER HAS CURRENT BALANCE OF: $");
                    printfspace2(playerData.money);
                    printf("\n\n");

                    playerData.splitBet = 0;

                    Sleep(2000);
                    printf("\n\n\nSTARTING A NEW ROUND!");
                    printf("\n\n\n");
                    Sleep(1000);

                    goto GameStart;
                }
                else if (dealerHandTotal == playerSecondHandTotal)
                {
                    // Draw (PUSH) -- GAME OVER
                    Sleep(2000);
                    printf("\n\nTHE DEALER'S HAND AND THE PLAYER'S SPLIT HAND TIE!\n");
                    printf("RESULT: (PUSH)\n");
                    Sleep(1000);

                    printf("PLAYER WILL BE PAID BACK THEIR SPLIT BET OF $");
                    printfspace2(playerData.splitBet);
                    printf("!\n");
                    Sleep(2000);

                    playerData.money = (playerData.money + playerData.splitBet);
                    
                    printf("PLAYER HAS A NEW BALANCE OF: $");
                    printfspace2(playerData.money);
                    printf("\n\n");

                    playerData.splitBet = 0;

                    Sleep(2000);
                    printf("\n\n\nSTARTING A NEW ROUND!");
                    printf("\n\n\n");
                    Sleep(1000);

                    goto GameStart;
                }
                else
                {
                    // Player Win -- GAME OVER
                    Sleep(2000);
                    printf("\n\nTHE PLAYER WINS WITH A HIGHER HAND (%d < %d)!\n", dealerHandTotal, playerSecondHandTotal);
                    printf("RESULT: (WIN!)\n");
                    Sleep(1000);

                    printf("PLAYER HAS WON A 1:1 PAYOUT OF $");
                    printfspace2(playerData.splitBet);
                    printf("!\n");
                    Sleep(2000);

                    playerData.money = (playerData.money + (playerData.splitBet * 2));
                    
                    printf("PLAYER HAS A NEW BALANCE OF: $");
                    printfspace2(playerData.money);
                    printf("\n\n");

                    playerData.splitBet = 0;

                    Sleep(2000);
                    printf("\n\n\nSTARTING A NEW ROUND!");
                    printf("\n\n\n");
                    Sleep(1000);

                    goto GameStart;
                }
            }
        }
        else
        {
            Sleep(2000);
            printf("\n\nYOUR SPLIT (SECOND) HAND COULD NOT BE COMPARED (BUSTED!)\n\n");
            Sleep(2000);
            printf("\n\n\nSTARTING A NEW ROUND!");
            printf("\n\n\n");
            Sleep(1000);

            goto GameStart;
        }

        // Fin.

    }
    else if(mainMenuSelection == 2)
    {
        //Displays the rules (How to play Blackjack)

        printf("\n\t\t\t\t\tHOW TO PLAY BLACKJACK!\n\n");

        printf("OBJECTIVE: BEAT THE DEALER BY GETTING A HAND AS CLOSE TO 21 AS POSSIBLE WITHOUT GOING OVER 21.\n\n");
        printf("DRAWING A PERFECT 21 IS REFERRED TO AS 'BLACKJACK' AND IS THE BEST HAND TO DRAW AS IT CAN ONLY BE TIED WITH A DEALER BLACKJACK, BUT CAN NEVER LOSE!\n");
        printf("IF YOUR HAND TOTAL DOES GO OVER 21, THIS IS REFERRED TO AS A 'BUST'.\n");
        printf("IF YOUR HAND TOTAL IS LESS THAN THAT OF THE DEALER'S, YOU LOSE YOUR WAGER.\n");
        printf("IF YOUR HAND TOTAL TIES WITH THE DEALER'S HAND TOTAL, THIS IS REFERRED TO AS A 'PUSH' AND YOUR WAGER IS REFUNDED.\n");
        printf("IF YOU'RE FIRST DEALT BLACKJACK, YOU GET A 3:2 PAYOUT AND WIN IF THE DEALER WAS NOT FIRST DEALT A BLACKJACK.\n");
        printf("IF THE HOUSE (DEALER) BUSTS OR YOUR HAND IS HIGHER THAN THE DEALER'S, YOU WIN!\n\n");

        printf("CARD VALUES: ACES ARE WORTH 1 OR 11 (WHATEVER HELPS THE HAND THE MOST). FACE CARDS LIKE KING, QUEEN, AND JACK ARE WORTH 10.\n");
        printf("ALL OTHER CARDS ARE WORTH THEIR RESPECTIVE PIP VALUE ([2] = 2, [3] = 3, [9] = 9, etc.)\n\n");

        printf("BETTING: PLAYERS CAN BET (WAGER) ANY AMOUNT OF MONEY, AS LONG AS IT FALLS WITHIN THE LIMITS OF THE TABLE.\n");
        printf("EACH TABLE HAS A MIN/MAX BET THAT MUST BE FOLLOWED. THIS C GAME CURRENTLY HAS ONLY 5 TIERS OF TABLES, BUT MORE CAN BE ADDED!\n\n");

        printf("TYPES OF BETS: THERE ARE NUMEROUS DIFFERENT TYPES OF BETS IN BLACKJACK, BUT THIS C GAME ONLY USES 5 DIFFERENT TYPES OF BETS.\n\n");
        printf("MAIN WAGER: YOUR MAIN BET. IT MUST ABIDE THE TABLE'S MIN/MAX AND THIS BET IS THE ONLY MANDATORY BET.\n\n");
        printf("PAIR BET: PLACING THIS BET MEANS THAT YOU ARE BETTING THAT WHEN YOUR HAND IS FIRST DEALT, THEY WILL BE MATCHING CARDS (A PAIR).\n");
        printf("THIS BET IS OPTIONAL, BUT THERE IS A 11:1 PAYOUT IF YOUR BET WINS! PAIR BETS MUST MEET THE TBALE'S RESPECTIVE MAX.\n\n");
        printf("INSURANCE BET: IF THE DEALER IS DEALT AN ACE CARD (FACING UP) AT THE START OF THE ROUND, YOU HAVE THE ABILITY TO PLACE AN INSURANCE BET (OPTIONAL).\n");
        printf("PLACING THIS BET MEANS THAT YOU ARE BETTING THAT THE DEALER WAS DEALT A BLACKJACK. YOU MUST PLACE HALF OF YOUR CURRENT MAIN WAGER IN ORDER TO DO THIS.\n");
        printf("THIS CAN BE GOOD IF YOU WANT TO AVOID LOSING YOUR WAGER IN THE EVENT THAT THE DEALER DOES HAVE BLACKJACK. THE PAYOUT IS 2:1, SO YOU'D GET 'REFUNDED' IN THE EVENT IT DOES HAPPEN.\n\n");
        printf("SPLIT BET: IF YOU WERE FIRST DEALT A PAIR (like a [9] [9]), YOU CAN SPLIT YOUR HAND TO MAKE TWO DIFFERENT HANDS AND PLACE A BET EQUIVALENT TO YOUR CURRENT WAGER.\n");
        printf("SPLIT BETS CAN ONLY BE DONE IF YOU WERE DEALT A MATCHING PAIR AND AS YOUR FIRST DECISION. YOU MUST ALSO BE ABLE TO AFFORD THE BET TO DO SO.\n\n");
        printf("DOUBLE BET: ALSO KNOWN AS 'DOUBLING DOWN', YOU WILL DRAW ONLY ONE MORE CARD ON YOUR CURRENT HAND AND DOUBLE YOUR CURRENT WAGER FOR THAT HAND.\n\n");

        printf("HAND OPTIONS:\n\n");
        printf("SURRENDER: YOU FORFEIT THE ROUND BY GIVING UP ON ALL CURRENT HANDS. YOU ARE REFUNDED HALF OF YOUR CURRENT WAGER AND LOSE THE ROUND.\n\n");
        printf("SPLIT: YOU CAN ONLY DO THIS AS YOUR FIRST DECISION ON YOUR HAND IF YOU ARE DEALT A MATCHING PAIR. THIS SPLITS THE PAIR INTO TWO DIFFERENT HANDS WITH EQUIVALENT WAGER AMOUNTS.\n");
        printf("YOU CAN ONLY SPLIT YOUR HAND ONCE AND IF ALL CONDITIONS ARE MET (ENOUGH MONEY, MATCHING PAIRS, FIRST DECISION, ETC.)\n\n");
        printf("DOUBLE: DOUBLE DOWN ON YOUR CURRENT HAND BY DRAWING ONLY ONE MORE CARD AND 'STANDING' ON IT.\n");
        printf("YOU WILL DOUBLE YOUR CURRENT WAGER FOR THAT HAND AND CAN NO LONGER DRAW ANYMORE CARDS FOR THAT HAND.\n\n");
        printf("HIT: HIT MEANS TO DRAW ANOTHER CARD TO YOUR CURRENT HAND TO INCREASE YOUR HAND TOTAL. COSTS NO MONEY.\n");
        printf("YOU WILL NOT BE ABLE TO DRAW ANYMORE AFTER YOUR HAND BUSTS OR IF YOU GET BLACKJACK.\n\n");
        printf("STAND: MEANS THAT YOU DECLARE THAT YOUR CURRENT HAND IS FINISHED AND YOU WILL NO LONGER BE TAKING ACTION ON THAT HAND.\n\n");

        printf("THE DEALER:\n\n");
        printf("THE DEALER (ALSO REFERRED TO AS 'THE HOUSE') IS WHO YOU WILL BE COMPETING AGAINST. YOU MUST BEAT THE DEALER'S HAND IN ORDER TO WIN.\n\n");
        printf("THE DEALER MUST FOLLOW A SET OF RULES WHEN PLAYING:\n");
        printf("\t- THE DEALER MUST ALWAYS DRAW IF THEIR HAND TOTAL IS BELOW 17. IF IT'S 17 OR ABOVE, THE DEALER WILL STAND.\n");
        printf("\t- IF THE DEALER HAS AN ACE IN THEIR HAND BUT THEIR UPPER TOTAL IS 17, THEY MUST DRAW. (THIS IS REFERRED TO AS A 'SOFT 17')\n");
        printf("\t- IF THE DEALER IS FIRST DEALT AN ACE (FACING UP), THEY MUST OFFER THE PLAYER AN INSURANCE BET AND THEN CHECK FOR BLACKJACK.\n");
        printf("\t- IF THE DEALER IS FIRST DEALT A CARD THAT HAS A VALUE OF 10 (FACING UP), THEY MUST CHECK FOR BLACKJACK.\n");
        printf("\t- WHEN THE DEALER IS FIRST DEALT CARDS, THEY WILL ONLY REVEAL ONE CARD (FACE UP CARD) UNTIL AFTER THE PLAYER FINISHES THEIR TURN.\n");
        printf("\t- THE DEALER MAY NOT ACT ON THEIR HAND UNTIL AFTER THE PLAYER FINISHES THEIR TURN.\n");
        
        printf("\n\n\nPRESS ENTER TO RETURN TO MAIN MENU.\t");
        while (enterKeyPress != '\r' && enterKeyPress != '\n') { enterKeyPress = getchar(); }
        enterKeyPress = 0;
        Sleep(5000);
        printf("\n\n\n\n\n\n\n");
        goto GameMainMenu;
    }
    else if(mainMenuSelection == 3)
    {
        //This would be the settings
        printf("CURRENT GAME SETTINGS:\n\n");

        printf("GAME PAYOUTS:\n\n");
        printf("\tPLAYER WINS: 1:1 PAYOUTS\n");
        printf("\tPAIR BETS: 11:1 PAYOUTS\n");
        printf("\tFIRST DEAL BLACKJACK: 3:2 PAYOUTS\n");
        printf("\tINSURANCE BETS: 2:1 PAYOUTS\n\n");

        printf("HAND/BET OPTIONS:\n\n");
        printf("\tPAIR BETS?: YES! (UP TO TABLE MAX)\n");
        printf("\tINSURANCE BETS?: YES!\n");
        printf("\tCAN SURRENDER?: YES! (ANYTIME BEFORE SHOWDOWN)\n");
        printf("\tCAN SPLIT?: YES! (FIRST DECISION ONLY + MUST BE ABLE TO AFFORD)\n");
        printf("\tCAN DOUBLE?: YES! (CURRENT HAND'S FIRST DECISION ONLY + MUST BE ABLE TO AFFORD)\n");

        printf("\n\n\nPRESS ENTER TO RETURN TO MAIN MENU.\t");
        while (enterKeyPress != '\r' && enterKeyPress != '\n') { enterKeyPress = getchar(); }
        enterKeyPress = 0;
        Sleep(5000);
        printf("\n\n\n\n\n\n\n");
        goto GameMainMenu;
    }
    else if(mainMenuSelection == 4)
    {
        printf("\n\n\t\t\t\t\t\t\t\t\t<<GAME CREDITS>>\n\n");
        printf("\t\t\t\t\t\t\t\t     GAME DEVELOPER: SILENT\n\n");
        printf(COLOR_MAGENTA COLOR_BOLD "\t\t\t\t\t\t\t\t     @i.silent" COLOR_OFF " on Discord\n");
        printf("\n\n\t\t\t\t\t\t\t\t    A MESSAGE FROM DEVELOPER:\n\n");
        printf(COLOR_CYAN COLOR_ITALICIZE "'Hello World! I made this Blackjack C project game as a challenge for myself to make it from scratch with as little help as possible (I am a beginner).\nIt took me about a week to complete and as you can see, is over 8000 lines of code (not efficient I know).\nThank you for playing this fun little game and if there's any features you request to be added, please DM me on Discord.'\n\n" COLOR_OFF);
        
        Sleep(10000);
        goto GameMainMenu;
    }
    else if (mainMenuSelection == 5)
    {
        printf("\nYour legendary tale concludes...\n ");
        Sleep(1000);
        // Maybe we will display a summation of the player's playthrough stats
        return 0; // Exits the game (program)
    }
    else if(mainMenuSelection == 9)
    {
        //This would be an invalid option
        Sleep(1000);
        goto GameMainMenu;
    }
    else
    {
        //This is not attainable; however, this would be a safepoint.
        Sleep(1000);
        goto GameMainMenu;
    }

return 0;
}