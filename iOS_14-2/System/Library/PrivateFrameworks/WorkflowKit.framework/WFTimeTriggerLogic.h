/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@interface WFTimeTriggerLogic : NSObject
+(id)nextFireDateFromNowWithTrigger:(id)arg1 currentSunriseTime:(id)arg2 currentSunsetTime:(id)arg3 ;
+(id)nextFireDateForTrigger:(id)arg1 currentDate:(id)arg2 currentSunriseTime:(id)arg3 currentSunsetTime:(id)arg4 ;
+(long long)nextWeekdayFromDaysOfWeek:(id)arg1 timeComponents:(id)arg2 currentDate:(id)arg3 calendar:(id)arg4 ;
+(id)adjustedTime:(id)arg1 byOffset:(unsigned long long)arg2 ;
-(id)nextFireDateForTrigger:(id)arg1 ;
@end

