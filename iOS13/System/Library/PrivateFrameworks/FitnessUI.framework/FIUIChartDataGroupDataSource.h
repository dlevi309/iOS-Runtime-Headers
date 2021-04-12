/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
*/


@protocol FIUIChartDataGroupDataSource <NSObject>
@optional
-(id)dataGroup:(id)arg1 dataPointsForSetAtIndex:(unsigned long long)arg2;
-(id)dataGroup:(id)arg1 labelsForSetAtIndex:(unsigned long long)arg2;

@required
-(unsigned long long)numberOfDataSetsInGroup:(id)arg1;
-(unsigned long long)dataGroup:(id)arg1 numberOfPointsInSetAtIndex:(unsigned long long)arg2;
-(id)dataGroup:(id)arg1 pointForSetAtIndex:(unsigned long long)arg2 pointIndex:(unsigned long long)arg3;

@end

