/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBFloatingDockViewControllerDelegate <NSObject>
@required
-(void)floatingDockViewController:(id)arg1 didChangeContentHeight:(double)arg2;
-(void)floatingDockViewController:(id)arg1 didChangeContentFrame:(CGRect)arg2;
-(BOOL)isFloatingDockViewControllerPresentedOverTransitioningContent:(id)arg1;
-(void)floatingDockViewController:(id)arg1 willUseAnimator:(id)arg2 forTransitioningWithFolder:(id)arg3 presenting:(BOOL)arg4;
-(void)floatingDockViewController:(id)arg1 willPerformTransitionWithFolder:(id)arg2 presenting:(BOOL)arg3 withTransitionCoordinator:(id)arg4;
-(double)minimumHomeScreenScaleForFloatingDockViewController:(id)arg1;
-(void)floatingDockViewController:(id)arg1 wantsToBePresented:(BOOL)arg2;

@end

