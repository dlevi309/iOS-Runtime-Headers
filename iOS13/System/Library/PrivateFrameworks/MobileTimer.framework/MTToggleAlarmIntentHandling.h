/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/


@protocol MTToggleAlarmIntentHandling <NSObject>
@optional
-(void)confirmToggleAlarm:(id)arg1 completion:(/*^block*/id)arg2;
-(id)defaultAlarmForToggleAlarm:(id)arg1;

@required
-(void)handleToggleAlarm:(id)arg1 completion:(/*^block*/id)arg2;
-(void)resolveOperationForToggleAlarm:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)resolveStateForToggleAlarm:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)resolveAlarmForToggleAlarm:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)provideAlarmOptionsForToggleAlarm:(id)arg1 withCompletion:(/*^block*/id)arg2;

@end

