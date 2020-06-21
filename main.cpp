#include<iostream>
#include<string>
#include<fstream>
#include<string.h>
#include<stdio.h>
#include <iomanip>
#include "clear"
using namespace std;
static long int stuid,staffid;

void halt()
{
	cout<<"\n press any charater to continue\n";
	char a;
	
	//getchar();
	cin>>a;
	//clear screen;
	
}

class student_personal							//student 
{

char first_name[15];
char last_name[15];
char middle_name[15];
char father_name[40];
char mother_name[40];
char address[60];
char gender;
char DOB[12];
long long int phone_number;

public:

void accept()
{
cout<<"\nEnter your personal details\n"<<endl<<endl;
cout<<"Enter your First Name : "<<endl;
cin>>first_name;
cout<<"Enter your Last Name  : "<<endl;
cin>>last_name;
cout<<"Enter your Middle Name : "<<endl;
cin>>middle_name;
fflush(stdin);
cout<<"Enter your Father Name : "<<endl;
cin.getline(father_name,30);
fflush(stdin);
cout<<"Enter your Mother Name : "<<endl;
cin.getline(mother_name,30);
fflush(stdin);
cout<<"Enter your Address : "<<endl;
cin.getline(address,50);
cout<<"Enter your Gender : "<<endl;
cin>>gender;
cout<<"Enter your Date Of Birth : "<<endl;
cin>>DOB;
cout<<"Enter your Contact Number : "<<endl;
cin>>phone_number;
}

void display()
{
cout<<"\nThe Personal Details of the student are : "<<endl<<endl;
cout<<"First Name : "<<first_name<<endl;
cout<<"Last Name : "<<last_name<<endl;
cout<<"Middle Name : "<<middle_name<<endl;
cout<<"Father Name : "<<father_name<<endl;
cout<<"Mother Name : "<<mother_name<<endl;
cout<<"Address : "<<address<<endl;
cout<<"Gender : "<<gender<<endl;
cout<<"Date Of Birth : "<<DOB<<endl;
cout<<"Contact Number : "<<phone_number<<endl;
}

};


class student:public student_personal
{

char clas[10];
char div;
long int id;
char password[20];
bool valid;
public:
struct marks
{
float DM,DSA,OOP,COA,DELD;
}mark;

struct attendace
{
float DM,DSA,OOP,COA,DELD;
}att;



long int  getid()
	{
		return id;
	}
	void setvalid(bool valid)
	{
		this->valid=valid;
		
		//cout<<"removing student  "<<" ....."<<endl;
	}
	bool getvalid()
	{
		return valid;
		
	}

