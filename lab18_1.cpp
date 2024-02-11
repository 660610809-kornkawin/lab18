#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect R1, Rect R2){
	double dotx,doty;
	double overlapArea;
	if(R2.y > R1.y && R2.x > R1.x){
		dotx = R2.x - R1.x;
		doty = R2.y - R1.y;
	}else{
		dotx = R1.x - R2.x;
		doty = R1.y - R2.y;
	}
	overlapArea = (R1.w-dotx) * (R2.h-doty);
	if(R2.x > R1.x){
		if(R1.x + R1.w < R2.x){
			overlapArea = 0;
		}
	}
	if(R2.x > R1.x){
		if(R1.x + R1.w > R2.x + R2.w){
			overlapArea = R2.w * R2.h;
		}
	}
	return overlapArea;
}
