// #include <stdio.h>
// int main(){
//     printf("Hello ");
// }
// #include <stdio.h>
// int main() {
//     int num;
//     printf("Enter an integer: ");
//     scanf("%d", &num);

//     // true if num is perfectly divisible by 2
//     if(num % 2 == 0)
//         printf("%d is even.", num);
//     else
//         printf("%d is odd.", num);
    
//     return 0;
// }


// Q1 = wap to calculate sum of first n natural numbers
// Q2 = wap to display following series
// 1,4,9,...nterms
// Q3 = wap to check whether a number is prime or not
// Q4 = wap to print day of a week according to the  entered number
// (1-monday,2-tuesday...)

// #include<stdio.h>
// int main(){
//     int n,i,sum = 0;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         sum+=i;
//     }
//     printf("Sum=%d",sum);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int n,i = 1;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     while (i <=n){
//         printf("%d",i*i);
//         i++;
//     }

    

// }


// Function

// #include <stdio.h>
// #include<conio.h>
// int sum (int,int);
// int main(){
//     int a,b,c;
//     printf("\n Enter the number");
//     scanf("%d%d",&a,&b);
//     c = sum(a,b);
//     printf("sum = %d",c);
//     getch();

// }
// int sum (int x,int y)
// {
//     int z;
//     z = x+y;
//     return z;
// }
   
// #include<stdio.h>
// #include<conio.h>
// int fact(int);
// int fact(int n){
//     int i ,fact = 1;
//     for(i=1;i<=n;i++)
//     fact = fact*i;
//     return fact;
// }
// int main(){
//     int n,f;
//     printf("\n Enter the no");
//     scanf("%d",&n);
//     f = fact(n);
//     printf("Factorial is=%d",f);
//     getch();



// }

// #include <stdio.h>
// int main() {
//   int n, reversed = 0, remainder, original;
//     printf("Enter an integer: ");
//     scanf("%d", &n);
//     original = n;

//     // reversed integer is stored in reversed variable
//     while (n != 0) {
//         remainder = n % 10;
//         reversed = reversed * 10 + remainder;
//         n /= 10;
//     }

//     // palindrome if orignal and reversed are equal
//     if (original == reversed)
//         printf("%d is a palindrome.", original);
//     else
//         printf("%d is not a palindrome.", original);

//     return 0;
// }


// write a function to find the sum of first n integers.

// #include <stdio.h>

// // Function for taking input from the user
// int input() {
//     int n;
//     printf("Up to which number you want to find the sum: ");
//     scanf("%d", &n);
//     return n;
// }

// // Function to find the sum of numbers from 1 to n
// int sum(int num) {
//     int add = 0;
//     for (int i = 1; i <= num; i++) {
//         add += i;
//     }
//     return add;
// }

// // Function for displaying the result
// void display(int n, int sum) {
//     printf("1+2+3+...+%d+%d = %d", n - 1, n, sum);
// }

// int main() {
//     int range, result;
//     range = input();
//     result = sum(range);
//     display(range, result);
//     return 0;
// }


// #include<stdio.h>
// #include<conio.h>
// int sum (int, int);
// int main()
// {
//     int a,b,c;
//     printf("\n Enter the number");
//     scanf("%d%d",&a,&b);
//     c = sum(a,b);
//     printf("Sum:%d",c);
//     getch();

// }
// int sum(int x, int y)
// {
//     int z;
//     z = x+y;
//     return z;
// }


// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     int c;
//     c = sum();
//     printf("Sum = %d",c);
//     getch();
// }
// int sum()
// {
//     int x,y,z;
//     printf("\n Enter the number");
//     scanf("%d%d",&x,&y);
//     z = x+y;
//     return z;
// }


// call by value
// void swap (int,int);
// int main(){
//     int a,b;
//     printf("Enter the number")
//     scanf("%d%d",&a,&b);
//     printf("Before swapping a =%d,b = %d",a,b)
//     swap(a,b);
//     printf("After swapping a = %d,b = %d",a,b)
//     getch();
    
// }
// void swap(int x,int y)
// {
//     int t
//     printf("Before swapping x = %d,y =%d",x,y);
//     t=x;
//     x=y;
//     y=t;
//     printf("Before swapping x = %d,y =%d",x,y);
//}





