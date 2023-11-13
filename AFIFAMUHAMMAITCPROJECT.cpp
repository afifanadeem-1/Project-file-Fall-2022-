#include <iostream>
using namespace std;
int main() {
    int k = 2, option, count = 0;
    float percentage[100];
    char Grades[100], exit = 'o';
    int roll_no[100] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50};
	float mid_exam[100] = {12,45,23,35,16,36,35,50,34,23,23,27,34,65,33,42,19,34,25,29,12,45,26,41,40,50,23,21,20,28,26,34,30,31,22,50,47,34,50,39,29,18,10,6,37,50,21,29,35,45};
    float final_exam[100] = {65,76,34,75,87,76,37,57,84,57,86,95,23,65,34,75,23,94,65,98,34,24,65,79,45,18,39,50,60,30,60,29,84,80,70,60,35,65,58,45,75,62,78,35,75,62,33,92,49,57};
    
//  <--------------------calculating the size of an array---------------------------->
	for(int i=0; i<100; i++){
		if(roll_no[i] >= 1){
			count++;
		}
		else{
			continue;
		}
	}
	cout<<count;
//  <------------for percentage calculation ad grades allocation--------------------->
    for(int i = 0; i < 100; i++){
    	percentage[i] = ((mid_exam[i] * 40) / 50) + ((final_exam[i]*60) / 100);
    	
		if (percentage[i] > 85 && percentage[i] <= 100)
		{
		    Grades[i] = 'A';
		}
		else if (percentage[i] > 72 && percentage[i] <= 85)
		{
		    Grades[i] = 'B';
		}
		else if (percentage[i] > 59 && percentage[i] <= 72)
		{
		    Grades[i] = 'C';
		}
		else if (percentage[i] > 50 && percentage[i] <= 59)
		{
		    Grades[i] = 'D';
		}
		else if (percentage[i] < 50)
		{
		    Grades[i] = 'F';
		}
	}

	
    while(k > 1)
    {
	    if (exit != 'e' || exit != 'E')
	    {
	        cout << "<---------------------------------------->"<<endl;
	        cout << "Please Select your Desired Option Below : "<<endl;
	        cout << "<---------------------------------------->"<<endl;
	        cout << "1 : " << " Sort and display all the records roll number wise in ascending order" <<endl;
	        cout << "2 : " <<" Sort and display all the records roll number wise in descending order." <<endl;
	        cout << "3" <<" Sort and display all records in ascending order based on marks in Midterm" <<endl;
	        cout << "4" <<" Sort and display all records in descending order based on marks in Midterm" <<endl;
	        cout << "5" <<" Sort and display all records in ascending order based on marks in Finalterm" <<endl;
	        cout << "6" <<" Sort and display all records in descending order based on marks in Finalterm" <<endl;
	        cout << "7" <<" Sort and display all records in ascending order based on weighted percentage" <<endl;
	        cout << "8" <<" Sort and display all records in descending order based on weighted percentage" <<endl;
	        cout << "9" <<" Sort and display all records in ascending order based on Grade" <<endl;
	        cout << "10" <<" Sort and display all records in descending order based on Grade" <<endl;
	        cout << "11" << " Add a new entry of a student. "<<endl;
	        cout << "12" << " Delete a student record based on his roll number.  "<<endl;
	        cout << "13" << " Display record of all the students greater than X weighted percentage ( Descending )"<<endl;
	        cout << "14" << " Display record of all the students greater than X weighted percentage ( Ascending )"<<endl;
	        cout << "15" << " Display record of all the students less than or equal to X weighted percentage ( Descending )"<<endl;
	        cout << "16" << " Display record of all the students less than or equal to X weighted percentage ( Ascending )"<<endl;
	        cout << "17" << " Display record of all the students greater than X grade ( Descending )"<<endl;
	        cout << "18" << " Display record of all the students greater than X grade ( Ascending )"<<endl;
	        cout << "19" << " Display record of all the students less than or equal to X grade ( Descending )"<<endl;
	        cout << "20" << " Display record of all the students less than or equal to X grade ( Ascending )"<<endl;
	        cout << "21" << " Display record of all the students with X grade ( Ascending ) ( Roll number ) "<<endl;
	        cout << "22" << " Display record of all the students with X grade ( Descending ) ( Roll number ) "<<endl;
	        cout << "23" << " Display record of all the students with X grade ( Ascending ) ( WP )"<<endl;
	        cout << "24" << " Display record of all the students with X grade ( Descending ) ( WP )."<<endl;
	        cout << "25" << " Display total count of students out of 100 with WP less than equal to X."<<endl;
	        cout << "26" << " Display total count of students out of 100 with WP greater than equal to X."<<endl;
	        cout << "27" << " Display total count of students out of 100 with grade equal to X. "<<endl;
	       	cout << "<---------------------------------------->"<<endl;
	       	cin >> option;
	       	
//	        <------------------ for option 01 ------------------>
			if (option == 1){
				float temp;
				float temp2;
				float temp3;
				float temp4;
				float temp5;
				 for(int i = 0; i < count; i++)
				{		
					for(int j = 0; j < count; j++)
					{
						if(roll_no[j] < roll_no[j-1])
						{
							temp=roll_no[j-1];
							roll_no[j-1]=roll_no[j];
							roll_no[j]=temp;
							
							temp2 = mid_exam[j-1];
							mid_exam[j-1]=mid_exam[j];
							mid_exam[j]=temp2;
							
							temp3 = final_exam[j-1];
							final_exam[j-1]=final_exam[j];
							final_exam[j]=temp3;
							
							temp4 = percentage[j-1];
							percentage[j-1]=percentage[j];
							percentage[j]=temp4;
							
							temp5 = Grades[j-1];
							Grades[j-1]=Grades[j];
							Grades[j]=temp5;
						}
					}
				}
			    cout<<"Sorted values in Ascending Order :- "<<endl;
		    	cout << "| Roll No |" << "| MidTerm Marks |" << "| FinalTerm Marks |" << "| Weighted Percentage |" << "| Grades |"<<endl;
				for (int i = 0 ; i < count ; i++)
				{
					cout << "| " << roll_no[i] << " |" << "|" << "\t" << mid_exam[i] << "\t"  << "|" << "|" << "\t" << final_exam[i] << "\t"  << "|" << "|" << "\t" << percentage[i] << "\t" << "|" << "|" << "\t" << Grades[i] << "\t" << "|" <<endl;
				}
				char cont_not;
				cout<< "Do you want to Continue or Not ? (press |c,C| for Continue or |e,E| for Exit : ";
				cin >> cont_not;
				if (cont_not == 'c' || cont_not == 'C')
				{
			    	continue;
				}
				else if (cont_not == 'e' || cont_not == 'E')
				{
					k = 2;
					cout<<"OKay Good Bye..."<<endl;
					break;
				}
				else{
					cout << "Invalid Input !"<<endl;
				}
				
			}
//			<------------------ for option 02 ------------------>
			if (option == 2){
				float temp;
				float temp2;
				float temp3;
				float temp4;
				float temp5;
				int c;
				cout<<"Sorted values in Descending Order :- "<<endl;
		    	cout << "| Roll No |" << "| MidTerm Marks |" << "| FinalTerm Marks |" << "| Weighted Percentage |" << "| Grades |"<<endl;
				for(int i = 0; i < count; i++)
				{		
				
					for(int j= 1; j <= (count-1); j++)
					{
						if(roll_no[j] > roll_no[j-1])
						{
							temp=roll_no[j-1];
							roll_no[j-1]=roll_no[j];
							roll_no[j]=temp;
							
							temp2 = mid_exam[j-1];							
							mid_exam[j-1]=mid_exam[j];
							mid_exam[j]=temp2;
							
							temp3 = final_exam[j-1];
							final_exam[j-1]=final_exam[j];
							final_exam[j]=temp3;
							
							temp4 = percentage[j-1];
							percentage[j-1]=percentage[j];
							percentage[j]=temp4;
							
							temp5 = Grades[j-1];
							Grades[j-1]=Grades[j];
							Grades[j]=temp5;
						}
					}
				}
//				cout <<"===========>>>>> " << c <<endl;
				for (int i = 0 ; i < count ; i++)
				{
					cout << "| " << roll_no[i] << " |" << "|" << "\t" << mid_exam[i] << "\t"  << "|" << "|" << "\t" << final_exam[i] << "\t"  << "|" << "|" << "\t" << percentage[i] << "\t" << "|" << "|" << "\t" << Grades[i] << "\t" << "|" <<endl;
				}
				char cont_not;
				cout<< "Do you want to Continue or Not ? (press |c,C| for Continue or |e,E| for Exit : ";
				cin >> cont_not;
				if (cont_not == 'c' || cont_not == 'C')
				{
			    	continue;
				}
				else if (cont_not == 'e' || cont_not == 'E')
				{
					k = 2;
					cout<<"OKay Good Bye..."<<endl;
					break;
				}
				else{
					cout << "Invalid Input !"<<endl;
				}
				
			}
//	        <------------------ for option 03 ------------------>
			if (option == 3){
				float temp;
				float temp2;
				float temp3;
				float temp4;
				float temp5;
				 for(int i = 0; i < count; i++)
				{		
					for(int j = 0; j < count; j++)
					{
						if(mid_exam[j] < mid_exam[j-1])
						{
							temp=roll_no[j-1];
							roll_no[j-1]=roll_no[j];
							roll_no[j]=temp;
							
							temp2 = mid_exam[j-1];
							mid_exam[j-1]=mid_exam[j];
							mid_exam[j]=temp2;
							
							temp3 = final_exam[j-1];
							final_exam[j-1]=final_exam[j];
							final_exam[j]=temp3;
							
							temp4 = percentage[j-1];
							percentage[j-1]=percentage[j];
							percentage[j]=temp4;
							
							temp5 = Grades[j-1];
							Grades[j-1]=Grades[j];
							Grades[j]=temp5;
						}
					}
				}
			    cout<<"Sorted values in Ascending Order :- "<<endl;
			    cout << "| Roll No |" << "| MidTerm Marks |" << "| FinalTerm Marks |" << "| Weighted Percentage |" << "| Grades |"<<endl;
		    	for (int i = 0 ; i < count ; i++)
				{
					cout << "| " << roll_no[i] << " |" << "|" << "\t" << mid_exam[i] << "\t"  << "|" << "|" << "\t" << final_exam[i] << "\t"  << "|" << "|" << "\t" << percentage[i] << "\t" << "|" << "|" << "\t" << Grades[i] << "\t" << "|" <<endl;
				}
				char cont_not;
				cout<< "Do you want to Continue or Not ? (press |c,C| for Continue or |e,E| for Exit : ";
				cin >> cont_not;
				if (cont_not == 'c' || cont_not == 'C')
				{
			    	continue;
				}
				else if (cont_not == 'e' || cont_not == 'E')
				{
					k = 2;
					cout<<"OKay Good Bye..."<<endl;
					break;
				}
				else{
					cout << "Invalid Input !"<<endl;
				}
				
			}			
//			<------------------ for option 04 ------------------>
			if (option == 4){
				float temp;
				float temp2;
				float temp3;
				float temp4;
				float temp5;
				int c;
				cout<<"Sorted values in Descending Order :- "<<endl;
		    	cout << "| Roll No |" << "| MidTerm Marks |" << "| FinalTerm Marks |" << "| Weighted Percentage |" << "| Grades |"<<endl;
				for(int i = 0; i < count; i++)
				{		
					for(int j= 1; j <= (count-1); j++)
					{
						if(mid_exam[j] > mid_exam[j-1])
						{
							temp=roll_no[j-1];
							roll_no[j-1]=roll_no[j];
							roll_no[j]=temp;
							
							temp2 = mid_exam[j-1];							
							mid_exam[j-1]=mid_exam[j];
							mid_exam[j]=temp2;
							
							temp3 = final_exam[j-1];
							final_exam[j-1]=final_exam[j];
							final_exam[j]=temp3;
							
							temp4 = percentage[j-1];
							percentage[j-1]=percentage[j];
							percentage[j]=temp4;
							
							temp5 = Grades[j-1];
							Grades[j-1]=Grades[j];
							Grades[j]=temp5;
						}
					}
				}
				for (int i = 0 ; i < count ; i++)
				{
					cout << "| " << roll_no[i] << " |" << "|" << "\t" << mid_exam[i] << "\t"  << "|" << "|" << "\t" << final_exam[i] << "\t"  << "|" << "|" << "\t" << percentage[i] << "\t" << "|" << "|" << "\t" << Grades[i] << "\t" << "|" <<endl;
				}
				char cont_not;
				cout<< "Do you want to Continue or Not ? (press |c,C| for Continue or |e,E| for Exit : ";
				cin >> cont_not;
				if (cont_not == 'c' || cont_not == 'C')
				{
			    	continue;
				}
				else if (cont_not == 'e' || cont_not == 'E')
				{
					k = 2;
					cout<<"OKay Good Bye..."<<endl;
					break;
				}
				else{
					cout << "Invalid Input !"<<endl;
				}
				
			}	
//	        <------------------ for option 05 ------------------>
			if (option == 5){
				float temp;
				float temp2;
				float temp3;
				float temp4;
				float temp5;
				 for(int i = 0; i < count; i++)
				{		
					for(int j = 0; j < count; j++)
					{
						if(final_exam[j] < final_exam[j-1])
						{
							temp=roll_no[j-1];
							roll_no[j-1]=roll_no[j];
							roll_no[j]=temp;
							
							temp2 = mid_exam[j-1];
							mid_exam[j-1]=mid_exam[j];
							mid_exam[j]=temp2;
							
							temp3 = final_exam[j-1];
							final_exam[j-1]=final_exam[j];
							final_exam[j]=temp3;
							
							temp4 = percentage[j-1];
							percentage[j-1]=percentage[j];
							percentage[j]=temp4;
							
							temp5 = Grades[j-1];
							Grades[j-1]=Grades[j];
							Grades[j]=temp5;
						}
					}
				}
			    cout<<"Sorted values in Ascending Order :- "<<endl;
			    cout << "| Roll No |" << "| MidTerm Marks |" << "| FinalTerm Marks |" << "| Weighted Percentage |" << "| Grades |"<<endl;
		    	for (int i = 0 ; i < count ; i++)
				{
					cout << "| " << roll_no[i] << " |" << "|" << "\t" << mid_exam[i] << "\t"  << "|" << "|" << "\t" << final_exam[i] << "\t"  << "|" << "|" << "\t" << percentage[i] << "\t" << "|" << "|" << "\t" << Grades[i] << "\t" << "|" <<endl;
				}
				char cont_not;
				cout<< "Do you want to Continue or Not ? (press |c,C| for Continue or |e,E| for Exit : ";
				cin >> cont_not;
				if (cont_not == 'c' || cont_not == 'C')
				{
			    	continue;
				}
				else if (cont_not == 'e' || cont_not == 'E')
				{
					k = 2;
					cout<<"OKay Good Bye..."<<endl;
					break;
				}
				else{
					cout << "Invalid Input !"<<endl;
				}
				
			}
//			<------------------ for option 06 ------------------>
			if (option == 6){
				float temp;
				float temp2;
				float temp3;
				float temp4;
				float temp5;
				int c;
				cout<<"Sorted values in Descending Order :- "<<endl;
		    	cout << "| Roll No |" << "| MidTerm Marks |" << "| FinalTerm Marks |" << "| Weighted Percentage |" << "| Grades |"<<endl;cout << "| Roll No |" << "| MidTerm Marks |" << "| FinalTerm Marks |" << "| Weighted Percentage |" << "| Grades |"<<endl;
				for(int i = 0; i < count; i++)
				{		
					for(int j= 1; j <= (count-1); j++)
					{
						if(final_exam[j] > final_exam[j-1])
						{
							temp=roll_no[j-1];
							roll_no[j-1]=roll_no[j];
							roll_no[j]=temp;
							
							temp2 = mid_exam[j-1];							
							mid_exam[j-1]=mid_exam[j];
							mid_exam[j]=temp2;
							
							temp3 = final_exam[j-1];
							final_exam[j-1]=final_exam[j];
							final_exam[j]=temp3;
							
							temp4 = percentage[j-1];
							percentage[j-1]=percentage[j];
							percentage[j]=temp4;
							
							temp5 = Grades[j-1];
							Grades[j-1]=Grades[j];
							Grades[j]=temp5;
						}
					}
				}
				for (int i = 0 ; i < count ; i++)
				{
					cout << "| " << roll_no[i] << " |" << "|" << "\t" << mid_exam[i] << "\t"  << "|" << "|" << "\t" << final_exam[i] << "\t"  << "|" << "|" << "\t" << percentage[i] << "\t" << "|" << "|" << "\t" << Grades[i] << "\t" << "|" <<endl;
				}
				char cont_not;
				cout<< "Do you want to Continue or Not ? (press |c,C| for Continue or |e,E| for Exit : ";
				cin >> cont_not;
				if (cont_not == 'c' || cont_not == 'C')
				{
			    	continue;
				}
				else if (cont_not == 'e' || cont_not == 'E')
				{
					k = 2;
					cout<<"OKay Good Bye..."<<endl;
					break;
				}
				else{
					cout << "Invalid Input !"<<endl;
				}
				
			}	
//	        <------------------ for option 07 ------------------>
			if (option == 7){
				float temp;
				float temp2;
				float temp3;
				float temp4;
				float temp5;
				 for(int i = 0; i < count; i++)
				{		
					for(int j = 0; j < count; j++)
					{
						if(percentage[j] < percentage[j-1])
						{
							temp=roll_no[j-1];
							roll_no[j-1]=roll_no[j];
							roll_no[j]=temp;
							
							temp2 = mid_exam[j-1];
							mid_exam[j-1]=mid_exam[j];
							mid_exam[j]=temp2;
							
							temp3 = final_exam[j-1];
							final_exam[j-1]=final_exam[j];
							final_exam[j]=temp3;
							
							temp4 = percentage[j-1];
							percentage[j-1]=percentage[j];
							percentage[j]=temp4;
							
							temp5 = Grades[j-1];
							Grades[j-1]=Grades[j];
							Grades[j]=temp5;
						}
					}
				}
			    cout<<"Sorted values in Ascending Order :- "<<endl;
			    cout << "| Roll No |" << "| MidTerm Marks |" << "| FinalTerm Marks |" << "| Weighted Percentage |" << "| Grades |"<<endl;
		    	for (int i = 0 ; i < count ; i++)
				{
					cout << "| " << roll_no[i] << " |" << "|" << "\t" << mid_exam[i] << "\t"  << "|" << "|" << "\t" << final_exam[i] << "\t"  << "|" << "|" << "\t" << percentage[i] << "\t" << "|" << "|" << "\t" << Grades[i] << "\t" << "|" <<endl;
				}
				char cont_not;
				cout<< "Do you want to Continue or Not ? (press |c,C| for Continue or |e,E| for Exit : ";
				cin >> cont_not;
				if (cont_not == 'c' || cont_not == 'C')
				{
			    	continue;
				}
				else if (cont_not == 'e' || cont_not == 'E')
				{
					k = 2;
					cout<<"OKay Good Bye..."<<endl;
					break;
				}
				else{
					cout << "Invalid Input !"<<endl;
				}
				
			}
//			<------------------ for option 08 ------------------>
			if (option == 8){
				float temp;
				float temp2;
				float temp3;
				float temp4;
				float temp5;
				cout<<"Sorted values in Descending Order :- "<<endl;
		    	cout << "| Roll No |" << "| MidTerm Marks |" << "| FinalTerm Marks |" << "| Weighted Percentage |" << "| Grades |"<<endl;cout << "| Roll No |" << "| MidTerm Marks |" << "| FinalTerm Marks |" << "| Weighted Percentage |" << "| Grades |"<<endl;
				for(int i = 0; i < count; i++)
				{		
					for(int j= 1; j <= (count-1); j++)
					{
						if(percentage[j] > percentage[j-1])
						{
							temp=roll_no[j-1];
							roll_no[j-1]=roll_no[j];
							roll_no[j]=temp;
							
							temp2 = mid_exam[j-1];							
							mid_exam[j-1]=mid_exam[j];
							mid_exam[j]=temp2;
							
							temp3 = final_exam[j-1];
							final_exam[j-1]=final_exam[j];
							final_exam[j]=temp3;
							
							temp4 = percentage[j-1];
							percentage[j-1]=percentage[j];
							percentage[j]=temp4;
							
							temp5 = Grades[j-1];
							Grades[j-1]=Grades[j];
							Grades[j]=temp5;
						}
					}
				}
				for (int i = 0 ; i < count ; i++)
				{
					cout << "| " << roll_no[i] << " |" << "|" << "\t" << mid_exam[i] << "\t"  << "|" << "|" << "\t" << final_exam[i] << "\t"  << "|" << "|" << "\t" << percentage[i] << "\t" << "|" << "|" << "\t" << Grades[i] << "\t" << "|" <<endl;
				}
				char cont_not;
				cout<< "Do you want to Continue or Not ? (press |c,C| for Continue or |e,E| for Exit : ";
				cin >> cont_not;
				if (cont_not == 'c' || cont_not == 'C')
				{
			    	continue;
				}
				else if (cont_not == 'e' || cont_not == 'E')
				{
					k = 2;
					cout<<"OKay Good Bye..."<<endl;
					break;
				}
				else{
					cout << "Invalid Input !"<<endl;
				}
				
			}	
//	        <------------------ for option 09 ------------------>
			if (option == 9){
				float temp;
				float temp2;
				float temp3;
				float temp4;
				float temp5;
				 for(int i = 0; i < count; i++)
				{		
					for(int j = 0; j < count; j++)
					{
						if(Grades[j] < Grades[j-1])
						{
							temp=roll_no[j-1];
							roll_no[j-1]=roll_no[j];
							roll_no[j]=temp;
							
							temp2 = mid_exam[j-1];
							mid_exam[j-1]=mid_exam[j];
							mid_exam[j]=temp2;
							
							temp3 = final_exam[j-1];
							final_exam[j-1]=final_exam[j];
							final_exam[j]=temp3;
							
							temp4 = percentage[j-1];
							percentage[j-1]=percentage[j];
							percentage[j]=temp4;
							
							temp5 = Grades[j-1];
							Grades[j-1]=Grades[j];
							Grades[j]=temp5;
						}
					}
				}
			    cout<<"Sorted values in Ascending Order :- "<<endl;
			    cout << "| Roll No |" << "| MidTerm Marks |" << "| FinalTerm Marks |" << "| Weighted Percentage |" << "| Grades |"<<endl;
		    	for (int i = 0 ; i < count ; i++)
				{
					cout << "| " << roll_no[i] << " |" << "|" << "\t" << mid_exam[i] << "\t"  << "|" << "|" << "\t" << final_exam[i] << "\t"  << "|" << "|" << "\t" << percentage[i] << "\t" << "|" << "|" << "\t" << Grades[i] << "\t" << "|" <<endl;
				}
				char cont_not;
				cout<< "Do you want to Continue or Not ? (press |c,C| for Continue or |e,E| for Exit : ";
				cin >> cont_not;
				if (cont_not == 'c' || cont_not == 'C')
				{
			    	continue;
				}
				else if (cont_not == 'e' || cont_not == 'E')
				{
					k = 2;
					cout<<"OKay Good Bye..."<<endl;
					break;
				}
				else{
					cout << "Invalid Input !"<<endl;
				}
				
			}
//			<------------------ for option 10 ------------------>
			if (option == 10){
				float temp;
				float temp2;
				float temp3;
				float temp4;
				float temp5;
				cout<<"Sorted values in Descending Order :- "<<endl;
		    	cout << "| Roll No |" << "| MidTerm Marks |" << "| FinalTerm Marks |" << "| Weighted Percentage |" << "| Grades |"<<endl;
				for(int i = 0; i < count; i++)
				{		
					for(int j= 1; j <= (count-1); j++)
					{
						if(Grades[j] > Grades[j-1])
						{
							temp=roll_no[j-1];
							roll_no[j-1]=roll_no[j];
							roll_no[j]=temp;
							
							temp2 = mid_exam[j-1];							
							mid_exam[j-1]=mid_exam[j];
							mid_exam[j]=temp2;
							
							temp3 = final_exam[j-1];
							final_exam[j-1]=final_exam[j];
							final_exam[j]=temp3;
							
							temp4 = percentage[j-1];
							percentage[j-1]=percentage[j];
							percentage[j]=temp4;
							
							temp5 = Grades[j-1];
							Grades[j-1]=Grades[j];
							Grades[j]=temp5;
						}
					}
				}
				for (int i = 0 ; i < count ; i++)
				{
					cout << "| " << roll_no[i] << " |" << "|" << "\t" << mid_exam[i] << "\t"  << "|" << "|" << "\t" << final_exam[i] << "\t"  << "|" << "|" << "\t" << percentage[i] << "\t" << "|" << "|" << "\t" << Grades[i] << "\t" << "|" <<endl;
				}
				char cont_not;
				cout<< "Do you want to Continue or Not ? (press |c,C| for Continue or |e,E| for Exit : ";
				cin >> cont_not;
				if (cont_not == 'c' || cont_not == 'C')
				{
			    	continue;
				}
				else if (cont_not == 'e' || cont_not == 'E')
				{
					k = 2;
					cout<<"OKay Good Bye..."<<endl;
					break;
				}
				else{
					cout << "Invalid Input !"<<endl;
				}
				
			}	
//			<------------------ for option 11 ------------------>			
			if (option == 11){
		            char yes_no;
					for(int i = count; i < count+2; i++)
					{
						cout << "Please Enter Roll No : "<<endl;
						cin >> roll_no[i];
						cout << "Please Enter Mid Term Marks Out of 50 : "<<endl;
						cin >> mid_exam[i];
						cout << "Please Enter Final Term Marks Out of 100 : "<<endl;
						cin >> final_exam[i];
						percentage[i] = ((mid_exam[i] * 40) / 50) + ((final_exam[i]*60) / 100);
						count++;
						if (percentage[i] > 85 && percentage[i] <= 100)
						{
						    Grades[i] = 'A';
						}
						else if (percentage[i] > 72 && percentage[i] <= 85)
						{
						    Grades[i] = 'B';
						}
						else if (percentage[i] > 59 && percentage[i] <= 72)
						{
						    Grades[i] = 'C';
						}
						else if (percentage[i] > 50 && percentage[i] <= 59)
						{
						    Grades[i] = 'D';
						}
						else if (percentage[i] < 50)
						{
						    Grades[i] = 'F';
						}
						
						cout<< "Record Add Successfully!"<<endl;
						//		<----------------------for display all records-------------------------->
						cout<<"Array after Inerting record :"<<endl;
						cout << "| Roll No |" << "| MidTerm Marks |" << "| FinalTerm Marks |" << "| Weighted Percentage |" << "| Grades |"<<endl;
						for (int i = 0 ; i < count ; i++)
						{
							cout << "| " << roll_no[i] << " |" << "|" << "\t" << mid_exam[i] << "\t"  << "|" << "|" << "\t" << final_exam[i] << "\t"  << "|" << "|" << "\t" << percentage[i] << "\t" << "|" << "|" << "\t" << Grades[i] << "\t" << "|" <<endl;
						}
						
						cout << "Do you Want to add more records ? (press |y,Y| for yes or |n,N| for no : "<<endl;
						cin >> yes_no;
						if (yes_no == 'y' || yes_no == 'Y')
						{
						    continue;
						}
						else if (yes_no == 'n' || yes_no == 'N')
						{
							char cont_not;
							cout<< "Do you want to Continue or Not ? (press |c,C| for Continue or |e,E| for Exit : ";
							cin >> cont_not;
							if (cont_not == 'c' || cont_not == 'C')
							{
						    	continue;
							}
							else if (cont_not == 'e' || cont_not == 'E')
							{
								k = 2;
								cout<<"OKay Good Bye..."<<endl;
								break;
							}
							else{
								cout << "Invalid Input !"<<endl;
							}
						}
		            }
		        }
//			<------------------ for option 12 ------------------>
			if (option == 12){
				int elem;
				int found = 0;
				cout << "Enter Roll No You want to Delete : ";
				cin >> elem;
				for(int i=0; i < count; i++)
			    {
			        if(roll_no[i]==elem)
			        {
			            for(int j=i; j<(count-1); j++){
			                roll_no[j] = roll_no[j+1];
			                mid_exam[j] = mid_exam[j+1];
			                final_exam[j] = final_exam[j+1];
			                percentage[j] = percentage[j+1];
			                Grades[j] = Grades[j+1];
						}
			            found=1;
			            i--;
			            count--;
			        }
			    }
			    if(found==0){
		        	cout<<"\nElement doesn't found in the Array!"<<endl;
				}
			    else{
			        cout<<"\nElement Deleted Successfully!"<<endl;
			    }
			    char cont_not;
				cout<< "Do you want to Continue or Not ? (press |c,C| for Continue or |e,E| for Exit : ";
				cin >> cont_not;
				if (cont_not == 'c' || cont_not == 'C')
				{
			    	continue;
				}
				else if (cont_not == 'e' || cont_not == 'E')
				{
					k = 2;
					cout<<"OKay Good Bye..."<<endl;
					break;
				}
				else{
					cout << "Invalid Input !"<<endl;
				}
	
			} 
//			<------------------ for option 13 ------------------>
			if (option == 13){
				int wp;
				cout << "Please Enter Percentage : ";
				cin >> wp;
				float temp;
				float temp2;
				float temp3;
				float temp4;
				float temp5;
				cout<<"Sorted values in Descending Order :- "<<endl;
		    	cout << "| Roll No |" << "| MidTerm Marks |" << "| FinalTerm Marks |" << "| Weighted Percentage |" << "| Grades |"<<endl;
				for(int i = 0; i < count; i++)
				{		
					for(int j= 1; j <= (count-1); j++)
					{
						if(percentage[j] > percentage[j-1])
						{
							temp=roll_no[j-1];
							roll_no[j-1]=roll_no[j];
							roll_no[j]=temp;
							
							temp2 = mid_exam[j-1];							
							mid_exam[j-1]=mid_exam[j];
							mid_exam[j]=temp2;
							
							temp3 = final_exam[j-1];
							final_exam[j-1]=final_exam[j];
							final_exam[j]=temp3;
							
							temp4 = percentage[j-1];
							percentage[j-1]=percentage[j];
							percentage[j]=temp4;
							
							temp5 = Grades[j-1];
							Grades[j-1]=Grades[j];
							Grades[j]=temp5;
						}
					}
				}
				for (int i = 0 ; i < count ; i++)
				{
					if (percentage[i] > wp){
						cout << "| " << roll_no[i] << " |" << "|" << "\t" << mid_exam[i] << "\t"  << "|" << "|" << "\t" << final_exam[i] << "\t"  << "|" << "|" << "\t" << percentage[i] << "\t" << "|" << "|" << "\t" << Grades[i] << "\t" << "|" <<endl;	
					}
				}
				char cont_not;
				cout<< "Do you want to Continue or Not ? (press |c,C| for Continue or |e,E| for Exit : ";
				cin >> cont_not;
				if (cont_not == 'c' || cont_not == 'C')
				{
			    	continue;
				}
				else if (cont_not == 'e' || cont_not == 'E')
				{
					k = 2;
					cout<<"OKay Good Bye..."<<endl;
					break;
				}
				else{
					cout << "Invalid Input !"<<endl;
				}
			}	
//			<------------------ for option 14 ------------------>
			if (option == 14){
				int wp;
				float temp;
				float temp2;
				float temp3;
				float temp4;
				float temp5;
				cout << "Please Enter Percentage : ";
				cin >> wp;
				
				cout<<"Sorted values in Ascending Order :- "<<endl;
		    	cout << "| Roll No |" << "| MidTerm Marks |" << "| FinalTerm Marks |" << "| Weighted Percentage |" << "| Grades |"<<endl;
				for(int i = 0; i < count; i++)
				{		
					for(int j = 0; j < count; j++)
					{
						if(percentage[j] < percentage[j-1])
						{
							temp=roll_no[j-1];
							roll_no[j-1]=roll_no[j];
							roll_no[j]=temp;
							
							temp2 = mid_exam[j-1];							
							mid_exam[j-1]=mid_exam[j];
							mid_exam[j]=temp2;
							
							temp3 = final_exam[j-1];
							final_exam[j-1]=final_exam[j];
							final_exam[j]=temp3;
							
							temp4 = percentage[j-1];
							percentage[j-1]=percentage[j];
							percentage[j]=temp4;
							
							temp5 = Grades[j-1];
							Grades[j-1]=Grades[j];
							Grades[j]=temp5;
						}
					}
				}
				for (int i = 0 ; i < count ; i++)
				{
					if (percentage[i] > wp){
						cout << "| " << roll_no[i] << " |" << "|" << "\t" << mid_exam[i] << "\t"  << "|" << "|" << "\t" << final_exam[i] << "\t"  << "|" << "|" << "\t" << percentage[i] << "\t" << "|" << "|" << "\t" << Grades[i] << "\t" << "|" <<endl;	
					}
				}
				char cont_not;
				cout<< "Do you want to Continue or Not ? (press |c,C| for Continue or |e,E| for Exit : ";
				cin >> cont_not;
				if (cont_not == 'c' || cont_not == 'C')
				{
			    	continue;
				}
				else if (cont_not == 'e' || cont_not == 'E')
				{
					k = 2;
					cout<<"OKay Good Bye..."<<endl;
					break;
				}
				else{
					cout << "Invalid Input !"<<endl;
				}
			}	
//			<------------------ for option 15 ------------------>
			if (option == 15){
				int wp;
				cout << "Please Enter Percentage : ";
				cin >> wp;
				float temp;
				float temp2;
				float temp3;
				float temp4;
				float temp5;
				cout<<"Sorted values in Descending Order :- "<<endl;
		    	cout << "| Roll No |" << "| MidTerm Marks |" << "| FinalTerm Marks |" << "| Weighted Percentage |" << "| Grades |"<<endl;
				for(int i = 0; i < count; i++)
				{		
					for(int j= 1; j <= (count-1); j++)
					{
						if(percentage[j] > percentage[j-1])
						{
							temp=roll_no[j-1];
							roll_no[j-1]=roll_no[j];
							roll_no[j]=temp;
							
							temp2 = mid_exam[j-1];							
							mid_exam[j-1]=mid_exam[j];
							mid_exam[j]=temp2;
							
							temp3 = final_exam[j-1];
							final_exam[j-1]=final_exam[j];
							final_exam[j]=temp3;
							
							temp4 = percentage[j-1];
							percentage[j-1]=percentage[j];
							percentage[j]=temp4;
							
							temp5 = Grades[j-1];
							Grades[j-1]=Grades[j];
							Grades[j]=temp5;
						}
					}
				}
				for (int i = 0 ; i < count ; i++)
				{
					if (percentage[i] <= wp){
						cout << "| " << roll_no[i] << " |" << "|" << "\t" << mid_exam[i] << "\t"  << "|" << "|" << "\t" << final_exam[i] << "\t"  << "|" << "|" << "\t" << percentage[i] << "\t" << "|" << "|" << "\t" << Grades[i] << "\t" << "|" <<endl;	
					}
				}
				char cont_not;
				cout<< "Do you want to Continue or Not ? (press |c,C| for Continue or |e,E| for Exit : ";
				cin >> cont_not;
				if (cont_not == 'c' || cont_not == 'C')
				{
			    	continue;
				}
				else if (cont_not == 'e' || cont_not == 'E')
				{
					k = 2;
					cout<<"OKay Good Bye..."<<endl;
					break;
				}
				else{
					cout << "Invalid Input !"<<endl;
				}
			}	
//			<------------------ for option 16 ------------------>
			if (option == 16){
				int wp;
				float temp;
				float temp2;
				float temp3;
				float temp4;
				float temp5;
				cout << "Please Enter Percentage : ";
				cin >> wp;
				
				cout<<"Sorted values in Ascending Order :- "<<endl;
		    	cout << "| Roll No |" << "| MidTerm Marks |" << "| FinalTerm Marks |" << "| Weighted Percentage |" << "| Grades |"<<endl;
				for(int i = 0; i < count; i++)
				{		
					for(int j = 0; j < count; j++)
					{
						if(percentage[j] < percentage[j-1])
						{
							temp=roll_no[j-1];
							roll_no[j-1]=roll_no[j];
							roll_no[j]=temp;
							
							temp2 = mid_exam[j-1];							
							mid_exam[j-1]=mid_exam[j];
							mid_exam[j]=temp2;
							
							temp3 = final_exam[j-1];
							final_exam[j-1]=final_exam[j];
							final_exam[j]=temp3;
							
							temp4 = percentage[j-1];
							percentage[j-1]=percentage[j];
							percentage[j]=temp4;
							
							temp5 = Grades[j-1];
							Grades[j-1]=Grades[j];
							Grades[j]=temp5;
						}
					}
				}
				for (int i = 0 ; i < count ; i++)
				{
					if (percentage[i] <= wp){
						cout << "| " << roll_no[i] << " |" << "|" << "\t" << mid_exam[i] << "\t"  << "|" << "|" << "\t" << final_exam[i] << "\t"  << "|" << "|" << "\t" << percentage[i] << "\t" << "|" << "|" << "\t" << Grades[i] << "\t" << "|" <<endl;	
					}
				}
				char cont_not;
				cout<< "Do you want to Continue or Not ? (press |c,C| for Continue or |e,E| for Exit : ";
				cin >> cont_not;
				if (cont_not == 'c' || cont_not == 'C')
				{
			    	continue;
				}
				else if (cont_not == 'e' || cont_not == 'E')
				{
					k = 2;
					cout<<"OKay Good Bye..."<<endl;
					break;
				}
				else{
					cout << "Invalid Input !"<<endl;
				}
			}		
//			<------------------ for option 17 ------------------>
			if (option == 17){
				char g;
				cout << "Please Enter Grades In Capital Form : ";
				cin >> g;
				float temp;
				float temp2;
				float temp3;
				float temp4;
				float temp5;
				cout<<"Sorted values in Descending Order :- "<<endl;
		    	cout << "| Roll No |" << "| MidTerm Marks |" << "| FinalTerm Marks |" << "| Weighted Percentage |" << "| Grades |"<<endl;
				for(int i = 0; i < count; i++)
				{		
					for(int j= 1; j <= (count-1); j++)
					{
						if(Grades[j] > Grades[j-1])
						{
							temp=roll_no[j-1];
							roll_no[j-1]=roll_no[j];
							roll_no[j]=temp;
							
							temp2 = mid_exam[j-1];							
							mid_exam[j-1]=mid_exam[j];
							mid_exam[j]=temp2;
							
							temp3 = final_exam[j-1];
							final_exam[j-1]=final_exam[j];
							final_exam[j]=temp3;
							
							temp4 = percentage[j-1];
							percentage[j-1]=percentage[j];
							percentage[j]=temp4;
							
							temp5 = Grades[j-1];
							Grades[j-1]=Grades[j];
							Grades[j]=temp5;
						}
					}
				}
				for (int i = 0 ; i < count ; i++)
				{
					if (Grades[i] < g){
						cout << "| " << roll_no[i] << " |" << "|" << "\t" << mid_exam[i] << "\t"  << "|" << "|" << "\t" << final_exam[i] << "\t"  << "|" << "|" << "\t" << percentage[i] << "\t" << "|" << "|" << "\t" << Grades[i] << "\t" << "|" <<endl;	
					}
				}
				char cont_not;
				cout<< "Do you want to Continue or Not ? (press |c,C| for Continue or |e,E| for Exit : ";
				cin >> cont_not;
				if (cont_not == 'c' || cont_not == 'C')
				{
			    	continue;
				}
				else if (cont_not == 'e' || cont_not == 'E')
				{
					k = 2;
					cout<<"OKay Good Bye..."<<endl;
					break;
				}
				else{
					cout << "Invalid CHoice !"<<endl;
				}
			}	
//			<------------------ for option 18 ------------------>
			if (option == 18){
				char g;
				cout << "Please Enter Grades In Capital Form : ";
				cin >> g;
				float temp;
				float temp2;
				float temp3;
				float temp4;
				float temp5;
				cout<<"Sorted values in Ascending Order :- "<<endl;
		    	cout << "| Roll No |" << "| MidTerm Marks |" << "| FinalTerm Marks |" << "| Weighted Percentage |" << "| Grades |"<<endl;
				for(int i = 0; i < count; i++)
				{		
					for(int j= 1; j <= count; j++)
					{
						if(Grades[j] < Grades[j-1])
						{
							temp=roll_no[j-1];
							roll_no[j-1]=roll_no[j];
							roll_no[j]=temp;
							
							temp2 = mid_exam[j-1];							
							mid_exam[j-1]=mid_exam[j];
							mid_exam[j]=temp2;
							
							temp3 = final_exam[j-1];
							final_exam[j-1]=final_exam[j];
							final_exam[j]=temp3;
							
							temp4 = percentage[j-1];
							percentage[j-1]=percentage[j];
							percentage[j]=temp4;
							
							temp5 = Grades[j-1];
							Grades[j-1]=Grades[j];
							Grades[j]=temp5;
						}
					}
				}
				for (int i = 0 ; i < count ; i++)
				{
					if (Grades[i] < g){
						cout << "| " << roll_no[i] << " |" << "|" << "\t" << mid_exam[i] << "\t"  << "|" << "|" << "\t" << final_exam[i] << "\t"  << "|" << "|" << "\t" << percentage[i] << "\t" << "|" << "|" << "\t" << Grades[i] << "\t" << "|" <<endl;	
					}
				}
				char cont_not;
				cout<< "Do you want to Continue or Not ? (press |c,C| for Continue or |e,E| for Exit : ";
				cin >> cont_not;
				if (cont_not == 'c' || cont_not == 'C')
				{
			    	continue;
				}
				else if (cont_not == 'e' || cont_not == 'E')
				{
					k = 2;
					cout<<"OKay Good Bye..."<<endl;
					break;
				}
				else{
					cout << "Invalid Choice!"<<endl;
				}
			}	
//			<------------------ for option 19 ------------------>
			if (option == 19){
				char g;
				cout << "Please Enter Grades In Capital Form : ";
				cin >> g;
				float temp;
				float temp2;
				float temp3;
				float temp4;
				float temp5;
				cout<<"Sorted values in Descending Order :- "<<endl;
		    	cout << "| Roll No |" << "| MidTerm Marks |" << "| FinalTerm Marks |" << "| Weighted Percentage |" << "| Grades |"<<endl;
				for(int i = 0; i < count; i++)
				{		
					for(int j= 1; j <= (count-1); j++)
					{
						if(Grades[j] > Grades[j-1])
						{
							temp=roll_no[j-1];
							roll_no[j-1]=roll_no[j];
							roll_no[j]=temp;
							
							temp2 = mid_exam[j-1];							
							mid_exam[j-1]=mid_exam[j];
							mid_exam[j]=temp2;
							
							temp3 = final_exam[j-1];
							final_exam[j-1]=final_exam[j];
							final_exam[j]=temp3;
							
							temp4 = percentage[j-1];
							percentage[j-1]=percentage[j];
							percentage[j]=temp4;
							
							temp5 = Grades[j-1];
							Grades[j-1]=Grades[j];
							Grades[j]=temp5;
						}
					}
				}
				for (int i = 0 ; i < count ; i++)
				{
					if (Grades[i] >= g){
						cout << "| " << roll_no[i] << " |" << "|" << "\t" << mid_exam[i] << "\t"  << "|" << "|" << "\t" << final_exam[i] << "\t"  << "|" << "|" << "\t" << percentage[i] << "\t" << "|" << "|" << "\t" << Grades[i] << "\t" << "|" <<endl;	
					}
				}
				char cont_not;
				cout<< "Do you want to Continue or Not ? (press |c,C| for Continue or |e,E| for Exit : ";
				cin >> cont_not;
				if (cont_not == 'c' || cont_not == 'C')
				{
			    	continue;
				}
				else if (cont_not == 'e' || cont_not == 'E')
				{
					k = 2;
					cout<<"OKay Good Bye..."<<endl;
					break;
				}
				else{
					cout << "Invalid Choice!"<<endl;
				}
			}				
//			<------------------ for option 20 ------------------>
			if (option == 20){
				char g;
				cout << "Please Enter Grades In Capital Form : ";
				cin >> g;
				float temp;
				float temp2;
				float temp3;
				float temp4;
				float temp5;
				cout<<"Sorted values in Ascending Order :- "<<endl;
		    	cout << "| Roll No |" << "| MidTerm Marks |" << "| FinalTerm Marks |" << "| Weighted Percentage |" << "| Grades |"<<endl;
				for(int i = 0; i < count; i++)
				{		
					for(int j= 1; j <= count; j++)
					{
						if(Grades[j] < Grades[j-1])
						{
							temp=roll_no[j-1];
							roll_no[j-1]=roll_no[j];
							roll_no[j]=temp;
							
							temp2 = mid_exam[j-1];							
							mid_exam[j-1]=mid_exam[j];
							mid_exam[j]=temp2;
							
							temp3 = final_exam[j-1];
							final_exam[j-1]=final_exam[j];
							final_exam[j]=temp3;
							
							temp4 = percentage[j-1];
							percentage[j-1]=percentage[j];
							percentage[j]=temp4;
							
							temp5 = Grades[j-1];
							Grades[j-1]=Grades[j];
							Grades[j]=temp5;
						}
					}
				}
				for (int i = 0 ; i < count ; i++)
				{
					if (Grades[i] >= g){
						cout << "| " << roll_no[i] << " |" << "|" << "\t" << mid_exam[i] << "\t"  << "|" << "|" << "\t" << final_exam[i] << "\t"  << "|" << "|" << "\t" << percentage[i] << "\t" << "|" << "|" << "\t" << Grades[i] << "\t" << "|" <<endl;	
					}
				}
				char cont_not;
				cout<< "Do you want to Continue or Not ? (press |c,C| for Continue or |e,E| for Exit : ";
				cin >> cont_not;
				if (cont_not == 'c' || cont_not == 'C')
				{
			    	continue;
				}
				else if (cont_not == 'e' || cont_not == 'E')
				{
					k = 2;
					cout<<"OKay Good Bye..."<<endl;
					break;
				}
				else{
					cout << "Invalid Choice!"<<endl;
				}
			}				
//			<------------------ for option 21 ------------------>
			if (option == 21){
				char g;
				cout << "Please Enter Grades In Capital Form : ";
				cin >> g;
				float temp;
				float temp2;
				float temp3;
				float temp4;
				float temp5;
				cout<<"Sorted values in Ascending Order :- "<<endl;
		    	cout << "| Roll No |" << "| MidTerm Marks |" << "| FinalTerm Marks |" << "| Weighted Percentage |" << "| Grades |"<<endl;
				for(int i = 0; i < count; i++)
				{		
					for(int j= 1; j < count; j++)
					{
						if(roll_no[j] < roll_no[j-1])
						{
							temp=roll_no[j-1];
							roll_no[j-1]=roll_no[j];
							roll_no[j]=temp;
							
							temp2 = mid_exam[j-1];							
							mid_exam[j-1]=mid_exam[j];
							mid_exam[j]=temp2;
							
							temp3 = final_exam[j-1];
							final_exam[j-1]=final_exam[j];
							final_exam[j]=temp3;
							
							temp4 = percentage[j-1];
							percentage[j-1]=percentage[j];
							percentage[j]=temp4;
							
							temp5 = Grades[j-1];
							Grades[j-1]=Grades[j];
							Grades[j]=temp5;
						}
					}
				}
				for (int i = 0 ; i < count ; i++)
				{
					if (Grades[i] == g){
						cout << "| " << roll_no[i] << " |" << "|" << "\t" << mid_exam[i] << "\t"  << "|" << "|" << "\t" << final_exam[i] << "\t"  << "|" << "|" << "\t" << percentage[i] << "\t" << "|" << "|" << "\t" << Grades[i] << "\t" << "|" <<endl;	
					}
				}
				char cont_not;
				cout<< "Do you want to Continue or Not ? (press |c,C| for Continue or |e,E| for Exit : ";
				cin >> cont_not;
				if (cont_not == 'c' || cont_not == 'C')
				{
			    	continue;
				}
				else if (cont_not == 'e' || cont_not == 'E')
				{
					k = 2;
					cout<<"OKay Good Bye..."<<endl;
					break;
				}
				else{
					cout << "Invalid Choice!"<<endl;
				}
			}	
//			<------------------ for option 22 ------------------>
			if (option == 22){
				char g;
				cout << "Please Enter Grades In Capital Form : ";
				cin >> g;
				float temp;
				float temp2;
				float temp3;
				float temp4;
				float temp5;
				cout<<"Sorted values in Descending Order :- "<<endl;
		    	cout << "| Roll No |" << "| MidTerm Marks |" << "| FinalTerm Marks |" << "| Weighted Percentage |" << "| Grades |"<<endl;
				for(int i = 0; i < count; i++)
				{		
					for(int j= 1; j <= (count-1); j++)
					{
						if(roll_no[j] > roll_no[j-1])
						{
							temp=roll_no[j-1];
							roll_no[j-1]=roll_no[j];
							roll_no[j]=temp;
							
							temp2 = mid_exam[j-1];							
							mid_exam[j-1]=mid_exam[j];
							mid_exam[j]=temp2;
							
							temp3 = final_exam[j-1];
							final_exam[j-1]=final_exam[j];
							final_exam[j]=temp3;
							
							temp4 = percentage[j-1];
							percentage[j-1]=percentage[j];
							percentage[j]=temp4;
							
							temp5 = Grades[j-1];
							Grades[j-1]=Grades[j];
							Grades[j]=temp5;
						}
					}
				}
				for (int i = 0 ; i < count ; i++)
				{
					if (Grades[i] == g){
						cout << "| " << roll_no[i] << " |" << "|" << "\t" << mid_exam[i] << "\t"  << "|" << "|" << "\t" << final_exam[i] << "\t"  << "|" << "|" << "\t" << percentage[i] << "\t" << "|" << "|" << "\t" << Grades[i] << "\t" << "|" <<endl;	
					}
				}
				char cont_not;
				cout<< "Do you want to Continue or Not ? (press |c,C| for Continue or |e,E| for Exit : ";
				cin >> cont_not;
				if (cont_not == 'c' || cont_not == 'C')
				{
			    	continue;
				}
				else if (cont_not == 'e' || cont_not == 'E')
				{
					k = 2;
					cout<<"OKay Good Bye..."<<endl;
					break;
				}
				else{
					cout << "Invalid Choice!"<<endl;
				}
			}				
//			<------------------ for option 23 ------------------>
			if (option == 23){
				char g;
				cout << "Please Enter Grades In Capital Form : ";
				cin >> g;
				float temp;
				float temp2;
				float temp3;
				float temp4;
				float temp5;
				cout<<"Sorted values in Ascending Order :- "<<endl;
		    	cout << "| Roll No |" << "| MidTerm Marks |" << "| FinalTerm Marks |" << "| Weighted Percentage |" << "| Grades |"<<endl;
				for(int i = 0; i < count; i++)
				{		
					for(int j= 1; j <= count; j++)
					{
						if(percentage[j] < percentage[j-1])
						{
							temp=roll_no[j-1];
							roll_no[j-1]=roll_no[j];
							roll_no[j]=temp;
							
							temp2 = mid_exam[j-1];							
							mid_exam[j-1]=mid_exam[j];
							mid_exam[j]=temp2;
							
							temp3 = final_exam[j-1];
							final_exam[j-1]=final_exam[j];
							final_exam[j]=temp3;
							
							temp4 = percentage[j-1];
							percentage[j-1]=percentage[j];
							percentage[j]=temp4;
							
							temp5 = Grades[j-1];
							Grades[j-1]=Grades[j];
							Grades[j]=temp5;
						}
					}
				}
				for (int i = 0 ; i < count ; i++)
				{
					if (Grades[i] == g){
						cout << "| " << roll_no[i] << " |" << "|" << "\t" << mid_exam[i] << "\t"  << "|" << "|" << "\t" << final_exam[i] << "\t"  << "|" << "|" << "\t" << percentage[i] << "\t" << "|" << "|" << "\t" << Grades[i] << "\t" << "|" <<endl;	
					}
				}
				char cont_not;
				cout<< "Do you want to Continue or Not ? (press |c,C| for Continue or |e,E| for Exit : ";
				cin >> cont_not;
				if (cont_not == 'c' || cont_not == 'C')
				{
			    	continue;
				}
				else if (cont_not == 'e' || cont_not == 'E')
				{
					k = 2;
					cout<<"OKay Good Bye..."<<endl;
					break;
				}
				else{
					cout << "Invalid Choice!"<<endl;
				}
			}	
//			<------------------ for option 24 ------------------>
			if (option == 24){
				char g;
				cout << "Please Enter Grades In Capital Form : ";
				cin >> g;
				float temp;
				float temp2;
				float temp3;
				float temp4;
				float temp5;
				cout<<"Sorted values in Descending Order :- "<<endl;
		    	cout << "| Roll No |" << "| MidTerm Marks |" << "| FinalTerm Marks |" << "| Weighted Percentage |" << "| Grades |"<<endl;
				for(int i = 0; i < count; i++)
				{		
					for(int j= 1; j <= (count-1); j++)
					{
						if(percentage[j] > percentage[j-1])
						{
							temp=roll_no[j-1];
							roll_no[j-1]=roll_no[j];
							roll_no[j]=temp;
							
							temp2 = mid_exam[j-1];							
							mid_exam[j-1]=mid_exam[j];
							mid_exam[j]=temp2;
							
							temp3 = final_exam[j-1];
							final_exam[j-1]=final_exam[j];
							final_exam[j]=temp3;
							
							temp4 = percentage[j-1];
							percentage[j-1]=percentage[j];
							percentage[j]=temp4;
							
							temp5 = Grades[j-1];
							Grades[j-1]=Grades[j];
							Grades[j]=temp5;
						}
					}
				}
				for (int i = 0 ; i < count ; i++)
				{
					if (Grades[i] == g){
						cout << "| " << roll_no[i] << " |" << "|" << "\t" << mid_exam[i] << "\t"  << "|" << "|" << "\t" << final_exam[i] << "\t"  << "|" << "|" << "\t" << percentage[i] << "\t" << "|" << "|" << "\t" << Grades[i] << "\t" << "|" <<endl;	
					}
				}
				char cont_not;
				cout<< "Do you want to Continue or Not ? (press |c,C| for Continue or |e,E| for Exit : ";
				cin >> cont_not;
				if (cont_not == 'c' || cont_not == 'C')
				{
			    	continue;
				}
				else if (cont_not == 'e' || cont_not == 'E')
				{
					k = 2;
					cout<<"OKay Good Bye..."<<endl;
					break;
				}
				else{
					cout << "Invalid Choice!"<<endl;
				}
			}				
//			<------------------ for option 25 ------------------>
			if (option == 25){
				int wp, cnt=0;
				cout << "Please Enter Percentage : ";
				cin >> wp;
				for (int i = 0 ; i < count ; i++)
				{
					if (percentage[i] <= wp){
						cnt++;
					}
				}
				cout << "Total Number Of Students With less or Equal "<<wp<< " is : "<<cnt<<endl;
				char cont_not;
				cout<< "Do you want to Continue or Not ? (press |c,C| for Continue or |e,E| for Exit : ";
				cin >> cont_not;
				if (cont_not == 'c' || cont_not == 'C')
				{
			    	continue;
				}
				else if (cont_not == 'e' || cont_not == 'E')
				{
					k = 2;
					cout<<"OKay Good Bye..."<<endl;
					break;
				}
				else{
					cout << "Invalid Choice!"<<endl;
				}
			}			
//			<------------------ for option 26 ------------------>
			if (option == 26){
				int wp, cnt=0;
				cout << "Please Enter Percentage : ";
				cin >> wp;
				for (int i = 0 ; i < count ; i++)
				{
					if (percentage[i] >= wp){
						cnt++;
					}
				}
				cout << "Total Number Of Students With Greater than Equal to "<<wp<< " is : "<<cnt<<endl;
				char cont_not;
				cout<< "Do you want to Continue or Not ? (press |c,C| for Continue or |e,E| for Exit : ";
				cin >> cont_not;
				if (cont_not == 'c' || cont_not == 'C')
				{
			    	continue;
				}
				else if (cont_not == 'e' || cont_not == 'E')
				{
					k = 2;
					cout<<"OKay Good Bye..."<<endl;
					break;
				}
				else{
					cout << "Invalid Choice!"<<endl;
				}
			}			
//			<------------------ for option 27 ------------------>
			if (option == 27){
				char g;
				int cnt=0;
				cout << "Please Enter Grades In Capital Form : ";
				cin >> g;
				
				for (int i = 0 ; i < count ; i++)
				{
					if (Grades[i] == g){
						cnt++;
					}
				}
				cout << "Total Number Of Students With less or Equal "<<g<< " Grade is : "<<cnt<<endl;
				char cont_not;
				cout<< "Do you want to Continue or Not ? (press |c,C| for Continue or |e,E| for Exit : ";
				cin >> cont_not;
				if (cont_not == 'c' || cont_not == 'C')
				{
			    	continue;
				}
				else if (cont_not == 'e' || cont_not == 'E')
				{
					k = 2;
					cout<<"OKay Good Bye..."<<endl;
					break;
				}
				else{
					cout << "Invalid Choice!"<<endl;
				}
			}						
 			
			if(option > 27) {
 				
		    	cout<< "Invalid Choice !"<<endl;
		    	
		    	char cont_not;
		    	cout<< "Do you want to Continue or Not ? (press |c,C| for Continue or |e,E| for Exit : ";
		    	cin >> cont_not;
		    	if (cont_not == 'c' || cont_not == 'C')
		    	{
		        	continue;
		    	}
		    	else if (cont_not == 'e' || cont_not == 'E')
		    	{
		    		break;
		    	}
		    }
	    }
	}
     
    return 0;
}










