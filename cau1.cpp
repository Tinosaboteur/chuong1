#include<stdio.h>
#include<conio.h>

struct DiemOxy{
	float x,y;
};

typedef struct DiemOxy DIEM;

void nhapDiem(DIEM &);
void xuatDiem(DIEM);

void nhapDiem(DIEM &d){
	printf("nhap diem x0 = ");
	scanf("%f",&d.x);
	printf("nhap diem y0 = ");
	scanf("%f",&d.y);
}

void xuatDiem(DIEM d){
	printf("M(%.2f,%.2f)",d.x,d.y);
}

int main(){
	DIEM d;
	nhapDiem(d);
	xuatDiem(d);
	getch();
	return 0;
}
