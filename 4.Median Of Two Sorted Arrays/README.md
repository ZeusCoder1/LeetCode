# Median of Two Sorted Arrays
>Python
# Introduction

>* The findMedianSortedArrays method in this Python class (Solution) calculates the median of two sorted arrays, nums1 and nums2.
>* It takes two input lists, sorts them, and then calculates the median based on the sorted merged array.
# How It Works
>The findMedianSortedArrays method in the Solution class:
>* Accepts two sorted arrays as input (nums1 and nums2).
>* Merges the two arrays into one sorted array.
>* Calculates the median of the merged array and returns it.
>* The program uses basic sorting and mathematical calculations to find the median.

# Description
>This portion takes input from the user basically the elements of the lists.
```ruby
num1,num2=[],[]
n1=int(input("Enter Size of List1: "))
for i in range(0,n1):
    r=int(input("Enter Element[{}]: ".format(i)))
    num1.append(r)
print("List1: ",num1)
n2=int(input("Enter Size of List2(Greater than {}): ".format(n1)))
for j in range(0,n2):
    s=int(input("Enter Element[{}]: ".format(j)))
    num2.append(s)
print("List2: ",num2)
```
---

>This segment call the findMedianSortedArrays.
```ruby
Res=sol.findMedianSortedArrays(num1,num2)
print("Median: ",Res) 
```
---

>* The function adds/concatenate/extend the list2 in list1
>* Then it sorts the list1 in ascending order using the in-built sort() function.
>* Then according to odd or even terms the formula is applied.
>* Note: (n-1) is considered because the index counting starts from 0.
```ruby
def findMedianSortedArrays(self,nums1: list[int], nums2: list[int])-> float:
    nums1.extend(nums2)
    nums1.sort()
    if (len(nums1))%2==0:
        m=(nums1[len(nums1)//2]+nums1[(len(nums1)//2)-1])/2
        return m
    else:
        m=(nums1[len(nums1)//2])
        return m
```
---
