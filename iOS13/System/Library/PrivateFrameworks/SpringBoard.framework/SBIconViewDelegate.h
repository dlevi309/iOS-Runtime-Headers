/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBIconViewDelegate <NSObject>
@optional
-(double)scale;
-(BOOL)iconView:(id)arg1 editingModeGestureRecognizerDidFire:(id)arg2;
-(BOOL)iconView:(id)arg1 shouldContinueToUseBackgroundViewForComponents:(id)arg2;
-(double)additionalDragLiftScaleForIconView:(id)arg1;
-(BOOL)iconViewShouldBeginShortcutsPresentation:(id)arg1;
-(id)containerViewForPresentingContextMenuForIconView:(id)arg1;
-(void)iconView:(id)arg1 willUseContextMenuStyle:(id)arg2;
-(void)iconViewShortcutsPresentationDidFinish:(id)arg1;
-(id)applicationBundleURLForShortcutsWithIconView:(id)arg1;
-(id)applicationShortcutWidgetBundleIdentifierForShortcutsWithIconView:(id)arg1;
-(BOOL)iconView:(id)arg1 shouldActivateApplicationShortcutItem:(id)arg2 atIndex:(unsigned long long)arg3;
-(id)iconView:(id)arg1 applicationShortcutItemsWithProposedItems:(id)arg2;
-(void)iconView:(id)arg1 willRemoveIconLabelAccessoryView:(id)arg2;
-(id)iconView:(id)arg1 iconLabelAccessoryViewOfType:(long long)arg2;
-(void)iconView:(id)arg1 willRemoveIconImageView:(id)arg2;
-(id)imageViewForIconView:(id)arg1;
-(BOOL)iconViewDisplaysBadges:(id)arg1;
-(id)iconView:(id)arg1 parallaxSettingsForIconAccessoryView:(id)arg2;
-(id)iconView:(id)arg1 iconAccessoryViewOfClass:(Class)arg2;
-(void)iconView:(id)arg1 willRemoveIconAccessoryView:(id)arg2;
-(BOOL)icon:(id)arg1 canReceiveGrabbedIcon:(id)arg2;
-(id)accessibilityTintColorForIconView:(id)arg1;
-(long long)iconView:(id)arg1 draggingStartLocationWithProposedStartLocation:(long long)arg2;
-(id)launchActionsForIconView:(id)arg1;
-(id)launchURLForIconView:(id)arg1;
-(id)iconView:(id)arg1 dragPreviewForItem:(id)arg2 session:(id)arg3 previewParameters:(id)arg4;
-(BOOL)iconViewCanBeginDrags:(id)arg1;
-(void)iconView:(id)arg1 willAnimateDragLiftWithAnimator:(id)arg2 session:(id)arg3;
-(void)iconView:(id)arg1 dragLiftAnimationDidChangeDirection:(long long)arg2;
-(BOOL)iconView:(id)arg1 canAddDragItemsToSession:(id)arg2;
-(void)iconView:(id)arg1 willAddDragItems:(id)arg2 toSession:(id)arg3;
-(void)iconViewWillBeginDrag:(id)arg1 session:(id)arg2;
-(void)iconView:(id)arg1 session:(id)arg2 willEndWithOperation:(unsigned long long)arg3;
-(void)iconView:(id)arg1 didEndDragSession:(id)arg2 withOperation:(unsigned long long)arg3;
-(id)iconViewWillCancelDrag:(id)arg1;
-(void)iconView:(id)arg1 willUsePreviewForCancelling:(id)arg2 targetIconView:(id)arg3;
-(void)iconView:(id)arg1 item:(id)arg2 willAnimateDragCancelWithAnimator:(id)arg3;
-(void)iconTouchBegan:(id)arg1;
-(void)icon:(id)arg1 touchMoved:(id)arg2;
-(void)iconTapped:(id)arg1;
-(BOOL)iconShouldAllowTap:(id)arg1;
-(BOOL)iconShouldAllowCloseBoxTap:(id)arg1;
-(id)backgroundViewForComponentsOfIconView:(id)arg1;
-(BOOL)iconViewDisplaysCloseBox:(id)arg1;
-(long long)closeBoxTypeForIconView:(id)arg1;
-(void)iconCloseBoxTapped:(id)arg1;
-(void)icon:(id)arg1 touchEnded:(BOOL)arg2;
-(void)iconViewWasRecycled:(id)arg1;
-(id)iconView:(id)arg1 labelImageWithParameters:(id)arg2;
-(void)icon:(id)arg1 openFolder:(id)arg2 animated:(BOOL)arg3;
-(void)iconViewShortcutsPresentationDidCancel:(id)arg1;
-(id)customPresentingContainerViewForShortcutsPresentationWithIconView:(id)arg1;

@end

