/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthHearingDaemon.framework/HealthHearingDaemon
*/


@class HDProfile, HAENotificationCenter;

@interface HDHeadphoneExposureNotificationCenter : NSObject {

	HDProfile* _profile;
	HAENotificationCenter* _notificationCenter;

}
-(id)postSevenDayDoseNotification:(id)arg1 nowDate:(id)arg2 analyticsInfo:(id)arg3 error:(id*)arg4 ;
-(id)initWithProfile:(id)arg1 ;
-(void)_reportHeadphoneNotificationWithNowDate:(id)arg1 eventDuration:(double)arg2 exposureLevel:(double)arg3 exposureDuration:(double)arg4 hasPrunableData:(BOOL)arg5 isDeviceLocked:(BOOL)arg6 analyticsInfo:(id)arg7 ;
@end

