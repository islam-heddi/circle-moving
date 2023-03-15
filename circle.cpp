#include <stdio.h>
#include <graphics.h>

void ball(int,int);
void introduction();
void start();

int main(){
	introduction();
	return 0;
}

void introduction(){
	int n;
	printf("welcome to circle game by islam version\n");
	printf("1.start\n");
	printf("0.exit\n");
	printf("type the number of choice : \n");
	scanf("%d", &n);	
	if(n){
		start();
	}else{
		printf("thanks any way\n");
		system("pause");
	}
}

void ball(int x,int y){
	int i=0;
	setcolor(YELLOW);
	for(i=0;i<20;i++)
		circle(100+x,200+y,i);
}

void start(){
	int c=1;
	int x1=0,y1=0;
	initwindow(640,480,"ball islam version");
	while(c){
		line(630,470,630,1);
		line(10,470,10,1);
		delay(50);
		cleardevice();
		ball(x1,y1);
		if(GetAsyncKeyState(VK_RIGHT)){
			x1+=10;
		}else  if (GetAsyncKeyState(VK_LEFT)){
			x1-=10;
		}else  if (GetAsyncKeyState(VK_UP)){
			y1-=10;
		}else  if (GetAsyncKeyState(VK_DOWN)){
			y1+=10;
		}
		if(x1==640||y1==480){
			return;
		}
	}	
}

