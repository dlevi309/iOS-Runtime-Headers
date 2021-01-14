/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBSwitcherContentViewControllerDataSource <NSObject>
@optional
-(id)switcherContentController:(id)arg1 hiddenAppLayoutsForBundleIdentifier:(id)arg2;
-(CGRect*)frameForInlineAppExposeItemAspectFill:(BOOL)arg1;
-(BOOL)switcherContentController:(id)arg1 shouldMorphFromPiPForTransitionContext:(id)arg2;
-(BOOL)switcherContentController:(id)arg1 supportsKillingOfAppLayout:(id)arg2;
-(id)appLayoutForWorkspaceTransientOverlay:(id)arg1;
-(BOOL)switcherContentController:(id)arg1 shouldMorphToPiPForTransitionContext:(id)arg2;
-(id)mainSwitcherWindow;
-(BOOL)isInAppStatusBarRequestedHiddenForSwitcherContentController:(id)arg1;
-(id)createWorkspaceTransientOverlayForAppLayout:(id)arg1;
-(id)activeTransientOverlayPresentedAppLayoutForSwitcherContentController:(id)arg1;
-(long long)homeScreenInterfaceOrientation;
-(BOOL)switcherContentController:(id)arg1 supportsHeaderItemsForAppLayout:(id)arg2;
-(id)matchingIconViewForIconView:(id)arg1;
-(CGRect*)frameForItemWithRole:(long long)arg1 inMainAppLayout:(id)arg2 interfaceOrientation:(long long)arg3;
-(id)viewControllerForTransientOverlayAppLayout:(id)arg1;
-(CGRect*)frameForFloatingAppLayoutInInterfaceOrientation:(long long)arg1 floatingConfiguration:(long long)arg2;
-(BOOL)switcherContentControllerReloadsSnapshotsForActiveInterfaceOrientationChange:(id)arg1;
-(long long)backdropInterfaceStyleForContentController:(id)arg1;

@required
-(id)appLayoutsForSwitcherContentController:(id)arg1;
-(id)switcherContentController:(id)arg1 transitionEventForLayoutState:(id)arg2 identifier:(id)arg3 phase:(unsigned long long)arg4 animated:(BOOL)arg5;
-(id)switcherContentController:(id)arg1 transitionEventForContext:(id)arg2 identifier:(id)arg3 phase:(unsigned long long)arg4 animated:(BOOL)arg5;
-(long long)switcherInterfaceOrientationForContentController:(id)arg1;
-(long long)sbActiveInterfaceOrientation;

@end

