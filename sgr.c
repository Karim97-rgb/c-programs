#include<stdio.h>
#include<stdlib.h>

struct passenger{
	int age;
	int travel_time;
	int choice;
	int basefare;
	int number_of_seat_booked;
	char travel_class[10];
};

void msg();
int peakhour(int hour);

int main(){
	float fare[2]={35000,20000};
	char *class[2]={"first class","second class"};
	float total,surcharge=0;
		// creating struct variable
	struct passenger p;
	msg();
	printf("\n");

	printf("choose the number of the travel class\n");
	printf("\n");
    printf("1: first class\n");
    printf("2:second class\n");
    scanf("%d",&p.choice);
    //check for error
    if(p.choice<1||p.choice>2){
    	printf("invalid choice");
    	return EXIT_FAILURE;
	}
	printf("enter your age: ");
	scanf("%d",&p.age);
	
	printf("enter number of seats: ");
	scanf("%d",&p.number_of_seat_booked);
	
		printf("enter travel hour (0-23): ");
	scanf("%d",&p.travel_time);
	  total=fare[p.choice-1]*p.number_of_seat_booked;
	  
	  
	  total=fare[p.choice-1]*p.number_of_seat_booked;
	  
	  if(p.age<12){
	  	return total*(50/100);
	  }else if(p.age>=60){
	  	return total*(15/100);
	  }
	  else{
	  	printf("invalid input");
	  }
	  if ((peakhour(p.travel_time)))
	  surcharge=total*0.05;
	  printf("class: %f",class[p.choice-1]);
	  
return(EXIT_SUCCESS);
} 

// welcome messasge function
void msg(){
	printf(".........+........welcome to SGR ticketing system..............+..............\n");
}

int peakhour(int hour){
	return((hour>=9&&hour<=9)||(hour>=16&&hour<=18));
	
	
}
