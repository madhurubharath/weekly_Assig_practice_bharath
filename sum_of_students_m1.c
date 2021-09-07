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
