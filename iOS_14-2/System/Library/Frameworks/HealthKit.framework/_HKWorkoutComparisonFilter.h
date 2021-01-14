/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/_HKComparisonFilter.h>

@interface _HKWorkoutComparisonFilter : _HKComparisonFilter
+(id)allowedDataTypeClassesForKeyPath:(id)arg1 ;
+(BOOL)areValidTypes:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3 ;
+(long long)enumRepresentationForKeyPath:(id)arg1 ;
+(BOOL)isValidValue:(id)arg1 forKeyPath:(id)arg2 operatorType:(unsigned long long)arg3 dataTypes:(id)arg4 error:(id*)arg5 ;
+(id)allowedValueClassesForKeyPath:(id)arg1 ;
+(BOOL)isAllowedPredicateOperatorType:(unsigned long long)arg1 forKeyPath:(id)arg2 ;
+(BOOL)isSupportedKeyPath:(id)arg1 ;
-(BOOL)_acceptsWorkoutWithDuration:(double)arg1 ;
-(BOOL)_acceptsWorkoutWithTotalDistance:(id)arg1 ;
-(BOOL)_acceptsWorkoutWithTotalEnergyBurned:(id)arg1 ;
-(BOOL)_acceptsWorkoutWithTotalFlightsClimbed:(id)arg1 ;
-(BOOL)_acceptsWorkoutWithTotalSwimmingStrokeCount:(id)arg1 ;
-(BOOL)_acceptsWorkoutWithGoal:(id)arg1 ;
-(BOOL)_acceptsWorkoutWithActivityType:(unsigned long long)arg1 ;
-(BOOL)_acceptsWorkoutWithGoalType:(unsigned long long)arg1 ;
-(BOOL)acceptsDataObject:(id)arg1 ;
@end

