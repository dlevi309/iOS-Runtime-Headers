/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/


@protocol SBFolderPresentingViewControllerDelegate <NSObject>
@optional
-(id)folderPresentationController:(id)arg1 animationControllerForTransitionWithFolder:(id)arg2 presenting:(BOOL)arg3 animated:(BOOL)arg4;
-(id)folderPresentationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
-(void)folderPresentationController:(id)arg1 willPerformTransitionWithFolder:(id)arg2 presenting:(BOOL)arg3 withTransitionCoordinator:(id)arg4;
-(double)statusBarHeightForFolderPresentationController:(id)arg1;
-(double)minimumHomeScreenScaleForFolderPresentationController:(id)arg1;
-(id)folderPresentationController:(id)arg1 sourceViewForPresentingViewController:(id)arg2;

@end

