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

## Problem 3 : Morse Code

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

# Example inputs and outputs:

Input: 
```
Hello World
```

Output: 
```
···· · / −··· −·· −··· − / ·− −·· · / −··· −·· / −·· −\
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




