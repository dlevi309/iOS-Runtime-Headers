/*
* Generated on Thursday, January 14, 2021 at 2:28:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iMessageApps.framework/iMessageApps
*/


@protocol CKFullScreenAppViewControllerDelegate <NSObject>
@optional
-(BOOL)shouldAlwaysShowAppTitle;
-(double)fullscreenAppViewControllerCollapsedContentHeight:(id)arg1;
-(void)fullscreenAppViewControllerWantsToCollapse:(id)arg1;
-(void)fullscreenAppViewController:(id)arg1 hasUpdatedLastTouchDate:(id)arg2;
-(BOOL)fullscreenAppViewControllerShouldDismissOnDragSuccess:(id)arg1;
-(void)fullscreenAppViewControllerDidTransitionFromOrientation:(long long)arg1 toOrientation:(long long)arg2;
-(void)fullscreenAppViewControllerSwitcherDidSelectAppStore:(id)arg1;
-(void)fullscreenAppViewController:(id)arg1 wantsToSwitchToPlugin:(id)arg2 datasource:(id)arg3;
-(void)fullscreenAppViewControllerSwitcherDidSelectAppManager:(id)arg1;
-(double)fullscreenAppViewControllerCollapsedHeaderHeight:(id)arg1;

@end

