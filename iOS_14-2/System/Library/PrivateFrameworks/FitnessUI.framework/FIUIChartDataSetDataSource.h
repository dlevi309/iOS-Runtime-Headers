/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
*/


@protocol FIUIChartDataSetDataSource <NSObject>
@optional
-(id)labelsForSet:(id)arg1;

@required
-(unsigned long long)numberOfDataPointsForDataSet:(id)arg1;
-(id)dataSet:(id)arg1 chartPointForIndex:(unsigned long long)arg2;

@end

