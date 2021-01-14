/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/


@protocol INPauseTimerIntentHandling <NSObject>
@optional
-(void)confirmPauseTimer:(id)arg1 completion:(/*^block*/id)arg2;
-(void)resolveTargetTimerForPauseTimer:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)resolvePauseMultipleForPauseTimer:(id)arg1 withCompletion:(/*^block*/id)arg2;

@required
-(void)handlePauseTimer:(id)arg1 completion:(/*^block*/id)arg2;

@end

