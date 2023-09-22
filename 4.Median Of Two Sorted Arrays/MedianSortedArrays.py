class Solution():
    def findMedianSortedArrays(self,nums1: list[int], nums2: list[int])-> float:
      nums1.extend(nums2)
      nums1.sort()
      if (len(nums1))%2==0:
          m=(nums1[len(nums1)//2]+nums1[(len(nums1)//2)-1])/2
          return m
      else:
          m=(nums1[len(nums1)//2])
          return m
sol=Solution()
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
Res=sol.findMedianSortedArrays(num1,num2)
print("Median: ",Res) 
