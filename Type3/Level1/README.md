# Type 3 - Level 1 - Easy

## Problem 1: Roman to Integer
Roman numerals are represented by seven different symbols: `I`, `V`, `X`, `L`, `C`, `D` and `M`.

```
Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
```
For example, `2` is written as `II` in Roman numeral, just two ones added together. `12` is written as `XII`, which is simply `X + II`. The number `27` is written as `XXVII`, which is `XX + V + II`.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not `IIII`. Instead, the number four is written as `IV`. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as `IX`. There are six instances where subtraction is used:

- `I` can be placed before `V` (5) and `X` (10) to make 4 and 9. 
- `X` can be placed before `L` (50) and `C` (100) to make 40 and 90. 
- `C` can be placed before `D` (500) and `M` (1000) to make 400 and 900.
Given a roman numeral, convert it to an integer.
<br>

```
Example 1:

Input: s = "III"
Output: 3
Explanation: III = 3.
```

```
Example 2:

Input: s = "LVIII"
Output: 58
Explanation: L = 50, V= 5, III = 3.
```

```
Example 3:

Input: s = "MCMXCIV"
Output: 1994
Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.
```

<br>
Constraints:

- `1 <= s.length <= 15`
- `s contains only the characters ('I', 'V', 'X', 'L', 'C', 'D', 'M').`

<br>
  
## Problem 2: Pascal's triangle
Given an integer numRows, return the first numRows of Pascal's triangle.

In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:

<br>

![](https://upload.wikimedia.org/wikipedia/commons/0/0d/PascalTriangleAnimated2.gif)

<br>

```
Example 1:

Input: numRows = 5
Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]
or
Output: [1]
        [1,1]
        [1,2,1]
        [1,3,3,1]
        [1,4,6,4,1]
```

```
Example 2:

Input: numRows = 1
Output: [[1]]
```
<br>

# Problem 3 : Morse Code

Morse code is a method of transmitting text information as a series of on-off tones, lights, or clicks that can be directly understood by a skilled listener or observer without special equipment. Each character in the text is represented by a sequence of dots and dashes, which are called dits and dahs respectively. For example, the letter A is encoded as ·−, the letter B as −···, and the letter C as −·−·.

Write a program that takes a string as input and converts it into Morse code. The output should be a string of dots and dashes separated by spaces. The program should ignore any characters that are not letters or numbers in the input. The program should also use a slash (/) to separate words in the output.
If you want to look up Morse code for any letter, number, punctuation or symbol, you can use this [Morse code chart](https://morsecode.world/international/morse2.html) or this [Morse code table](https://morsetranslate.com/chart).

Input format:

The input is a single line of text containing letters and/or numbers. The input may also contain spaces or other characters, but they will be ignored by the program.

Output format:

The output is a single line of text containing dots and dashes separated by spaces. The output should use a slash (/) to separate words. The output should end with a newline character.

Constraints:

```- The input string can have up to 100 characters.
- The input string can contain uppercase or lowercase letters, but they will be treated as the same by the program.
- The input string can contain spaces or other characters, but they will be ignored by the program.
```

Example inputs and outputs:

Input: 
```
Hello World
```

Output: 
```
···· · / −··· −·· −··· − / ·− −·· · / −··· −·· / −·· −
```

Input: 
```
42 is the answer
```

Output:
``` 
··−− ·−·· / ·· ··· / − / ·− / −· / · / −· / ·· / ·− / −···
```



Constraints:
- `1 <= numRows <= 30`
</br>

# Problem 4 : Password Strength Checker


A password is like a key to your digital world. It protects your personal information, your online accounts, and your privacy. But not all passwords are created equal. Some are easy to guess, while others are hard to crack. How can you tell how secure your password is? That's where this program comes in handy. Write a program to check the strength of the password.
 It takes a password as input and evaluates its strength based on four criteria:

- **Length of the password**: The longer the password, the more combinations of characters it can have, and the harder it is to break. A password should have at least eight characters to be considered strong.
- **Presence of both uppercase and lowercase letters**: A password that contains both uppercase and lowercase letters has more diversity and complexity than one that does not. A password should have at least one uppercase letter and one lowercase letter to be considered strong.
- **Presence of numbers**: A password that contains numbers adds another layer of difficulty for hackers, who may try to use common words or phrases as passwords. A password should have at least one number to be considered strong.
- **Presence of symbols**: A password that contains symbols (such as !, @, #, etc.) makes it even more unpredictable and unique, as symbols are often not used in regular words or sentences. A password should have at least one symbol to be considered strong.

The program assigns a level of strength to the password based on how many criteria it meets. The levels are as follows:

- **Weak**: The password meets none or only one of the criteria.
- **Average**: The password meets two of the criteria.
- **Strong**: The password meets three of the criteria.
- **Very Strong**: The password meets all four of the criteria.


The program outputs the level of strength of the password in a single line.

**Input Format**: 

`A single line containing a password.`

**Output Format**: 

`A single line containing the level of strength of the password.`

**Constraints**:
```
- The password should not contain any spaces or tabs.
- The password should not be empty or null.
```

Example Inputs and Outputs:

```
Input: hello
Output: Weak
```

```
Input: Hello123
Output: Average
```

```
Input: Hello@123
Output: Strong
```

```
Input: H3ll0@!23
Output: Very Strong
```
</br>

# Problem 5 - Ultimate Music Playlist

Sarah is a music enthusiast who is planning to create the ultimate playlist for her road trip. She has a limited amount of storage space available on her music player, represented by X MB. She has a list of N songs, each with its size (S<sub>i</sub> MB) and rating (R<sub>i</sub>). Sarah wants to select a single song with the highest rating that can fit within her available storage space.

**Input:**

The input consists of the following:
- The first line contains an integer N, the number of songs in Sarah's playlist.
- The second line contains an integer X, representing the available storage space in MB.

For each song, there are two lines:
- The first line contains a floating-point number S<sub>i</sub>, the size of the song in MB.
- The second line contains an integer R<sub>i</sub>, the rating of the song.

**Output:**

Output a single integer, which is the highest rating among the songs that Sarah can store on her music player without exceeding the available storage space.

**Constraints:**

- 1 ≤ N ≤ 10^5
- 1 ≤ X ≤ 10^9
- 0.1 ≤ S<sub>i</sub> ≤ 100.0 (song sizes in MB, rounded to one decimal place)
- 1 ≤ R<sub>i</sub> ≤ 100 (song ratings)
- X ≥ S<sub>i</sub> for at least one valid i

Example 1:

Input:

```
1 1
1 1
2 2
```
Output:

```
1
```
Example 2:

```
1 50
2 100
3 2
```
Output:
```
100
```
Example 3:
```
1 51
3 100
2 50
```
Output:
```
51
```




