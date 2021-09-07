/*You are given an array of integers, , denoting the marks scored by students in a class.

The alternating elements marks1 , marks2,marks3  and so on denote the marks of boys.
Similarly, , ,  and so on denote the marks of girls.
The array name, , works as a pointer which stores the base address of that array. In other words,  contains the address where  is stored in the memory.

For example, let  and  stores 0x7fff9575c05f. Then, 0x7fff9575c05f is the memory address of .

image

Function Description

Complete the function, marks_summation in the editor below.

marks_summation has the following parameters:

int marks[number_of_students]: the marks for each student
int number_of_students: the size of marks[]
char gender: either 'g' or 'b*/





int marks_summation(int* marks, int number_of_students, char gender) 
{
  //Write your code here.
  int temp;int temp2;int count=0;
  temp=*marks;
  for(int i=0;i<number_of_students-1;i++)
  {
     temp++;
     if(temp!=*marks)
     {
         temp2=temp;
         count++; 
     }
     else 
     {
         marks++;  
     }
     if(temp >= count)
     {
       if(gender == 'b')
       {
          unsigned sum;
          return sum=marks[0]+marks[2]+marks[4];   
       }
       else if(gender == 'g')
       {
          unsigned sum;
          return sum=marks[1]+marks[3];  
       } 
     }
     else 
     {
      unsigned sum;
      return sum =0;  
     }
     
  }
  return 0;
}

int main() {
    int number_of_students;
    char gender;
    int sum;
  
    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));
 
    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }
    
    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);
 
    return 0;
}
