#include <graphics.h>
#include<iostream>
#include<stdio.h>
#include<fstream>
#include<ctime>
#include<string>

using namespace std;

void converter(int greg)           //converter takes input a integer and converts it into a date in gregorian calendar.
{
    int month,day,year;
    year=greg%10000;
    greg=(greg-year)/10000;
    month=greg%100;
    if(month>12)
    {
        cout<<"incorrect input"<<endl;
        exit(0);
    }
    greg=(greg-month)/100;
    day=greg;
    if(day>31)
    {
        cout<<"incorrect input"<<endl;
        exit(0);
    }
    if(year%4!=0)
    {
        if((month==03 && day>21)|| month>3)
        {
            year=year-78;
            if(month==3)
            {
                month=1;
                day=day-21;
            }
            if(month==4)
            {
                if(day>20)
                {
                    month=2;
                    day=day-20;
                }
                else
                {
                    month=1;
                    day=day+10;
                }
            }
            if(month==5)
            {
                if(day>21)
                {
                    month=3;
                    day=day-21;
                }
                else
                {
                    month=2;
                    day=day+10;
                }
            }
            if(month==6)
            {
                if(day>21)
                {
                    month=4;
                    day=day-21;
                }
                else
                {
                    month=3;
                    day=day+10;
                }
            }
            if(month==7)
            {
                if(day>22)
                {
                    month=5;
                    day=day-22;
                }
                else
                {
                    month=4;
                    day=day+9;
                }
            }
            if(month==8)
            {
                if(day>22)
                {
                    month=6;
                    day=day-22;
                }
                else
                {
                    month=5;
                    day=day+9;
                }
            }
            if(month==9)
            {
                if(day>22)
                {
                    month=7;
                    day=day-22;
                }
                else
                {
                    month=6;
                    day=day+9;
                }
            }
            if(month==10)
            {
                if(day>22)
                {
                    month=8;
                    day=day-22;
                }
                else
                {
                    month=7;
                    day=day+8;
                }
            }
            if(month==11)
            {
                if(day>21)
                {
                    month=9;
                    day=day-21;
                }
                else
                {
                    month=8;
                    day=day+9;
                }
            }
            if(month==12)
            {
                if(day>21)
                {
                    month=10;
                    day=day-21;
                }
                else
                {
                    month=9;
                    day=day+9;
                }
            }
        }
        else
        {
            year=year-79;
            if(month==1)
            {
                if(day>20)
                {
                    month=11;
                    day=day-20;
                }
                else
                {
                    month=10;
                    day=day+10;
                }
            }
            if(month==2)
            {
                if(day>19)
                {
                    month=12;
                    day=day-19;
                }
                else
                {
                    month=11;
                    day=day+11;
                }
            }
            if(month==3)
            {
                month=12;
                day=day+9;
            }
        }

    }
    else
    {
        if((month==03 && day>20)|| month>3)         //if the year is leap year.
        {
            year=year-78;
            if(month==3)
            {
                month=1;
                day=day-20;
            }
            if(month==4)
            {
                if(day>20)
                {
                    month=2;
                    day=day-20;
                }
                else
                {
                    month=1;
                    day=day+11;
                }
            }
            if(month==5)
            {
                if(day>21)
                {
                    month=3;
                    day=day-21;
                }
                else
                {
                    month=2;
                    day=day+10;
                }
            }
            if(month==6)
            {
                if(day>21)
                {
                    month=4;
                    day=day-21;
                }
                else
                {
                    month=3;
                    day=day+10;
                }
            }
            if(month==7)
            {
                if(day>22)
                {
                    month=5;
                    day=day-22;
                }
                else
                {
                    month=4;
                    day=day+9;
                }
            }
            if(month==8)
            {
                if(day>22)
                {
                    month=6;
                    day=day-22;
                }
                else
                {
                    month=5;
                    day=day+9;
                }
            }
            if(month==9)
            {
                if(day>22)
                {
                    month=7;
                    day=day-22;
                }
                else
                {
                    month=6;
                    day=day+9;
                }
            }
            if(month==10)
            {
                if(day>22)
                {
                    month=8;
                    day=day-22;
                }
                else
                {
                    month=7;
                    day=day+8;
                }
            }
            if(month==11)
            {
                if(day>21)
                {
                    month=9;
                    day=day-21;
                }
                else
                {
                    month=8;
                    day=day+9;
                }
            }
            if(month==12)
            {
                if(day>21)
                {
                    month=10;
                    day=day-21;
                }
                else
                {
                    month=9;
                    day=day+9;
                }
            }
        }
        else
        {
            year=year-79;
            if(month==1)
            {
                if(day>20)
                {
                    month=11;
                    day=day-20;
                }
                else
                {
                    month=10;
                    day=day+10;
                }
            }
            if(month==2)
            {
                if(day>19)
                {
                    month=12;
                    day=day-19;
                }
                else
                {
                    month=11;
                    day=day+11;
                }
            }
            if(month==3)
            {
                month=12;
                day=day+9;
            }
        }

    }
    cout<<day<<" "<<month<<" "<<year<<" "<<endl;
    return;
}
void outintxy(int x, int y, int value)              //to print numbers in graphics window,it will be useful in  loops.
{

    if(value==1) return outtextxy(x,y,"01");
    if(value==2) return outtextxy(x,y,"02");
    if(value==3) return outtextxy(x,y,"03");
    if(value==4) return outtextxy(x,y,"04");
    if(value==5) return outtextxy(x,y,"05");
    if(value==6) return outtextxy(x,y,"06");
    if(value==7) return outtextxy(x,y,"07");
    if(value==8) return outtextxy(x,y,"08");
    if(value==9) return outtextxy(x,y,"09");
    if(value==10) return outtextxy(x,y,"10");
    if(value==11) return outtextxy(x,y,"11");
    if(value==12) return outtextxy(x,y,"12");
    if(value==13) return outtextxy(x,y,"13");
    if(value==14) return outtextxy(x,y,"14");
    if(value==15) return outtextxy(x,y,"15");
    if(value==16) return outtextxy(x,y,"16");
    if(value==17) return outtextxy(x,y,"17");
    if(value==18) return outtextxy(x,y,"18");
    if(value==19) return outtextxy(x,y,"19");
    if(value==20) return outtextxy(x,y,"20");
    if(value==21) return outtextxy(x,y,"21");
    if(value==22) return outtextxy(x,y,"22");
    if(value==23) return outtextxy(x,y,"23");
    if(value==24) return outtextxy(x,y,"24");
    if(value==25) return outtextxy(x,y,"25");
    if(value==26) return outtextxy(x,y,"26");
    if(value==27) return outtextxy(x,y,"27");
    if(value==28) return outtextxy(x,y,"28");
    if(value==29) return outtextxy(x,y,"29");
    if(value==30) return outtextxy(x,y,"30");
    if(value==31) return outtextxy(x,y,"31");
}
//void intcolor(int x,int y){


