#include <stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <string.h>
#include <time.h>
#include <windows.h>
#include<unistd.h>

// ANSI escape codes for text colors
#define RED "\x1b[31m"
#define GREEN "\x1b[32m"
#define YELLOW "\x1b[33m"
#define RESET "\x1b[0m"

// Function for easy difficulty level
void one(FILE *easy){

    FILE *hs;
    char a[100];
    int highscore = 0;
    int b;
    hs = fopen("easy_highscore.txt" , "r");
    
    fgets(a,100,hs);
    printf("\033[33m Highscore is:  %s\n\n \033[0m",a);
    
    fclose(hs); // highscore file close

    // Declaring and initializing variables
    int streak = 0;
    time_t starttime, endtime;
    int elapsedtime;
    char arr[100][100];  
    char brr[100][100];
    char answer[100];
    int score = 0;

    for (int i = 0; i < 20; i++) {

        // Reading questions and answers
        if (fgets(arr[i], sizeof(arr[i]), easy) == NULL) {
            break;  // End of file
        }
        if (fgets(brr[i], sizeof(brr[i]), easy) == NULL) {
            break;  // End of file
        }

        // Printing the question
        printf(" %s", arr[i]);

        // Timing the user's response
        time(&starttime);
        printf("Enter the answer: ");
        
        scanf(" %c",&answer[i]); // Taking input from user
        
        time(&endtime);
        elapsedtime = difftime(endtime, starttime); // Calculating current time

        printf("Time taken: %d seconds\n", elapsedtime);

        // Comparing the answer
        if (elapsedtime > 10){
            printf("\033[31m Time's up.... 100 points deducted.\n \033[0m");
            score -= 100;
            streak = 0;
        } else if (answer[i] == brr[i][0]) {
            printf(GREEN "Your answer is Correct!\n" RESET);
            score += 100;
            streak++;
        } else {
            printf(RED "Your answer is wrong.\n" RESET);
            streak = 0;
        }
    } // end for

    printf("\033[34m \nScore Is: %d\n \033[0m",score); // Printing total score
    
    // Securing highscore in a variable
    hs = fopen("easy_highscore.txt" , "r");

    fscanf(hs,"%d",&b);

    fclose(hs); // highscore file close

    printf("\033[33m \nWinning streak is: %d \033[0m \n\n",streak);
    

    // Comparing highscore with score
    hs = fopen("easy_highscore.txt" , "w");

    if(b < score || hs == NULL){ 
        b = score;
    }
    
    fprintf(hs,"%d",b); //Printing highscore in file
    
    fclose(hs); // highscore file close

    fclose(easy); // easy file close
}

