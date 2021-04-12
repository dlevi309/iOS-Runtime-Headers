/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol PGPictureInPictureViewControllerContentContainer <NSObject>
@optional
-(void)performRotateAnimationWithRotation:(long long)arg1 completionHandler:(/*^block*/id)arg2;
-(void)prepareStopAnimationWithCompletionHandler:(/*^block*/id)arg1;
-(void)acquireInterfaceOrientationLock;
-(void)relinquishInterfaceOrientationLock;
-(BOOL)handleTapGesture;
-(BOOL)handleDoubleTapGesture;

@required
-(void)prepareStartAnimationWithInitialInterfaceOrientation:(long long)arg1 initialLayerFrame:(CGRect)arg2 completionHandler:(/*^block*/id)arg3;
-(void)preferredContentSizeDidChangeForPictureInPictureViewController;
-(void)performStartAnimationWithAnimationHandler:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)performStopAnimationWithFinalInterfaceOrientation:(long long)arg1 finalLayerFrame:(CGRect)arg2 animationHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4;

@end

