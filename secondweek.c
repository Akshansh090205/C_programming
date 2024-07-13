//WAP to count the even and odd number in a array and also find the sum of odd and even numbers.Print odd and even number.
// #include <stdio.h>

// void countevenNumbers(int arr[], int size)
// {
//   int even_count = 0;
//   int odd_count = 0;

//   for (int i=0; i<size; i++){
//     if (arr[i] % 2 == 0)
//       even_count++;
    
//     else
//       odd_count++;
//   }
//     printf("No of even elements = %d\nNumbers of odd elements = %d\n", even_count, odd_count);
// }
// void EvenOddSum(int arr[], int n) {
//     int even = 0;
//     int odd = 0;

//     for (int i = 0; i < n; i++) {
//         if (i % 2 == 0)
//             even += arr[i];
//         else
//             odd += arr[i];
//     }

//     printf("Odd index positions sum: %d\n", even);
//     printf("Even index positions sum: %d\n", odd);
// }
// int main(){
//   int arr[] = {1,2,3,4,5,6,7,8,9,10};
//   int n = sizeof(arr) / sizeof(arr[0]);

//   countevenNumbers(arr, n);
//   EvenOddSum(arr,n);
//   return 0;
// }


//Assign any value to string
// #include<stdio.h>
// int main()
// {
// char name[20]  = "Anuj Kumar";
// printf(name);
// return 0;
// }

// #include<stdio.h>
// int main(){
//   char a[50];
//   printf("\n Enter your name");
//   scanf("%s",&a);
//   printf("\n your name is:%s",a);
//   return 0;
// }


// #include<stdio.h>
// int main(){
//   char a[50];
//   printf("\n Enter your name: ");
//   //scanf("%s",&a);
//   gets(a);
//  // printf("\n your name is:%s",a);
//  puts(a);
//   return 0;
// }

// #include<stdio.h>
// #include<String.h>
// int main(){
//   char str[]  ="Akshansh";
//   int length = strlen(str);

//   printf("Length of the string: %d\n",length);

//   return 0;



// }


// #include<stdio.h>
// #include<string.h>

// int main(){
//   int n;
//   char str1[20],str2[20];
//   char  str1 = "Akshansh";
//   char str2 = "Akshansh";
//   n = strcmp(str1,str2);
//   printf(n);
//   return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// char* copyString(char s[]) {
//     char* s2 = (char*)malloc(20);
//     strcpy(s2, s);
//     return s2;
// }

// int main() {
//     char s1[20] = "Akshansh";
//     char* s2 = copyString(s1);
//     printf("%s", s2);
//     return 0;
// }


// #include<stdio.h>
// #include<string.h>
// int main(){
// strcpy(Destination,source);
// char str1[20],str2[20];
// printf("Akshansh");
// gets(str1);
// strcpy(str2,str1);
// puts(str2);
// getch();
// return 0;

// }

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str1[50] = "Akshansh ";
//     char str2[] = "Pal";
    
//     strcat(str1, str2);

//     printf("Concatenated string: %s\n", str1);

//     return 0;
// }




// #include<stdio.h>
// #include<string.h>
// int main(){
//   char str[20] = "Akshansh";
//   strrev(str);
//   printf("Reversed String: %s\n",str);
//   return 0;
// }


//Q Input two string
//Add both the string in the thrid one.
//if the len of third string is >10 Then all the character in uppercase otherwise in lowercase.

// #include<stdio.h>
// #include<string.h>
// int main(){
//   char str1[50] = "Akshansh";
//   char str2[50] = "Pal";
//   strcat(str1,str2);
//   printf("string is: %s\n",str1);
//   return 0;
// }


//WAP in c to check string is palindrome or not.
// #include<stdio.h>
// #include<string.h>
// int main(){
//   char str[20];
//   int i, len;
//   int a = 0;
//   printf("Enter the string ");
//   scanf("%s",str);
//   len = strlen(str);
//   for (i = 0; i < len / 2; i++) {
//         if (str[i] != str[len - i - 1]) {
//             a = 1;
//             break;
//         }
//     }

//     // Output the result
//     if (a) {
//         printf("%s is not a palindrome\n", str);
//     } else {
//         printf("%s is a palindrome\n", str);
//     }

