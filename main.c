#include <stdio.h>
#include <stdlib.h>

struct student{

	int ID;
	char name[20];
	float grade;
};


int main(void) {

	struct student s1 = {1711181, "Seobin", 4.3};

	s1.ID = 1234567;
	s1.name[20] = "Juyeop";
	s1.grade = 4.2;

	printf("ID : %d/", s1.ID);
	printf("name : %s", s1.name);
	printf("grade : %f/n" s1.grade);
	
	return 0;
}

