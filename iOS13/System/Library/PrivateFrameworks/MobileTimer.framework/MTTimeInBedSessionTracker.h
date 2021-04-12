/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <MobileTimer/MTBedtimeSessionTracker.h>

@interface MTTimeInBedSessionTracker : MTBedtimeSessionTracker
+(BOOL)_trackingEnabledForSleepAlarm:(id)arg1 ;
+(BOOL)_shouldUseBedtimeDismissedDateForAlarm:(id)arg1 ;
-(void)startSession;
-(void)sleepCoordinator:(id)arg1 bedtimeDNDManuallyExited:(id)arg2 sleepAlarm:(id)arg3 ;
-(void)endSessionWithDate:(id)arg1 reason:(unsigned long long)arg2 ;
-(Class)sessionClass;
-(id)processedSessionForSession:(id)arg1 ;
-(id)_createBedtimeSessionWithUserWakeTime:(id)arg1 endReason:(unsigned long long)arg2 ;
@end

