#include <stdio.h>
int main()
{
char grade;
int score,i,n;

scanf("%d",&n);
for(i=0;i<n;i++){
        scanf("%d",&score);
	if(score>=80)
		grade = 'A';
    else if(score >=75)
	    grade = 'B';
	else if(score >= 68)
	    grade = 'C';
	else if(score >= 50)
	    grade = 'D';
	else
	    grade = 'F';
	
	printf("%d(%c)\n", score,grade);
}
    return 0;
}
