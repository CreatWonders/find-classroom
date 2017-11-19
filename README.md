# find-classroom

#include<stdio.h>

#include<string.h>

#define numberOfClassrooms 100

void main() {
	int i = 0;
	double[numberOfClassrooms] people;			//每个教室内人数通过摄像头得到 
	string[numberOfClassrooms] nameClass;		// 每个教室名称（两个数组是对应的，一个教室一个人数比例） 
	int[numberOfClassrooms] total;				//每个教室的总人数 
	
	//将教室人数转为教室内人数占总座位数的比例 
	for(i=0;i<numberOfClassrooms;i++) {
		people[i] = people[i]/total[i];
	}
	
	//按比例从小到大输出 
	find-classroom(people,nameClass); 
}

//每个教室内人数比例按从小到大排序并输出 
public void find-classroom(double[numberOfClassrooms] people,string[numberOfClassrooms] nameClass) {
	int i = 0,j = 0;
	double min;
	string str;
	
	//将教室人数比例从小到大排列，同时教室名字也相应改变 
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
	
	//进行输出 
	printf("教室\t人数\n");
	for(i = 0;i<numberOfClassrooms;i++) {
		printf("%s\t%d\n",nameClass[i],people[i]);
	}
}
