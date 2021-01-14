/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
*/


@protocol StockChartViewDelegate <NSObject>
@optional
-(void)stockChartViewFinishedInitialLoad:(id)arg1;

@required
-(void)stockChartView:(id)arg1 chartIntervalDidChange:(long long)arg2;
-(BOOL)stockChartViewIsCurrentChartView:(id)arg1;
-(void)stockChartViewNeedsLoadingStatusUpdated:(id)arg1;

@end

