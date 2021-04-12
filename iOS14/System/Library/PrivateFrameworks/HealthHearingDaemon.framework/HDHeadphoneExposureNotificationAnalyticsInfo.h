/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthHearingDaemon.framework/HealthHearingDaemon
*/


@class NSDate;

@interface HDHeadphoneExposureNotificationAnalyticsInfo : NSObject {

	NSDate* _lastLockDate;
	NSDate* _lastNotificationDate;

}
-(id)initWithLastLockDate:(id)arg1 lastNotificationDate:(id)arg2 ;
-(id)boundedIntegerForMinutesSinceLastUnlockWithNowDate:(id)arg1 ;
-(id)boundedIntegerForTimeSinceLastNotificationWithNowDate:(id)arg1 ;
@end

