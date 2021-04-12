/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/


@protocol SBRootFolderControllerDelegate <SBFolderControllerDelegate>
@optional
-(BOOL)rootFolderControllerCanUseSeparateWindowForRotation:(id)arg1;
-(void)rootFolderController:(id)arg1 statusBarInsetsDidChange:(UIEdgeInsets)arg2;
-(void)rootFolderController:(id)arg1 wantsToAdjustTodayContentForEdgeBounceForScrollOffset:(CGPoint)arg2;
-(double)distanceToTopOfSpotlightIconsForRootFolderController:(id)arg1;
-(double)maxExternalDockHeightForRootFolderController:(id)arg1;
-(double)externalDockHeightForRootFolderController:(id)arg1;
-(double)preferredExternalDockVerticalMarginForRootFolderController:(id)arg1;
-(id)backgroundViewForDockForRootFolderController:(id)arg1;
-(id)backgroundViewForEditingDoneButtonForRootFolderController:(id)arg1;
-(void)rootFolderController:(id)arg1 didChangeSidebarVisibilityProgress:(double)arg2;
-(void)rootFolderController:(id)arg1 didChangeEffectiveSidebarVisibilityProgress:(double)arg2;
-(void)rootFolderController:(id)arg1 didOverscrollOnFirstPageByAmount:(double)arg2;
-(void)rootFolderController:(id)arg1 didEndOverscrollOnFirstPageWithVelocity:(double)arg2;
-(void)rootFolderController:(id)arg1 willUsePropertyAnimator:(id)arg2 toTransitionToState:(long long)arg3;
-(void)rootFolderController:(id)arg1 willUseTransitionContext:(id)arg2 toTransitionToState:(long long)arg3;
-(id)externalDockIconListViewForRootFolderController:(id)arg1;

@end

