//#include<iostream>
//using namespace std;
//int main()
//{
//	int n, i, j, temp=0;
//	do
//	{
//		cin >> n;
//	} while (n<2 || n>30);
//	int **man = new int*[n];
//	int **woman = new int*[n];
//	for (i = 0; i<n; i++)
//	{
//		man[i] = new int[n];
//	};
//	for (i = 0; i<n; i++)
//	{
//		for (j = 0; j<n; j++)
//		{
//			cin >> man[i][j];
//		}
//	}
//	for (i = 0; i<n; i++)
//	{
//		woman[i] = new int[n];
//	}
//	for (i = 0; i<n; i++)
//	{
//		for (j = 0; j<n; j++)
//		{
//			cin >> woman[i][j];
//		}
//	}
//	int**flag = new int*[n];
//	for (i = 0; i<n; i++)
//	{
//		flag[i] = new int[2];
//	};
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < 2; j++)
//		{
//			flag[i][j] = 0;
//		}
//	}
//	for (i = 0; i<n; i++)
//	{
//		for (j = 0; j<n; j++)
//		{
//			int k = man[i][j]-1;
//			if (flag[k][0] == 0)    //如果K女士是自由的，直接匹配
//			{
//				flag[k][0] = 1;
//				flag[k][1] = i + 1;
//				break;
//			}
//			else                 //如果K女士已进入中间状态
//			{
//				for (int t = 0; t<n; t++)
//				{
//					
//					if(woman[k][t] == flag[k][1]&& woman[k][t] == i+1)
//					{
//						temp = 0;
//						break;
//					}
//					else if (woman[k][t] == flag[k][1])  //率先找到现任，则i男士找下一个女士
//					{
//						temp = n + 1;
//						break;
//					}
//					else if (woman[k][t] == i+1)//率先找到i男士，则K女士与i男士匹配，temp（现任）重新找
//					{
//						temp = flag[k][1];
//						flag[k][1] = i + 1;
//						i = temp - 2;
//						break;
//					}
//					else
//					{
//						continue;
//					}
//				}
//				if (temp!=n+1)
//					break;
//				else
//					continue;
//			}
//		}
//	}
//	for (i = 0; i<n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (flag[j][1] == i + 1)
//				cout << j + 1<<" ";
//		}
//	}
//	system("pause");
//	return 0;
//}