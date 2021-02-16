## Processing temperatures with a sentinel

Write a program that will input temperatures for consecutive days. It is similar to lab 23.4, except now the **user will input the value -999 to stop entering values**. There will be no more than 50 temperatures. 

The program will store these inputed values into an array and then call a function that will return the average of the temperatures. It will also call a function that will return the highest temperature and a function that will return the lowest temperature. The average should be displayed to two decimal places.

_Sample Run:_
Input temperature 1, (or -999 to stop):
68
Input temperature 2, (or -999 to stop):
75
Input temperature 3, (or -999 to stop):
36
Input temperature 4, (or -999 to stop):
91
Input temperature 5, (or -999 to stop):
84
Input temperature 6, (or -999 to stop):
-999
The average temperature is 70.80
The highest temperature is 91.00
The lowest temperature is 36.00

## Optional Step

Because the array is declared to be size 50, the user should not be allowed to enter more than 50 numbers. Add logic to the program so that it will not allow any more inputs once 50 numbers have been entered. To verify your code you can temporarily set the size to a smaller number, like 5, and then increase it back to 50 after testing.