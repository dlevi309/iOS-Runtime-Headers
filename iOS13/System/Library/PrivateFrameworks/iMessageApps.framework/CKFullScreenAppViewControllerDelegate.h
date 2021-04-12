/*
* Generated on Monday, March 1, 2021 at 2:35:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iMessageApps.framework/iMessageApps
*/


@protocol CKFullScreenAppViewControllerDelegate <NSObject>
@optional
-(void)fullscreenAppViewControllerDidTransitionFromOrientation:(long long)arg1 toOrientation:(long long)arg2;
-(double)fullscreenAppViewControllerCollapsedContentHeight:(id)arg1;
-(BOOL)shouldAlwaysShowAppTitle;
-(void)fullscreenAppViewController:(id)arg1 hasUpdatedLastTouchDate:(id)arg2;
-(void)fullscreenAppViewControllerWantsToCollapse:(id)arg1;
-(BOOL)fullscreenAppViewControllerShouldDismissOnDragSuccess:(id)arg1;
-(void)fullscreenAppViewController:(id)arg1 wantsToSwitchToPlugin:(id)arg2 datasource:(id)arg3;
-(void)fullscreenAppViewControllerSwitcherDidSelectAppStore:(id)arg1;
-(void)fullscreenAppViewControllerSwitcherDidSelectAppManager:(id)arg1;
-(double)fullscreenAppViewControllerCollapsedHeaderHeight:(id)arg1;

@end

