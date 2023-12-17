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
