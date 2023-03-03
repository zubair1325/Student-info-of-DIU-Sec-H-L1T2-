#include<stdio.h>
#include<string.h>
struct student {
char name[100];
int roll;
float cgpa;

};
void info(struct student s1);
int avg(struct student a1);

int main(){


    printf("Student Information\n");
    printf("DIU Department of CSE Section (H) Batch 63 [(L1T1) result included]\n");
    printf("\n\n\n\n");


struct student s1={"Md. Mahbub Alam Akash",5101006,3.12 };
info(s1);
struct student s2={"MD. AL-AMIN HOSSAIN",5101084,1.94 };
info(s2);
struct student s3={"Md Arafat Islam",5101113,0 };
info(s3);
struct student s4={"Fazlay Rabbi Munna",5101149,1.96 };
info(s4);
struct student s5={"HASAN SARKAR",1257,3.73 };
info(s5);
struct student s6={"Md. Sourov Hossen",5101263,3.55 };
info(s6);
struct student s7={"Samia Akter",5101282,2.61 };
info(s7);
struct student s8={"Tasnim Farhan Fahim",5101291,3.15 };
info(s8);
struct student s9={"Md. Ashraf Jahan khan",5101292,2.64 };
info(s9);
struct student s10={"Golam Sattar Tanzil",5101293,2.00 };
info(s10);
struct student s11={"MD. RIHAB KHAN",5101294,2.88 };
info(s11);
struct student s12={"Omar Faruk Rupok",5101296,3.18 };
info(s12);
struct student s13={"Md. Tamim Hossen",5101297,1.69 };
info(s13);
struct student s14={"Md. Shamiul Alam",5101299,3.36 };
info(s14);
struct student s15={"Taslima Tasbir",5101300,3.12};
info(s15);
struct student s16={"Fatematuj Jobeda",5101301,3.00 };
info(s16);
struct student s17={"Md. Mahedi Hasan",5101302,2.32 };
info(s17);
struct student s18={"Redoy",5101303,0 };
info(s18);
struct student s19={"ABU TALHA",5101304,0 };
info(s19);
struct student s20={"Sadia Akther",5101305,0.42};
info(s20);
struct student s21={"Md Refat Hossain",5101306,1.46 };
info(s21);
struct student s22={"Rahma Ahmed Tonni",5101307,2.52 };
info(s22);
struct student s23={"KHATUN E JANNAT",5101308,2.77 };
info(s23);
struct student s24={"MD. KAWSAR",5101309,2.92 };
info(s24);
struct student s25={"Arafat Rahman Shihab",5101310,3.14 };
info(s25);
struct student s26={"Fiza Afroj",5101311,3.29 };
info(s26);
struct student s27={"SOHAG",5101312,1.08 };
info(s27);
struct student s28={"Md. Mahfuj Hasan Mithun",5101313,1.07 };
info(s28);
struct student s29={"Md. Tamim Ahmed",5101314,0 };
info(s29);
struct student s30={"Shohidul Islam",5101315,3.65 };
info(s30);
struct student s31={"TANIM AHMED SAJOL",5101316,2.55};
info(s31);
struct student s32={"Ashraful Alam Chowdhury",5101317,3.68 };
info(s32);
struct student s33={"Rakibul Hasan",5101319,1.55 };
info(s33);
struct student s34={"Mahadi Hasan Rakib",5101321,2.68 };
info(s34);
struct student s35={"MOHAMMAD NASIR UDDIN",5101323,0.29 };
info(s35);
struct student s36={"Mst. Fatema Falguny",5101324,1.45 };
info(s36);
struct student s37={"Md. Zubair Rahman",5101325,3.19 };
info(s37);
struct student s38={"Md. Jubayer Hossain",5101326,2.07 };
info(s38);
struct student s39={"Rafia Anjum",5101327,2.49 };
info(s39);
struct student s40={"Md. Rejuyan Ali",5101328,0};
info(s40);
struct student s41={"Md. Ashik Ahmed",5101329,2.60 };
info(s41);
struct student s42={"Mohammed Saiful Islam",5101330,2.76 };
info(s42);
struct student s43={"Sourav rahman Akash",5101333,1.82 };
info(s43);
struct student s44={"MAHMUDUL HASAN",5101339,2.42 };
info(s44);
struct student s45={"Fatema Hoque",5101343,2.65};
info(s45);
struct student s46={"MD. YOUSUF ALI",5101348,2.61 };
info(s46);
struct student s47={"Md. Mahfuz Ahmed Mim",5101361,3.27 };
info(s47);
struct student s48={"Tonima Khan Mim",5101365,3.33 };
info(s48);
struct student s49={"MD. SHALIMUR RAHMAN SHISIR",221155044,0 };
printf("Student Name = %s\nStudent Roll = %d\nStudent CGPA of L1T1 = %.2f\n\n\n",s49.name,s49.roll,s49.cgpa);


int count;
printf("%d\n",count);

return 0;

}

void info(struct student s1){
    int a=24222000;
printf("Student Name = %s\n",s1.name);
printf("Student ID = %d%d\n",a,s1.roll);
printf("Student CGPA of L1T1 = %.2f\n",s1.cgpa);
printf("\n\n\n");


}

int avg(struct student a1){
    int count =0;
for(int i=0;i<50;i++){
    count=count+a1.cgpa;
}
return count;
}
