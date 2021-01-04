/*
   Linear equation using elimination method

*/

#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
//Global Declaration
const int row=2;
const int col=3;
//function declaration
void equation1(int list[][col], int rsize);//to display the value in 2D array plus linear equation

void Elimination(int list1[][col], int rsize);//input the 2 values to elimate in eqn1 and eqn2
//then display the new equations that is already multiplied to the 2values

void final1(int list1[][col], int rsize,int Y);
//diplay the value of computed Y and the equation need to substitute the value of Y
//process and computes the value of X
//and finally, display the solution set of (x,y)

void final2(int list1[][col], int rsize,int X);
//diplay the value of computed X and the equation need to substitute the value of X
//process and computes the value of Y
//and finally, display the solution set of (x,y)

int deterY(int list2[3]);//computes the value of Y and returns the value of Y

int deterX(int list2[3]);//computes the value of X and returns the value of X

char choice();//display the menu and returns the value of choice


int main()
{
    char opt;
    
    opt=choice();
    
    
    switch(opt)
    {
       
       
       
       case '1'://two dimensional
          do{    system("cls");
              cout<<"SYSTEMS OF LINEAR EQUATIONS:\n"
                  <<"Solving by addition or elimination\n";
             
		   //ADD CODE HERE
            cout<<"<<<<<<<<MENU>>>>>>>>"<<endl;
            cout<<"[1] Systems of Linear Equation"<<endl;
            cout<<"[2] Quit"<<endl;
            cout<<"Enter your choice: "<<endl;
            cin>>opt
            int list[][];
            int list1[][];
            int list2[][];
            int ir, ic;
		   
	
		  
		   cout<<"This program uses Addition or Elimination Method."
			   <<endl
			   <<"We begin by setting up and evaluating the three variables x, y and the constant."
			   <<"\nFor example,\n 5x + y = -14 \nshould be entered as 5 1 -14";
		   cout<<"\n\nPress any key to continue....";
                       cin.ignore();
		   cin.get();

		   system("cls");
		   
		   cout<<"Again, 5x + y = -14 should be entered as 5 1 -14";
		   //ADD CODE HERE
			//	Call function equation1 here
            equation1(list)
            cout<<"Equation 1"<<endl;
            for(ir=0;ir<rsize;ir++)
	        {
		        for(ic=0;ic<sizeC;ic++)
		        {
		        cout<<setw(5)<<list[ir][ic];	
		        }
		        cout<<endl;
	        }	 
	{
                                   //Call function Elimination here
               Elimination(list1)

                       //ADD CODE HERE
                
                     
                   
                     
       break;
       
       case '2': 
            //ADD CODE HERE
    cout<<"The Program will Quit."<<endl;
    exit(0)
    }//end switch
  
        
     
    system("pause");
    return 0;
}//end main

///////////////////////////////////////////////////////////
char choice()
//display the menu and returns the value of choice
{
     //ADD CODE HERE
     opt=choice
     cout<<"Do you want to try another equation?(y/n) "<<choice<<;
    while(choice == N)
     return (0);
     
}//end choice
///////////////////////////////////////////////////////////////
void equation1(int list[][col], int rsize) 
//to display the value in 2D array plus linear equation
{
//ADD CODE HERE
int ir, ic;
    cout<<endl<<"Enter the Equation";
	for(ir=0;ir<rsize;ir++)
	{
		for(ic=0;ic<col;ic++)
		{
		   cout<<"["<<ir<<"]["<<ic<<"]";
		   cin>>list[ir][ic];	
		}
        cout<<endl;
	}


}//end equation1
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
{

}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Elimination(int list1[][col], int rsize) 
//input the 2 values to elimate in eqn1 and eqn2
//then display the new equations that is already multiplied to the 2values
{
     //ADD CODE HERE
   {
    int eqv1;
    int eqv2;
    string sign;
    int eqt1;
    int eqt2;
    int determ;
    int ir, ic;
 
    cout<<"-----------------------------------------------------------";

    cout<<"Enter values to be used to eliminate the variable"<<endl;
    cout<<"For example... If you have:"<<endl;
    cout<<"2x + 3y = 10"<<endl;
    cout<<"4x + 5y = 15"<<endl;
    cout<<"if you want to eliminate x..you need to input -2"<<endl;
    cout<<"(For 2x to become -4x in eqn.1) and 1 (To remain the value in eqn.2)"<<endl;
    cout<<"If you want to eliminate y..you need to input -/+5 in eqn.1"<<endl;
    cout<<"and +-3 in eqn.2"<<endl;
    
    cout<<"Enter value for equation 1:"<<endl;
    cin>>eqv1;
    cout<<"Enter value for equation 2:"<<endl;
    cin>>eqv2;
 	
    for(int ir=0;ir<rsize;ir++)
       eqt1 = list1[0][ir] * equation1;
       eqt2 = list1[1][ir] * equation2;
       cout<<term1 + term2<<endl;
       if((term1 + term2) == 0){
           for(int ir=0;ir<rsize;ir++){
                if(ir == 0){
                    for(int ic=0;ic<col;ic++){
                        list1[ir][ic] = list1[ir][ic] * equation1;
                    }
                }else{
                    for(int ic=0;ic<col;ic++){
                        list1[ir][ic] = list1[ir][ic] * equation2;
                    }
                }
            }
           determ = ir;
           break;
       }
    }
    
    cout<<endl;

    cout<<"ELIMINATING EQUATIONS"<<endl;
    for(int ir=0;ir<rsize;ir++){

        cout<<"\t";
        for(int ic=0;ic<col;ic++){
            ic == 0 ? sign = "x + " : ic==1 ? sign = "y = " : sign = "";
            cout<<list1[ir][ic]<<sign;
        }
    }

    cout<<endl;
    
}
////////////////////////////////////////////////////
int deterY(int list2[3]) 
//computes the value of Y and returns the value of Y
{
    //ADD CODE HERE
    int determ;
    int val;

    cout<<"========================================================="<<endl;
 
    if(determ == 0){
        val = (list1[0][2] + list1[1][2]) / (list1[0][1] + list1[1][1]);
        final1(list1,rsize,value);
    }else if(determ == 1){
        val = (list1[0][2] + list1[1][2]) / (list1[0][0] + list1[1][0]);
        final2(list1,rsize,value);
    }else{
        cout<<"Invalid input, Error! Input valid value.";
        exit(0);
    }
    
}


///////////////////////////////////////////////
int deterX(int list2[3]) 
//computes the value of X and returns the value of X
{
    //ADD CODE HERE

    int determ;
    int val;
 
    if(determ == 0){
        val = (list1[0][2] + list1[1][2]) / (list1[0][1] + list1[1][1]);
        final1(list1,rsize,val);
    }else if(determ == 1){
        val = (list1[0][2] + list1[1][2]) / (list1[0][0] + list1[1][0]);
        final2(list1,rsize,val);
    }else{
        cout<<"Invalid input, process aborted! Input valid value.";
        exit(0);
    }
    
}
}
///////////////////////////////////////////////////////
void final1(int list1[][col], int rsize,int Y) 
//diplay the value of computed Y and the equation need to substitute the value of Y
//process and computes the value of X
//and finally, display the solution set of (x,y)
{
    //ADD CODE HERE
    cout<<endl<<"Substitute the value of Y to equation 1:";
	for(ir=0;ir<rsize;ir++)
	{
		for(ic=0;ic<col;ic++)
		{
		   cout<<setw(5)<<list1[ir][ic];	
		}
        cout<<endl;
	}


}
////////////////////////////////////////////////////////////////////////////
void final2(int list1[][col], int rsize,int X)
//diplay the value of computed X and the equation need to substitute the value of X
//process and computes the value of Y
//and finally, display the solution set of (x,y)
{
    //ADD CODE HERE
    cout<<endl<<"Then becomes:";
	for(ir=0;ir<rsize;ir++)
	{
		for(ic=0;ic<col;ic++)
		{
		   cout<<setw(5)<<list2[ir][ic];	
		}
        cout<<endl;
	}
    cout<<"Then the solution set (x,y) = ("<<X<<", "<<Y<<")"<<endl;
}
