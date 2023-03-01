#include<stdio.h>
#include<conio.h>
#include<math.h>

struct DuongTron{
	float x,y,r;
};

typedef struct DuongTron DT;

void nhapTamDuongTron(DT &);
void xuatTamDuongTron(DT);
float chuVi(DT);
float dienTich(DT);
void xuatKetQua(DT);

void nhapTamDuongTron(DT &dt){
	printf("nhap x ");
	scanf("%f",&dt.x);
	printf("nhap y ");
	scanf("%f",&dt.y);
	do{
		printf("nhap ban kinh r ");
		scanf("%f",&dt.r);
		if(dt.r<=0)
			printf("\mnhap ban kinh r >0\m");
	}while(dt.r <=0);
}

void xuatTamDuongTron(DT dt){
	printf("I ((%.2f,%.2f)%.2f)",dt.x,dt.y,dt.r);
}

float chuVi(DT dt){
	return (2*3.14*dt.r);
}

float dienTich(DT dt){
	return (3.14*pow(dt.r,2));
}

void xuatKetQua(DT dt){
	printf("\nchu vi = %.2f\ndien tich = %.2f",chuVi(dt),dienTich(dt));
}
int main(){
	DT dt;
	nhapTamDuongTron(dt);
	xuatTamDuongTron(dt);
	xuatKetQua(dt);
	getch();
	return 0;
}
