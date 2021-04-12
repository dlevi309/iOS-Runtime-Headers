/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <MobileTimer/MTSleepSessionTracker.h>

@interface MTTimeInBedSessionTracker : MTSleepSessionTracker
+(BOOL)_trackingEnabledForSleepAlarm:(id)arg1 ;
+(BOOL)_shouldUseBedtimeDismissedDateForAlarm:(id)arg1 ;
-(void)endSessionWithDate:(id)arg1 reason:(unsigned long long)arg2 ;
-(id)processedSessionForSession:(id)arg1 ;
-(void)startSession;
-(id)_createSleepSessionWithUserWakeTime:(id)arg1 endReason:(unsigned long long)arg2 ;
-(void)sleepCoordinator:(id)arg1 sleepModeManuallyExited:(id)arg2 sleepAlarm:(id)arg3 ;
-(Class)sessionClass;
@end

