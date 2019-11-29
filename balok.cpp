#include<iostream>
using namespace std;
int main(){
	int panjang=4;
	int lebar=3;
	int tinggi=10;
	int volume=panjang*lebar*tinggi;
	if(volume<=100){
	cout<<"balok kecil";
    }else if(volume>=100&volume<=200){
    cout<<"balok sedang";
    }else{
    cout<<"balok besar";}
    cout<<"\n";
    cout<<volume<<"cm3";
}