//     return 0;
// }


// #include <stdio.h>

// // Function to find the length of a string
// int find_length(char *input) {
//     int length = 0;
//     while (input[length] != '\0') {
//         length++;
//     }
//     return length;
// }

// int main() {
//     char str[100];
//     printf("Enter a string: ");
//     scanf("%s", str);

//     // Call the custom function to find the length
//     int len = find_length(str);
//     printf("Length of the string is: %d\n", len);

//     return 0;
// }

//WAP to reverse the string.
// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str[100] = "string";
//     printf("Original String: %s\n", str);

//     int len = strlen(str);
//     for (int i = 0, j = len - 1; i <= j; i++, j--) {
//         char temp = str[i];
//         str[i] = str[j];
//         str[j] = temp;
//     }

//     printf("Reversed String: %s\n", str);
//     return 0;
// }



//WAP to print character by character from the given string.

// #include <stdio.h>

// int main() {
//     char str[100];

//     printf("Please enter a string: ");
//     scanf("%s", str);

//     for (int i = 0; str[i] != '\0'; i++) {
//         printf("The character at index %d: %c\n", i, str[i]);
//     }

//     return 0;
// }



//WAP to copy a string into another string without using strcpy() function.
// WAP to find the length of a string without using any library function.
// WAP to copy a string into another string without using strcpy function.
// WAP to find the reverse of a string without using strrev function.
// WAP to check whether a string is palindrome or not with using string function.
// WAP to count total vowel &consonants in string.
// WAP to convert string into lowercase without using builtin function strlwr.
// WAP to compare two string without using string function.
// WAP to count the total number of character in string without using string function.
// WAP to count the total number of words from the given string without using builtin string function.




//  #include <stdio.h>


// int find_length(char *input) {
//     int length = 0;
//     while (input[length] != '\0') {
//         length++;
//     }
//     return length;
// }

// int main() {
//     char str[100];
//     printf("Enter a string: ");
//     scanf("%s", str);

//     int len = find_length(str);
//     printf("Length of the string is: %d\n", len);

//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int main(){
//   char str[20] = "Akshansh";
//   printf("Original string: %s\n",str);



//     int len = strlen(str);
//     for (int i = 0, j = len - 1; i <= j; i++, j--) {
//         char temp = str[i];
//         str[i] = str[j];
//         str[j] = temp;
//     }

//     printf("Reversed String: %s\n", str);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char string1[20];
//     int i, length;
//     int flag = 0;

//     // Prompt the user for input
//     printf("Enter a string: ");
//     scanf("%s", string1);

//     // Calculate the string length
//     length = strlen(string1);

//     // Compare characters from the start and end of the string
//     // and stop if a mismatch is found or the middle of the string is reached.
//     for (i = 0; i < length / 2; i++) {
//         if (string1[i] != string1[length - i - 1]) {
//             flag = 1;
//             break;
//         }
//     }

//     // Output the result
//     if (flag) {
//         printf("%s is not a palindrome\n", string1);
//     } else {
//         printf("%s is a palindrome\n", string1);
//     }

//     return 0;
// }



// #include <stdio.h>

// void count_vowels_and_consonant(char* str) {
//     int vowels = 0, consonants = 0;
//     for (int i = 0; str[i] != '\0'; i++) {
//         char ch = str[i];
//         if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
//             ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
//             vowels++;
//         } else if (ch != ' ') {
//             consonants++;
//         }
//     }
//     printf("\nVowels: %d", vowels);
//     printf("\nConsonants: %d", consonants);
// }

// int main() {
//     char* str = "Akshansh Pal";
//     printf("String: %s", str);
//     count_vowels_and_consonant(str);
//     return 0;
// }



// #include <stdio.h>

// int main() {
//     char str[100];
//     int i;

//     printf("Enter a string: ");
//     gets(str);

//     // Convert each uppercase character to lowercase
//     for (i = 0; str[i] != '\0'; i++) {
//         if (str[i] >= 'A' && str[i] <= 'Z') {
//             str[i] = str[i] + 32;
//         }
//     }

   
//     printf("The string in lowercase is: %s\n", str);