	bool check_student_password(char t[])
       {
            if(strcmp(t,password)==0 && valid==true)
			return 1;
			else
			return 0;;        
        }

void accept(long int id1)
{
cout<<"\nEnter your details : "<<endl;

student_personal::accept();

id=id1;
cout<<"Enter a password for your profile: "<<endl;
cin>>password;
valid=true;
}

void enter_stud_academic(char clas1[10],char div1)
{
strcpy(clas,clas1);
div=div1;
}

void enter_marks(float DM1,float DSA1,float OOP1,float COA1,float DELD1)
{
mark.DM=DM1;
mark.DSA=DSA1;
mark.OOP=OOP1;
mark.COA=COA1;
mark.DELD=DELD1;
}

void enter_attendance(float DM1,float DSA1,float OOP1,float COA1,float DELD1)
{
att.DM=DM1;
att.DSA=DSA1;
att.OOP=OOP1;
att.COA=COA1;
att.DELD=DELD1;
}

void display()
{
student_personal::display();

cout<<"The Academic Details of the student are : "<<endl<<endl;
cout<<"Class :"<<clas<<endl;
cout<<"Division :"<<div<<endl;
cout<<"ID :"<<id<<endl<<endl;
}

void view_marks()
{
cout<<"\nThe Marks of the student in the 5 subjects are "<<endl<<endl;
cout<<" ";
cout<<"\t\t   Data Structures  And Algorithms : "<<std::setfill (' ') <<mark.DSA<<std::setw (50)<<endl;
cout<<"Object Oriented Programming"<<" : "<<std::setfill (' ') <<mark.OOP<<std::setw (50)<<endl;
cout<<"Discrete Mathematics"<<" : "<<std::setfill (' ') <<mark.DM<<std::setw (50)<<endl;
cout<<"Computer Organization And Architecture"<<" : "<<std::setfill (' ') <<mark.COA<<std::setw (50)<<endl;
cout<<"Digital Electronics And Logic Design"<<" : "<<std::setfill (' ') <<mark.DELD<<endl<<std::setw (50)<<endl;
}
void remove()
{
	enter_marks(0,0,0,0,0);
	enter_attendance(0,0,0,0,0);
	
	
}
void view_attendance()
{
cout<<"\nThe Attendance of the student in the 5 subjects are "<<endl<<endl;
cout<<" \t\t Data Structures And Algorithms : "<<std::setfill (' ') <<att.DSA<<std::setw (50)<<endl;
cout<<"Object Oriented Programming : "<<std::setfill (' ') <<att.OOP<<std::setw (50)<<endl;
cout<<"Discrete Mathematics : "<<std::setfill (' ') <<att.DM<<std::setw (50)<<endl;
cout<<"Computer Organization And Architecture : "<<std::setfill (' ') <<att.COA<<std::setw (50)<<endl;
cout<<"Digital Electronics And Logic Design : "<<std::setfill (' ') <<att.DELD<<std::setw (50)<<endl<<endl;
}

//friend class staff;
};





