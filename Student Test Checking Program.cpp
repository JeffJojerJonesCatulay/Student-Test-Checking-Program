#include <iostream> 
#include <string>
#include <stdlib.h>
#include <unistd.h>

using namespace std;

int main() {
	
	system("title Test Checking Program");
	string str;
	string key;
	string c1,c2,c3,c4,c5,c6,c7,c8,c9,c10;
	string c11,c12,c13,c14,c15,c16,c17,c18,c19,c20;
	
	int lengthOfString;
	int keyans;
	int i = 0;
	float average, score;
	string items_str, stu_str;
	
	usleep(10000);cout<<"                          S";
	usleep(10000);cout<<"t";
	usleep(10000);cout<<"u";
	usleep(10000);cout<<"d";
	usleep(10000);cout<<"e";
	usleep(10000);cout<<"n";
	usleep(10000);cout<<"t ";
	usleep(10000);cout<<"";
	usleep(10000);cout<<"T";
	usleep(10000);cout<<"e";
	usleep(10000);cout<<"s";
	usleep(10000);cout<<"t ";
	usleep(10000);cout<<"";
	usleep(10000);cout<<"C";
	usleep(10000);cout<<"h";
	usleep(10000);cout<<"e";
	usleep(10000);cout<<"c";
	usleep(10000);cout<<"k";
	usleep(10000);cout<<"i";
	usleep(10000);cout<<"n";
	usleep(10000);cout<<"g ";
	usleep(10000);cout<<"";
	usleep(10000);cout<<"P";
	usleep(10000);cout<<"r";
	usleep(10000);cout<<"o";
	usleep(10000);cout<<"g";
	usleep(10000);cout<<"r";
	usleep(10000);cout<<"a";
	usleep(10000);cout<<"m\n\n";
	
	//Number of Students
	cout<<"	Enter the Number of Students: ";
	getline(cin, stu_str);
	int student = atoi(stu_str.c_str());
	
	//Number of items
	cout<<"\n		(Items should not be higher than 20)\n";
	cout<<"	Enter the Number of Items: ";
	getline(cin, items_str);
	int items = atoi(items_str.c_str());
	
	//For Answer Key
	cout<<"\n		(Example: 'abcdacbdac....')";
	cout<<"\n	Enter the Answer Key: ";
	getline(cin, key);
	keyans=key.length();
	char ans[keyans];
	key.copy(ans, keyans);
	char anskey1 = ans[0];
	char anskey2 = ans[1];
	char anskey3 = ans[2];	
	char anskey4 = ans[3];	
	char anskey5 = ans[4];	
	char anskey6 = ans[5];	
	char anskey7 = ans[6];	
	char anskey8 = ans[7];	
	char anskey9 = ans[8];	
	char anskey10 = ans[9];
		
	char anskey11 = ans[10];	
	char anskey12 = ans[11];	
	char anskey13 = ans[12];	
	char anskey14 = ans[13];	
	char anskey15 = ans[14];	
	char anskey16 = ans[15];	
	char anskey17 = ans[16];	
	char anskey18 = ans[17];	
	char anskey19 = ans[18];	
	char anskey20 = ans[19];	
		
	//Students Loop	
	for (int j=1;j<=student;j++){
	int i1 = 0,i2 = 0,i3 = 0,i4 = 0,i5 = 0,i6 = 0,i7 = 0,i8 = 0,i9 = 0,i10 = 0;
	int i11 = 0,i12 = 0,i13 = 0,i14 = 0,i15 = 0,i16 = 0,i17 = 0,i18 = 0,i19 = 0,i20 = 0;		
		
	//For Student Answer	
	cout<<"\n\n  Student "<< j << " Answer: ";
	getline(cin, str);
	lengthOfString=str.length();
	char characters[lengthOfString];
	str.copy(characters, lengthOfString);
	char student_ans1 = characters[0];
	char student_ans2 = characters[1];
	char student_ans3 = characters[2];
	char student_ans4 = characters[3];
	char student_ans5 = characters[4];
	char student_ans6 = characters[5];
	char student_ans7 = characters[6];
	char student_ans8 = characters[7];
	char student_ans9 = characters[8];
	char student_ans10 = characters[9];
	
	char student_ans11 = characters[10];
	char student_ans12 = characters[11];
	char student_ans13 = characters[12];
	char student_ans14 = characters[13];
	char student_ans15 = characters[14];
	char student_ans16 = characters[15];
	char student_ans17 = characters[16];
	char student_ans18 = characters[17];
	char student_ans19 = characters[18];
	char student_ans20 = characters[19];
	
			//NUM_1
			if (student_ans1 == anskey1){
			i1 = 1;
			c1 = "Correct";
			}
			else if (student_ans1 != anskey1){
			c1 = "Wrong";	
			}
			
			//NUM_2
			if (student_ans2 == anskey2){
			i2 = 1;
			c2 = "Correct";
			}
			else if (student_ans2 != anskey2){
			c2 = "Wrong";
			}
			
			//NUM_3
			if (student_ans3 == anskey3){
			i3 = 1;
			c3 = "Correct";
			}
			else if (student_ans3 != anskey3){
			c3 = "Wrong";
			}
			
			//NUM_4
			if (student_ans4 == anskey4){
			i4 = 1;
			c4 = "Correct";
			}
			else if (student_ans4 != anskey4){
			c4 = "Wrong";
			}
			
			//NUM_5
			if (student_ans5 == anskey5){
			i5 = 1;
			c5 = "Correct";
			}
			else if (student_ans5 != anskey5){
			c5 = "Wrong";
			}
			
			//NUM_6
			if (student_ans6 == anskey6){
			i6 = 1;
			c6 = "Correct";
			}
			else if (student_ans6 != anskey6){
			c6 = "Wrong";
			}
			
			//NUM_7
			if (student_ans7 == anskey7){
			i7 = 1;
			c7 = "Correct";
			}
			else if (student_ans7 != anskey7){
			c7 = "Wrong";
			}
			
			//NUM_8
			if (student_ans8 == anskey8){
			i8 = 1;
			c8 = "Correct";
			}
			else if (student_ans8 != anskey8){
			c8 = "Wrong";
			}
			
			//NUM_9
			if (student_ans9 == anskey9){
			i9 = 1;
			c9 = "Correct";
			}
			else if (student_ans9 != anskey9){
			c9 = "Wrong";
			}
			
			//NUM_10
			if (student_ans10 == anskey10){
			i10 = 1;
			c10 = "Correct";
			}
			else if (student_ans10 != anskey10){
			c10 = "Wrong";
			}
			
			//NUM_11
			if (student_ans11 == anskey11){
			i11 = 1;
			c11 = "Correct";
			}
			else if (student_ans11 != anskey11){
			c11 = "Wrong";
			}
			
			//NUM_12
			if (student_ans12 == anskey12){
			i12 = 1;
			c12 = "Correct";
			}
			else if (student_ans12 != anskey12){
			c12 = "Wrong";
			}
			
			//NUM_13
			if (student_ans13 == anskey13){
			i13 = 1;
			c13 = "Correct";
			}
			else if (student_ans13 != anskey13){
			c13 = "Wrong";
			}
			
			//NUM_14
			if (student_ans14 == anskey14){
			i14 = 1;
			c14 = "Correct";
			}
			else if (student_ans14 != anskey14){
			c14 = "Wrong";
			}
			
			//NUM_15
			if (student_ans15 == anskey15){
			i15 = 1;
			c15 = "Correct";
			}
			else if (student_ans15 != anskey15){
			c15 = "Wrong";
			}
			
			//NUM_16
			if (student_ans16 == anskey16){
			i16 = 1;
			c16 = "Correct";
			}
			else if (student_ans16 != anskey16){
			c16 = "Wrong";
			}
			
			//NUM_17
			if (student_ans17 == anskey17){
			i17 = 1;
			c17 = "Correct";
			}
			else if (student_ans17 != anskey17){
			c17 = "Wrong";
			}
			
			//NUM_18
			if (student_ans18 == anskey18){
			i18 = 1;
			c18 = "Correct";
			}
			else if (student_ans18 != anskey18){
			c18 = "Wrong";
			}
			
			//NUM_19
			if (student_ans19 == anskey19){
			i19 = 1;
			c19 = "Correct";
			}
			else if (student_ans19 != anskey19){
			c19 = "Wrong";
			}
			
			//NUM_20
			if (student_ans20 == anskey20){
			i20 = 1;
			c20 = "Correct";
			}
			else if (student_ans20 != anskey20){
			c20 = "Wrong";
			}
			

			//Computation
			if (items == 1){
				score = i1;
				//+i3+i4+i5+i6+i7+i8+i9+i10+i11+i12+i13+i14+i15+i16+i17+i18+i19+i20;	
				cout<<"\n	1. "<<student_ans1 <<"  -------  "<<c1<<"\n";
				cout<<"\n	Score: "<<score<<"/"<<items;
				average = (score / items) * 100;
				cout<<"\n	Average: "<<average<<"%";
				
				if (average >= 75){
					cout<<"\n	Remarks: Pass";
				}
				else{
					cout<<"\n	Remarks: Fail";
				}
			}
			
			else if (items == 2){
				score = i1+i2;
				//+i3+i4+i5+i6+i7+i8+i9+i10+i11+i12+i13+i14+i15+i16+i17+i18+i19+i20;	
				cout<<"\n	1. "<<student_ans1<<"  -------  "<<c1<<"\n";
				cout<<"	2. "<<student_ans2<<"  -------  "<<c2<<"\n";
				cout<<"\n	Score: "<<score<<"/"<<items;
				average = (score / items) * 100;
				cout<<"\n	Average: "<<average<<"%";
				
				if (average >= 75){
					cout<<"\n	Remarks: Pass";
				}
				else{
					cout<<"\n	Remarks: Fail";
				}
			}
			
			else if (items == 3){
				score = i1+i2+i3;
				//+i4+i5+i6+i7+i8+i9+i10+i11+i12+i13+i14+i15+i16+i17+i18+i19+i20;	
				cout<<"\n	1. "<<student_ans1<<"  -------  "<<c1<<"\n";
				cout<<"	2. "<<student_ans2<<"  -------  "<<c2<<"\n";
				cout<<"	3. "<<student_ans3<<"  -------  "<<c3<<"\n";
				cout<<"\n	Score: "<<score<<"/"<<items;
				average = (score / items) * 100;
				cout<<"\n	Average: "<<average<<"%";
				
				if (average >= 75){
					cout<<"\n	Remarks: Pass";
				}
				else{
					cout<<"\n	Remarks: Fail";
				}
			}
			
			else if (items == 4){
				score = i1+i2+i3+i4;
				//+i5+i6+i7+i8+i9+i10+i11+i12+i13+i14+i15+i16+i17+i18+i19+i20;	
				cout<<"\n	1. "<<student_ans1<<"  -------  "<<c1<<"\n";
				cout<<"	2. "<<student_ans2<<"  -------  "<<c2<<"\n";
				cout<<"	3. "<<student_ans3<<"  -------  "<<c3<<"\n";
				cout<<"	4. "<<student_ans4<<"  -------  "<<c4<<"\n";
				cout<<"\n	Score: "<<score<<"/"<<items;
				average = (score / items) * 100;
				cout<<"\n	Average: "<<average<<"%";
				
				if (average >= 75){
					cout<<"\n	Remarks: Pass";
				}
				else{
					cout<<"\n	Remarks: Fail";
				}
			}
			
			else if (items == 5){
				score = i1+i2+i3+i4+i5;
				//+i6+i7+i8+i9+i10+i11+i12+i13+i14+i15+i16+i17+i18+i19+i20;	
				cout<<"\n	1. "<<student_ans1<<"  -------  "<<c1<<"\n";
				cout<<"	2. "<<student_ans2<<"  -------  "<<c2<<"\n";
				cout<<"	3. "<<student_ans3<<"  -------  "<<c3<<"\n";
				cout<<"	4. "<<student_ans4<<"  -------  "<<c4<<"\n";
				cout<<"	5. "<<student_ans5<<"  -------  "<<c5<<"\n";
				cout<<"\n	Score: "<<score<<"/"<<items;
				average = (score / items) * 100;
				cout<<"\n	Average: "<<average<<"%";
				
				if (average >= 75){
					cout<<"\n	Remarks: Pass";
				}
				else{
					cout<<"\n	Remarks: Fail";
				}
			}
			
			else if (items == 6){
				score = i1+i2+i3+i4+i5+i6;
				//+i7+i8+i9+i10+i11+i12+i13+i14+i15+i16+i17+i18+i19+i20;	
				cout<<"\n	1. "<<student_ans1<<"  -------  "<<c1<<"\n";
				cout<<"	2. "<<student_ans2<<"  -------  "<<c2<<"\n";
				cout<<"	3. "<<student_ans3<<"  -------  "<<c3<<"\n";
				cout<<"	4. "<<student_ans4<<"  -------  "<<c4<<"\n";
				cout<<"	5. "<<student_ans5<<"  -------  "<<c5<<"\n";
				cout<<"	6. "<<student_ans6<<"  -------  "<<c6<<"\n";
				cout<<"\n	Score: "<<score<<"/"<<items;
				average = (score / items) * 100;
				cout<<"\n	Average: "<<average<<"%";
				
				if (average >= 75){
					cout<<"\n	Remarks: Pass";
				}
				else{
					cout<<"\n	Remarks: Fail";
				}
			}
			
			else if (items == 7){
				score = i1+i2+i3+i4+i5+i6+i7;
				//+i8+i9+i10+i11+i12+i13+i14+i15+i16+i17+i18+i19+i20;	
				cout<<"\n	1. "<<student_ans1<<"  -------  "<<c1<<"\n";
				cout<<"	2. "<<student_ans2<<"  -------  "<<c2<<"\n";
				cout<<"	3. "<<student_ans3<<"  -------  "<<c3<<"\n";
				cout<<"	4. "<<student_ans4<<"  -------  "<<c4<<"\n";
				cout<<"	5. "<<student_ans5<<"  -------  "<<c5<<"\n";
				cout<<"	6. "<<student_ans6<<"  -------  "<<c6<<"\n";
				cout<<"	7. "<<student_ans7<<"  -------  "<<c7<<"\n";
				cout<<"\n	Score: "<<score<<"/"<<items;
				average = (score / items) * 100;
				cout<<"\n	Average: "<<average<<"%";
				
				if (average >= 75){
					cout<<"\n	Remarks: Pass";
				}
				else{
					cout<<"\n	Remarks: Fail";
				}
			}
			
			else if (items == 8){
				score = i1+i2+i3+i4+i5+i6+i7+i8;
				//+i9+i10+i11+i12+i13+i14+i15+i16+i17+i18+i19+i20;	
				cout<<"\n	1. "<<student_ans1<<"  -------  "<<c1<<"\n";
				cout<<"	2. "<<student_ans2<<"  -------  "<<c2<<"\n";
				cout<<"	3. "<<student_ans3<<"  -------  "<<c3<<"\n";
				cout<<"	4. "<<student_ans4<<"  -------  "<<c4<<"\n";
				cout<<"	5. "<<student_ans5<<"  -------  "<<c5<<"\n";
				cout<<"	6. "<<student_ans6<<"  -------  "<<c6<<"\n";
				cout<<"	7. "<<student_ans7<<"  -------  "<<c7<<"\n";
				cout<<"	8. "<<student_ans8<<"  -------  "<<c8<<"\n";
				cout<<"\n	Score: "<<score<<"/"<<items;
				average = (score / items) * 100;
				cout<<"\n	Average: "<<average<<"%";
				
				if (average >= 75){
					cout<<"\n	Remarks: Pass";
				}
				else{
					cout<<"\n	Remarks: Fail";
				}
			}
			
			
			else if (items == 9){
				score = i1+i2+i3+i4+i5+i6+i7+i8+i9;
				//+i10+i11+i12+i13+i14+i15+i16+i17+i18+i19+i20;	
				cout<<"\n	1. "<<student_ans1<<"  -------  "<<c1<<"\n";
				cout<<"	2. "<<student_ans2<<"  -------  "<<c2<<"\n";
				cout<<"	3. "<<student_ans3<<"  -------  "<<c3<<"\n";
				cout<<"	4. "<<student_ans4<<"  -------  "<<c4<<"\n";
				cout<<"	5. "<<student_ans5<<"  -------  "<<c5<<"\n";
				cout<<"	6. "<<student_ans6<<"  -------  "<<c6<<"\n";
				cout<<"	7. "<<student_ans7<<"  -------  "<<c7<<"\n";
				cout<<"	8. "<<student_ans8<<"  -------  "<<c8<<"\n";
				cout<<"	9. "<<student_ans9<<"  -------  "<<c9<<"\n";
				cout<<"\n	Score: "<<score<<"/"<<items;
				average = (score / items) * 100;
				cout<<"\n	Average: "<<average<<"%";
				
				if (average >= 75){
					cout<<"\n	Remarks: Pass";
				}
				else{
					cout<<"\n	Remarks: Fail";
				}
			}
			
			else if (items == 10){
				score = i1+i2+i3+i4+i5+i6+i7+i8+i9+i10;
				//+i11+i12+i13+i14+i15+i16+i17+i18+i19+i20;	
				cout<<"\n	1. "<<student_ans1<<"  -------  "<<c1<<"\n";
				cout<<"	2. "<<student_ans2<<"  -------  "<<c2<<"\n";
				cout<<"	3. "<<student_ans3<<"  -------  "<<c3<<"\n";
				cout<<"	4. "<<student_ans4<<"  -------  "<<c4<<"\n";
				cout<<"	5. "<<student_ans5<<"  -------  "<<c5<<"\n";
				cout<<"	6. "<<student_ans6<<"  -------  "<<c6<<"\n";
				cout<<"	7. "<<student_ans7<<"  -------  "<<c7<<"\n";
				cout<<"	8. "<<student_ans8<<"  -------  "<<c8<<"\n";
				cout<<"	9. "<<student_ans9<<"  -------  "<<c9<<"\n";
				cout<<"	10. "<<student_ans10<<"  -------  "<<c10<<"\n";
				cout<<"\n	Score: "<<score<<"/"<<items;
				average = (score / items) * 100;
				cout<<"\n	Average: "<<average<<"%";
				
				if (average >= 75){
					cout<<"\n	Remarks: Pass";
				}
				else{
					cout<<"\n	Remarks: Fail";
				}
			}
			
			else if (items == 11){
				score = i1+i2+i3+i4+i5+i6+i7+i8+i9+i10+i11;
				//+i12+i13+i14+i15+i16+i17+i18+i19+i20;	
				cout<<"\n	1. "<<student_ans1<<"  -------  "<<c1<<"\n";
				cout<<"	2. "<<student_ans2<<"  -------  "<<c2<<"\n";
				cout<<"	3. "<<student_ans3<<"  -------  "<<c3<<"\n";
				cout<<"	4. "<<student_ans4<<"  -------  "<<c4<<"\n";
				cout<<"	5. "<<student_ans5<<"  -------  "<<c5<<"\n";
				cout<<"	6. "<<student_ans6<<"  -------  "<<c6<<"\n";
				cout<<"	7. "<<student_ans7<<"  -------  "<<c7<<"\n";
				cout<<"	8. "<<student_ans8<<"  -------  "<<c8<<"\n";
				cout<<"	9. "<<student_ans9<<"  -------  "<<c9<<"\n";
				cout<<"	10. "<<student_ans10<<"  -------  "<<c10<<"\n";
				cout<<"	11. "<<student_ans11<<"  -------  "<<c11<<"\n";
				cout<<"\n	Score: "<<score<<"/"<<items;
				average = (score / items) * 100;
				cout<<"\n	Average: "<<average<<"%";
				
				if (average >= 75){
					cout<<"\n	Remarks: Pass";
				}
				else{
					cout<<"\n	Remarks: Fail";
				}
			}
			
			else if (items == 12){
				score = i1+i2+i3+i4+i5+i6+i7+i8+i9+i10+i11+i12;
				//+i13+i14+i15+i16+i17+i18+i19+i20;	
				cout<<"\n	1. "<<student_ans1<<"  -------  "<<c1<<"\n";
				cout<<"	2. "<<student_ans2<<"  -------  "<<c2<<"\n";
				cout<<"	3. "<<student_ans3<<"  -------  "<<c3<<"\n";
				cout<<"	4. "<<student_ans4<<"  -------  "<<c4<<"\n";
				cout<<"	5. "<<student_ans5<<"  -------  "<<c5<<"\n";
				cout<<"	6. "<<student_ans6<<"  -------  "<<c6<<"\n";
				cout<<"	7. "<<student_ans7<<"  -------  "<<c7<<"\n";
				cout<<"	8. "<<student_ans8<<"  -------  "<<c8<<"\n";
				cout<<"	9. "<<student_ans9<<"  -------  "<<c9<<"\n";
				cout<<"	10. "<<student_ans10<<"  -------  "<<c10<<"\n";
				cout<<"	11. "<<student_ans11<<"  -------  "<<c11<<"\n";
				cout<<"	12. "<<student_ans12<<"  -------  "<<c12<<"\n";
				cout<<"\n	Score: "<<score<<"/"<<items;
				average = (score / items) * 100;
				cout<<"\n	Average: "<<average<<"%";
				
				if (average >= 75){
					cout<<"\n	Remarks: Pass";
				}
				else{
					cout<<"\n	Remarks: Fail";
				}
			}
			
			else if (items == 13){
				score = i1+i2+i3+i4+i5+i6+i7+i8+i9+i10+i11+i12+i13;
				//+i14+i15+i16+i17+i18+i19+i20;	
				cout<<"\n	1. "<<student_ans1<<"  -------  "<<c1<<"\n";
				cout<<"	2. "<<student_ans2<<"  -------  "<<c2<<"\n";
				cout<<"	3. "<<student_ans3<<"  -------  "<<c3<<"\n";
				cout<<"	4. "<<student_ans4<<"  -------  "<<c4<<"\n";
				cout<<"	5. "<<student_ans5<<"  -------  "<<c5<<"\n";
				cout<<"	6. "<<student_ans6<<"  -------  "<<c6<<"\n";
				cout<<"	7. "<<student_ans7<<"  -------  "<<c7<<"\n";
				cout<<"	8. "<<student_ans8<<"  -------  "<<c8<<"\n";
				cout<<"	9. "<<student_ans9<<"  -------  "<<c9<<"\n";
				cout<<"	10. "<<student_ans10<<"  -------  "<<c10<<"\n";
				cout<<"	11. "<<student_ans11<<"  -------  "<<c11<<"\n";
				cout<<"	12. "<<student_ans12<<"  -------  "<<c12<<"\n";
				cout<<"	13. "<<student_ans13<<"  -------  "<<c13<<"\n";
				cout<<"\n	Score: "<<score<<"/"<<items;
				average = (score / items) * 100;
				cout<<"\n	Average: "<<average<<"%";
				
				if (average >= 75){
					cout<<"\n	Remarks: Pass";
				}
				else{
					cout<<"\n	Remarks: Fail";
				}
			}
			
			else if (items == 14){
				score = i1+i2+i3+i4+i5+i6+i7+i8+i9+i10+i11+i12+i13+i14;
				//+i15+i16+i17+i18+i19+i20;	
				cout<<"\n	1. "<<student_ans1<<"  -------  "<<c1<<"\n";
				cout<<"	2. "<<student_ans2<<"  -------  "<<c2<<"\n";
				cout<<"	3. "<<student_ans3<<"  -------  "<<c3<<"\n";
				cout<<"	4. "<<student_ans4<<"  -------  "<<c4<<"\n";
				cout<<"	5. "<<student_ans5<<"  -------  "<<c5<<"\n";
				cout<<"	6. "<<student_ans6<<"  -------  "<<c6<<"\n";
				cout<<"	7. "<<student_ans7<<"  -------  "<<c7<<"\n";
				cout<<"	8. "<<student_ans8<<"  -------  "<<c8<<"\n";
				cout<<"	9. "<<student_ans9<<"  -------  "<<c9<<"\n";
				cout<<"	10. "<<student_ans10<<"  -------  "<<c10<<"\n";
				cout<<"	11. "<<student_ans11<<"  -------  "<<c11<<"\n";
				cout<<"	12. "<<student_ans12<<"  -------  "<<c12<<"\n";
				cout<<"	13. "<<student_ans13<<"  -------  "<<c13<<"\n";
				cout<<"	14. "<<student_ans14<<"  -------  "<<c14<<"\n";
				cout<<"\n	Score: "<<score<<"/"<<items;
				average = (score / items) * 100;
				cout<<"\n	Average: "<<average<<"%";
				
				if (average >= 75){
					cout<<"\n	Remarks: Pass";
				}
				else{
					cout<<"\n	Remarks: Fail";
				}
			}
			
			else if (items == 15){
				score = i1+i2+i3+i4+i5+i6+i7+i8+i9+i10+i11+i12+i13+i14+i15;
				//+i16+i17+i18+i19+i20;	
				cout<<"\n	1. "<<student_ans1<<"  -------  "<<c1<<"\n";
				cout<<"	2. "<<student_ans2<<"  -------  "<<c2<<"\n";
				cout<<"	3. "<<student_ans3<<"  -------  "<<c3<<"\n";
				cout<<"	4. "<<student_ans4<<"  -------  "<<c4<<"\n";
				cout<<"	5. "<<student_ans5<<"  -------  "<<c5<<"\n";
				cout<<"	6. "<<student_ans6<<"  -------  "<<c6<<"\n";
				cout<<"	7. "<<student_ans7<<"  -------  "<<c7<<"\n";
				cout<<"	8. "<<student_ans8<<"  -------  "<<c8<<"\n";
				cout<<"	9. "<<student_ans9<<"  -------  "<<c9<<"\n";
				cout<<"	10. "<<student_ans10<<"  -------  "<<c10<<"\n";
				cout<<"	11. "<<student_ans11<<"  -------  "<<c11<<"\n";
				cout<<"	12. "<<student_ans12<<"  -------  "<<c12<<"\n";
				cout<<"	13. "<<student_ans13<<"  -------  "<<c13<<"\n";
				cout<<"	14. "<<student_ans14<<"  -------  "<<c14<<"\n";
				cout<<"	15. "<<student_ans15<<"  -------  "<<c15<<"\n";
				cout<<"\n	Score: "<<score<<"/"<<items;
				average = (score / items) * 100;
				cout<<"\n	Average: "<<average<<"%";
				
				if (average >= 75){
					cout<<"\n	Remarks: Pass";
				}
				else{
					cout<<"\n	Remarks: Fail";
				}
			}
			
			else if (items == 16){
				score = i1+i2+i3+i4+i5+i6+i7+i8+i9+i10+i11+i12+i13+i14+i15+i16;
				//+i17+i18+i19+i20;	
				cout<<"\n	1. "<<student_ans1<<"  -------  "<<c1<<"\n";
				cout<<"	2. "<<student_ans2<<"  -------  "<<c2<<"\n";
				cout<<"	3. "<<student_ans3<<"  -------  "<<c3<<"\n";
				cout<<"	4. "<<student_ans4<<"  -------  "<<c4<<"\n";
				cout<<"	5. "<<student_ans5<<"  -------  "<<c5<<"\n";
				cout<<"	6. "<<student_ans6<<"  -------  "<<c6<<"\n";
				cout<<"	7. "<<student_ans7<<"  -------  "<<c7<<"\n";
				cout<<"	8. "<<student_ans8<<"  -------  "<<c8<<"\n";
				cout<<"	9. "<<student_ans9<<"  -------  "<<c9<<"\n";
				cout<<"	10. "<<student_ans10<<"  -------  "<<c10<<"\n";
				cout<<"	11. "<<student_ans11<<"  -------  "<<c11<<"\n";
				cout<<"	12. "<<student_ans12<<"  -------  "<<c12<<"\n";
				cout<<"	13. "<<student_ans13<<"  -------  "<<c13<<"\n";
				cout<<"	14. "<<student_ans14<<"  -------  "<<c14<<"\n";
				cout<<"	15. "<<student_ans15<<"  -------  "<<c15<<"\n";
				cout<<"	16. "<<student_ans16<<"  -------  "<<c16<<"\n";
				cout<<"\n	Score: "<<score<<"/"<<items;
				average = (score / items) * 100;
				cout<<"\n	Average: "<<average<<"%";
				
				if (average >= 75){
					cout<<"\n	Remarks: Pass";
				}
				else{
					cout<<"\n	Remarks: Fail";
				}
			}
			
			else if (items == 17){
				score = i1+i2+i3+i4+i5+i6+i7+i8+i9+i10+i11+i12+i13+i14+i15+i16+i17;
				//+i18+i19+i20;	
				cout<<"\n	1. "<<student_ans1<<"  -------  "<<c1<<"\n";
				cout<<"	2. "<<student_ans2<<"  -------  "<<c2<<"\n";
				cout<<"	3. "<<student_ans3<<"  -------  "<<c3<<"\n";
				cout<<"	4. "<<student_ans4<<"  -------  "<<c4<<"\n";
				cout<<"	5. "<<student_ans5<<"  -------  "<<c5<<"\n";
				cout<<"	6. "<<student_ans6<<"  -------  "<<c6<<"\n";
				cout<<"	7. "<<student_ans7<<"  -------  "<<c7<<"\n";
				cout<<"	8. "<<student_ans8<<"  -------  "<<c8<<"\n";
				cout<<"	9. "<<student_ans9<<"  -------  "<<c9<<"\n";
				cout<<"	10. "<<student_ans10<<"  -------  "<<c10<<"\n";
				cout<<"	11. "<<student_ans11<<"  -------  "<<c11<<"\n";
				cout<<"	12. "<<student_ans12<<"  -------  "<<c12<<"\n";
				cout<<"	13. "<<student_ans13<<"  -------  "<<c13<<"\n";
				cout<<"	14. "<<student_ans14<<"  -------  "<<c14<<"\n";
				cout<<"	15. "<<student_ans15<<"  -------  "<<c15<<"\n";
				cout<<"	16. "<<student_ans16<<"  -------  "<<c16<<"\n";
				cout<<"	17. "<<student_ans17<<"  -------  "<<c17<<"\n";
				cout<<"\n	Score: "<<score<<"/"<<items;
				average = (score / items) * 100;
				cout<<"\n	Average: "<<average<<"%";
				
				if (average >= 75){
					cout<<"\n	Remarks: Pass";
				}
				else{
					cout<<"\n	Remarks: Fail";
				}
			}
			
			else if (items == 18){
				score = i1+i2+i3+i4+i5+i6+i7+i8+i9+i10+i11+i12+i13+i14+i15+i16+i17+i18;
				//+i19+i20;	
				cout<<"\n	1. "<<student_ans1<<"  -------  "<<c1<<"\n";
				cout<<"	2. "<<student_ans2<<"  -------  "<<c2<<"\n";
				cout<<"	3. "<<student_ans3<<"  -------  "<<c3<<"\n";
				cout<<"	4. "<<student_ans4<<"  -------  "<<c4<<"\n";
				cout<<"	5. "<<student_ans5<<"  -------  "<<c5<<"\n";
				cout<<"	6. "<<student_ans6<<"  -------  "<<c6<<"\n";
				cout<<"	7. "<<student_ans7<<"  -------  "<<c7<<"\n";
				cout<<"	8. "<<student_ans8<<"  -------  "<<c8<<"\n";
				cout<<"	9. "<<student_ans9<<"  -------  "<<c9<<"\n";
				cout<<"	10. "<<student_ans10<<"  -------  "<<c10<<"\n";
				cout<<"	11. "<<student_ans11<<"  -------  "<<c11<<"\n";
				cout<<"	12. "<<student_ans12<<"  -------  "<<c12<<"\n";
				cout<<"	13. "<<student_ans13<<"  -------  "<<c13<<"\n";
				cout<<"	14. "<<student_ans14<<"  -------  "<<c14<<"\n";
				cout<<"	15. "<<student_ans15<<"  -------  "<<c15<<"\n";
				cout<<"	16. "<<student_ans16<<"  -------  "<<c16<<"\n";
				cout<<"	17. "<<student_ans17<<"  -------  "<<c17<<"\n";
				cout<<"	18. "<<student_ans18<<"  -------  "<<c18<<"\n";
				cout<<"\n	Score: "<<score<<"/"<<items;
				average = (score / items) * 100;
				cout<<"\n	Average: "<<average<<"%";
				
				if (average >= 75){
					cout<<"\n	Remarks: Pass";
				}
				else{
					cout<<"\n	Remarks: Fail";
				}
			}
			
			else if (items == 19){
				score = i1+i2+i3+i4+i5+i6+i7+i8+i9+i10+i11+i12+i13+i14+i15+i16+i17+i18+i19;
				//+i20;	
				cout<<"\n	1. "<<student_ans1<<"  -------  "<<c1<<"\n";
				cout<<"	2. "<<student_ans2<<"  -------  "<<c2<<"\n";
				cout<<"	3. "<<student_ans3<<"  -------  "<<c3<<"\n";
				cout<<"	4. "<<student_ans4<<"  -------  "<<c4<<"\n";
				cout<<"	5. "<<student_ans5<<"  -------  "<<c5<<"\n";
				cout<<"	6. "<<student_ans6<<"  -------  "<<c6<<"\n";
				cout<<"	7. "<<student_ans7<<"  -------  "<<c7<<"\n";
				cout<<"	8. "<<student_ans8<<"  -------  "<<c8<<"\n";
				cout<<"	9. "<<student_ans9<<"  -------  "<<c9<<"\n";
				cout<<"	10. "<<student_ans10<<"  -------  "<<c10<<"\n";
				cout<<"	11. "<<student_ans11<<"  -------  "<<c11<<"\n";
				cout<<"	12. "<<student_ans12<<"  -------  "<<c12<<"\n";
				cout<<"	13. "<<student_ans13<<"  -------  "<<c13<<"\n";
				cout<<"	14. "<<student_ans14<<"  -------  "<<c14<<"\n";
				cout<<"	15. "<<student_ans15<<"  -------  "<<c15<<"\n";
				cout<<"	16. "<<student_ans16<<"  -------  "<<c16<<"\n";
				cout<<"	17. "<<student_ans17<<"  -------  "<<c17<<"\n";
				cout<<"	18. "<<student_ans18<<"  -------  "<<c18<<"\n";
				cout<<"	19. "<<student_ans19<<"  -------  "<<c19<<"\n";
				cout<<"\n	Score: "<<score<<"/"<<items;
				average = (score / items) * 100;
				cout<<"\n	Average: "<<average<<"%";
				
				if (average >= 75){
					cout<<"\n	Remarks: Pass";
				}
				else{
					cout<<"\n	Remarks: Fail";
				}
			}
			
			else if (items == 20){
				score = i1+i2+i3+i4+i5+i6+i7+i8+i9+i10+i11+i12+i13+i14+i15+i16+i17+i18+i19+i20;	
				cout<<"\n	1. "<<student_ans1<<"  -------  "<<c1<<"\n";
				cout<<"	2. "<<student_ans2<<"  -------  "<<c2<<"\n";
				cout<<"	3. "<<student_ans3<<"  -------  "<<c3<<"\n";
				cout<<"	4. "<<student_ans4<<"  -------  "<<c4<<"\n";
				cout<<"	5. "<<student_ans5<<"  -------  "<<c5<<"\n";
				cout<<"	6. "<<student_ans6<<"  -------  "<<c6<<"\n";
				cout<<"	7. "<<student_ans7<<"  -------  "<<c7<<"\n";
				cout<<"	8. "<<student_ans8<<"  -------  "<<c8<<"\n";
				cout<<"	9. "<<student_ans9<<"  -------  "<<c9<<"\n";
				cout<<"	10. "<<student_ans10<<"  -------  "<<c10<<"\n";
				cout<<"	11. "<<student_ans11<<"  -------  "<<c11<<"\n";
				cout<<"	12. "<<student_ans12<<"  -------  "<<c12<<"\n";
				cout<<"	13. "<<student_ans13<<"  -------  "<<c13<<"\n";
				cout<<"	14. "<<student_ans14<<"  -------  "<<c14<<"\n";
				cout<<"	15. "<<student_ans15<<"  -------  "<<c15<<"\n";
				cout<<"	16. "<<student_ans16<<"  -------  "<<c16<<"\n";
				cout<<"	17. "<<student_ans17<<"  -------  "<<c17<<"\n";
				cout<<"	18. "<<student_ans18<<"  -------  "<<c18<<"\n";
				cout<<"	19. "<<student_ans19<<"  -------  "<<c19<<"\n";
				cout<<"	20. "<<student_ans20<<"  -------  "<<c20<<"\n";
				cout<<"\n	Score: "<<score<<"/"<<items;
				average = (score / items) * 100;
				cout<<"\n	Average: "<<average<<"%";
				
				if (average >= 75){
					cout<<"\n	Remarks: Pass";
				}
				else{
					cout<<"\n	Remarks: Fail";
				}
			}
			
			else if (items < 0){
				cout<<"Invalid";
			}
			
			else if (items > 21){
				cout<<"Invalid";
			}	
			
	}	
}
