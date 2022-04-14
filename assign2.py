# declaring variables of the given matrix
a=int
b=int
#Given matrix
A=[[5,a],[b,0]]
#Declaring transpose of th egiven matrix
TranA=A[:][:]
#Finding Transpose of A
for i in range (2) :
    for j in range (2) :
        TranA[i][j]=A[j][i]
#Verifying whether the matrix is symmetric or not
for i in range (2) :
    for j in range (2) :
        if A[i][j] != TranA[i][j] :
            print("There is an error")
            quit()
print("The matrix A is symmetric")
print("Verified")