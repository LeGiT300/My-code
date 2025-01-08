

### README: Number Guessing Game

---

#### **Overview**
This is a simple number-guessing game written in C. The game challenges the player to guess a randomly generated number within a specified range and a limited number of trials, depending on the chosen difficulty level.

---

#### **Game Features**
1. **Difficulty Levels**:
   - **Easy**: Guess a number between 1 and 50 with 5 trials.
   - **Hard**: Guess a number between 1 and 200 with 10 trials.
   - **Very Hard**: Guess a number between 1 and 500 with 15 trials.

2. **Gameplay Flow**:
   - Players are presented with a menu to choose their difficulty level.
   - After selecting a level, the game generates a random number in the range specified for that level.
   - Players input their guesses, and the game provides feedback:
     - Whether the guess is too low or too high.
     - The number of trials remaining.
   - If the player guesses correctly, they win, and the remaining trials are displayed.
   - If the player exhausts their trials without guessing correctly, the game ends.

3. **Replay Option**:
   - After completing a game, players can choose to play again or exit the program.

---

#### **How to Run**
1. **Requirements**:
   - A C compiler (e.g., GCC).
   - A terminal or IDE for running C programs.

2. **Steps**:
   - Compile the code using a C compiler:
     ```bash
     gcc -o guessing_game guessing_game.c
     ```
   - Run the executable:
     ```bash
     ./guessing_game
     ```

3. **Gameplay**:
   - Follow the on-screen instructions to choose a difficulty level.
   - Enter your guesses when prompted.
   - Respond to the replay prompt to either restart the game or exit.

---

#### **Key Code Highlights**
- **Difficulty Selection**: Players choose a level by entering `1`, `2`, or `3`.
- **Random Number Generation**: Each level generates a random number using `rand()` seeded with the current time.
- **User Feedback**:
  - The game provides hints if the guess is too low or too high.
  - Displays remaining trials after each attempt.
- **Replay Mechanism**: Players can replay the game or exit using `Y/y` or `N/n`.

---

#### **Known Issues**
1. **Input Validation**:
   - The code does not handle invalid input types (e.g., non-numeric input for guesses).
   - Ensure valid numeric inputs are provided when prompted.

2. **Code Structure**:
   - Use of `goto` statements for control flow, which can make debugging and maintenance harder.

---

#### **Future Improvements**
1. Add input validation to handle non-numeric inputs.
2. Refactor to replace `goto` statements with loops and functions for cleaner and more maintainable code.
3. Display the correct answer if the player fails to guess within the trial limit.

---

#### **Acknowledgments**
This program is a demonstration of basic game logic, random number generation, and user interaction in C programming. It's suitable for beginners looking to practice these concepts.
