#include <iostream>
#include <cstdlib>
using namespace std;
bool disekt(int k){
    if ( (k % 4 ==0 && k % 100 !=0) || (k % 400 == 0 && k % 4000 !=0)){
        return true;
    }
    else {
        return false;
    }
}

int main() {
int d1 ,m1 , y1 ,d2 ,m2 , y2 , j =0; 
cout <<"This is a simple program designed time (in days, for now at least) between two dates ";
cout << "Give today's date in dd mm yy format : ";
cin >> d1;
cin >> m1;
cin >> y1;
cout << "\n";
cout << "Give the desired date in dd mm yy format : ";
cin >> d2;
cin >> m2;
cin >> y2;
switch (m2){
    case 1:  j = 0 +d2; break;
    case 2:  j = 31 +d2; break;
    case 3: j = 58 +d2; break;
    case 4:  j = 90 +d2; break;
    case 5:  j = 120 +d2; break;
    case 6:  j = 151 +d2; break;
    case 7:  j = 181 +d2; break;
    case 8:  j = 212 +d2; break;
    case 9:  j = 243 +d2; break;
    case 10: j = 273 +d2; break;
    case 11: j = 304 +d2; break;
    case 12: j = 334 +d2; break;
    default : cout <<"There are only 12 months! \n";
}
if (m1 > 12 || m2 > 12  || m1 < 0 || m2 <0) { return 0;}    

if  ( disekt(y2) == true && m2 > 2) { j = j +1;}
if ( disekt(y1) == true && m1>2 ) { j = j -1;}
if ( (( m1 == 4 || m1 == 6 || m1 ==9 || m1 == 11 ) && (d1 < 31 && d1 >0)) && (( m2 == 4 || m2 == 6 || m2 ==9 || m2 == 11 ) && (d2 < 31 && d2 >0))){
    cout<<"\n";
}
else if (( m2 == 4 || m2 == 6 || m2 ==9 || m2 == 11 ) && (d2 < 31 && d2 >0) && ( m1 == 1 || m1 == 3 || m1 == 5 || m1 == 7 || m1 == 8 || m1 == 10 || m1 == 12)) {
    cout<<"\n";
}
else if (( m2 == 1 || m2 == 3 || m2 == 5 || m2 == 7 || m2 == 8 || m2 == 10 || m2 == 12) && (( m1 == 4 || m1 == 6 || m1 ==9 || m1 == 11 ) && (d1 < 31 && d1 >0))) {
    cout<<"\n";
}
else if (( m1 == 1 || m1 == 3 || m1 == 5 || m1 == 7 || m1 == 8 || m1 == 10 || m1 == 12) && ( m2 == 1 || m2 == 3 || m2 == 5 || m2 == 7 || m2 == 8 || m2 == 10 || m2 == 12)) {
    cout<<" \n";
}
else if ( disekt(y1) == true && m1 == 2 && d1 > 29) {
    cout << "Invalid date\n";
    return 0;
}
else if ( disekt(y2) == true && m2 == 2 && d2 > 29) {
    cout << "Invalid date\n";
    return 0;
}
else if ( disekt(y2) == false && m2 == 2 && d2 > 28) {
    cout << "Invalid date\n";
    return 0;
}
else if ( disekt(y1) == false && m1 == 2 && d1 > 28) {
    cout << "Invalid date\n";
    return 0;
}
else { cout<<"Valid date\n"; 
}

if (y1 == y2 && m1<m2 && d1< 32 && d2 < 32 && d1 > 0 && d2  > 0) {
 switch (m1) {
    case 1: cout << abs(j -d1) <<" days remaining until "<< d2 <<" "<< m2 <<" "<< y2 ; break;
    case 2: cout << abs(j - d1 -31)<<" days remaining until "<< d2 <<" "<< m2 <<" "<< y2 ; break;
    case 3: 
        if ( disekt(y1) == true ) {
         cout << abs(j - d1 -59)<<" days remaining until "<< d2 <<" "<< m2 <<" "<< y2 ;;}
        else { cout << abs(j - d1 -58)<<" days remaining until "<< d2 <<" "<< m2 <<" "<< y2 ;}
      break;
    case 4: cout << abs(j - d1 -90)<<" days remaining until "<< d2 <<" "<< m2 <<" "<< y2 ; break;
    case 5: cout << abs(j - d1 -120)<<" days remaining until "<< d2 <<" "<< m2 <<" "<< y2 ; break;
    case 6: cout << abs(j - d1 -151)<<" days remaining until "<< d2 <<" "<< m2 <<" "<< y2 ; break;
    case 7: cout << abs(j - d1 -181)<<" days remaining until "<< d2 <<" "<< m2 <<" "<< y2 ; break;
    case 8: cout << abs(j - d1 -212)<<" days remaining until "<< d2 <<" "<< m2 <<" "<< y2 ; break;
    case 9: cout << abs(j - d1 -243)<<" days remaining until "<< d2 <<" "<< m2 <<" "<< y2 ; break;
    case 10: cout << abs(j - d1 -273)<<" days remaining until "<< d2 <<" "<< m2 <<" "<< y2 ; break;
    case 11: cout << abs(j - d1 -304)<<" days remaining until "<< d2 <<" "<< m2 <<" "<< y2 ; break;
    case 12: cout << abs(j - d1 -334)<<" days remaining until "<< d2 <<" "<< m2 <<" "<< y2 ; break;
    default : cout<< "error\n";
 }
 }
else if (y1 < y2 && d1< 32 && d2 < 32 && d1 > 0 && d2  > 0){
    for (int i = y1 +1 ; i < y2 -1; i++){
    if ( disekt(i) == true && y2 -y1 > 1){
        j = j+ 1;
    }
    else if ( y2-y1 ==1 ) {
        cout <<"No  year in between";
    }
     else    {cout <<" ";}
    }
  cout << "\n";
 switch(m1) {
    case 1: cout << abs(j -d1 +(y2 - y1)*365) <<" days remaining until "<< d2 <<" "<< m2 <<" "<< y2 ; break;
    case 2: cout << abs(j -d1 -31 +(y2 - y1)*365) <<" days remaining until "<< d2 <<" "<< m2 <<" "<< y2 ; break;
    case 3: cout << abs(j -d1 -59 +(y2 - y1)*365) <<" days remaining until "<< d2 <<" "<< m2 <<" "<< y2 ; break;
    case 4: cout << abs(j -d1 -90 +(y2 - y1)*365) <<" days remaining until "<< d2 <<" "<< m2 <<" "<< y2 ; break;
    case 5: cout << abs(j -d1 -120 +(y2 - y1)*365) <<" days remaining until "<< d2 <<" "<< m2 <<" "<< y2 ; break;
    case 6: cout << abs(j -d1 -151 +(y2 - y1)*365) <<" days remaining until "<< d2 <<" "<< m2 <<" "<< y2 ; break;
    case 7: cout << abs(j -d1 -181 +(y2 - y1)*365) <<" days remaining until "<< d2 <<" "<< m2 <<" "<< y2 ; break;
    case 8: cout << abs(j -d1 -212 +(y2 - y1)*365) <<" days remaining until "<< d2 <<" "<< m2 <<" "<< y2 ; break;
    case 9: cout << abs(j -d1 -243 +(y2 - y1)*365) <<" days remaining until "<< d2 <<" "<< m2 <<" "<< y2 ; break;
    case 10: cout << abs(j -d1 -273+(y2 - y1)*365) <<" days remaining until "<< d2 <<" "<< m2 <<" "<< y2 ; break;
    case 11: cout << abs(j -d1 -304 +(y2 - y1)*365) <<" days remaining until "<< d2 <<" "<< m2 <<" "<< y2 ; break;
    case 12: cout << abs(j -d1 -334 +(y2 - y1)*365) <<" days remaining until "<< d2 <<" "<< m2 <<" "<< y2 ; break;
    default : cout << "error\n";
 }
}
else if ( y1 == y2 && m1 == m2 && d1 == d2 ) {
    cout <<"today is the day";
}
else {
    cout <<"Whoa there time traveler!";
}
}
