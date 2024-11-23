# Problem Set

---

## 1. Number Ending in Its Square

**Description:**
Consider a range of numbers. If a number exists at the very end of its squared value, print the number.

**Example:**
- 25 is such a number. \(25 \times 25 = 625\), and 25 is at the end of 625. Hence, 25 needs to be printed.

**Range:** 10 → 999  
**Level:** Beginner  

---

## 2. Second Maximum of Three Numbers

**Title:** Second Max of Three Numbers  

**Description:**  
Write a program that accepts sets of three numbers and prints the second-maximum number among them.  

**Example:**

| Input        | Output |
|--------------|--------|
| 1, 2, 3      | 2      |
| 15, 5, 5     | 5      |
| 100, 999, 50 | 100    |

**Level:** Beginner  

---

## 3. Special Multiplication Device

**Description:**  
Given a positive integer `n`, imagine you have a special device that multiplies any number by the previous number you entered.  

- If you input 2, the device outputs \(2 = 1 \times 2\).
- If you input 3, the device outputs \(6 = 2 \times 3\).

Find all the unique outputs this device can generate using numbers less than or equal to `n`. Return these outputs in a sorted (ascending) array.  

**Examples:**
1. **Input:** `n = 7`  
   **Output:** `[1, 2, 6]`  
   **Explanation:**  
   - Entering 1 gives \(1 = 1 \times 1\).
   - Entering 2 gives \(2 = 1 \times 2\).
   - Entering 3 gives \(6 = 2 \times 3\).
   - Numbers greater than 3 (like 4) exceed 7.

2. **Input:** `n = 2`  
   **Output:** `[1, 2]`  

**Level:** Intermediate  

---

## 4. Anagram Check

**Description:**  
Given two strings \(S_1\) and \(S_2\) in lowercase, check if they are anagrams of each other.  

**Definition:**  
Two strings are anagrams if they contain the same characters with the same frequency.  

**Example:**  
- \(S_1: "hello", S_2: "lelho"\)  
  **Output:** `true`  

**Level:** Beginner  

---

## 5. Chef and Chocolates

**Description:**  
Chef has \(X\) 5-rupee coins and \(Y\) 10-rupee coins. Chef goes to a shop to buy chocolates for Chefina, where each chocolate costs \(Z\) rupees.  

Find the maximum number of chocolates that Chef can buy for Chefina.  

**Input Format:**  
- The first line contains a single integer \(T\)—the number of test cases.  
- The next \(T\) lines contain three integers \(X, Y, Z\):  
  - \(X\): Number of 5-rupee coins.  
  - \(Y\): Number of 10-rupee coins.  
  - \(Z\): Cost of each chocolate.  

**Output Format:**  
- For each test case, output the maximum number of chocolates Chef can buy for Chefina.

**Example:**

| Input                  | Output |
|------------------------|--------|
| 4                     |        |
| 10 10 10              | 15     |
| 3 1 8                 | 3      |
| 8 1 3                 | 16     |
| 4 4 1000              | 0      |

**Level:** Beginner  

---
