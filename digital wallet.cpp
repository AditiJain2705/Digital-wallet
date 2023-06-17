

//WALLET PROGRAM
//ADITI JAIN 15/12/21
#include<iostream>
using namespace std;
int  pwallet=0,gwallet=0,bank=50000;
class phonepay
{
	public:
		int choice,amt,amte,amutt,amount,price,decide;
		void recharge()
		{
			cout<<endl<<"Press 1: for Phonepay recharge";
			cout<<endl<<"Press 2: for Googlepay recharge";
			cin>>choice;
			cout<<endl;
			if(choice==1)
			{
			
				cout<<"Enter the amount";
				cin>>amount;
				cout<<endl;
				if(amount<=bank)
				{
				bank=bank-amount;
				pwallet=pwallet+amount;
				cout<<"Recharge successful in phonepay!!!!!!!";
	        	}
	            else
			    {
					cout<<"Insufficient fund!!!!!";
				}		
		}
			if(choice==2)
			{
			
				cout<<"Enter the amount";
				cin>>amount;
				cout<<endl;
				if(amount<=bank)
				{
				bank=bank-amount;
				gwallet=gwallet+amount;
				cout<<"Recharge successful in googlepay!!!!!!";
	        	}
	            else
			    {
					cout<<"Insufficient fund!!!!!!!";
				}		
		}
		}
		void payment()
		{
			
			cout<<endl<<"Press 1: for Phonepay payment";
			cout<<endl<<"Press 2: for Googlepay payment";
			cout<<endl;
			cin>>decide;
			if(decide==1)
			{
			
				cout<<"Enter the amount";
				cin>>price;
				if(price<=pwallet)
				{
				pwallet=pwallet-price;
				
				cout<<"Payment successful by phonepay!!!!!!!";
	        	}
	            else
			    {
					cout<<"Insufficient fund!!!!!";
				}		
		}
			if(decide==2)
			{
			
				cout<<"Enter the amount";
				cin>>price;
				if(price<=gwallet)
				{
				gwallet=gwallet-price;
				
				cout<<"Payment successful by googlepay!!!!!!";
	        	}
	            else
			    {
					cout<<"Insufficient fund!!!!!!!";
				}	
			
		}
	}
		void checkbalance()
		{
			cout<<endl<<"Press 1: For Phonepay balance";
			cout<<endl<<"Press 2: For Googlepay balance";
			cin>>amt;
			cout<<endl;
			if(amt==1)
			{
				cout<<endl<<"Phonepay balance:"<<pwallet;
			}
			if(amt==2)
			{
				cout<<endl<<"Google balance:"<<gwallet;
			}
			
		}
		void bankbalance()
		{
			cout<<endl<<"Bank balance  "<<bank;
		}
		void googlepaytophonepay()
		{
			cout<<endl<<"Google pay balance  "<<gwallet;
			cout<<endl<<"Enter the amount";
			cin>>amte;
			if(amte<=gwallet)
			{
			
			gwallet=gwallet-amte;
			pwallet=pwallet+amte;
			
			cout<<endl<<"Transfer successful  googlepay to  phonepay!!!!";
	}
	else
	{
		cout<<"Insufficient fund!!!!!!!";
	}
		
		}
		void phonepaytogooglepay()
		{
			cout<<endl<<"Phonepay balance  "<<pwallet;
			cout<<endl<<"Enter the amount";
			cin>>amutt;
			if(amutt<=pwallet)
			{
			
			pwallet=pwallet-amutt;
			gwallet=gwallet+amutt;
			
			cout<<"Transfer successful phonepay to googlepay!!!!!!";
		}
		else
		{
			cout<<"Insufficient fund!!!!!!!";
		}
		}
};
main()
{
	
	int choice,number=1;
	while(number==1)
	{
	
	cout<<endl<<"***********************************************************************************************************";
	cout<<endl<<"Press 1: For Recharge";
	cout<<endl<<"Press 2: For Payment";
	cout<<endl<<"Press 3: For Check Balance";
	cout<<endl<<"Press 4: For Bank Balance";
	cout<<endl<<"Press 5: For Googlepay to Phonepay transfer";
	cout<<endl<<"Press 6: For phonepay to Googlepay transfer";
	cout<<endl;
	cout<<"Enter your choice";
	cin>>choice;
	
	
	phonepay ob;
	if(choice==1)
	{
		system("cls");
		ob.recharge();
		
	}
	else if(choice==2)
	{
		
		
		ob.payment();
	}
	else if(choice==3)
	{
		system("cls");
		ob.checkbalance();
	}
	else if(choice==4)
	{
		
		system("cls");
		ob.bankbalance();
	}
	else if(choice==5)
	{
		
		system("cls");
		ob.googlepaytophonepay();
	}
	
	else if(choice==6)
	{
		
		system("cls");
		ob.phonepaytogooglepay();
	}
}
}
