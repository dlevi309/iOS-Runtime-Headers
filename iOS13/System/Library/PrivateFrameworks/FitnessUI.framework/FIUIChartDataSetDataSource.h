/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
*/


@protocol FIUIChartDataSetDataSource <NSObject>
@optional
-(id)labelsForSet:(id)arg1;

@required
-(unsigned long long)numberOfDataPointsForDataSet:(id)arg1;
-(id)dataSet:(id)arg1 chartPointForIndex:(unsigned long long)arg2;

@end