// Function for moderate difficulty level
void two(FILE *moderate){

    FILE *hs;
    char a[100];
    int highscore = 0;
    int b;
    hs = fopen("moderate_highscore.txt" , "r");
    
    fgets(a,100,hs);
    printf("\033[33m Highscore is:  %s\n\n \033[0m",a);
    
    fclose(hs); // highscore file close

    // Declaring and initializing variables
    int streak = 0;
    time_t starttime, endtime;
    int elapsedtime;
    char arr[100][100];  
    char brr[100][100];
    char answer[100];
    int score = 0;

    for (int i = 0; i < 26; i++) {

        // Reading questions and answers
        if (fgets(arr[i], sizeof(arr[i]), moderate) == NULL) {
            break;  // End of file
        }
        if (fgets(brr[i], sizeof(brr[i]), moderate) == NULL) {
            break;  // End of file
        }

        // Printing the question
        printf(" %s", arr[i]);

        // Timing the user's response
        time(&starttime);
        printf("Enter the answer: ");
        
        scanf(" %c",&answer[i]); // Taking input from user
        
        time(&endtime);
        elapsedtime = difftime(endtime, starttime); // Calculating current time

        printf("Time taken: %d seconds\n", elapsedtime);

        // Comparing the answer
        if (elapsedtime > 20){
            printf("\033[31m Time's up.... 100 points deducted.\n \033[0m");
            score -= 100;
            streak = 0;
        } else if (answer[i] == brr[i][0]) {
            printf(GREEN "Your answer is Correct!\n" RESET);
            score += 100;
            streak++;
        } else {
            printf(RED "Your answer is wrong.\n" RESET);
            streak = 0;
        }
    } // end for

    printf("\033[34m \nScore Is: %d\n \033[0m",score); // Printing total score
    
    // Securing highscore in a variable
    hs = fopen("moderate_highscore.txt" , "r");

    fscanf(hs,"%d",&b);

    fclose(hs); // highscore file close

    printf("\033[33m \nWinning streak is: %d \033[0m \n\n",streak);
    fclose(moderate); // moderate file close

    // Comparing highscore with score
    hs = fopen("moderate_highscore.txt" , "w");

    if(b < score || hs == NULL){ 
        b = score;
    }
    
    fprintf(hs,"%d",b); //Printing highscore in file
    
    fclose(hs); // highscore file close

    fclose(moderate); // moderate file close
}
void three(FILE *hard){

    FILE *hs;
    char a[100];
    int highscore = 0;
    int b;
    hs = fopen("hard_highscore.txt" , "r");
    
    fgets(a,100,hs);
    printf("\033[33m Highscore is:  %s\n\n \033[0m",a);
    
    fclose(hs); // highscore file close

    // Declaring and initializing variables
    int streak = 0;
    time_t starttime, endtime;
    int elapsedtime;
    char arr[100][100];  
    char brr[100][100];
    char answer[100];
    int score = 0;

    for (int i = 0; i < 20; i++) {

        // Reading questions and answers
        if (fgets(arr[i], sizeof(arr[i]), hard) == NULL) {
            break;  // End of file
        }
        if (fgets(brr[i], sizeof(brr[i]), hard) == NULL) {
            break;  // End of file
        }

        // Printing the question
        printf(" %s", arr[i]);

        // Timing the user's response
        time(&starttime);
        printf("Enter the answer: ");
        
        scanf(" %c",&answer[i]); // Taking input from user
        
        time(&endtime);
        elapsedtime = difftime(endtime, starttime); // Calculating current time

        printf("Time taken: %d seconds\n", elapsedtime);

        // Comparing the answer
        if (elapsedtime > 30){
            printf("\033[31m Time's up.... 100 points deducted.\n \033[0m");
            score -= 100;
            streak = 0;
        } else if (answer[i] == brr[i][0]) {
            printf(GREEN "Your answer is Correct!\n" RESET);
            score += 100;
            streak++;
        } else {
            printf(RED "Your answer is wrong.\n" RESET);
            streak = 0;
        }
    } // end for

    printf("\033[34m \nScore Is: %d\n \033[0m",score); // Printing total score
    
    // Securing highscore in a variable
    hs = fopen("hard_highscore.txt" , "r");

    fscanf(hs,"%d",&b);

    fclose(hs); // highscore file close

    printf("\033[33m \nWinning streak is: %d \033[0m \n\n",streak);
    // fclose(hard); // hard file close

    // Comparing highscore with score
    hs = fopen("hard_highscore.txt" , "w");

    if(b < score || hs == NULL){ 
        b = score;
    }
    
    fprintf(hs,"%d",b); //Printing highscore in file
    
    fclose(hs); // highscore file close

    fclose(hard); // hard file close
}


int main(){
    // Declaring and Initializing variables
    char name[50];
    char ans;
    int diff;
    char answer;
    int i = 0;

    printf("Enter your name:");
    gets(name); // Asking name of user
    printf("\n");

    // Loop for restarting game
    printf("Do You want to start game? 'y' for yes and 'n' for no: ");
    scanf("%c",&ans);

    // Asking user to play
    switch (ans)
    {
    case 'y':
    case 'Y':
        system("cls");
        break;

    case 'n':
    case 'N':
        exit(1);
        break;
    }

    // Instructions for playing quiz game
    printf(GREEN "..............%s, WELCOME TO MATHAMANIA..............\n\n" RESET,name);
    printf( "...............IMPORTANT INSTRUCTIONS:..................\n\n" );
    printf( ">> There are 3 difficulty levels in this quiz game: easy, moderate and hard.\n");
    printf( ">> You can choose any level as per your will.\n" );
    printf( ">> Each right answer will be awarded 100 points.\n" );
    printf( ">> You will be given 4 options namely A, B, C and D which you use to answer the given question. Make sure to enter capital letters.\n");
    printf( ">> There will be no negative marking for wrong answers.\n" );
    printf( ">> For easy level there is the time limit of 10 seconds, for moderate 20 seconds, and for hard 30 seconds. If you exceed the given time then there will be negative marking of 100 points.\n");
    printf( ">> At the end you can see your score and on restarting you will see the highscore you achieved from the start.\n\n");

    // Opening files
    FILE *easy = fopen("easy.txt" , "r");
    FILE *moderate = fopen("moderate.txt", "r");
    FILE *hard = fopen("hard.txt", "r");

    printf("Select Difficulty: \n");
    printf("1. Easy    2. Moderate    3. Hard:  ");
    scanf("%d",&diff); // Taking input for difficulty level
    printf("\n");
