.globl nCr
	.type	nCr, @function
nCr:
  # Your code for nCr should go here
   #int find_ncr(int n, int r) {
   #int  result;
 
   #result = Factorial(n)/(Factorial(r)*Factorial(n-r));
   #return result	
	pushl %ebp
	movl %esp,%ebp
	
	pushl %edx
	pushl %ecx
	pushl %ebx

	
	movl 12(%ebp),%edx
	#calculate r!	
	movl %edx,(%esp)
	call Factorial
	movl %eax,%edx
	

	mov 8(%ebp),%ecx
	#calculate n!
	movl %ecx,(%esp)
	call Factorial
	mov %eax,%ecx

	#ecx=n! edx=r!
	movl %ecx,%eax
	movl %edx,%ebx
	xor %edx,%edx	
	divl %ebx
	movl %eax,%ebx
	#ebx=n!/R!
	
	movl 8(%ebp),%eax
	movl 12(%ebp),%ecx
	subl %ecx,%eax
	#%eax contains n-r

	movl %eax,%ecx
	movl %ecx,(%esp)
	call Factorial
	#eax = (n-r)!
	mov %eax,%ecx	

	mov %ebx,%eax
	xor %edx,%edx
	divl %ecx
	
	jno .NO_ERROR2
	movl $0,%eax
	.NO_ERROR2:

	popl %ebx
	popl %ecx
	popl %edx
	leave
	ret
	 	





.globl Factorial
	.type	Factorial, @function
Factorial:
  # Your code for Factorial should go here
	pushl %ebp
	movl %esp,%ebp
	subl $4,%esp
	
	
	pushl %edx
	
	movl 8(%ebp),%edx
	
	#factorial logic starts here
	movl $1,%eax
	cmpl $1,%edx
	jle .DONE
     .LOOP:
	imull %edx,%eax
	subl $1,%edx
	cmpl $1,%edx
	jg .LOOP
     .DONE:
	
	jno .NO_ERROR
	movl $0,%eax
	.NO_ERROR:
	#factorial logic ends here
	
	

	popl %edx

	addl $4,%esp

	leave
	ret
