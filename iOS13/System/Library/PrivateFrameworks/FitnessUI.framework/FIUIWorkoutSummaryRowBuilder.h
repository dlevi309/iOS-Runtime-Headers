/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
*/


@class NSArray;

@interface FIUIWorkoutSummaryRowBuilder : NSObject {

	NSArray* _rowTypesForTableRowIndex;
	unsigned long long _lastMetricRowType;

}

@property (nonatomic,readonly) long long numberOfRows; 
-(long long)numberOfRows;
-(id)_generateRowsWithWorkout:(id)arg1 supportedMetrics:(id)arg2 buttonBehavior:(unsigned long long)arg3 ;
-(id)initWithWorkout:(id)arg1 supportedMetrics:(id)arg2 buttonBehavior:(unsigned long long)arg3 ;
-(unsigned long long)indexForRowOfType:(unsigned long long)arg1 ;
-(unsigned long long)rowTypeForTableRowIndex:(long long)arg1 ;
@end

