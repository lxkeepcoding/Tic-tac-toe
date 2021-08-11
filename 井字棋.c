

//#include<stdio.h>
//int main()
//{
//	char arr[3][3];
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			scanf(" %c", &arr[i][j]);
//		}
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		if (arr[i][0] == arr[i][1] && arr[i][0] == arr[i][2])
//		{
//			if (arr[i][0] == 'K')
//			{
//				printf("KiKi wins!");
//				return 0;
//			}
//			else if (arr[i][0] == 'B')
//			{
//				printf("BoBo wins!");
//				return 0;
//			}
//		}
//	}
//	for (int j = 0; j < 3; j++)
//	{
//		if (arr[0][j] == arr[1][j] && arr[0][j] == arr[2][j])
//		{
//			if (arr[0][j] == 'K')
//			{
//				printf("KiKi wins!");
//				return 0;
//			}
//			else if (arr[0][j] == 'B')
//			{
//				printf("BoBo wins!");
//				return 0;
//			}
//		}
//	}
//	if (arr[0][0] == arr[1][1] && arr[0][0] == arr[2][2])
//	{
//		if (arr[0][0] == 'K')
//		{
//			printf("KiKi wins!");
//			return 0;
//		}
//		else if (arr[0][0] == 'B')
//		{
//			printf("BoBo wins!");
//			return 0;
//		}
//	}
//	if (arr[0][2] == arr[1][1] && arr[0][2] == arr[2][0])
//	{
//		if (arr[0][2] == 'K')
//		{
//			printf("KiKi wins!");
//			return 0;
//		}
//		else if (arr[0][2] == 'B')
//		{
//			printf("BoBo wins!");
//			return 0;
//		}
//	}
//	printf("No winner!");
//
//}
//



//#include <iostream>
//using namespace std;
//int main(){
//	char chess[3][3];
//	bool k = false, b = false;
//	int prok[2] = { -1, -1 }, prob[2] = { -1, -1 }, rk = 0, ck = 0, rb = 0, cb = 0;
//	for (int i = 0; i<3; i++)
{
//		cin >> chess[i][0] >> chess[i][1] >> chess[i][2];
//	}
//
//	for (int row = 0; row<3; row++){
//		for (int col = 0; col<3; col++){
//			if (chess[row][col] == 'K'){
//				if (prok[0] == -1){
//					prok[0] = row;
//					prok[1] = col;
//				}
//				else{
//					rk = row - prok[0];
//					ck = col - prok[1];
//					if (chess[row + rk][col + ck] == 'K') { k = true; break; }
//				}
//			}
//			else if (chess[row][col] == 'B'){
//				if (prob[0] == -1){
//					prob[0] = row;
//					prob[1] = col;
//				}
//				else {
//					rb = row - prob[0];
//					cb = col - prob[1];
//					if (chess[row + rb][col + cb] == 'B') { b = true; break; }
//				}
//			}
//		}
//	}
//
//	if (k) cout << "KiKi wins!" << endl;
//	else if (b) cout << "BoBo wins!" << endl;
//	else cout << "No winner!" << endl;
//	return 0;
//}




`