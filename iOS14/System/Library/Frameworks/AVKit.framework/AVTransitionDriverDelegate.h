/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/


@protocol AVTransitionDriverDelegate <NSObject>
@required
-(BOOL)transitionDriver:(id)arg1 gestureRecognizer:(id)arg2 shouldReceiveTouch:(id)arg3;
-(BOOL)transitionDriver:(id)arg1 shouldDriveTransitionInteractionOfType:(long long)arg2;
-(void)transitionDriver:(id)arg1 didBeginTrackingTransitionInteraction:(long long)arg2 readyToProceedHandler:(/*^block*/id)arg3;
-(void)transitionDriverDidContinueInteraction:(id)arg1;
-(void)transitionDriverDidCancelInteraction:(id)arg1;
-(void)transitionDriverDidFinishInteraction:(id)arg1;

@end

