#include <iostream>

using namespace std;


int main()

{
    
int i, j, N;

    
cout<<"a:";
    
cin>>N;

    
for(i=1; i<=N; i++)
    
{
        
if(i & 1)
        
{
                        
for(j=1; j<=i; j++)
            
{
                
cout<<j;
            
}
        
}
        
else
        
{
                       
for(j=i; j>=1; j--)
            
{
                
cout<<j;
            
}
        
}

        
cout<<"\n";
    
}

for(i=N-1; i>=1; i--)
    
{
        
if(i & 1)
        
{
            
            
for(j=1; j<=i; j++)
            
{
                
cout<<j;
            
}
        
}
        
else
        
{
           

            
for(j=i; j>=1; j--)
           
{
                
cout<<j;
            
}
        
}

        
cout<<"\n";
    
}
    
return 0;

}