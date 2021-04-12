/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol BNPresentingDelegate <NSObject>
@optional
-(void)presenter:(id)arg1 willPresentPresentable:(id)arg2 withTransitionCoordinator:(id)arg3 userInfo:(id)arg4;
-(void)presenter:(id)arg1 willDismissPresentable:(id)arg2 withTransitionCoordinator:(id)arg3 userInfo:(id)arg4;
-(id)panGestureRecognizerForPresenter:(id)arg1;
-(CGPoint*)presenter:(id)arg1 gestureRecognizer:(id)arg2 translationInView:(id)arg3;
-(CGPoint*)presenter:(id)arg1 gestureRecognizer:(id)arg2 velocityInView:(id)arg3;
-(void)presenter:(id)arg1 willTransitionToSize:(CGSize)arg2 withTransitionCoordinator:(id)arg3;
-(CGPoint*)presenter:(id)arg1 gestureRecognizer:(id)arg2 locationForEvent:(id)arg3 inView:(id)arg4;
-(CGPoint*)presenter:(id)arg1 gestureRecognizer:(id)arg2 locationForTouch:(id)arg3 inView:(id)arg4;
-(id)defaultTransitioningDelegateForPresenter:(id)arg1;

@required
-(void)presenterRelinquishesVisibility:(id)arg1;
-(void)presenterRequestsVisibility:(id)arg1;

@end

