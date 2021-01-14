/*
* Generated on Thursday, January 14, 2021 at 2:22:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
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