//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int i,a;
//     char[20]a = "Akshansh"
//     printf(a)
//     for (i = 1,i>a,i++)
//     printf(i)
// }



//Angstorm Number
//  #include <stdio.h>

// int main() {
//     int num, originalNum, remainder, result = 0;

//     printf("Enter a three-digit integer: ");
//     scanf("%d", &num);

//     originalNum = num;
//     while (originalNum != 0) {
//         // Get the last digit
//         remainder = originalNum % 10;
//         // Add the cube of the digit to the result
//         result += remainder * remainder * remainder;
//         // Remove the last digit from the original number
//         originalNum /= 10;
//     }

//     if (result == num)
//         printf("%d is an Armstrong number.", num);
//     else
//         printf("%d is not an Armstrong number.", num);

//     return 0;
// }



// STRUCTURE

// #include<stdio.h>
// struct Student{
//     int Roll_no;
//     float marks;
//     char name[50];
// };
// int main(){
//     struct Student S;
//     S.Roll_no = 10;
//     S.marks = 24.5;
  
//     printf("%d\n %f\n",S.Roll_no,S.marks);
//     printf("Size of structure: %zu bytes\n",sizeof(S));
//     strcpy(S.name,"Akshansh");
    
//     return 0;
// }



//WAP to read the information of a student from the keyboard and print the same on screen.

// struct student{
//     int roll;
//     char name[50];
//     float marks;

// };
// int main(){
//     struct student s1;
//     printf("\n Enter the s1 student detail");
//     scanf("%d%s%f",&s1.roll,&s1.name,&s1.marks);
//     printf("Details of student s1\n");
//     return 0;

// }


//WAP to create structure that read the information of 5 students from the keybord and print the same on screen.

// #include <stdio.h>

// struct student {
//     char firstName[50];
//     int roll;
//     float marks;
// } s[5];

// int main() {
//     int i;

//     printf("Enter information of students:\n");

//     // Storing information
//     for (i = 0; i < 5; ++i) {
//         s[i].roll = i + 1;
//         printf("\nFor roll number %d:\n", s[i].roll);
//         printf("Enter first name: ");
//         scanf("%s", s[i].firstName);
//         printf("Enter marks: ");
//         scanf("%f", &s[i].marks);
//     }

//     printf("\nDisplaying Information:\n");

//     // Displaying information
//     for (i = 0; i < 5; ++i) {
//         printf("\nRoll number: %d\n", i + 1);
//         printf("First name: %s\n", s[i].firstName);
//         printf("Marks: %.1f\n", s[i].marks);
//     }

//     return 0;
// }

// struct marks{
//     float m1;
//     float m2;
//     float m3;
// };

// struct Student{
//     int roll;
//     char name;
//     struct marks m;
// };
// int main (){
//     struct Student s;
//     s.m.m1
// }

// #include<stdio.h>
// struct Student{
//     int roll;
//     float marks;
//     char name[50];

// };
// int main(){
//     struct Student s1;
//     printf("%d",sizeof(s1));

// }

// #include<stdio.h>
// union Student{
//     int roll;
//     float marks;
//     char name[50];

// };
// int main(){
//      union Student s1;
//     printf("%d",sizeof(s1));

// }

// #include <stdio.h>
// #include <string.h>

// union Marks {
//     int subject1;
//     int subject2;
//     int subject3;
// };

// struct Student {
//     int rollno;
//     char name[50];
//     union Marks marks[3];
// };

// int main() {
//     int n;
    
//     printf("Enter the number of students: ");
//     scanf("%d", &n);

//     struct Student students[n];

//     for (int i = 0; i < n; i++) {
//         printf("Enter student - %d data\n", i + 1);

//         printf("Rollno: ");
//         scanf("%d", &students[i].rollno);

//         // Clear the input buffer before reading a string
//         while ((getchar()) != '\n');
        
//         printf("Name: ");
//         fgets(students[i].name, 50, stdin);
//         // Remove newline character if present
//         students[i].name[strcspn(students[i].name, "\n")] = 0;

//         printf("Subject 1 marks: ");
//         scanf("%d", &students[i].marks[0].subject1);

