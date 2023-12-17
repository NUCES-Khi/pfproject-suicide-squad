# Project Report: MathaMania

### Team Members 
### **`<Raghib Rizwan Rabani  23K-0012>` `<Hafsa Rashid 23K-0064>` `<Arwa Feroze 23K-0022>`**

## Proposal Idea
MathaMania is an interactive quiz game developed in C language aimed at enhancing users' mathematical problem-solving skills. It engages users by presenting questions at varying difficulty levels (easy, moderate, hard) and allows them to select their preferred challenge level.

## Data Structures Used and Rationale
- **Arrays:** Utilized to store questions, answers, and user responses. Arrays were chosen for their simplicity in managing sequential data.
- **Files:** Employed to store and retrieve high scores for each difficulty level. This choice enables persistent data storage across game sessions.

## Major Problems Faced and Solutions
### 1. Lack of Persistent High Scores
**Problem:** 
Before the implementation of this code, there might have been no way to maintain or track users' high scores across different gaming sessions or difficulty levels. Each time the game was played, the high score likely reset, which could have reduced users' motivation to achieve better scores.

**Solution through the Code:**
- The code utilizes file handling to store and retrieve high scores for each difficulty level (`easy_highscore.txt`, `moderate_highscore.txt`, `hard_highscore.txt`). 
- By saving the high scores in separate files, the game now retains and updates the highest scores achieved by users, offering a sense of progress and competition.

### 2. Absence of Timed Challenges
**Problem:**
Previous versions of the game might have lacked a time-based challenge, potentially making the game less engaging or less conducive to developing time-management skills while solving mathematical problems.

**Solution through the Code:**
- The code introduces time limits for answering questions in different difficulty levels (10 seconds for easy, 20 seconds for moderate, 30 seconds for hard).
- It penalizes users with a deduction of 100 points if they exceed the time limit, adding a sense of urgency and encouraging quicker problem-solving abilities.

### 3. Limited Flexibility in Storing Answers

**Problem:**
Previously, MathaMania confined answers solely within code arrays, hampering the ability to adjust the question-answer bank without code modifications.

**Solution through the Code:**
- In the updated version, MathaMania employs external text files to store answers (`easy.txt`, `moderate.txt`, `hard.txt`). During runtime, the program reads these files, transferring answers to arrays.
- This adaptation enhances flexibility, allowing seamless updates to the question-answer bank without necessitating code changes. Such an approach segregates data from code, streamlining maintenance and enabling non-programmers to modify game content.

## Major Logic/Algorithm Used
### Timer and Scoring Logic
- **Timer Implementation:** The game tracks response time for each question using `difftime`, imposing time limits for different difficulty levels.
- **Scoring Mechanism:** The scoring system rewards correct answers with points and penalizes exceeded time limits with point deductions.

### Difficulty Levels
- **Switch Statements:** Utilized to enable users to select between easy, moderate, and hard difficulty levels, invoking corresponding functions for each level.

## Complexity and Possible Improvements
### Algorithm Complexity
- The code operates in linear time complexity O(n), where 'n' represents the number of questions per difficulty level.
- There's an opportunity to enhance time complexity by optimizing the file reading process, potentially reducing I/O operations.

### Potential Improvements
- **Code Modularity:** Segregating functionalities into smaller, reusable functions can enhance code readability and maintainability.
- **Error Handling:** Implementing robust error handling mechanisms to manage unexpected inputs or file handling issues can fortify the program's stability.
- **Memory Optimization:** Evaluating memory usage and optimizing array sizes could improve efficiency, especially with large question banks.
- **Pause/Resume Feature:** Implementing a pause/resume feature in MathaMania could allow seamless interruption management, granting users control and fostering engagement for longer gameplay sessions.

## Conclusion
MathaMania offers an engaging platform for users to refine their mathematical skills through interactive quizzes. Despite its functional implementation, certain enhancements in input handling, file operations, and code structure could further refine its efficiency and robustness.

Improving code modularity, error handling, and memory optimization would contribute to a more resilient and user-friendly experience. Additionally, optimizing file operations and considering alternative input handling methods can enhance overall performance.

This project demonstrates an effective means of integrating programming logic with educational content, offering potential for further refinement and expansion.
