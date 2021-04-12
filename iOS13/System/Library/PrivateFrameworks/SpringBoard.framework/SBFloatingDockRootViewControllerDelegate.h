/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBFloatingDockRootViewControllerDelegate <NSObject>
@optional
-(void)floatingDockRootViewController:(id)arg1 modifyProgress:(double)arg2 interactive:(BOOL)arg3 completion:(/*^block*/id)arg4;
-(BOOL)floatingDockRootViewControllerShouldHandlePanGestureRecognizer:(id)arg1;
-(void)floatingDockRootViewController:(id)arg1 willPerformTransitionWithFolder:(id)arg2 presenting:(BOOL)arg3 withTransitionCoordinator:(id)arg4;
-(void)floatingDockRootViewControllerDidEndPresentationTransition:(id)arg1;
-(double)minimumHomeScreenScaleForFloatingDockRootViewController:(id)arg1;

@required
-(void)floatingDockRootViewController:(id)arg1 willChangeToHeight:(double)arg2;
-(void)floatingDockRootViewController:(id)arg1 floatingDockWantsToBePresented:(BOOL)arg2;

@end

