// Asking an user to input password, according to user input we have performed 3 different cases while using while loop
// and if conditional statement....



#include<iostream>
using namespace std;
int main(){
	int i;
	i=1;
	cout<<"You have only 10 attempts to set your password, now start.."<<endl;
	while(i<=10){
		int pass;
		cin>>pass;
		if(pass<9999){
			cout<<"Enter the strong password"<<endl;
		}
		else if(pass>9999){
			cout<<"Congo.. your password has been set..";
			break;
		}
		
		else{
			cout<<"Enter the valid password"<<endl;
		}
		i++;	
		}
		return 0;
	}
	
	
	
	
	// this is do while loop where we first execute the statement
	// then we will check the condition and if the condition is satisfied then
	// statement will execute further until and unless  the condition is not  satisfied..
	
	
	
#ininclude<iostream>
usiusing namespace std;
int main(){
	int i;
	i=1;
	do{
		cout<<"Start the loop for printing numbers from 1 to 10.."<<endl;
		i++;
	}
	
	
	while(i<=10);
	
	return 0;
	
	
	
	


// in this we use infinite loop and we apply if condition to break the loop if condition is satisfied....


	
	#include<iostream>
	using namespace std;
	int main(){
		int i;
		i=1;
		while(1){
			if(i==75){
			break;
			}
			else{
				cout<<i<<" "; 
			}
			i++;
			
			
		}
		
	}
	
	
	
	
	
	
	
	
	
	
	
