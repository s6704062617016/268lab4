#include <stdio.h>
int main()
{
char grade;
int score,i,n;
int A=0,B=0,C=0,D=0,F=0;

while(1){
	scanf("%d",&score);
	if(score == -1)
	    break;
	if (score >= 80) {
            grade = 'A';
            A++;
        }
        else if (score >= 75) {
            grade = 'B';
            B++;
        }
        else if (score >= 68) {
            grade = 'C';
            C++;
        }
        else if (score >= 50) {
            grade = 'D';
            D++;
        }
        else {
            grade = 'F';
            F++;
        }
	
	printf("%d(%c)\n", score,grade);
}
    printf("A(%d)\n", A);
    printf("B(%d)\n", B);
    printf("C(%d)\n", C);
    printf("D(%d)\n", D);
    printf("F(%d)\n", F);
    return 0;
}
