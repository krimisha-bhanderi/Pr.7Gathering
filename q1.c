#include<stdio.h>
int Addition(int a,int b){
	int sum=a+b;
return sum;
}

int Subtraction(int a,int b){
	int sub=a-b;
return sub;
}
int Multiply(int a,int b){
	int Multiply=a*b;
return Multiply;
}
int division(int a,int b){
	int division=a/b;
return division;
}
int Modulo(int a,int b){
	int Modulo=a%b;
return Modulo;
}

int main()
{

	
	int n;
	int fn,sn;
	do{

	printf("Press 1 for +\n");
	printf("Press 2 for -\n");
    printf("Press 3 for *\n");
    printf("Press 4 for /\n");
    printf("Press 5 for %\n");
    printf("Press 0 for exit\n");
    printf("Enter your choice:\n");
    scanf("%d",&n);
    
   
    
    switch(n){
    	case 1:
		
		        printf("enter the first number:");
            	scanf("%d",&fn);
            	printf("enter the second number:");
    	        scanf("%d",&sn);
    	        printf("Addition of %d and %d number is :%d\n", fn,sn,Addition(fn,sn));
	            break;
	        
	        	case 2:
		
		        printf("enter the first number:");
            	scanf("%d",&fn);
            	printf("enter the second number:");
    	        scanf("%d",&sn);
    	        printf("Subtraction of %d and %d number is :%d", fn,sn,Subtraction(fn,sn));
    	        break;
    	        
    	       case 3:
		
		        printf("enter the first number:");
            	scanf("%d",&fn);
            	printf("enter the second number:");
    	        scanf("%d",&sn);
    	        printf("Multiplication of %d and %d number is :%d", fn,sn,Multiply(fn,sn));
    	        break;
    	        
    	        case 4:
		
		        printf("enter the first number:");
            	scanf("%d",&fn);
            	printf("enter the second number:");
    	        scanf("%d",&sn);
    	        printf("division of %d and %d number is :%d", fn,sn,division(fn,sn));
    	        break;
    	        
    	         case 5:
		
		        printf("enter the first number:");
            	scanf("%d",&fn);
            	printf("enter the second number:");
    	        scanf("%d",&sn);
    	        
				printf("modulo of %d and %d number is :%d", fn,sn,Modulo(fn,sn));
                break;
                
                default:
                	printf("you are exited");
}
} while(n != 0);  

    	        
return 0;    	     
}

	       
	

