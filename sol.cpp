#include<iostream>
using namespace std;

class TOI
{
	private:
		float montoi =3;
		float tuetoi =3;
		float wedtoi =3;
		float thutoi =3;
		float fritoi =3 ;
		float sattoi =5;
		float suntoi =6;
		float totaltoi;
		
	public:
		float sum1()
		{
			totaltoi=montoi+tuetoi+wedtoi+thutoi+fritoi+sattoi+suntoi;
			return totaltoi;
		}
	
};

class hindu : public TOI
{
		private:
		float monh=2.5;
		float tueh=2.5;
		float wedh=2.5;
		float thuh =2.5;
		float frih =2.5 ;
		float sath =4;
		float sunh =4;
		float totalh;
		
	public:
		float sum2()
		{
			totalh=mon2+tue2+wed2+thu2+fri2+sat2+sun2;
			return totalh;
		}
};

class ET : public hindu
{
		private:
		float monet =4;
		float tueet =4;
		float wedet =4;
		float thuet =4;
		float friet =4 ;
		float satet =4;
		float sunet =10;
		float totalet;
		
	public:
		float sum3()
		{
			totalet=mon3+tue3+wed3+thu3+fri3+sat3+sun3;
			return totalet;
		}
};

class BM : public ET
{
		private:
		float bm =1.5;
		float tuebm =1.5;
		float wedbm =1.5;
		float thubm=1.5;
		float fribm=1.5;
		float satbm =1.5;
		float sunbm =1.5;
		float totalbm;
		
	public:
		float sum4()
		{
			totalbm=mon4+tue4+wed4+thu4+fri4+sat4+sun4;
			return totalbm;
		}
};

class HT : public BM
{
		private:
		float monht =2;
		float tueht=2;
		float wedht =2;
		float thuht =2;
		float friht=2;
		float satht =4;
		float sunht =4;
		float totalht;
		
	public:
		float sum5()
		{
			totalht=mon5+tue5+wed5+thu5+fri5+sat5+sun5;
			return totalht;
		}
};

int main()
{
 	HT h;
	float input,temp1,temp2;
	float arr[5];
	char str[5][10]={"TOI","hindu","ET","BM","HT"};
	cout<<"Enter your input:"
	cin>>input;
	
	arr[0]=h.sum1();
	arr[1]=h.sum2();
	arr[2]=h.sum3();
	arr[3]=h.sum4();
	arr[4]=h.sum5();

	
	for(int i=0;i<5;i++)
	{
		temp1=arr[i];
		for(int j=0;j<5;j++)
		{
			if(j==i)
				continue;
				
			temp2=arr[j];
			
			if((temp1+temp2)<=input)
			{
				cout<<str[i]<<"\t"<<str[j]<<endl;
			}
		}
	}
	return 0;
}