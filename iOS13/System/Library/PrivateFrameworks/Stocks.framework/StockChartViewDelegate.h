/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

