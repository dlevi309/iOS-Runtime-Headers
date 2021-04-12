/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol CKBrowserTransitionCoordinatorDelegate <NSObject>
@optional
-(BOOL)shouldAlwaysShowAppTitle;
-(id)appIconOverride;
-(id)appTitleOverride;
-(id)appGrabberForBrowserTransitionCoordinator:(id)arg1;
-(double)browserTransitionCoordinatorCollapsedContentHeight:(id)arg1;
-(void)browserTransitionCoordinator:(id)arg1 expandedStateDidChange:(BOOL)arg2 withReason:(long long)arg3;
-(void)browserTransitionCoordinatorWillTransitionOrPresentToFullscreen:(id)arg1 withReason:(long long)arg2;
-(void)browserTransitionCoordinatorDidTransitionOrPresentToFullscreen:(id)arg1 withReason:(long long)arg2;
-(void)browserTransitionCoordinatorWillCollapseOrDismiss:(id)arg1 withReason:(long long)arg2;
-(void)browserTransitionCoordinatorDidCollapseOrDismiss:(id)arg1 withReason:(long long)arg2;
-(void)browserTransitionCoordinator:(id)arg1 didSwitchToPlugin:(id)arg2;
-(void)browserTransitionCoordinator:(id)arg1 browserWillBecomeInactive:(id)arg2;
-(void)browserTransitionCoordinator:(id)arg1 didTransitionFromOrientation:(long long)arg2 toOrientation:(long long)arg3;
-(void)browserTransitionCoordinator:(id)arg1 hasUpdatedLastTouchDate:(id)arg2;
-(CGSize*)browserTransitionCoordinator:(id)arg1 preferredSizeForBrowser:(id)arg2;
-(void)browserTransitionCoordinatorWantsPresentationOfAppStore:(id)arg1;
-(void)browserTransitionCoordinatorWantsPresentationOfAppManager:(id)arg1;
-(void)reinsertAppGrabberViewForBrowserTransitionCoordinator:(id)arg1;
-(CGRect*)cachedCompactFrameInWindowCoordsForBrowserTransitionCoordinator:(id)arg1;
-(id)transitionsPresentationViewController;
-(BOOL)browserTransitionCoordinatorShouldDismissOnDragSuccess:(id)arg1;

@end

