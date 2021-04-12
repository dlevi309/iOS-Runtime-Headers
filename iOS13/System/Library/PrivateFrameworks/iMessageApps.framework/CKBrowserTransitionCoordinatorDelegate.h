/*
* Generated on Monday, March 1, 2021 at 2:35:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iMessageApps.framework/iMessageApps
*/


@protocol CKBrowserTransitionCoordinatorDelegate <NSObject>
@optional
-(BOOL)shouldAlwaysShowAppTitle;
-(void)browserTransitionCoordinator:(id)arg1 expandedStateDidChange:(BOOL)arg2 withReason:(long long)arg3;
-(void)browserTransitionCoordinatorWillTransitionOrPresentToFullscreen:(id)arg1 withReason:(long long)arg2;
-(void)browserTransitionCoordinatorDidTransitionOrPresentToFullscreen:(id)arg1 withReason:(long long)arg2;
-(void)browserTransitionCoordinatorWillCollapseOrDismiss:(id)arg1 withReason:(long long)arg2;
-(void)browserTransitionCoordinatorDidCollapseOrDismiss:(id)arg1 withReason:(long long)arg2;
-(void)browserTransitionCoordinator:(id)arg1 browserWillBecomeInactive:(id)arg2;
-(void)browserTransitionCoordinator:(id)arg1 didTransitionFromOrientation:(long long)arg2 toOrientation:(long long)arg3;
-(void)browserTransitionCoordinator:(id)arg1 didSwitchToPlugin:(id)arg2;
-(void)browserTransitionCoordinator:(id)arg1 hasUpdatedLastTouchDate:(id)arg2;
-(CGSize*)browserTransitionCoordinator:(id)arg1 preferredSizeForBrowser:(id)arg2;
-(void)browserTransitionCoordinatorWantsPresentationOfAppStore:(id)arg1;
-(void)browserTransitionCoordinatorWantsPresentationOfAppManager:(id)arg1;
-(id)appGrabberForBrowserTransitionCoordinator:(id)arg1;
-(void)reinsertAppGrabberViewForBrowserTransitionCoordinator:(id)arg1;
-(CGRect*)cachedCompactFrameInWindowCoordsForBrowserTransitionCoordinator:(id)arg1;
-(double)browserTransitionCoordinatorCollapsedContentHeight:(id)arg1;
-(BOOL)browserTransitionCoordinatorShouldDismissOnDragSuccess:(id)arg1;
-(id)appTitleOverride;
-(id)appIconOverride;
-(id)transitionsPresentationViewController;

@end

