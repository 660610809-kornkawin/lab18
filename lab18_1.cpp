#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect R1, Rect R2){
	double doty;
	double dotx;
	double overlapArea;
	int overlapArea2;
	if(R2.y > R1.y){
		doty = R2.y - R1.y;
	}else{
		doty = R1.y - R2.y;
	}
	if(R2.x > R1.x){
		dotx = R2.x - R1.x;
	}else{
		dotx = R1.x - R2.x;
	}
	overlapArea = (R1.w-dotx) * (R2.h-doty);
	if(R2.x > R1.x){
		if(R1.x + R1.w < R2.x){
			overlapArea = 0;
		}
	}else{
		if(R2.x + R2.w < R1.x){
			overlapArea = 0;
		}
	}
if(overlapArea < overlapArea+1){
		overlapArea += 0.9;
		overlapArea2 = overlapArea;
		}
	return overlapArea2;
}
