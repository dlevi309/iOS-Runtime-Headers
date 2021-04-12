/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
*/

#import <FitnessUI/FIUIWorkoutSummaryRowOption.h>

@class NSArray;

@interface FIUIWorkoutSummaryCompoundOption : FIUIWorkoutSummaryRowOption {

	unsigned long long _compoundPredicateType;
	NSArray* _subOptions;

}
-(BOOL)evaluateWithWorkout:(id)arg1 supportedMetrics:(id)arg2 ;
-(id)initWithRowType:(unsigned long long)arg1 compoundPredicateType:(unsigned long long)arg2 subOptions:(id)arg3 ;
@end

