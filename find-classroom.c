#include<stdio.h>
#include<string.h>
#define numberOfClassrooms 100
void main() {
	int i = 0;
	double[numberOfClassrooms] people;			//ÿ������������ͨ������ͷ�õ� 
	string[numberOfClassrooms] nameClass;		// ÿ���������ƣ����������Ƕ�Ӧ�ģ�һ������һ������������ 
	int[numberOfClassrooms] total;				//ÿ�����ҵ������� 
	
	//����������תΪ����������ռ����λ���ı��� 
	for(i=0;i<numberOfClassrooms;i++) {
		people[i] = people[i]/total[i];
	}
	
	//��������С������� 
	find-classroom(people,nameClass); 
}

//ÿ��������������������С����������� 
public void find-classroom(double[numberOfClassrooms] people,string[numberOfClassrooms] nameClass) {
	int i = 0,j = 0;
	double min;
	string str;
	
	//����������������С�������У�ͬʱ��������Ҳ��Ӧ�ı� 
	for(i = 0;i < numberOfClassrooms-1;i++) {
		for(j = 0;j < numberOfClassrooms-i-1;j++) {
			if(people[j] > people[j+1]) {
				min = people[j+1];
				people[j+1] = people[j];
				people[j] = min;
				strcpy(str,nameClass[j]);
				strcpy(nameClass[j+1],nameClass[j]);
				strcpy(nameClass[j],str);
			}
		}
	}
	
	//������� 
	printf("����\t����\n");
	for(i = 0;i<numberOfClassrooms;i++) {
		printf("%s\t%d\n",nameClass[i],people[i]);
	}
}
