/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/


@protocol INDeleteTimerIntentHandling <NSObject>
@optional
-(void)confirmDeleteTimer:(id)arg1 completion:(/*^block*/id)arg2;
-(void)resolveTargetTimerForDeleteTimer:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)resolveDeleteMultipleForDeleteTimer:(id)arg1 withCompletion:(/*^block*/id)arg2;

@required
-(void)handleDeleteTimer:(id)arg1 completion:(/*^block*/id)arg2;

@end

