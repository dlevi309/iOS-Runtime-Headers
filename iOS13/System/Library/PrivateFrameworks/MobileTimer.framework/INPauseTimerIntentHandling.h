/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

