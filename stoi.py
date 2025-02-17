"""
In this snippet, we are converting a string representation of a number into an integer and then incrementing it by 1 before printing the result.
"""
str = input()

num = 0
for ch in str:
    num = num*10 + (ord(ch) - ord('0'))
print(num+1)