/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/


@protocol MTToggleAlarmIntentHandling <NSObject>
@optional
-(void)confirmToggleAlarm:(id)arg1 completion:(/*^block*/id)arg2;
-(id)defaultAlarmForToggleAlarm:(id)arg1;
-(void)provideAlarmOptionsForToggleAlarm:(id)arg1 withCompletion:(/*^block*/id)arg2;

@required
-(void)handleToggleAlarm:(id)arg1 completion:(/*^block*/id)arg2;
-(void)resolveStateForToggleAlarm:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)resolveAlarmForToggleAlarm:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)provideAlarmOptionsCollectionForToggleAlarm:(id)arg1 withCompletion:(/*^block*/id)arg2;

@end

