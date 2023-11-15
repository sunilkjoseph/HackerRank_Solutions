# Here is my HackerRank Solutions

>The repository contains the solutions to various HackerRank problems. Each solution includes a reference to the problem statement and is well-documented to explain the logic and approach.

### 1. Beautiful Triplets

  - [Problem](https://www.hackerrank.com/challenges/beautiful-triplets/problem)(navigate to the Problem)
  - [Solution](./Beautiful_Triplets.cpp) (navigate to the Solution file)
  - Explanation: 
    The algorithm utilizes the binary search function to check for the existence of the second and third elements in the array. This is an efficient way to determine if a specific element is present in a sorted array.
    The algorithm uses simple arithmetic to calculate the potential second and third elements of the triplet based on the current element (arr[i] + d and arr[i] + 2 * d).
    The count variable keeps track of the number of beautiful triplets found during the iteration.
  
### 2. Chessboard Game

  - [Problem](https://www.hackerrank.com/challenges/a-chessboard-game-1/problem)(navigate to the Problem)
  - [Solution](./chessboardGame.cpp)(navigate to the Solution file)
  - Explanation: 
    The problem involves a chessboard game with two players. The chessboard has cells labeled (1,1) to (15,15). Two players take turns making moves. In each move, a player selects a cell (x, y), and the cell and its surrounding cells (top, bottom, left, right) are marked. The game starts with an empty board. The player who cannot make a valid move loses the game.
    The solution reduces the problem to a 4x4 board, as after every four moves, the board pattern repeats.
    By using the modulo operation (%), the solution calculates the position (x, y) on the 4x4 board.
    The solution then checks if the calculated position is at one of the four corners of the 4x4 board.
    If it is at a corner, the second player wins; otherwise, the first player wins.

### 3. Connected Cells in a Grid  
  
  - [Problem](https://www.hackerrank.com/challenges/connected-cell-in-a-grid/problem)(navigate to the Problem)
  - [Solution](./connectedCell.cpp)(navigate to the Solution file)
  - Explanation: 
    The provided solution uses Depth-First Search (DFS) to explore connected components in the matrix.
    Takes the matrix, row, and column as parameters.
    Checks if the current cell is out of bounds or already visited (cell value is 0).
    Marks the current cell as visited (sets its value to 0).
    Initializes the size of the connected component to 1.
    Explores neighboring cells recursively and increments the size for each connected cell.
    Returns the size of the connected component.
    Main Function (connectedCell):
    Takes the matrix as a parameter.
    Iterates through each cell in the matrix.
    If the cell value is 1, calls the dfs function to find the size of the connected component starting from that cell.
    Keeps track of the maximum connected component size.
    Initialization:
    The main function initializes variables, including the size of the largest connected component (maxComponentSize).
    Result:
    Returns the size of the largest connected component.

### 4. Missing Numbers

  - [Problem](https://www.hackerrank.com/challenges/missing-numbers/problem)(navigate to the Problem)
  - [Solution](./missingNumbers.cpp) (navigate to the Solution file)
  - Explanation: 
    The problem is to find the missing numbers in two arrays, arr and brr. The arrays may contain duplicate elements, and the goal is to identify the numbers that are present in brr but not in arr.
    The Function 'missingNumbers' have two parameters: arr and brr (input arrays) and it returns: Vector of missing numbers.
    The function create frequency maps (freqArr and freqBrr).Iterate through brr and compare frequencies with arr. Add missing numbers to the result vector. Sort the result vector and finally return the result.

### 5. Nimble Game

  - [Problem](https://www.hackerrank.com/challenges/nimble-game-1/problem)(navigate to the Problem)
  - [Solution](./nimbleGame.cpp) (navigate to the Solution file)
  - Explanation: 
    The problem involves the Nimble Game, a two-player game played on a line of n squares. Each square contains a number, and players take turns making moves. On a player's turn, they can move any number of squares to the right, starting from the square they are on. The goal is to determine the winner of the game based on the nim-values of the squares.
    The nim-value of a square is the distance from the square to the nearest rightmost square whose number is odd. The nim-value for a square i is defined as nim-value(i) = i - 1 if the number in square i is odd; otherwise, nim-value(i) = 0.
    The winner of the Nimble Game can be determined based on the XOR sum of the nim-values of the squares.
    Steps:
    Initialize XOR Sum:
    Start with an XOR sum of 0.
    Calculate Nim-Values:
    Iterate through the squares starting from the third square (index 2). If the number in the square is odd, update the nim-value of the square as nim-value(i) = i - 1. Calculate the XOR sum by XORing the nim-value of the square.
    Determine the Winner:
    If the XOR sum is 0, the second player wins; otherwise, the first player wins.

### 6. Pairs

  - [Problem](https://www.hackerrank.com/challenges/pairs/problem)(navigate to the Problem)
  - [Solution](./pairs.cpp) (navigate to the Solution file)
  - Explanation: 
    The problem requires finding the count of pairs in an array where the difference between the pair elements is equal to a given integer k.
    The approach involves using a set to efficiently check for the presence of required elements to form pairs.
    Steps:
    Initialize Set:
    Create an unordered set to store elements encountered in the array.
    Initialize Pair Counter:
    Initialize a counter (countPairs) to keep track of the valid pairs.
    Iterate Through Array:
    Iterate through each element (num) in the array. Check if num - k or num + k exists in the set. If either of them exists, increment the countPairs. Add the current element (num) to the set. The countPairs represents the number of pairs with the given difference k.

### 7. Poker Nim

  - [Problem](https://www.hackerrank.com/challenges/poker-nim-1/problem)(navigate to the Problem)
  - [Solution](./pokerNim.cpp) (navigate to the Solution file)
  - Explanation: 
    The problem involves a game called Poker Nim played with heaps of stones. Players take turns removing stones from the heaps, and the player who removes the last stone wins. The goal is to determine the winning strategy based on the given configuration of heaps.
    The winning strategy in Poker Nim is based on the XOR of the sizes of all heaps. If the XOR is non-zero, the first player has a winning strategy; otherwise, the second player has a winning strategy.
    Steps:
    Initialize XOR Sum:
    Calculate the XOR sum (xorSum) of all heap sizes by XORing them.
    Check Winning Strategy:
    If xorSum is non-zero, return "First" (the first player has a winning strategy).
    If xorSum is zero, return "Second" (the second player has a winning strategy).

### 8. Silly Game

  - [Problem](https://www.hackerrank.com/challenges/alice-and-bobs-silly-game/problem)(navigate to the Problem)
  - [Solution](./sillyGame.cpp) (navigate to the Solution file)
  - Explanation: 
    The problem is about a simple game where two players, Alice and Bob, take turns to say prime numbers in ascending order. The game starts with Alice, and each player must say a prime number that hasn't been said before. The goal is to determine the winner of the game.
    The approach involves generating prime numbers up to a certain limit using the Sieve of Eratosthenes. The game is played with numbers up to n. After generating primes, the winner is determined based on the count of prime numbers up to n.
    Steps:
    Generate Primes
    Use the Sieve of Eratosthenes to generate a boolean array (isPrime) indicating whether each number up to n is prime.
    Count Primes:
    Count the number of true values in the isPrime array.
    Determine Winner:
    If the count of primes is even, Bob wins; otherwise, Alice wins.

### 9. XOR Strings

  - [Problem](https://www.hackerrank.com/challenges/strings-xor/problem)(navigate to the Problem)
  - [Solution](./strings_xor.cpp) (navigate to the Solution file)
  - Explanation: 
    The problem involves XORing two strings of the same length character by character. The goal is to implement a function that performs XOR operation on corresponding characters of the two strings and returns the result.
    The approach involves iterating through each character of the input strings and performing XOR operation on the corresponding characters. The XOR result is then appended to the result string.
    Steps:
    Initialize Result String (res):
    Initialize an empty string to store the result of XOR operation.
    Iterate Through Characters:
    Iterate through each character at the same position in both input strings.
    If the characters are equal, append '0' to the result string; otherwise, append '1'.
    Return Result:
    The result string contains the XOR result of the input strings.

### 10. Tower Breakers

  - [Problem](https://www.hackerrank.com/challenges/tower-breakers-1/problem)(navigate to the Problem)
  - [Solution](./towerBreakers.cpp) (navigate to the Solution file)
  - Explanation: 
    The problem involves a game called Tower Breakers, where there are n towers, each consisting of m blocks. In each turn, a player can choose a tower and remove any number of blocks from the top of that tower. The player who removes the last block wins. The goal is to determine the winner of the game for each test case.
    The approach is based on some observations about the game rules. Specifically, if the number of blocks in a tower (m) is 1 or the number of towers (n) is even, then Player 2 wins. Otherwise, Player 1 wins.
    Steps:
    Determine Winner:
    If m is 1 or n is even, return 2 (Player 2 wins).
    Otherwise, return 1 (Player 1 wins).