/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/


@protocol SBRootFolderViewDelegate <SBFolderViewDelegate>
@optional
-(void)rootFolderView:(id)arg1 wantsToAdjustTodayContentForEdgeBounceForScrollOffset:(CGPoint)arg2;
-(double)distanceToTopOfSpotlightIconsForRootFolderView:(id)arg1;
-(double)maxExternalDockHeightForRootFolderView:(id)arg1;
-(double)externalDockHeightForRootFolderView:(id)arg1;
-(double)preferredExternalDockVerticalMarginForRootFolderView:(id)arg1;
-(id)backgroundViewForDockForRootFolderView:(id)arg1;
-(id)backgroundViewForEditingDoneButtonForRootFolderView:(id)arg1;
-(void)rootFolderView:(id)arg1 didChangeSidebarVisibilityProgress:(double)arg2;
-(void)rootFolderView:(id)arg1 didChangeEffectiveSidebarVisibilityProgress:(double)arg2;
-(void)rootFolderView:(id)arg1 didOverscrollOnFirstPageByAmount:(double)arg2;
-(void)rootFolderView:(id)arg1 didEndOverscrollOnFirstPageWithVelocity:(double)arg2;

@end

