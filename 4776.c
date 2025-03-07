
int countways(int coins[],int n,int sum){
	int dp[sum+i];
	for(int i=0;i<=sum;i++)
	
	dp[i]=0;
	dp[0]=1;

	for(int i=0;i<n;i++){
		for(int j=coins[i];j<=sum;j++){
			dp[j]+=dp[j-coins[i]];
		}
	}
	return dp[sum];
}
int main(){
	int n,sum;
	printf("enter the number of coins: ");
	scanf("%d",&n);
	int coins[n];
	printf("enter the denominations of code: ");
	for(int i=0;i<n;i++){
		scanf("%d",&coins[i]);
	}
	printf("enter the sum values: ");
	scanf("%d",&sum);
	int result=countways(coins,,sum);
	printf("number of ways to make sum %d: "sum,result);
	return 0;
}