//call by reference
// #include<stdio.h>
// void swap(int * ,int *);
// int main(){
//     int a,b;
//     printf("Enter the number");
//     scanf("%d%d",&a,&b);
//     swap(&a,&b)
//     printf("formal argument = %d%d ",a,b);
//     getch();
// }
// void swap(int *x,int *y)
// {
//     int z;
//     z = *x;
//     *x = *y;
//     *y = z;
//     printf("Actual argument=%d%d",*x,*y);

// }


// #include<stdio.h>
// #include<conio.h>
// int fact(int);
// int main()
// {
//     int n,f;
//     printf("Enter the number");
//     scanf("%d",&n);
//     f = fact(n);
//     printf("Factorial=%d",f);
//     getch();
    
// }
// int fact(int x)
// {
//     if(x==1)
//     return 1;
//     else
//     return(x*fact(x-1));

// }


// #include <stdio.h>

// int main() {
//    int i, n, t1 = 0, t2 = 1, nextTerm;

//    printf("Enter the number of terms: ");
//    scanf("%d", &n);

//    printf("Fibonacci Series: ");

//    for (i = 1; i <= n; i++) {
//       printf("%d, ", t1);
//       nextTerm = t1 + t2;
//       t1 = t2;
//       t2 = nextTerm;
//    }
   
//    return 0;
// }

//wap to print the add n natural number using recursion

// #include<stdio.h>

// int findSum(int P){
//     if(P==1){
//         return 1;
//     }
//     return P+findSum(P-1);
// }
// int main(){
//     int P ;
//     printf("Enter a number");
//     scanf("%d",&P);
//     printf("The sum of %d natural number %d\n",P,findSum(P));
//     return 0;
// }

//wap to find the sum of digits using function

// #include<stdio.h>
// int getSum(int n){
//     int sum  = 0;
//     while(n != 0){
//         sum+=n%10;
//         n /= 10;
//     }
//     return sum;
// }
// int main(){
//     int num;
//     printf("Enter an integer ");
//     scanf("%d",&num);
//     printf("Sum of digits: %d\n ",getSum(num));
//     return 0;
// }



// #include<stdio.h>

// void ToH(int n, char source,char destination,char auxilary);
// int main()
// {
//     int n;
//     printf("Enter no. of disks: ");
//     scanf("%d",&n);
//     ToH(n,'A','C','B');
//     return 0;
// }

// void ToH(int n ,char source,char destination,char auxilary);
// {
//     if(n==1)
//     {
//         printf("Move disk 1 from %c to %c\n",source,destination)
//         return;
//     }
//     ToH(n-1,source,auxilary,destination);
//     printf("Move disk%d from %c\n",n,source,destination);
//     ToH(n-1,auxilary,destination,source);
// }

// wap to check whether a given number is prime or not using function.


// #include<stdio.h>
// int prime(int num){
//     if(num<=1){
//         return 0;
//     }else{
//         for(int i = 2;i<=num/2;i++){
//             if (num % i ==0){
//                 return 0;
//             }
//         }
//     }
//     return 1;
// }
// int main(){
//     int num;
//     printf("Enter a number");
//     scanf("%d",&num);

//     if(prime(num)){
//         printf("%d is a prime number\n",num);
//     }else{
//         printf("%d is not a prime number\n",num);
//     }
//     return 0;
// }



// #include<stdio.h>
// int main(){
//     int a ;
//     printf("\n Enter the number");
//     scanf("%x",&a);
//     printf("\n%x",&a);
//     getch();
// }





// #include<stdio.h>
// int main(){
//     int a ,*p;
//     printf("\n Enter the number");
//     scanf("%x",&a);
//     printf("\n%x",&a);
//     p = &a;
//     printf("\n%d",*p);
//     getch();
// }



// #include<stdio.h>
// int main(){
//     int a,b;
//     a = 6;
//     b = 7;
//     printf("\n Address of a = %x",&a);
//     printf("\n Address of b = %x",&b);
//     printf("\n Value of a = %d and b = %d",a,b);
//     p = &a;
//     q = &b;
//     r = *p+*q;
//     printf("\n Addition of a and b = %d",r);
//     return 0;
// }




