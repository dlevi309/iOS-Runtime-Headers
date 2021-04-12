/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
*/

#import <FitnessUI/FIUIWorkoutSummaryRowOption.h>

@interface FIUIWorkoutSummaryMetricOption : FIUIWorkoutSummaryRowOption {

	unsigned long long _metricType;

}

@property (nonatomic,readonly) unsigned long long metricType;              //@synthesize metricType=_metricType - In the implementation block
-(unsigned long long)metricType;
-(BOOL)evaluateWithWorkout:(id)arg1 supportedMetrics:(id)arg2 ;
-(id)initWithRowType:(unsigned long long)arg1 metricType:(unsigned long long)arg2 condition:(/*^block*/id)arg3 ;
@end

