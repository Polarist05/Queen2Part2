#include<stdio.h>
#include<math.h>
class Pos {
public:
	int x;
	int y;
};
int a;
int isEmpty(int i,int j,Pos pos[100]) {
	for (int k = 0; k < a; k++) {
		int disX, disY;
		disX = j - pos[k].x;
		disY = i - pos[k].y;
		if (disX == 0 || disY == 0 || abs(disX) == abs(disY)) 
			return 0;
	}
	return 1;
}
int main() {
	int b;
	Pos pos[100];
	scanf_s("%d",&a);
	for (int i = 0; i < a; i++) {
		scanf_s("%d%d",&pos[i].y, &pos[i].x);
		pos[i].y--; pos[i].x--;
	}
	int ans = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			ans += isEmpty(i,j,pos);
		}
	}
	printf("%d",ans);
}