class staff										//staff
{
	long int d1;
	char des[30];
	char sub[10];
	char name[60];
	struct teacher_academics
	{
	char degree[20];
	int year;
	float per;
	char university[20];
	}s[5];
	char fname[20];
	char mname[20];
	char lname[20];
	char moname[20];
	char password[20];
	char gender[8];
	char dob[11];
	char address[60];
	long int pno;
	bool valid;
	int n;
	public:
	void accept()
	{
		
		valid=true;
		cout<<"\nEnter first name = ";
		cin>>fname;
		cout<<"Enter middle/father's/husband's' name = ";
		cin>>mname;
		cout<<"Enter last name = ";
		cin>>lname;
		cout<<"Enter mother's name = ";
		cin>>moname;
		cout<<"Enter DOB (DD/MM/YYYY) = ";
		cin>>dob;
		cout<<"Enter Gender (m/f) = ";
		cin>>gender;
		fflush(stdin);
		cout<<"Enter current address = ";
		cin.getline(address,50);
		fflush(stdin);
		cout<<"Enter contact number = ";
		cin>>pno;
		int v,i=0;
		cout<<"Enter academic details \n\n";
		do
		{
			cout<<"Enter degree = ";
			cin>>s[i].degree;
			cout<<"Enter University / Board = ";
			cin>>s[i].university;
			cout<<"Enter year of completion = ";
			cin>>s[i].year;
			cout<<"Enter percentage/CGPA = ";
			cin>>s[i].per;
			i++;
			cout<<"To add more press 1 else to stop 0\n";
			cin>>v;
		}while(v!=0);
		n=i;
		cout<<"Subject opted for teaching (DSA/OOP/COA/DM/DELD) = ";
		cin>>sub;	//subject
		cout<<"Enter an appropriate password for the profile";
		cin>>password;
		}
		
		
		void disp()
	{
		cout<<"\n\n  PROFILE DETAILS ARE \n\n";
		cout<<"  ID = "<<d1;
		cout<<"\nName = "<<fname<<" "<<mname<<" "<<lname;
		cout<<"\nFather's/Husband's name  = "<<mname;
		cout<<"\nMother's name = "<<moname;
		cout<<"\nGender = "<<gender;
		cout<<"\nDate of Birth = "<<dob;
		cout<<"\nAddress = "<<address;
		cout<<"\nContact Number = "<<pno;
		cout<<"\nAcademic Details = ";
		cout<<"\n\nDegree\tUniversity\tYear\tPercentage/SGPA\n\n";
		for(int i=0;i<n;i++)
		{
			cout<<s[i].degree<<"\t"<<s[i].university<<"\t\t"<<s[i].year<<"\t"<<s[i].per<<"\n";
		}
	}
	
	
	void add_marks()
	{
		
		student s1;
		long int id1,id=0;
		cout<<"\nFor entering marks enter id of student = ";
		cin>>id1;
		fstream f("student.dat",ios::in|ios::out|ios::binary);//dont use append
		try{
		while(id<stuid)
		{
			f.read((char*)&s1, sizeof(s1));
			id=s1.getid();
						
			if(id1==id)
			{
				throw 1;
				
				break;
				
			}
         	
			
		}
		                    cout<<"\n Student is not found";
		
		}catch(int a)
		{
			int i1;
				/*cout<<"\n1 : DSA";
				cout<<"\n2 : OOP";
				cout<<"\n3 : DM";
				cout<<"\n4 : COA";
				cout<<"\n5 : DELD\n";
				cin>>i1;*/
				if(strcmp(sub,"DSA")==0)
					i1=1;
				else if(strcmp(sub,"OOP")==0)
					i1=2;
				else if(strcmp(sub,"DM")==0)
					i1=3;
				else if(strcmp(sub,"COA")==0)
					i1=4;
				else if(strcmp(sub,"DELD")==0)
					i1=5;
                            switch(i1)
                            {
								case 1 : cout<<"\nEnter marks in DSA = ";
                                             cin>>s1.mark.DSA;
                                              break;
                                case 2 :
                                            cout<<"\nEnter marks in OOP = ";
                                            cin>>s1.mark.OOP;
                                            break;
                                case 3 :
                                            cout<<"\nEnter marks in DM = ";
                                            cin>>s1.mark.DM;
                                            break;
								case 4 : 
                                            cout<<"\nEnter marks in COA = ";
                                            cin>>s1.mark.COA;
                                            break;
								case 5  :
                                            cout<<"\nEnter marks in DELD = ";
                                            cin>>s1.mark.DELD;
                                            break;
				
                            }    
                            int pos;
				pos=-1*sizeof(s1);
				f.seekp(pos,ios::cur);
				f.write((char*)&s1,sizeof(s1));
				
			
			
		}
		f.close();
                
                
                
}
	void add_attendance()
	{
		
		student s2;
		long int id1,id=0;
		cout<<"\nFor entering attendance enter id of student = ";
		cin>>id1;
		fstream f("student.dat",ios::in|ios::out|ios::binary);//dont use append
		try{
		while(id<stuid)
		{
			f.read((char*)&s2, sizeof(s2));
			id=s2.getid();
						
			if(id1==id)
			{
				throw 1;
				
				break;
				
			}
        	
			
		}
		                    cout<<"\n Student not found";
		
		}
		catch(int a)
		{
			int i1;
				/*cout<<"\n1 : DSA";
				cout<<"\n2 : OOP";
				cout<<"\n3 : DM";
				cout<<"\n4 : COA";
				cout<<"\n5 : DELD\n";
				cin>>i2;*/
				if(strcmp(sub,"DSA")==0)
					i1=1;
				else if(strcmp(sub,"OOP")==0)
					i1=2;
				else if(strcmp(sub,"DM")==0)
					i1=3;
				else if(strcmp(sub,"COA")==0)
					i1=4;
				else if(strcmp(sub,"DELD")==0)
					i1=5;
									
                            switch(i1)
                            {
				case 1 : cout<<"\nEnter attendance in DSA = ";
                             cin>>s2.att.DSA;
                             break;
               	case 2 :
                             cout<<"\nEnter attendance in OOP = ";
							cin>>s2.att.OOP;
                              break;
                case 3:
                            cout<<"\nEnter attendance in DM = ";
                            cin>>s2.att.DM;
                            break;
				case 4: 
                            cout<<"\nEnter attendance in COA = ";
                            cin>>s2.att.COA;
                            break;
				case 5 :
                            cout<<"\nEnter attendance in DELD = ";
                            cin>>s2.att.DELD;
                            break;
				
                            }int pos;
				pos=-1*sizeof(s2);
				f.seekp(pos,ios::cur);
				f.write((char*)&s2,sizeof(s2));
				
		}
		f.close();
		
		
	}		
		
	
	staff(long int c)
	{
		d1=c;
		valid=true;
	}
	staff(){};
        