//         printf("Subject 2 marks: ");
//         scanf("%d", &students[i].marks[1].subject2);

//         printf("Subject 3 marks: ");
//         scanf("%d", &students[i].marks[2].subject3);
//     }

//     // Display student data
//     for (int i = 0; i < n; i++) {
//         printf("\nStudent - %d data\n", i + 1);

//         printf("Rollno: %d\n", students[i].rollno);
//         printf("Name: %s\n", students[i].name);
//         printf("Subject 1 marks: %d\n", students[i].marks[0].subject1);
//         printf("Subject 2 marks: %d\n", students[i].marks[1].subject2);
//         printf("Subject 3 marks: %d\n", students[i].marks[2].subject3);
//     }

//     return 0;
// }


// #include<stdio.h>
// struct Student{
//     int roll;
//     char name[50];
//     char branch[50];

// };

// union info{
//     int erp;
//     char sem;
//     struct Student s

// };

// #include<stdio.h>
// int main (){
//     FILE *fp;
//     fp = fopen("c002.txt","w");
//     fputc('a',fp);
//     fclose(fp);
// }


// #include<stdio.h>
// int main(){
//     FILE *fp;
//     fp = fopen("c002.txt","w");
//     fprintf(fp,"abc");
//     fclose(fp);
// // }


// #include<stdio.h>
// int main(){
//     FILE * fp;
//     fp = open("c002.txt","a");
//     fputs("abc",fp);
//     printf("File ok");
//     fclose(fp);
//     return 0;
// }


//WAP for storing the name , age,marks,into file "Myfile.txt".
// #include<stdio.h>
// int main(){
//     FILE *ptr;
//     int roll;
//     float marks;
//     char name[50];
//     ptr = fopen("C002_1.txt","w");
//     printf("Enter Roll no:" );
//     scanf("%d" ,&roll);
//     fprintf(ptr,"Roll no = %d\n",roll);
//     printf("Enter Marks:");
//     scanf("%f",&marks);
//     fprintf(ptr,"Total Marks = %f\n",marks);
//     printf("Enter Name: ");
//     scanf("%s",&name);
//     fprintf(ptr,"Name = %s\n",name);
//     fclose(ptr);
// }    


// #include <stdio.h>
// int main()
// {
//     FILE *ptr;
//     int roll;
//     float marks;
//     char name[30];
//     ptr = fopen("C002_1.txt","w");
//     printf("Enter Name:");
//     scanf("%s",&name);
//     fprintf(ptr,"Name = %s\n",name);
//     printf("Enter Roll no:");
//     scanf("%d",&roll);
//     fprintf(ptr,"Roll no = %d\n",roll);
//     printf("Enter Marks:");
//     scanf("%f",&marks);
//     fprintf(ptr,"Marks = %f\n",marks);
//     fclose(ptr);
// }


// #include<stdio.h>
// int main(){
//     FILE *fp;
//     char a[300];
//     fp = fopen("c002_1.txt","r");
//     printf("%s",fgets(a,200,fp));
//     fclose(fp);
//     return 0;
// }

// count total vowels and consonants in a file.
// #include<stdio.h>
// int main(){
//     FILE *fp;
//     char c ;
//     int vowel = 0, cont = 0;
//     fp = fopen("c001.txt","r");
//     while (c!= EOF)
//     {
//         c = fgetc(fp);
//         if(c>='a' && c<='z')||(c>='A' && c<='Z')
//         {
//             if(c=='a' || c=='e' ||c=='i' || c=='o' || c=='u'
//             c=='A' || c=='E' ||c=='I' || c=='O' || c=='U' )
//             {
//                 vowel++;
//                 else
//                 cont++;
//             }
//             printf("Total vowels = %d, Total consonants = %d")

//         }
//     }
// }


#include<stdio.h>
int main(){
    FILE*fp;
    fp = fopen("c001.txt","w");
    if (fp == NULL)
    {
        printf("ERROR,file not found.\n");
        return 0;
    }
    fprintf(fp,"0123456789\n");
    fseek(fp,4,SEEK_SET);
    fprintf(fp,"ABC");
    fclose(fp);

}


























