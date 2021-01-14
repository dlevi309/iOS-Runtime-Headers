/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBPIPContainerViewControllerObserver <NSObject>
@optional
-(void)containerViewControllerStartReducingResourcesUsage:(id)arg1;
-(void)containerViewControllerStopReducingResourcesUsage:(id)arg1;
-(void)containerViewController:(id)arg1 userDidUpdateStashState:(BOOL)arg2;
-(void)containerViewControllerUserMayUpdateStashState:(id)arg1;
-(void)containerViewController:(id)arg1 didFinishStartAnimationWithInitialInterfaceOrientation:(long long)arg2;
-(void)containerViewControllerAcquireInterfaceOrientationLock:(id)arg1;
-(void)containerViewControllerRelinquishInterfaceOrientationLock:(id)arg1;
-(void)containerViewControllerRequiredInterfaceOrientationWillChange:(id)arg1;
-(void)containerViewControllerRequiredInterfaceOrientationDidChange:(id)arg1;

@end

