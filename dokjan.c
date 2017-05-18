#include <stdio.h>
#include <math.h>
int main(void){
    int s,a,b;
    scanf("%d",&s);
    for (int i = 0; i < s; i++){
    	scanf("%d %d",&a,&b);
    	if (a==1){
    		for (int i = 0; i < b; i++)
    		{
    			for (int j = 0; j < b; j++)
    			{
    				if (j==b-1)
    				{
    					printf("*");
    				}else{
    					printf(" ");
    				}
    			}
    			printf("\n");
    		}
    	}else if (a==2)
    	{	
    		int x,l;
    		for (int i = 0; i < b; i++)
    		{
    			for (int j = 0; j < b; j++)
    			{
    				if ((i==0)||(i==b-1))
    				{	
    					x=b%2;
    					printf("*");
    				}else if(x==0&&i==(b/2)){
    					printf("*");
    					if (j==b-1)
    					{
    					l=1;
    					}
    				}else if (x!=0&&i==ceil(b/2))
    				{
    					printf("*");
    				}else if(i>(b/2)-1){
    					if (j==0)
    					{
    						printf("*");
    					}else{
	    					printf(" ");
	    				}	
    				}else{
    					if (j==b-1)
    					{
    						printf("*");
    					}else{
	    					printf(" ");
	    				}	
    				}
    				if (l==1)
    				{
    					printf("\n");
    					for (int j = 0; j < b; j++)
    					{
    						if (j==0)
	    					{
	    						printf("*");
	    					}else{
		    					printf(" ");
		    				}	
    					}
    					l=0;

    				}
    			}
    			printf("\n");
    		}    		
    	}else if (a==3)
    	{
    		int x,l;
    		for (int i = 0; i < b; i++)
    		{
    			for (int j = 0; j < b; j++)
    			{
    				if ((i==0)||(i==b-1))
    				{	
    					x=b%2;
    					printf("*");
    				}else if(x==0&&i==(b/2)){
    					printf("*");
    					if (j==b-1)
    					{
    					l=1;
    					}
    				}else if (x!=0&&i==ceil(b/2))
    				{
    					printf("*");
    				}else{
    					if (j==b-1)
    					{
    						printf("*");
    					}else{
	    					printf(" ");
	    				}	
    				}
    				if (l==1)
    				{
    					printf("\n");
    					for (int j = 0; j < b; j++)
    					{
    						if (j==b-1)
	    					{
	    						printf("*");
	    					}else{
		    					printf(" ");
		    				}	
    					}
    					l=0;

    				}
    			}
    			printf("\n");
    		}    		
    	}else if (a==4)
    	{
    		int x,l;
    		for (int i = 0; i < b; i++)
    		{
    			for (int j = 0; j < b; j++)
    			{
    				if(x==0&&i==(b/2)){
    					printf("*");
    					if (j==b-1)
    					{
    					l=1;
    					}
    				}else if (x!=0&&i==ceil(b/2))
    				{
    					printf("*");
    				}else if(i>(b/2)-1){
    					if (j==b-1)
    					{
    						printf("*");
    					}else{
	    					printf(" ");
	    				}	
    				}else{
    					if (j==b-1||j==0)
    					{
    						printf("*");
    					}else{
	    					printf(" ");
	    				}	
    				}
    				if (l==1)
    				{
    					printf("\n");
    					for (int j = 0; j < b; j++)
    					{
    						if (j==b-1)
	    					{
	    						printf("*");
	    					}else{
		    					printf(" ");
		    				}	
    					}
    					l=0;

    				}
    			}
    			printf("\n");
    		}    	
    	}else if (a==6)
    	{
			int x,l;
    		for (int i = 0; i < b; i++)
    		{
    			for (int j = 0; j < b; j++)
    			{
    				if ((i==0)||(i==b-1))
    				{	
    					x=b%2;
    					printf("*");
    				}else if(x==0&&i==(b/2)){
    					printf("*");
    					if (j==b-1)
    					{
    					l=1;
    					}
    				}else if (x!=0&&i==ceil(b/2))
    				{
    					printf("*");
    				}else if(i>(b/2)-1){
    					if (j==b-1||j==0)
    					{
    						printf("*");
    					}else{
	    					printf(" ");
	    				}	
    				}else{
    					if (j==0)
    					{
    						printf("*");
    					}else{
	    					printf(" ");
	    				}	
    				}
    				if (l==1)
    				{
    					printf("\n");
    					for (int j = 0; j < b; j++)
    					{
	    					if (j==b-1||j==0)
	    					{
	    						printf("*");
	    					}else{
		    					printf(" ");
		    				}	
    					}
    					l=0;

    				}
    			}
    			printf("\n");
    		}    		
    	}else if (a==5)
    	{
			int x,l;
    		for (int i = 0; i < b; i++)
    		{
    			for (int j = 0; j < b; j++)
    			{
    				if ((i==0)||(i==b-1))
    				{	
    					x=b%2;
    					printf("*");
    				}else if(x==0&&i==(b/2)){
    					printf("*");
    					if (j==b-1)
    					{
    					l=1;
    					}
    				}else if (x!=0&&i==ceil(b/2))
    				{
    					printf("*");
    				}else if(i>(b/2)-1){
    					if (j==b-1)
    					{
    						printf("*");
    					}else{
	    					printf(" ");
	    				}	
    				}else{
    					if (j==0)
    					{
    						printf("*");
    					}else{
	    					printf(" ");
	    				}	
    				}
    				if (l==1)
    				{
    					printf("\n");
    					for (int j = 0; j < b; j++)
    					{
    						if (j==b-1)
	    					{
	    						printf("*");
	    					}else{
		    					printf(" ");
		    				}	
    					}
    					l=0;

    				}
    			}
    			printf("\n");
    		}    		
    	}else if (a==7)
    	{
    		for (int i = 0; i < b; i++)
    		{
    			for (int j = 0; j < b; j++)
    			{
    				if (i==0)
    				{
    					printf("*");
    				}else{
    					if (j==b-1)
	    				{
	    					printf("*");
	    				}else{
	    					printf(" ");
	    				}
    				}
    			}
    			printf("\n");
    		}
    	}else if (a==8)
    	{
    		int x,l;
    		for (int i = 0; i < b; i++)
    		{
    			for (int j = 0; j < b; j++)
    			{
    				if ((i==0)||(i==b-1))
    				{	
    					x=b%2;
    					printf("*");
    				}else if(x==0&&i==(b/2)){
    					printf("*");
    					if (j==b-1)
    					{
    					l=1;
    					}
    				}else if (x!=0&&i==ceil(b/2))
    				{
    					printf("*");
    				}else{
    					if (j==0||j==b-1)
    					{
    						printf("*");
    					}else{
	    					printf(" ");
	    				}	
    				}
    				if (l==1)
    				{
    					printf("\n");
    					for (int j = 0; j < b; j++)
    					{
    						if (j==0||j==b-1)
	    					{
	    						printf("*");
	    					}else{
		    					printf(" ");
		    				}	
    					}
    					l=0;

    				}
    			}
    			printf("\n");
    		}    	
    	}else if (a==9)
    	{
    		int x,l;
    		for (int i = 0; i < b; i++)
    		{
    			for (int j = 0; j < b; j++)
    			{
    				if ((i==0)||(i==b-1))
    				{	
    					x=b%2;
    					printf("*");
    				}else if(x==0&&i==(b/2)){
    					printf("*");
    					if (j==b-1)
    					{
    					l=1;
    					}
    				}else if (x!=0&&i==ceil(b/2))
    				{
    					printf("*");
    				}else if(i<(b/2)){
    					if (j==b-1||j==0)
    					{
    						printf("*");
    					}else{
	    					printf(" ");
	    				}	
    				}else{
    					if (j==b-1)
    					{
    						printf("*");
    					}else{
	    					printf(" ");
	    				}	
    				}
    				if (l==1)
    				{
    					printf("\n");
    					for (int j = 0; j < b; j++)
    					{
	    					if (j==b-1)
	    					{
	    						printf("*");
	    					}else{
		    					printf(" ");
		    				}	
    					}
    					l=0;

    				}
    			}
    			printf("\n");
    		}    		
    	}else if (a==0)
    	{
    		for (int i = 0; i < b; i++)
    		{
    			for (int j = 0; j < b; j++)
    			{
    				if (i==b-1||i==0)
    				{
    					printf("*");
    				}else{
    					if (j==b-1||j==0)
    					{
    						printf("*");
    					}else{
	    					printf(" ");
	    				}	
    				}
    			}
    			printf("\n");
    		}
    	}
    }
return 0;

}