	bool check_staff_password(char t[20])
       {
            if(strcmp(t,password)==0 && valid==true)
			return 1;
			else
			return 0;;        
        }
	long int  getid()
	{
		return d1;
	}
	void setvalid(bool valid)
	{
		this->valid=valid;
		//cout<<"setting to "<<valid<<endl;
		cout<<"removing staff  "<<" ....."<<endl;
	}
	bool getvalid()
	{
		return valid;
		
	}
	void remove()
	{
		/*strcpy(fname,"\0");
		strcpy(mname,"\0");
		strcpy(lname,"\0");
		strcpy(moname,"\0");
		strcpy(password,"\0");
		strcpy(gender,"\0");
		strcpy(dob,"\0");
		strcpy(address,"\0");
		pno=0;
		n=0;*/
	}
	
};

class admin
{
	
	public:
	
	
	admin()
	{
		
		
		ifstream in("config.dat");
		
		if(in)
		{
		long int a,b;
		char c;
		
		in>>a>>c>>b;
		stuid=a;
		staffid=b;
		in.close();	
		}
		else{
			in.close();	
			stuid=0;
			staffid=0;
		}
		
	}
	~admin()
	{
		//stuid=staffid=1;
	ofstream out("config.dat");
		//out.write((char*)&s,sizeof(s));
		out<<stuid<<','<<staffid;
		out.close();
	
	}
	void addstudent()
	{
		stuid++;
		student s;
                char a[10];
                char b;
		s.accept(stuid);
        cout<<"Enter Division of student :";
        cin>>b;
        cout<<"Enter Roll no. of student :";
        cin>>a;
		s.enter_stud_academic(a,b);
		s.enter_marks(0,0,0,0,0);
		s.enter_attendance(0,0,0,0,0);
		s.setvalid(true);
		ofstream out("student.dat",ios::binary|ios::app);
		out.write((char*)&s,sizeof(s));
		out.close();
		cout<<"\n Student added successfully ";
		cout<<"\nStudent ID = "<<stuid<<endl;
		
		//cout<<stuid<<endl;
		
	}
	void addstaff()
	{
		staffid++;
		staff s(staffid);
		s.accept();
		
		ofstream out("staff.dat",ios::binary|ios::app);
		out.write((char*)&s,sizeof(s));
		out.close();
		cout<<"\n Staff added successfully ";
		cout<<"\nStaff ID = "<<staffid<<endl;
		//cout<<stuid<<endl;
		
	}
	void liststudent(bool valid)
	{
		student s;
		long int id=0;
		ifstream in("student.dat",ios::binary);
		while(id<stuid)
		{
			in.read((char*)&s, sizeof(s));
			id=s.getid();
			if(s.getvalid()==valid)
			{
			s.display();
			}
			
		}
		in.close();
		
		
	}
            
