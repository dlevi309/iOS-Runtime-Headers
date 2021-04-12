/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBSwitcherContentViewControllerDataSource <NSObject>
@optional
-(id)appLayoutForWorkspaceTransientOverlay:(id)arg1;
-(id)switcherContentController:(id)arg1 hiddenAppLayoutsForBundleIdentifier:(id)arg2;
-(BOOL)switcherContentController:(id)arg1 isAppLayoutHigherPriorityInTetheredSwitcher:(id)arg2;
-(id)mainSwitcherWindow;
-(CGRect*)frameForInlineAppExposeItemAspectFill:(BOOL)arg1;
-(id)viewControllerForTransientOverlayAppLayout:(id)arg1;
-(long long)homeScreenInterfaceOrientation;
-(id)createWorkspaceTransientOverlayForAppLayout:(id)arg1;
-(BOOL)isInAppStatusBarRequestedHiddenForSwitcherContentController:(id)arg1;
-(BOOL)switcherContentControllerReloadsSnapshotsForActiveInterfaceOrientationChange:(id)arg1;
-(CGRect*)frameForItemWithRole:(long long)arg1 inMainAppLayout:(id)arg2 interfaceOrientation:(long long)arg3;
-(CGRect*)frameForFloatingAppLayoutInInterfaceOrientation:(long long)arg1 floatingConfiguration:(long long)arg2;
-(long long)backdropInterfaceStyleForContentController:(id)arg1;
-(id)activeTransientOverlayPresentedAppLayoutForSwitcherContentController:(id)arg1;
-(BOOL)switcherContentController:(id)arg1 shouldMorphToPiPForTransitionContext:(id)arg2;
-(id)iconViewForIconIdentifier:(id)arg1;

@required
-(long long)shadowStyleForSwitcherContentController:(id)arg1;
-(long long)sbActiveInterfaceOrientation;
-(id)appLayoutsForSwitcherContentController:(id)arg1;
-(id)switcherContentController:(id)arg1 transitionEventForLayoutState:(id)arg2 identifier:(id)arg3 phase:(unsigned long long)arg4 animated:(BOOL)arg5;
-(id)switcherContentController:(id)arg1 transitionEventForContext:(id)arg2 identifier:(id)arg3 phase:(unsigned long long)arg4 animated:(BOOL)arg5;
-(long long)switcherInterfaceOrientationForContentController:(id)arg1;

@end

