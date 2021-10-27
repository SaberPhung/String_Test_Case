#include <gtest/gtest.h>
#include "string.h"

TEST (Lencategory,test1)
{
	char string1[50]= "PhungNguyenQuynhGiao";
	int len;
	len=my_strlen(string1);
	EXPECT_EQ(20,len);
}

TEST (Lencategory,test2)
{
	char string2[50]=" ";
	int len;
	len=my_strlen(string2);
	EXPECT_NE(-1,len);
}
TEST (Lencategory,test3)
{
	char string3[50]="Phungnguyenquynhgiao";
	int len;
	len=my_strlen(string3);
	EXPECT_GT(21,len);
}
TEST (Uppercategory,test1)
{
	char string4[50]="phungnguyenquynhgiao";
	char *s=string4;
	char after[]="PHUNGNGUYENQUYNHGIAO";
	str2upper(s);
	EXPECT_STREQ(after,s);
}
TEST (Uppercategory,test2)
{
	char string5[50]="phungnguyen";
	char *s=string5;
	char after[]="PHUNGNGUYEN";
	str2upper(s);
	EXPECT_STREQ(after,s);
}
TEST (Uppercategory,test3)
{
	char string6[50]="phungnguyen123";
	char *s=string6;
	char after[]="PHUNGNGUYEN123";
	str2upper(s);
	EXPECT_STREQ(after,s);
}
TEST (Lowercategory,test1)
{
	char string7[50]="PHUNGNGUYENQUYNHGIAO";
	char *s=string7;
	char after[50]="phungnguyenquynhgiao";
	str2lower(string7);
	EXPECT_STREQ(after,s);
}
TEST (Lowercategory,test2)
{
	char string8[50]="PHUNGNGUYEN";
	char *s=string8;
	char after[50]="phungnguyen";
	str2lower(s);
	EXPECT_STREQ(after,s);
}
TEST (Lowercategory,test3)
{
	char string9[50]="PHUNGNGUYEN123";
	char *s=string9;
	char after[50]="phungnguyen123";
	str2lower(s);
	EXPECT_STREQ(after,s);
}

TEST (Stripnumber,test1)
{
	char string10[50]="G1122334455G";
	char *s=string10;
	char after[50]="GG";
	str_strip_numbers(s);
	EXPECT_STREQ(after,s);
}
TEST (Stripnumber, test2)
{
	char string11[50]="1122334455giao";
	char *s=string11;
	char after[50]="giao";
	str_strip_numbers(s);
	EXPECT_STREQ(after,s);
}
TEST (Stripnumber, test3)
{
	char string12[50]="1122334455Giao@!";
	char *s=string12;
	char after[50]="Giao@!";
	str_strip_numbers(s);
	EXPECT_STREQ(after,s);
}
TEST (Copystring, test1)
{
	char string13[50]="123";
	char *s=string13;
	char copy[50]="456giao";
	char *d=copy;
	mystrcpy(s,d);
	EXPECT_STREQ(s,d);
	EXPECT_STREQ(s,"123");
}
TEST (Copystring, test2)
{
	char string14[50]="0";
	char *s=string14;
	char copy[50]="123giao";
	char *d=copy;
	mystrcpy(s,d);
	EXPECT_STREQ(s,d);
	EXPECT_STREQ(s,"0");
}
TEST (Copystring, test3)
{
	char string15[50]="789";
	char *s=string15;
	char copy[50]="giao";
	char *d=copy;
	mystrcpy(s,d);
	EXPECT_STREQ(s,d);
	EXPECT_STREQ(s,"789");
}

TEST (CompareString, test1)
{
	char string16[50]="giao";
	char *s=string16;
	char compared[50]="giaO";
	char *d=compared;
	int placed;
	placed=mystrcmp(s,d);
	EXPECT_STRNE(s,d);
	EXPECT_EQ(32,placed);
}
TEST (CompareString, test2)
{
	char string17[50]="0Giao";
	char *s=string17;
	char compared[50]="0giao";
	char *d=compared;
	int n;
	n=mystrcmp(s,d);
	EXPECT_STRNE(s,d);
	EXPECT_EQ(-32,n);
}
TEST (CompareString, test3)
{
	char string18[50]="giao";
	char *s=string18;
	char compared[50]="giao";
	char *d=compared;
	int placed;
	placed=mystrcmp(s,d);
	EXPECT_STREQ(s,d);
	EXPECT_EQ(0,placed);
}
TEST (DupString, test1)
{
	char string19[50]="giao";
//	char target[50];
	char *s=string19;
	strdupl(s);
	EXPECT_STREQ(string19,s);
}
TEST (DupString,test2)
{
	char string20[50]="123";
//	char target[50];
	char *s=string20;
	strdupl(s);
	EXPECT_STREQ(string20,s);
}
TEST (DupString,test3)
{
	char string21[50]="giao123";
	char *s=string21;
	strdupl(s);
	EXPECT_STREQ(string21,s);
}


