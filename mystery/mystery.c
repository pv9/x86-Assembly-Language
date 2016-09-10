 #include"mystery.h"
 int add(int a ,int b){
 	return b+a;
 }
 int compute_fib(int n){
	 int b;//-24(%ebp)
	 int res;//-8(%ebp)
 	
 	if(num[n]!=-1){
  	    b=num[n];
	 }else{
	 	res=-1;
	 	if(n==0){
	 		res=0;
	 	}
	 	else if(n==1){
	 		res=1;
	 	}else{
	 		  //.L10:
	 		res= compute_fib(n-1)+ compute_fib(n-2);
		 	
	 	}
 	
 	}
 		//.L9
 		if(num[n]==-1){
 			num[n]=res;
 			
 		}
 		//L12
		b=num[n];
 		return b;
 }
int main(int argc,char *argv[])
{
	int a,i;
	a=atoi(argv[1]);
	i=0;
	while(i<200){
		num[i]=-1;
		i=i+1;
	}
	printf("Value:   %d\n",	compute_fib(a));
 	return 0;
}

