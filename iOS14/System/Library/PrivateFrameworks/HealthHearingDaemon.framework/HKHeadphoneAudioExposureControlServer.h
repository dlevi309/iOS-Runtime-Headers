/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthHearingDaemon.framework/HealthHearingDaemon
*/


@protocol HKHeadphoneAudioExposureControlServer <NSObject>
@required
-(void)remote_rebuildWithCompletion:(/*^block*/id)arg1;
-(void)remote_fetchInfoWithCompletion:(/*^block*/id)arg1;
-(void)remote_insertQuantityWithExposure:(double)arg1 duration:(double)arg2 startDate:(id)arg3 includesNotificationSample:(BOOL)arg4 synced:(BOOL)arg5 completion:(/*^block*/id)arg6;
-(void)remote_fetchDoseLimitWithCompletion:(/*^block*/id)arg1;
-(void)remote_overrideDoseLimit:(id)arg1 completion:(/*^block*/id)arg2;

@end

