/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/


@protocol MTCreateAlarmIntentHandling <NSObject>
@optional
-(void)confirmMTCreateAlarm:(id)arg1 completion:(/*^block*/id)arg2;
-(id)defaultRepeatScheduleForMTCreateAlarm:(id)arg1;
-(void)provideRepeatScheduleOptionsForMTCreateAlarm:(id)arg1 withCompletion:(/*^block*/id)arg2;

@required
-(void)handleMTCreateAlarm:(id)arg1 completion:(/*^block*/id)arg2;
-(void)resolveLabelForMTCreateAlarm:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)resolveDateComponentsForMTCreateAlarm:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)resolveRepeatScheduleForMTCreateAlarm:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)provideRepeatScheduleOptionsCollectionForMTCreateAlarm:(id)arg1 withCompletion:(/*^block*/id)arg2;

@end