// #include<stdio.h>
// int main(){
//     int a,*p;
//     printf("\n Enter the number");
//     scanf("%d",&a);
//     p = &a;
//     if (*p%2 ==0)
//     {
//         printf("\n number is even");
    
//     }
//     else
//     {
//         printf("\n number is odd");
//     }
//     return 0;
// }


// #include<stdio.h>
// void swap(int *x,int *y){
//     int temp = *x;
//     *x = *y;
//     *y = temp;
// }
// int main(){
//     int a, b;
//     printf("Enter two number: ");
//     scanf("%d%d",&a,&b);

//     printf("Before swapping a = %d, b =%d\n",a,b);

//     swap(&a,&b);

//     printf("After swapping: a = %d,b = %d\n",a,b);

//     return 0;
// }


// #include<stdio.h>
// #include<math.h>
// int main() {
//     int amount,principle,Time,rate,ci;

//     printf("Enter the amount");
//     scanf("%d",amount);

//     printf("Enter the principle");
//     scanf("%d",principle);

//     printf("Enter the time");
//     scanf("%d",Time);

//     printf("Enter the rate");
//     scanf("%d",rate);

//     ci = principle*(pow((1+rate/100),Time));
//     printf("Compound Interest = %d\n",ci);    

//     return 0;

// }



// #include<stdio.h>
// int main(){
//     int n1,n2,i, gcd;

//     printf("Enter two integers: ");
//     scanf("%d%d",&n1,&n2);

//     for (i = 1;i<=n1 && i<=n2;i++){
//         if(n1 % i==0&& n2%i==0)

//         gcd = i;
//     }

//     printf("GCD of%d and %d is %d\n",n1,n2,gcd);
//     return 0;

// }





// ARRAY: It contains similar data types.  Represent : data type,identifier,[size of array]  exp: int a[5] 


// #include<stdio.h>
// int main(){
//     int a[10],i,sum;
//     for(i = 0;i<10;i++){
//         printf("\n Enter the number");
//         scanf("%d",&a[i]);
//     }
//     printf("\n Elements of array are: ");
//     for(i=0;i<10;i++){
//          printf("\t%d",a[i]);
//          sum = sum +a[i];


//     }
//     printf("\n%d",sum);
//     return 0;
// }



// Wap to count the total numbers of odd and even number in array.

// #include<stdio.h>
// int main(){
//     int a[10],i,Even = 0,Odd = 0;
//     for(i=0;i<10;i++){
//         printf("\n Enter the number");
//         scanf("%d",&a[i]);
//     }
//     for(i=0;i<10;i++){
//         if(a[i]%2==0)
//          Even++;
//         else
//         Odd++;
//     }
//     printf("\n Total even number = %d",Even);
//     printf("\n Total odd number = %d",Odd);

//     return 0;
// }



//WAP to find the sum of all even number and product of all odd number.


// #include<stdio.h>
// int main(){
//     int a[10],i,Even = 0,Odd = 1;
//     for(i=0;i<10;i++){
//         printf("\n Enter the number");
//         scanf("%d",&a[i]);
//     }
//     for(i=0;i<10;i++){
//         if(a[i]%2==0)
//          Even+=a[i];
//         else
//         Odd*=a[i];
//     }
//     printf("\n Sum of even number = %d",Even);
//     printf("\n Product of odd number = %d",Odd);

//     return 0;
// }

// Count the frequency of elements.


// #include <stdio.h>

// int main() {
//     int arr[100], freq[100];
//     int size, i, j, count;

//     // Input size of array
//     printf("Enter size of array: ");
//     scanf("%d", &size);

//     // Input elements in array
//     printf("Enter elements in array: ");
//     for (i = 0; i < size; i++) {
//         scanf("%d", &arr[i]);
//         // Initially initialize frequencies to -1
//         freq[i] = -1;
//     }

