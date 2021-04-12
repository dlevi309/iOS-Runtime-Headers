/*
* Generated on Monday, March 1, 2021 at 2:30:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UIPanelControllerDelegate <NSObject>
@optional
-(Class)viewClassForPanelController:(id)arg1;
-(id)primaryViewControllerForCollapsingPanelController:(id)arg1;
-(BOOL)panelController:(id)arg1 collapseOntoPrimaryViewController:(id)arg2;
-(void)panelController:(id)arg1 collapsePrimaryViewController:(id)arg2 withFallbackSecondaryViewController:(id)arg3 transitionCoordinator:(id)arg4;
-(id)primaryViewControllerForExpandingPanelController:(id)arg1;
-(id)panelController:(id)arg1 separateSecondaryViewControllerFromPrimaryViewController:(id)arg2;
-(/*^block*/id)panelControllerWillUpdate:(id)arg1;
-(void)panelController:(id)arg1 willChangeToState:(id)arg2;
-(void)panelController:(id)arg1 didChangeToState:(id)arg2 withSize:(CGSize)arg3;
-(void)panelController:(id)arg1 willBeginAnimatedTransitionToStateRequest:(id)arg2 predictedEndState:(id)arg3 predictedDuration:(double)arg4;
-(void)panelController:(id)arg1 animateTransitionToStateRequest:(id)arg2 predictedEndState:(id)arg3 predictedDuration:(double)arg4;
-(void)panelController:(id)arg1 didEndAnimatedTransitionToStateRequest:(id)arg2;
-(void)panelController:(id)arg1 adjustLeadingViewController:(id)arg2 forKeyboardInfo:(id)arg3;
-(void)panelController:(id)arg1 adjustTrailingViewController:(id)arg2 forKeyboardInfo:(id)arg3;

@end

