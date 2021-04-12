/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
*/


@protocol StockUpdateObserver <NSObject>
@optional
-(void)stockUpdateManager:(id)arg1 didUpdateStocks:(id)arg2 updates:(long long)arg3;
-(void)stockUpdateManager:(id)arg1 didRequestUpdateForStocks:(id)arg2 updates:(long long)arg3;
-(void)stockUpdateManager:(id)arg1 failedToUpdateStocks:(id)arg2 updates:(long long)arg3 error:(id)arg4;

@end

