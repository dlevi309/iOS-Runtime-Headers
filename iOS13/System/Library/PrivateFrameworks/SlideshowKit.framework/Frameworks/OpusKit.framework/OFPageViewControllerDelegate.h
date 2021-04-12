/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/


@protocol OFPageViewControllerDelegate <NSObject>
@optional
-(void)pageViewController:(id)arg1 willStartTransitioningToViewController:(id)arg2 fromViewController:(id)arg3 withDirection:(long long)arg4;
-(void)pageViewController:(id)arg1 didStartTransitioningToViewController:(id)arg2 fromViewController:(id)arg3;
-(void)pageViewController:(id)arg1 willFinishTransitioningToViewController:(id)arg2 fromViewController:(id)arg3 transitionWillComplete:(BOOL)arg4;
-(void)pageViewController:(id)arg1 didFinishTransitioningToViewController:(id)arg2 fromViewController:(id)arg3 transitionCompleted:(BOOL)arg4;
-(void)pageViewController:(id)arg1 willStartBouncingWithDirection:(long long)arg2;
-(void)pageViewControllerDidFinishBouncing:(id)arg1;
-(BOOL)pageViewController:(id)arg1 canAutomaticallyHandleGestureRecognizer:(id)arg2;
-(void)pageViewController:(id)arg1 didUpdateTransitioningToViewController:(id)arg2 fromViewController:(id)arg3 withProgress:(double)arg4 andVelocity:(double)arg5;

@end

