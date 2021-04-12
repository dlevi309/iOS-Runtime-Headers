/*
* Generated on Monday, March 1, 2021 at 2:33:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
@interface ATXAnchorModelEventFeaturizer : NSObject
+(void)setLocationAndLocationTypeOnDate:(id)arg1 anchorMetadata:(id)arg2 ;
+(void)setMonthAndDayOfMonthFromDate:(id)arg1 anchorMetadata:(id)arg2 ;
+(void)setHourofDayAndDayOfWeekFromDate:(id)arg1 anchorMetadata:(id)arg2 ;
+(unsigned long long)getMinTemporalDistanceFromAnchorDate:(id)arg1 toTimeRange:(NSRange)arg2 ;
+(id)locationOfInterestForAnchorOccurrenceDate:(id)arg1 ;
-(id)featurizeAnchorEvent:(id)arg1 anchor:(id)arg2 ;
-(id)historyForAppLaunchDuetEvent:(id)arg1 ;
-(id)featurizeAppLaunchEvent:(id)arg1 anchorOccurrenceDate:(id)arg2 ;
-(id)featurizeActionEvent:(id)arg1 anchorOccurrenceDate:(id)arg2 ;
-(id)featurizeAppLaunchForActionEvent:(id)arg1 anchorOccurrenceDate:(id)arg2 ;
-(id)featurizeActionKeyForActionEvent:(id)arg1 ;
-(id)featurizeActionUUIDForActionEvent:(id)arg1 ;
@end

