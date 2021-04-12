/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBFloatingDockViewControllerDelegate <NSObject>
@required
-(void)floatingDockViewController:(id)arg1 didChangeContentHeight:(double)arg2;
-(BOOL)isFloatingDockViewControllerPresentedOverTransitioningContent:(id)arg1;
-(void)floatingDockViewController:(id)arg1 willUseAnimator:(id)arg2 forTransitioningWithFolder:(id)arg3 presenting:(BOOL)arg4;
-(void)floatingDockViewController:(id)arg1 willPerformTransitionWithFolder:(id)arg2 presenting:(BOOL)arg3 withTransitionCoordinator:(id)arg4;
-(double)statusBarHeightForFloatingDockViewController:(id)arg1;
-(double)minimumHomeScreenScaleForFloatingDockViewController:(id)arg1;
-(void)floatingDockViewController:(id)arg1 wantsToBePresented:(BOOL)arg2;

@end