//     for (i = 0; i < size; i++) {
//         count = 1;
//         for (j = i + 1; j < size; j++) {
//             // If duplicate element is found
//             if (arr[i] == arr[j]) {
//                 count++;
//                 // Make sure not to count frequency of same element again
//                 freq[j] = 0;
//             }
//         }
//         // If frequency of current element is not counted
//         if (freq[i] != 0) {
//             freq[i] = count;
//         }
//     }

//     // Print frequency of each element
//     printf("\nFrequency of all elements of array:\n");
//     for (i = 0; i < size; i++) {
//         if (freq[i] != 0) {
//             printf("%d occurs %d times\n", arr[i], freq[i]);
//         }
//     }

//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int a[3][3],i,j;
//     for(i=0;i<3;i++)
//     {
//         for(j = 0;j<3;j++)
//         {
//             printf("\n Enter the value for 2 d array");
//             scanf("%d",&a[i][j]);
//         }
//     }
//     printf("\n Elements are: ");
//     for(i = 0;i<3;i++)
//     {
//         printf("\n");
//         for(j=0;j<3;j++)
//         {
//             printf("\t%d",a[i][j]);
//         }
//     }
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int a = 5;
//     printf("%d\n",a);
//     printf("%d\n",++a);
//     printf("%d\n",a++);
//     printf("%d\n",a);
//     return 0;

// }


// WAP to reverse the elements of an array.

// #include<stdio.h>
// int main()
// {
//     int a[50],n,i,j,t;
//     printf("Enter the number of elements");
//     scanf("%d",&n);
//     printf("\n Enter the elements of array");
//     for(i = 0;i<=n-1;i++)
//     scanf("%d",&a[i]);
//     for(i = 0,j=n-1;i<j;i++,j--)
//     {
//         t = a[i];
//         a[i] = a[j];
//         a[j] = t;

//     }
//     printf("Reversed array:");
//     for(i = 0;i<=n-1;i++)
//     {
//         printf("\t%d",a[i]);
//     }
//     getch();

// }


// WAP to find largest and smallest element of array.



// #include <stdio.h>

// int main() {
//     int a[1000], i, n, min, max;

//     printf("Enter the size of the array: ");
//     scanf("%d", &n);

//     printf("Enter elements in the array: ");
//     for (i = 0; i < n; i++) {
//         scanf("%d", &a[i]);
//     }

//     min = max = a[0];
//     for (i = 1; i < n; i++) {
//         if (min > a[i]) {
//             min = a[i];
//         }
//         if (max < a[i]) {
//             max = a[i];
//         }
//     }

//     printf("Minimum element in the array: %d\n", min);
//     printf("Maximum element in the array: %d\n", max);

//     return 0;
// }




//wap to search element in  array

// #include <stdio.h>

// int main() {
//     int a[50], n, key, pos = 0;
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);
//     printf("Enter the elements of the array: ");
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &a[i]);
//     }
//     printf("Enter the value to search: ");
//     scanf("%d", &key);

//     for (int i = 0; i < n; i++) {
//         if (a[i] == key) {
//             pos = i + 1;
//             break;
//         }
//     }

//     if (pos != 0) {
//         printf("Element found at position %d\n", pos);
//     } else {
//         printf("Element not found\n");
//     }

//     return 0;
// }


// #include <stdio.h>

// void swap(int* xp, int* yp) {
//     int temp = *xp;
//     *xp = *yp;
//     *yp = temp;
// }

// void selectionSort(int arr[], int n) {
//     int i, j, min_idx;
//     for (i = 0; i < n - 1; i++) {
//         min_idx = i;
//         for (j = i + 1; j < n; j++) {
//             if (arr[j] < arr[min_idx]) {
//                 min_idx = j;
//             }
//         }
//         swap(&arr[min_idx], &arr[i]);
//     }
// }

// void printArray(int arr[], int size) {
//     for (int i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }

// int main() {
//     int arr[] = {64, 25, 12, 22, 11};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     selectionSort(arr, n);
//     printf("Sorted array: ");
//     printArray(arr, n);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int  a[50],i,n;
//     printf("Enter the number of elements: ");
//     scanf("%d",&n);
//     printf("Enter the elements");
//     for(i = 0;i<=n;i++){
//         scanf("%d",&a[i]);
//     }
//     max = min = a[0]

// }






























