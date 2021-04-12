/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
*/


@interface FIUIWorkoutSummaryRowOption : NSObject {

	unsigned long long _rowType;
	/*^block*/id _condition;

}

@property (nonatomic,readonly) unsigned long long rowType;              //@synthesize rowType=_rowType - In the implementation block
@property (nonatomic,readonly) id condition;                            //@synthesize condition=_condition - In the implementation block
-(id)condition;
-(unsigned long long)rowType;
-(id)initWithRowType:(unsigned long long)arg1 condition:(/*^block*/id)arg2 ;
-(BOOL)evaluateWithWorkout:(id)arg1 supportedMetrics:(id)arg2 ;
@end

