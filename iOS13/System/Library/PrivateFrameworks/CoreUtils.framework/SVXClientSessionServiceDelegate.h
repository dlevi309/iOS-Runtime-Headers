/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


@protocol SVXClientSessionServiceDelegate <NSObject>
@optional
-(void)sessionServiceDidResignActive:(id)arg1;

@required
-(void)sessionService:(id)arg1 willChangeStateFrom:(long long)arg2 to:(long long)arg3;
-(void)sessionService:(id)arg1 didChangeStateFrom:(long long)arg2 to:(long long)arg3;
-(void)sessionService:(id)arg1 willPresentFeedbackWithDialogIdentifier:(id)arg2;
-(void)sessionService:(id)arg1 willStartSoundWithID:(long long)arg2;
-(void)sessionService:(id)arg1 didStartSoundWithID:(long long)arg2;
-(void)sessionService:(id)arg1 didStopSoundWithID:(long long)arg2 error:(id)arg3;
-(void)sessionService:(id)arg1 willBecomeActiveWithActivationContext:(id)arg2;
-(void)sessionService:(id)arg1 didBecomeActiveWithActivationContext:(id)arg2;
-(void)sessionService:(id)arg1 willResignActiveWithOptions:(unsigned long long)arg2 duration:(double)arg3;
-(void)sessionService:(id)arg1 didResignActiveWithDeactivationContext:(id)arg2;

@end