	void liststaff(bool valid)
	{
		staff s;
		long int id=0;
		ifstream in("staff.dat",ios::binary);
		while(id<staffid)
		{
			in.read((char*)&s, sizeof(s));
			id=s.getid();
			if(s.getvalid()==valid)
			s.disp();
			
			
		}
		in.close();
		
		
	}
	void removestudent(long int sid)
	{
		
		student s;
		long int id=0;

		fstream f ("student.dat",ios::in|ios::out|ios::binary);//dont use append
		while(id<stuid)
		{
			f.read((char*)&s, sizeof(s));
			id=s.getid();
			//s.disp();
			
			if(id==sid)
			{
				int pos;
				pos=-1*sizeof(s);
				f.seekp(pos,ios::cur);
				s.setvalid(false);
				//s.remove();
				f.write((char*)&s,sizeof(s));
				//s.disp();
				break;
				
			}
			
			
		}
		f.close();
		
		
	}
	
	void removestaff(long int sid)
	{
		
		staff s;
		long int id=0;
		fstream f("staff.dat",ios::in|ios::out|ios::binary);//dont use append
		while(id<staffid)
		{
			f.read((char*)&s, sizeof(s));
			id=s.getid();
			//s.disp();
			
			if(id==sid)
			{
				int pos;
				pos=-1*sizeof(s);
				f.seekp(pos,ios::cur);
				s.setvalid(false);
				s.remove();
				f.write((char*)&s,sizeof(s));
				//s.disp();
				break;
				
			}
			
			
		}
		f.close();
		
		
	}
	
	
};

void admin_menu()									//admin menu
{
	int admin1;
    admin a1;
    string admin_password;
	
            cout<<"\nEnter admin password = ";
            cin>>admin_password;
           
            do
            {
            if(admin_password=="admin")
            {    
            cout<<"\n\n ADMIN MENU";
            cout<<"\n\n1:ADD NEW STAFF";
            cout<<"\n2:ADD NEW STUDENT";
            cout<<"\n3:GET LIST OF STAFFS";
            cout<<"\n4:GET LIST OF STUDENTS";
            cout<<"\n5:REMOVE STAFF";
            cout<<"\n6:REMOVE STUDENT";
            cout<<"\n7: EXIT\n";
            cin>>admin1;
            switch(admin1)
            {
                case 1:
                    a1.addstaff();
                    break;
                case 2:
                    a1.addstudent();
                    break;
                case 3:
                    int b1;
                    cout<<"\n\n1: CURRENT STAFF LIST ";
                    cout<<"\n2: REMOVED STAFF LIST ";
                    cin>>b1;
                    if(b1==1)
                    a1.liststaff(true);
                    if(b1==2)
                    a1.liststaff(false);
                    break;
                case 4:
                    int b2;
                    cout<<"\n\n1: CURRENT STUDENT LIST ";
                    cout<<"\n2: REMOVED STUDENT LIST ";
                    cin>>b2;
                    if(b2==1)
                    a1.liststudent(true);
                    if(b2==2)
                    a1.liststudent(false);
                    break;        
                case 5:
                    long int staid;
                    cout<<"\nENTER ID OF STAFF TO BE REMOVED : ";
                    cin>>staid;
                    a1.removestaff(staid);
                    break;
                case 6:
                    long int stuid;
                    cout<<"\nENTER ID OF STUDENT TO BE REMOVED : ";
                    cin>>stuid;
                    a1.removestudent(stuid);
                    break;
                case 7:
                    cout<<"\nEXITTED FROM THIS MENU";
                    break;
            
            }
            halt();
            
            }
               else
                cout<<"\nINCORRECT PASSWORD";
            }while(admin1!=7);

	
	
	
}