int main()
{
    int  gd = DETECT, gm,z=0,j=0,start=0,mon=1,r=85,q,year,temp,greg;
    char final,calendar,check1;
    string st,option;
    bool swap=true,indian=true,check=true,cal=true;
    final='c';
    cout<<"press g for using gregorian converter"<<endl;
    cout<<"press f for using calendar"<<endl;
    cin>>st;
    if(st.length()>1) cout<<"error"<<endl;
    if(st=="g")
    {
        cout<<"converter of gregorian to indian national calendar"<<endl;
        while(check)
        {
            cout<<"enter the date required??(DDMMYYYY)"<<endl;
            cin>>greg;
            converter(greg);
            cout<<"press c to continue"<<endl;
            cout<<"press f for using calendar"<<endl;
            cout<<"press e to exit"<<endl;
            cin>>check1;
            if(check1==99) check=true;
            if(check1==101) exit(0);
            if(check1==102)
            {
                st=102;
                check=false;
            }
        }
    }
    if(st=="f")
    {
        cout<<"press g for gregorian calendar"<<endl;
        cout<<"press i for indian national calendar"<<endl;
        cin>>calendar;
    }
        while(cal)                                  //to change the calendar this loop is useful.
        {
            switch(calendar)
            {
            case 103:
                cout<<"Enter the year of which calendar is required??"<<endl;
                cin>>year;
                mon=1;
                initgraph(&gd,&gm,"C:\\TC\\BGI");
                while(swap)                      //to reuse the same calendar.
                {
                    while(mon<=12)
                    {
                        settextstyle(DEFAULT_FONT,HORIZ_DIR,4);
                        setcolor(12);
                        outtextxy(5,85,"sun");
                        setcolor(10);
                        outtextxy(5,135,"mon");
                        outtextxy(5,185,"tue");
                        outtextxy(5,235,"wed");
                        outtextxy(5,285,"thu");
                        outtextxy(5,335,"fri");
                        outtextxy(5,385,"sat ");
                        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
                        outtextxy(5,430,"Next month-n");
                        outtextxy(5,450,"Prev month-p");
                        outtextxy(280,430,"To view or add event-Esc");
                        setcolor(YELLOW);
                        circle(50,35,30);
                        circle(35,30,8);
                        circle(65,30,8);
                        arc(50,35,220,320,20);
                        line(0,75,638,75);
                        line(0,125,638,125);
                        line(0,175,638,175);
                        line(0,225,638,225);
                        line(0,275,638,275);
                        line(0,325,638,325);
                        line(0,375,638,375);
                        line(0,425,638,425);
                        line(200,75,200,425);
                        line(287.4,75,287.4,425);
                        line(374.8,75,374.8,425);
                        line(462.2,75,462.2,425);
                        line(549.6,75,549.6,425);
                        line(637,75,637 ,425);
                        line(112.6,75,112.6,425);
                        setcolor(4);
                        settextstyle(DEFAULT_FONT,HORIZ_DIR,6);
                        setcolor(9);
                        switch(mon)
                        {
                        case 1 :
                            outtextxy(150,17.5,"January");
                            q=31;
                            if(year==2015) start=200;
                            else
                            {
                                start=(((year-2015)*50+(((year-1)-((year-1)%4))/4-503)*50)+200)%350;//gives the starting day in the year.
                            }
                            temp=start;                                //temp is used to get the starting days in the corresponding months.
                            break;
                        case 2 :
                            outtextxy(150,17.5,"Febuary");
                            if(year%4==0 && year%400!=0) q=29;
                            else q=28;
                            start=(temp+150)%350;
                            break;
                        case 3 :
                            outtextxy(200,17.5,"March");
                            q=31;
                            if(year%4!=0)start=(temp+150)%350;
                            else
                            {
                                start=(temp+200)%350;
                            }
                            break;
                        case 4 :
                            outtextxy(200,17.5,"April");
                            q=30;
                            if(year%4!=0)start=(temp+300)%350;
                            else
                            {
                                start=(temp+0)%350;
                            }
                            break;
                        case 5 :
                            outtextxy(250,17.5,"May");
                            q=31;
                            if(year%4!=0)start=(temp+50)%350;
                            else
                            {
                                start=(temp+100)%350;
                            }
                            break;
                        case 6 :
                            outtextxy(200,17.5,"June");
                            start=50;
                            q=30;
                            if(year%4!=0)start=(temp+200)%350;
                            else
                            {
                                start=(temp+250)%350;
                            }
                            break;
                        case 7 :
                            outtextxy(200,17.5,"July");
                            q=31;
                            if(year%4!=0)start=(temp+300)%350;
                            else
                            {
                                start=(temp+0)%350;
                            }
                            break;
                        case 8 :
                            outtextxy(170,17.5,"August");
                            q=31;
                            if(year%4!=0)start=(temp+100)%350;
                            else
                            {
                                start=(temp+150)%350;
                            }
                            break;
                        case 9 :
                            outtextxy(150,17.5,"September");
                            if(year%4!=0)start=(temp+250)%350;
                            else
                            {
                                start=(temp+300)%350;
                            }
                            q=30;
                            break;
                        case 10 :
                            outtextxy(150,17.5,"October");
                            if(year%4!=0)start=(temp+0)%350;
                            else
                            {
                                start=(temp+50)%350;
                            }
                            q=31;
                            break;
                        case 11 :
                            outtextxy(150,17.5,"November");
                            q=30;
                            if(year%4!=0)start=(temp+150)%350;
                            else
                            {
                                start=(temp+200)%350;
                            }
                            break;
                        case 12 :
                            outtextxy(150,17.5,"December");
                            q=31;
                            if(year%4!=0)start=(temp+250)%350;
                            else
                            {
                                start=(temp+300)%350;
                            }
                            break;
                        }
                        setcolor(11);
                        while(j<=508)                       //prints the days in the graphics window with reference to the first day.
                        {
                            for(int i=start; i<500; i=i+50)
                            {
                                r=85+i;
                                z=z+1;
                                if(i>=350)
                                {
                                    i=0;
                                    j=j+87;
                                    r=85;
                                }
                                settextstyle(DEFAULT_FONT,HORIZ_DIR,4);
                                outintxy(122.6+j,r,z);
                                if(z==q) break;                         //keeps track of number of days in the month.
                            }
                            if(z==q) break;
                        }
                        while(1)                                          //to go from one month to the other.
                        {
                            int abhi=getch();
                            if(abhi==110)
                            {
                                if(mon<12) mon=mon+1;
                                else
                                {
                                    mon=1;
                                }
                                cleardevice();

                                j=0;
                                z=0;
                                r=85;
                                break;
                            }
                            if(abhi==112)
                            {
                                if(mon>1) mon=mon-1;
                                else
                                {
                                    mon=12;
                                }
                                cleardevice();

                                j=0;
                                z=0;
                                r=85;
                                break;
                            }
                            if(abhi==27)
                            {
                                mon=13;
                                cout<<"to add event press 'a'"<<endl;
                                cout<<"to view events press 'v'"<<endl;
                                cout<<"to view the current time and date press 't'"<<endl;
                                cout<<"to use calendar press 'r'"<<endl;
                                cout<<"to use converter press 'g'"<<endl;
                                cout<<"to use indian calendar press 'i'"<<endl;
                                cout<<"press 'e' to exit"<<endl;
                                cin>>option;
                                if(option.length()>1)
                                {
                                    cout<<"incorrect input"<<endl;
                                    exit(0);
                                }
                                break;
                            }

                        }
                    }
                    if(option=="e") exit(0);
                    while(final==99)
                    {
                        if(option=="a")                     //adding a event to the text file.
                        {
                            FILE * pFile;
                            char event[150];
                            cout<<"Add the date and the corresponding event(MonXX,event....):";
                            cin>>event;
                            pFile = fopen ("abhi.txt","a");
                            fprintf (pFile, "%s\n",event);
                            fclose (pFile);
                            cout<<"to exit press e"<<endl;
                            cout<<"to continue press c"<<endl;
                            cout<<"to use calendar press r"<<endl;
                            cin>>final;
                            if(final==114) option="r";
                            if(final==101) exit(0);
                        }
                        if(option=="v")                     //reading data from a text file.
                        {
                            string line;
                            string abhi;
                            string abhi1;
                            char date[10];
                            cout<<"enter the date(Monxx):"<<endl;
                            cin>>date;
                            int l=line.length();
                            ifstream ifile("abhi.txt");
                            if(ifile.is_open())
                            {
                                while(getline(ifile,line))
                                {
                                    abhi=line.substr(0,5);
                                    if(abhi==date)
                                    {
                                        abhi1=line.substr(6,l-6);
                                        cout<<abhi1<<endl;
                                    }

                                }

                            }
                            cout<<"to exit press e"<<endl;
                            cout<<"to continue press c"<<endl;
                            cout<<"to use calendar press r"<<endl;
                            cin>>final;
                            if(final==114) option="r";
                            if(final==101) exit(0);
                        }
                        if(option=="t")                     //to get local time and date from the system.
                        {
                            time_t rawtime;
                            struct tm * timeinfo;

                            time (&rawtime);
                            timeinfo = localtime (&rawtime);
                            printf ("Current local time and date: %s", asctime(timeinfo));
                            cout<<"press e to exit"<<endl;
                            cout<<"to continue press c"<<endl;
                            cout<<"to use calendar press r"<<endl;
                            cin>>final;
                            if(final==114) option="r";
                            if(final==101) exit(0);
                        }
                        if(option=="r")                         //to reuse the calendar.
                        {
                            mon=1;
                            j=0;
                            z=0;
                            r=85;
                            final=99;
                            break;
                        }
                        if(option=="i")                          //to change the calendar.
                        {
                            mon=13;
                            calendar=105;
                            j=0;
                            z=0;
                            r=85;
                            swap=false;
                            break;
                        }
                        if(option=="g")
                        {
                            cout<<"converter of gregorian to indian national calendar"<<endl;
                            while(check)
                            {
                                cout<<"enter the date required??(DDMMYYYY)"<<endl;
                                cin>>greg;
                                converter(greg);
                                cout<<"press c to continue"<<endl;
                                cout<<"press e to exit"<<endl;
                                cout<<"press r to reuse calendar"<<endl;
                                cin>>check1;
                                if(check1==99) check=true;
                                if(check1==101)  exit(0);
                                if(check1==114)
                                {
                                    check=false;
                                    option=114;
                                }
                            }
                        }
                    }
                }



            case 105:
                cout<<"march 22 of 2015=caitra(1st month) 1 of 1937"<<endl;
                cout<<"Enter the year of which calendar is required??"<<endl;
                cin>>year;
                year=year+78;
                mon=1;
                initgraph(&gd,&gm,"C:\\TC\\BGI");
                while(indian)                        //same as above but months are changed and this creates indian national calendar.
                {
                    while(mon<=12)
                    {
                        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
                        setcolor(12);
                        outtextxy(5,85,"Ravi");
                        setcolor(10);
                        outtextxy(5,135,"Soma");
                        outtextxy(5,185,"Mangal");
                        outtextxy(5,235,"Budha");
                        outtextxy(5,285,"Guru");
                        outtextxy(5,335,"Sukra");
                        outtextxy(5,385,"Sani");
                        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
                        outtextxy(5,430,"Next month-n");
                        outtextxy(5,450,"Prev month-p");
                        outtextxy(280,430,"To view or add event-Esc");
                        setcolor(YELLOW);
                        circle(50,35,30);
                        circle(35,30,8);
                        circle(65,30,8);
                        arc(50,35,220,320,20);
                        line(0,75,638,75);
                        line(0,125,638,125);
                        line(0,175,638,175);
                        line(0,225,638,225);
                        line(0,275,638,275);
                        line(0,325,638,325);
                        line(0,375,638,375);
                        line(0,425,638,425);
                        line(200,75,200,425);
                        line(287.4,75,287.4,425);
                        line(374.8,75,374.8,425);
                        line(462.2,75,462.2,425);
                        line(549.6,75,549.6,425);
                        line(637,75,637 ,425);
                        line(112.6,75,112.6,425);
                        setcolor(4);
                        settextstyle(DEFAULT_FONT,HORIZ_DIR,6);
                        setcolor(9);
                        switch(mon)
                        {
                        case 1 :
                            outtextxy(150,17.5,"Caitra");
                            if(year%4==0 && year%400!=0) q=31;
                            else q=30;
                            if(year==2015) start=0;
                            else
                            {
                                start=((year-2015)*50+(((year-1)-((year-1)%4))/4-503)*50)%350;
                            }
                            temp=start;
                            break;
                        case 2 :
                            outtextxy(150,17.5,"Vaisaka");
                            if(year%4!=0)start=(temp+100)%350;
                            else
                            {
                                start=(temp+150)%350;
                            }
                            q=30;
                            break;
                        case 3 :
                            outtextxy(200,17.5,"Jyaistha");
                            q=30;
                            if(year%4!=0)start=(temp+250)%350;
                            else
                            {
                                start=(temp+300)%350;
                            }
                            break;
                        case 4 :
                            outtextxy(200,17.5,"Asadha");
                            q=30;
                            if(year%4!=0)start=(temp+50)%350;
                            else
                            {
                                start=(temp+100)%350;
                            }
                            break;
                        case 5 :
                            outtextxy(250,17.5,"Sravana");
                            q=30;
                            if(year%4!=0)start=(temp+200)%350;
                            else
                            {
                                start=(temp+250)%350;
                            }
                            break;
                        case 6 :
                            outtextxy(200,17.5,"Bhadra");
                            start=50;
                            q=30;
                            if(year%4!=0)start=(temp+350)%350;
                            else
                            {
                                start=(temp+50)%350;
                            }
                            break;
                        case 7 :
                            outtextxy(200,17.5,"Asvina");
                            q=31;
                            if(year%4!=0)start=(temp+150)%350;
                            else
                            {
                                start=(temp+150)%350;
                            }
                            break;
                        case 8 :
                            outtextxy(170,17.5,"Kartika");
                            q=31;
                            if(year%4!=0)start=(temp+250)%350;
                            else
                            {
                                start=(temp+300)%350;
                            }
                            break;
                        case 9 :
                            outtextxy(150,17.5,"Agrahayana");
                            if(year%4!=0)start=(temp+350)%350;
                            else
                            {
                                start=(temp+50)%350;
                            }
                            q=31;
                            break;
                        case 10 :
                            outtextxy(150,17.5,"Pausa");
                            if(year%4!=0)start=(temp+100)%350;
                            else
                            {
                                start=(temp+150)%350;
                            }
                            q=31;
                            break;
                        case 11 :
                            outtextxy(150,17.5,"Magha");
                            q=31;
                            if(year%4!=0)start=(temp+200)%350;
                            else
                            {
                                start=(temp+250)%350;
                            }
                            break;
                        case 12 :
                            outtextxy(150,17.5,"Phalguna");
                            q=31;
                            if(year%4!=0)start=(temp+300)%350;
                            else
                            {
                                start=(temp+0)%350;
                            }
                            break;
                        }
                        setcolor(11);
                        while(j<=508)
                        {
                            for(int i=start; i<500; i=i+50)
                            {
                                r=85+i;
                                z=z+1;
                                if(i>=350)
                                {
                                    i=0;
                                    j=j+87;
                                    r=85;
                                }
                                settextstyle(DEFAULT_FONT,HORIZ_DIR,4);
                                outintxy(122.6+j,r,z);
                                if(z==q) break;
                            }
                            if(z==q) break;
                        }
                        while(1)
                        {
                            int abhi=getch();
                            if(abhi==110)
                            {
                                if(mon<12) mon=mon+1;
                                else
                                {
                                    mon=1;
                                }
                                cleardevice();

                                j=0;
                                z=0;
                                r=85;
                                break;
                            }
                            if(abhi==112)
                            {
                                if(mon>1) mon=mon-1;
                                else
                                {
                                    mon=12;
                                }
                                cleardevice();

                                j=0;
                                z=0;
                                r=85;
                                break;
                            }
                            if(abhi==27)
                            {
                                mon=13;
                                cout<<"to add event press 'a'"<<endl;
                                cout<<"to view events press 'v'"<<endl;
                                cout<<"to view the current time and date press 't'"<<endl;
                                cout<<"to use calendar press 'r'"<<endl;
                                cout<<"to use converter press 'g'"<<endl;
                                cout<<"to use gregorian calendar press 'i'"<<endl;
                                cout<<"press 'e' to exit"<<endl;
                                cin>>option;
                                if(option.length()>1)
                                {
                                    cout<<"incorrect input";
                                    exit(0);
                                }
                                break;
                            }

                        }
                    }

                    if(option=="e") exit(0);
                    while(final==99)
                    {
                        if(option=="a")
                        {
                            FILE * pFile;
                            char event[150];
                            cout<<"Add the date and the corresponding event(MonXX,event....):";
                            cin>>event;
                            pFile = fopen ("abhi.txt","a");
                            fprintf (pFile, "%s\n",event);
                            fclose (pFile);
                            cout<<"to exit press e"<<endl;
                            cout<<"to continue press c"<<endl;
                            cout<<"to use calendar press r"<<endl;
                            cin>>final;
                            if(final==114) option=="r";
                            if(final==101) exit(0);
                        }
                        if(option=="v")
                        {
                            string line;
                            string abhi;
                            string abhi1;
                            char date[10];
                            cout<<"enter the date(Monxx):"<<endl;
                            cin>>date;
                            int l=line.length();
                            ifstream ifile("abhi.txt");
                            if(ifile.is_open())
                            {
                                while(getline(ifile,line))
                                {
                                    abhi=line.substr(0,5);
                                    if(abhi==date)
                                    {
                                        abhi1=line.substr(6,l-6);
                                        cout<<abhi1<<endl;
                                    }
                                }

                            }
                            cout<<"to exit press e"<<endl;
                            cout<<"to continue press c"<<endl;
                            cout<<"to use calendar press r"<<endl;
                            cin>>final;
                            if(final==114) option=="r";
                            if(final==101) exit(0);
                        }
                        if(option=="t")
                        {
                            time_t rawtime;
                            struct tm * timeinfo;

                            time (&rawtime);
                            timeinfo = localtime (&rawtime);
                            printf ("Current local time and date: %s", asctime(timeinfo));
                            exit(0);
                        }
                        if(option=="r")
                        {
                            mon=1;
                            j=0;
                            z=0;
                            r=85;
                            final=99;
                            break;
                        }
                        if(option=="i")
                        {
                            mon=13;
                            calendar=103;
                            j=0;
                            z=0;
                            r=85;
                            indian=false;
                            break;
                        }
                        if(option=="g")
                        {
                            cout<<"converter of gregorian to indian national calendar"<<endl;
                            while(check)
                            {
                                cout<<"enter the date required??(DDMMYYYY)"<<endl;
                                cin>>greg;
                                converter(greg);
                                cout<<"press c to continue"<<endl;
                                cout<<"press e to exit"<<endl;
                                cout<<"press r to reuse calendar"<<endl;
                                cin>>check1;
                                if(check1==99) check=true;
                                if(check1==101) exit(0);
                                if(check1==114)
                                {
                                    check=false;
                                    option="r";
                                }
                            }
                        }
                    }
                }
            }
        }

    return 0;
}




