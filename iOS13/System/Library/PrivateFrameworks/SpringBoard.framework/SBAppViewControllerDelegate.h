/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBAppViewControllerDelegate <NSObject>
@optional
-(BOOL)appViewController:(id)arg1 shouldTransitionToMode:(long long)arg2;
-(void)appViewController:(id)arg1 didTransitionFromMode:(long long)arg2 toMode:(long long)arg3;
-(void)appViewControllerWillActivateApplication:(id)arg1;
-(void)appViewControllerDidDeactivateApplication:(id)arg1;
-(void)appViewControllerDidBecomeReady:(id)arg1;
-(BOOL)appViewControllerShouldBackgroundApplicationOnDeactivate:(id)arg1;

@end