void staff_menu()								//staff menu
{
	staff staff1;
	int sta1;
	long int staid,id=0;
	char stapassword[20];
	
	cout<<"\nEnter staff ID = ";
	cin>>staid;
		
		fstream in("staff.dat",ios::in|ios::out|ios::binary);
		try 
		{
		if(staid<=staffid)
		while(id<staffid)
		{
			in.read((char*)&staff1, sizeof(staff1));
			id=staff1.getid();
		
			
			if(id==staid)
			{
				int pos;
				pos=-1*sizeof(staff1);
/*			for(int k=0;k<3;k++)
			{*/
				cout<<"\nENTER PASSWORD = ";
				cin>>stapassword;
				if(staff1.check_staff_password(stapassword))
				{
				do
				{
					cout<<"\nMENU";
					cout<<"\n\n1:VIEW PR0FILE";
					cout<<"\n2:ADD ATTENDANCE";
					cout<<"\n3:ADD MARKS";	
					cout<<"\n4:EXIT";
					cin>>sta1;
					switch(sta1)
					{
						case 1:staff1.disp();
							break;
						case 2:staff1.add_attendance();
							break;
						case 3:staff1.add_marks();
							break;
						case 4:cout<<"\nExitted";
						
				}					
									
				}while(sta1!=4);
				}
				else
				{
				cout<<"INCORRECT PASSWORD OR";
				throw 1;
				}
			//}
				//f.seekp(pos,ios::cur);
				//f.write((char*)&s,sizeof(s));
				break;
				
			}
			
			
		}
		else
			throw 1;
		}
		catch(int a)
		{
		cout<<"STAFF NOT FOUND";
		
		}
		in.close();
	
	
	
}



void student_menu()
{
	
	student stu1;
	int stud1;
	long int studid,id1=0;
	char stupassword[20];
		
	cout<<"\nEnter student ID = ";
	cin>>studid;
	fstream	f("student.dat",ios::in|ios::out|ios::binary);
	
	try{
	if(studid<=stuid)
		while(id1<=stuid)
		{
			f.read((char*)&stu1, sizeof(stu1));
			id1=stu1.getid();
		
			
			if(id1==studid)
			{
				//int pos;
			//	pos=-1*sizeof(stu1);
//			for(int j=0;j<3;j++)
//			{
				cout<<"\nENTER PASSWORD = ";
				cin>>stupassword;
				if(stu1.check_student_password(stupassword))
				{
				do
				{
					cout<<"\nMENU";
					cout<<"\n\n1:VIEW PR0FILE";
					cout<<"\n2:VIEW ATTENDANCE";
					cout<<"\n3:VIEW MARKS";	
					cout<<"\n4:EXIT\n";
					cin>>stud1;
					switch(stud1)
					{
						case 1:stu1.display();
							break;
						case 2:stu1.view_attendance();
							break;
						case 3:stu1.view_marks();
							break;
						case 4:cout<<"\nExitted";
						
				}					
									
				}while(stud1!=4);
				}
				else
				cout<<"INCORRECT PASSWORD OR STUDENT NOT IN CURRENT SEMISTER";
//			}
				//f.seekp(pos,ios::cur);
				//f.write((char*)&s,sizeof(s));
				break;
				
			}
			
			
		}
		else
			throw 1;
	}
	catch(int a)
	{
	cout<<"STUDENT NOT IN CURRENT SEMISTER";
	}	
		f.close();
	
}

void intialize()
{
	
	
		ifstream in("config.dat");
		
		if(in)
		{
		long int a,b;
		char c;
		
		in>>a>>c>>b;
		stuid=a;
		staffid=b;
		in.close();	
		}
		else{
			in.close();	
			stuid=0;
			staffid=0;
		}
		
}

int main()
{
	
	intialize();
 	int ch1;
    do{
    cout<<"\n    MENU";
    cout<<"\n\n1: ADMIN";
    cout<<"\n2: STAFF";
    cout<<"\n3: STUDENT";
    cout<<"\n4: EXIT\n";
    cin>>ch1;
    switch (ch1)
    {
        
        case 1:admin_menu();
		break;
        
        
        case 2:staff_menu();
			break;
            
        case 3:student_menu();
           	break;
   
    }
    }while(ch1!=4);
    return 0;
}
