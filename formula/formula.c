 #include "formula.h"

void print_formula(int n){
	int i;
	int ncr;
	printf("1");
	for(i=1;i<=n;i++){
		printf(" + ");
		ncr=nCr(n,i);
		if(ncr==0){
			printf("Overflow  Error\n");		exit(1);
		}
		printf("%d*x^%d",ncr,i);
	}
	printf("\n");
}
int main(int argc,char* argv[]){
 int n=0;
 struct timeval tv;
 suseconds_t start_ms,end_ms;
 
 gettimeofday(&tv,NULL);
 start_ms=tv.tv_usec;
 
 if(argc!=2){
	printf("Invalid Arguments\n");
	exit(1);
 }
 if((argv[1][0]=='-')&&(argv[1][1]=='h')){
	printf("Usage: formula <power>\n");
	exit(0);	
 }
 if(isalpha(argv[1][0])){
 	printf("ERROR! Invalid Arguments.");
	exit(1);
 }
 n=atoi(argv[1]);
 if((double)n!=atof(argv[1])){
	printf("ERROR! Invalid Arguments.");
	exit(1);
 }
 if(n<0){
	printf("ERROR! Invalid Arguments.");
	exit(1);
 }
printf("(1+x)^%i = ",n);
 print_formula(n);

 gettimeofday(&tv,NULL);
 end_ms=tv.tv_usec;
 
 printf("Time Required %lld ms \n",((long long)(end_ms-start_ms)));
 return 0;
}

