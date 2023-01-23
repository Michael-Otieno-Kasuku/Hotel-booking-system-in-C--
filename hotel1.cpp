#include<iostream>
using namespace std;

int main(){
	int quant;
	int choice;
	//Quantity
	int Qrooms = 0, Qpasta=0, Qburger = 0, Qnoodles = 0, Qshakes = 0, Qchicken = 0;
	//Food items sold
	int Srooms = 0, Spasta = 0, Sburger= 0, Snoodles=0, Sshakes = 0, Schicken = 0;
	//Total price of items
	int Total_rooms = 0,Total_pasta = 0, Total_burger = 0, Total_noodles = 0, Total_shakes = 0, Total_chicken = 0; 
	
	cout<<"\n\tQuantity of items we have";
	cout<<"\nRooms available";
	cin>>Qrooms;
	cout<<"\nQuantity of pasta: ";
	cin>>Qpasta;
	cout<<"\nQuantity of burger: ";
	cin>>Qburger;
    cout<<"\nQuantity of noodles: ";
	cin>>Qnoodles;
    cout<<"\nQuantity of shake: ";
	cin>>Qshakes;
    cout<<"\nQuantity of chicken-roll: ";
	cin>>Qchicken;
    
    m:
    cout<<"\n\t\t\tPlease select from the given menu options ";
    cout<<"\n\n1) Rooms";
    cout<<"\n2) Pasta";
    cout<<"\n3) Burger";
    cout<<"\n4) Noodles";
    cout<<"\n5) Shake";
    cout<<"\n6) Chicken-roll";
    cout<<"\n7) Information regarding sales and collection";
    cout<<"\n8) Exit";
    
    cout<<"\n\nPlease enter your choice!";
    cin>>choice;
    
    switch(choice){
    	case 1:
    		cout<<"\n\nEnter the number of rooms you want";
    		cin>>quant;
    		if(Qrooms-Srooms>=quant){
    			Srooms = Srooms + quant;
    			Total_rooms = Total_rooms+ quant * 1200;
    			cout<<"\n\n\t\t"<<quant<<" rooms /rooms has been allocated to you!";
			}
			else{
				cout<<"\n\tOnly "<<Qrooms-Srooms<<" Rooms remaining in the hotel";
			}
		break;
			case 2:
    		cout<<"\n\nEnter Pasta quantity";
    		cin>>quant;
    		if(Qpasta-Spasta>=quant){
    			Spasta = Spasta + quant;
    			Total_pasta = Total_pasta + quant * 250;
    			cout<<"\n\n\t\t"<<quant<<" pasta is the order!";
			}
			else{
				cout<<"\n\tOnly "<<Qpasta-Spasta<<" pasta remaining in the hotel";
			}
		break;
			case 3:
    		cout<<"\n\nEnter burger quantity";
    		cin>>quant;
    		if(Qburger-Sburger>=quant){
    			Sburger = Sburger + quant;
    			Total_burger = Total_burger + quant * 1200;
    			cout<<"\n\n\t\t"<<quant<<" burger is the order!";
			}
			else{
				cout<<"\n\tOnly "<<Qburger-Sburger<<" burgers remaining in the hotel";
			}
		break;
			case 4:
    		cout<<"\n\nEnter Noodle quantity";
    		cin>>quant;
    		if(Qnoodles-Snoodles>=quant){
    			Snoodles = Snoodles + quant;
    			Total_noodles = Total_noodles + quant * 140;
    			cout<<"\n\n\t\t"<<quant<<" noodles is the order!";
			}
			else{
				cout<<"\n\tOnly "<<Qnoodles-Snoodles<<" Noodles remaining in the hotel";
			}
		break;
			case 5:
    		cout<<"\n\nEnter Quantity of shakes";
    		cin>>quant;
    		if(Qshakes-Sshakes>=quant){
    			Sshakes = Sshakes + quant;
    			Total_shakes = Total_shakes + quant * 120;
    			cout<<"\n\n\t\t"<<quant<<" shakes /shakes is the order!";
			}
			else{
				cout<<"\n\tOnly "<<Qshakes-Sshakes<<" shakes remaining in the hotel";
			}
		break;
			case 6:
    		cout<<"\n\nEnter chicken-roll quantity";
    		cin>>quant;
    		if(Qchicken-Schicken>=quant){
    			Schicken = Schicken + quant;
    			Total_chicken = Total_chicken + quant * 150;
    			cout<<"\n\n\t\t"<<quant<<" chicken is the order!";
			}
			else{
				cout<<"\n\tOnly "<<Qchicken-Schicken<<" chicken-roll remaining in the hotel";
			}
		break;
		case 7:
			cout<<"\n\t\t\tDetails of sales and collection";
			cout<<"\n\nNumber of rooms we had : "<<Qrooms;
			cout<<"\n\nNumber of rooms we gave for rent "<<Srooms;
			cout<<"\n\n Remaining rooms: "<<Qrooms-Srooms;
			cout<<"\n\nTotal rooms colection for the day : "<<Total_rooms;
			
			cout<<"\n\nNumber of pastas we had : "<<Qpasta;
			cout<<"\n\nNumber of pasta sold "<<Spasta;
			cout<<"\n\n Remaining pasta: "<<Qpasta-Spasta;
			cout<<"\n\nTotal pasta colection for the day : "<<Total_pasta;
			
			cout<<"\n\nNumber of noodles we had : "<<Qnoodles;
			cout<<"\n\nNumber of noodles sold "<<Snoodles;
			cout<<"\n\n Remaining noodles: "<<Qnoodles-Snoodles;
			cout<<"\n\nTotal noodles colection for the day : "<<Total_noodles;
			
			cout<<"\n\nNumber of burger we had : "<<Qburger;
			cout<<"\n\nNumber of burger sold "<<Sburger;
			cout<<"\n\n Remaining burger: "<<Qburger-Sburger;
			cout<<"\n\nTotal burger colection for the day : "<<Total_burger;
			
			cout<<"\n\nNumber of shakes we had : "<<Qshakes;
			cout<<"\n\nNumber of shakes sold "<<Sshakes;
			cout<<"\n\n Remaining shakes: "<<Qshakes-Sshakes;
			cout<<"\n\nTotal shakes colection for the day : "<<Total_shakes;
			
			cout<<"\n\nNumber of chicken we had : "<<Qchicken;
			cout<<"\n\nNumber of chicken sold "<<Schicken;
			cout<<"\n\n Remaining chicken: "<<Qchicken-Schicken;
			cout<<"\n\nTotal chicken colection for the day : "<<Total_chicken;
			
			cout<<"\n\n\nTotal collection for the day: "<<Total_rooms+Total_burger+Total_chicken+Total_shakes+Total_pasta+Total_noodles;
			break;
			
			case 8:
				exit(0);
		    default:
		    	cout<<"\nPlease select the numbers mentioned above!";
	}
	goto m;

}
