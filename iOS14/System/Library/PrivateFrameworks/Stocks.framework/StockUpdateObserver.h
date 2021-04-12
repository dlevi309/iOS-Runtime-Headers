/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
*/


@protocol StockUpdateObserver <NSObject>
@optional
-(void)stockUpdateManager:(id)arg1 didUpdateStocks:(id)arg2 updates:(long long)arg3;
-(void)stockUpdateManager:(id)arg1 didRequestUpdateForStocks:(id)arg2 updates:(long long)arg3;
-(void)stockUpdateManager:(id)arg1 failedToUpdateStocks:(id)arg2 updates:(long long)arg3 error:(id)arg4;

@end

