/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/


@protocol INResetTimerIntentHandling <NSObject>
@optional
-(void)confirmResetTimer:(id)arg1 completion:(/*^block*/id)arg2;
-(void)resolveTargetTimerForResetTimer:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)resolveResetMultipleForResetTimer:(id)arg1 withCompletion:(/*^block*/id)arg2;

@required
-(void)handleResetTimer:(id)arg1 completion:(/*^block*/id)arg2;

@end

