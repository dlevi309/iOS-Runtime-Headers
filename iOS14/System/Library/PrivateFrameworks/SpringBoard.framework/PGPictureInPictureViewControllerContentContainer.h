/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol PGPictureInPictureViewControllerContentContainer <NSObject>
@optional
-(void)performRotateAnimationWithRotation:(long long)arg1 completionHandler:(/*^block*/id)arg2;
-(void)prepareStopAnimationWithCompletionHandler:(/*^block*/id)arg1;
-(void)playbackSourceDidUpdateIsRoutingVideoToHostedWindow:(BOOL)arg1;
-(void)acquireInterfaceOrientationLock;
-(void)relinquishInterfaceOrientationLock;
-(BOOL)handleTapWhileStashedGesture;
-(BOOL)handleDoubleTapGesture;

@required
-(void)prepareStartAnimationWithInitialInterfaceOrientation:(long long)arg1 initialLayerFrame:(CGRect)arg2 completionHandler:(/*^block*/id)arg3;
-(void)preferredContentSizeDidChangeForPictureInPictureViewController;
-(void)performStartAnimationWithCompletionHandler:(/*^block*/id)arg1;
-(void)performStopAnimationWithFinalInterfaceOrientation:(long long)arg1 finalLayerFrame:(CGRect)arg2 completionHandler:(/*^block*/id)arg3;

@end

