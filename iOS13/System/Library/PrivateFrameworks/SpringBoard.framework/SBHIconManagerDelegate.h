/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBHIconManagerDelegate <NSObject>
@optional
-(id)windowForIconDragPreviewsForIconManager:(id)arg1;
-(BOOL)iconManagerCanBeginIconDrags:(id)arg1;
-(void)iconManager:(id)arg1 willBeginIconDragWithUniqueIdentifier:(id)arg2 numberOfDraggedItems:(unsigned long long)arg3;
-(void)iconManager:(id)arg1 didAddItemsToIconDragWithUniqueIdentifier:(id)arg2 numberOfDraggedItems:(unsigned long long)arg3;
-(void)iconManager:(id)arg1 didEndIconDragWithUniqueIdentifier:(id)arg2 numberOfDraggedItems:(unsigned long long)arg3;
-(id)iconManager:(id)arg1 dragPreviewForIconView:(id)arg2 dragPreviewForItem:(id)arg3 session:(id)arg4 previewParameters:(id)arg5;
-(void)iconManager:(id)arg1 iconDropSessionDidEnter:(id)arg2;
-(long long)interfaceOrientationForIconManager:(id)arg1;
-(unsigned long long)allowedInterfaceOrientationsForIconManager:(id)arg1;
-(void)iconManager:(id)arg1 willDestroyRootFolderController:(id)arg2;
-(void)iconManager:(id)arg1 willDestroyRootViewController:(id)arg2;
-(void)iconManager:(id)arg1 didCreateRootViewController:(id)arg2;
-(void)iconManager:(id)arg1 willUseRootFolderControllerConfiguration:(id)arg2;
-(void)iconManager:(id)arg1 didCreateRootFolderController:(id)arg2;
-(BOOL)isFloatingDockVisibleForIconManager:(id)arg1;
-(void)iconManagerEditingDidChange:(id)arg1;
-(BOOL)isEditingAllowedForIconManager:(id)arg1;
-(void)iconManagerDidFinishInstallForIcon:(id)arg1;
-(void)iconManager:(id)arg1 willUseIconImageCache:(id)arg2;
-(BOOL)isRootFolderContentVisibleForIconManager:(id)arg1;
-(BOOL)isIconContentPossiblyVisibleOverApplicationForIconManager:(id)arg1;
-(id)viewControllerForPresentingViewControllersForIconManager:(id)arg1;
-(id)iconManager:(id)arg1 accessibilityTintColorForScreenRect:(CGRect)arg2;
-(void)iconManagerIconDraggingDidChange:(id)arg1;
-(void)iconManagerFolderAnimatingDidChange:(id)arg1;
-(unsigned long long)maximumListCountForFoldersForIconManager:(id)arg1;
-(id)localizedDefaultFolderNameForIconManager:(id)arg1;
-(id)iconManager:(id)arg1 localizedFolderNameForDefaultDisplayName:(id)arg2;
-(void)iconManager:(id)arg1 willOpenFolder:(id)arg2;
-(void)iconManager:(id)arg1 didOpenFolder:(id)arg2;
-(void)iconManager:(id)arg1 willCloseFolder:(id)arg2;
-(void)iconManager:(id)arg1 didCloseFolder:(id)arg2;
-(void)iconManager:(id)arg1 possibleUserIconTapBegan:(id)arg2;
-(void)iconManager:(id)arg1 possibleUserIconTapBeganAfterInformingIcon:(id)arg2;
-(void)iconManager:(id)arg1 touchesEndedForIconView:(id)arg2;
-(id)iconManager:(id)arg1 reasonToDisallowTapOnIconView:(id)arg2;
-(id)iconManager:(id)arg1 reasonToDisallowInteractionOnIconView:(id)arg2;
-(void)iconManager:(id)arg1 willPrepareIconViewForLaunch:(id)arg2;
-(void)iconManager:(id)arg1 launchIconForIconView:(id)arg2;
-(void)iconManager:(id)arg1 didReceiveTapOnLaunchDisabledIconView:(id)arg2;
-(void)iconManager:(id)arg1 iconCloseBoxTapped:(id)arg2;
-(void)iconManager:(id)arg1 wantsUninstallForIcon:(id)arg2 location:(id)arg3;
-(BOOL)iconManager:(id)arg1 iconViewDisplaysCloseBox:(id)arg2;
-(BOOL)iconManager:(id)arg1 canBeginDragForIconView:(id)arg2;
-(long long)iconManager:(id)arg1 draggingStartLocationForIconView:(id)arg2 proposedStartLocation:(long long)arg3;
-(id)iconManager:(id)arg1 launchActionsForIconView:(id)arg2;
-(id)iconManager:(id)arg1 launchURLForIconView:(id)arg2;
-(id)iconManager:(id)arg1 containerViewForPresentingContextMenuForIconView:(id)arg2;
-(void)iconManager:(id)arg1 iconView:(id)arg2 willUseContextMenuStyle:(id)arg3;
-(double)iconManager:(id)arg1 additionalDragLiftScaleForIconView:(id)arg2;
-(long long)iconManager:(id)arg1 closeBoxTypeForIconView:(id)arg2 proposedType:(long long)arg3;
-(BOOL)iconManager:(id)arg1 allowsBadgingForIcon:(id)arg2;
-(id)iconManager:(id)arg1 backgroundViewForComponentsOfIconView:(id)arg2;
-(BOOL)iconManager:(id)arg1 shouldContinueToUseBackgroundView:(id)arg2 forComponentsOfIconView:(id)arg3;
-(id)iconManager:(id)arg1 accessibilityTintColorForIconView:(id)arg2;
-(id)iconManager:(id)arg1 applicationShortcutItemsForIconView:(id)arg2;
-(id)iconManager:(id)arg1 applicationBundleURLForShortcutsWithIconView:(id)arg2;
-(id)iconManager:(id)arg1 applicationShortcutWidgetBundleIdentifierForShortcutsWithIconView:(id)arg2;
-(BOOL)iconManager:(id)arg1 shouldActivateApplicationShortcutItem:(id)arg2 atIndex:(unsigned long long)arg3 forIconView:(id)arg4;
-(id)recycledViewsContainerProviderForIconManager:(id)arg1;
-(void)iconManager:(id)arg1 configureIconView:(id)arg2 forIcon:(id)arg3;
-(Class)iconManager:(id)arg1 folderControllerClassForFolderClass:(Class)arg2 proposedClass:(Class)arg3;
-(BOOL)iconManager:(id)arg1 folderController:(id)arg2 canChangeCurrentPageIndexToIndex:(long long)arg3;
-(void)iconManager:(id)arg1 folderControllerWillBeginScrolling:(id)arg2;
-(void)iconManager:(id)arg1 folderControllerDidEndScrolling:(id)arg2;
-(double)iconManager:(id)arg1 minimumHomeScreenScaleForFolderController:(id)arg2;
-(void)iconManager:(id)arg1 didSpringLoadIconView:(id)arg2;
-(UIEdgeInsets*)iconManager:(id)arg1 contentOverlayInsetsFromParentIfAvailableForFolderController:(id)arg2;
-(void)iconManager:(id)arg1 willOpenFolderController:(id)arg2;
-(void)iconManager:(id)arg1 willCloseFolderController:(id)arg2;
-(id)iconManager:(id)arg1 wantsToHideStatusBarForFolderController:(id)arg2;
-(id)iconManager:(id)arg1 fakeStatusBarForFolderController:(id)arg2;
-(id)iconManager:(id)arg1 statusBarStyleRequestForFolderController:(id)arg2;
-(void)iconManager:(id)arg1 willRemoveFakeStatusBar:(id)arg2 forFolderController:(id)arg3;
-(UIEdgeInsets*)iconManager:(id)arg1 statusBarEdgeInsetsForFolderController:(id)arg2;
-(void)iconManager:(id)arg1 wantsToAdjustTodayContentForEdgeBounceForScrollOffset:(CGPoint)arg2;
-(double)distanceToTopOfSpotlightIconsForIconManager:(id)arg1;
-(id)iconManager:(id)arg1 backgroundViewForDockForRootFolderController:(id)arg2;
-(id)iconManager:(id)arg1 backgroundViewForEditingDoneButtonForRootFolderController:(id)arg2;
-(BOOL)iconManagerCanUseSeparateWindowForRotation:(id)arg1;
-(void)iconManager:(id)arg1 statusBarInsetsDidChange:(UIEdgeInsets)arg2;
-(void)iconManager:(id)arg1 rootFolderController:(id)arg2 willUseTransitionContext:(id)arg3 toTransitionToState:(long long)arg4;
-(void)iconManager:(id)arg1 rootFolderController:(id)arg2 willUsePropertyAnimator:(id)arg3 toTransitionToState:(long long)arg4;
-(void)iconManager:(id)arg1 rootFolderController:(id)arg2 didChangeSidebarVisibilityProgress:(double)arg3;
-(void)iconManager:(id)arg1 rootFolderController:(id)arg2 didChangeEffectiveSidebarVisibilityProgress:(double)arg3;
-(void)iconManager:(id)arg1 rootFolderController:(id)arg2 didOverscrollOnFirstPageByAmount:(double)arg3;
-(void)iconManager:(id)arg1 rootFolderController:(id)arg2 didEndOverscrollOnFirstPageWithVelocity:(double)arg3;
-(void)iconManager:(id)arg1 nestingViewController:(id)arg2 willPerformOperation:(long long)arg3 onViewController:(id)arg4 withTransitionCoordinator:(id)arg5;
-(id)iconManager:(id)arg1 animator:(id)arg2 animationSettingsForOperation:(unsigned long long)arg3 childViewController:(id)arg4;
-(BOOL)iconManagerCanSaveIconState:(id)arg1;
-(void)iconManagerDidSaveIconState:(id)arg1;
-(id)defaultIconStateForIconManager:(id)arg1;
-(id)firstPageLeafIdentifiersForIconManager:(id)arg1;
-(BOOL)iconManager:(id)arg1 shouldAvoidPlacingIconOnFirstPage:(id)arg2;
-(void)iconManagerDidNoteIconStateChangedExternally:(id)arg1;
-(id)additionalIconModelForIconManager:(id)arg1;
-(id)iconManager:(id)arg1 popoverContentViewControllerForIcon:(id)arg2;
-(id)containerViewControllerForPopOversForIconManager:(id)arg1;
-(id)iconManager:(id)arg1 defaultAutomaticFavoriteIconIdentifiersWithMaximumCount:(unsigned long long)arg2;

@end

