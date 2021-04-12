/*
* Generated on Monday, March 1, 2021 at 2:33:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
@interface ATXMagicalMomentsContexts : NSObject
+(id)getCurrentLOI;
+(unsigned long long)minDistanceFromDate:(id)arg1 toDateRange:(NSRange)arg2 ;
+(unsigned long long)getMinTemporalDistanceFromDate:(id)arg1 toVisitsToLOI:(id)arg2 ;
+(id)locationOfInterestForDate:(id)arg1 dateIntervalForSearch:(id)arg2 ;
+(id)timeOfDayPredicatesWithRequestedDurationInHours:(unsigned long long)arg1 shouldPredicateOnStartDate:(BOOL)arg2 ;
+(id)partOfWeekPredicatesUsingStartDate:(BOOL)arg1 ;
+(id)eventIdentifierPredicateForValue:(id)arg1 ;
+(id)loiPredicateForUUIDString:(id)arg1 ;
@end

