#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i=0;
	for (i=0;i<n;i++){
		char s[20];
		scanf("%s",s);
		int m=strlen(s);
		int q=0,w=0,e=0,r=0;
		int j;
		for(j=0;j<m;j++){
			switch(s[j]){
				case '(': q++;continue;
				case ')': w++;continue;
				case '[': e++;continue;
				case ']': r++;
			}
			if (w>q||r>e) break;
		}
		if (w==q&&e==r) printf("yes\n");
		else printf("no\n");
		}
	return 0;	
}

