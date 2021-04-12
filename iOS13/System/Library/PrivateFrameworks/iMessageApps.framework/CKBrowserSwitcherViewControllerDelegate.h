/*
* Generated on Monday, March 1, 2021 at 2:35:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iMessageApps.framework/iMessageApps
*/


@protocol CKBrowserSwitcherViewControllerDelegate <NSObject>
@optional
-(void)switcherViewControllerDidSelectAppManager:(id)arg1 shouldRestoreAppSwitcher:(BOOL)arg2;
-(void)switcherViewControllerDidSelectAppStore:(id)arg1 shouldRestoreAppSwitcher:(BOOL)arg2;
-(void)switcherViewControllerDidStartSwitching:(id)arg1;
-(void)switcherViewController:(id)arg1 didSelectPluginAtIndexPath:(id)arg2;
-(void)switcherViewController:(id)arg1 willShowSelectionViewWithAnimations:(/*^block*/id*)arg2 completion:(/*^block*/id*)arg3;
-(void)switcherViewController:(id)arg1 willHideSelectionViewWithAnimations:(/*^block*/id*)arg2 completion:(/*^block*/id*)arg3;
-(void)switcherViewController:(id)arg1 hasUpdatedLastTouchDate:(id)arg2;
-(BOOL)switcherViewControllerShouldShowIconAndTitleWhenCompact:(id)arg1;

@required
-(void)switcherViewControllerDidFinishSwitching:(id)arg1 toViewController:(id)arg2;
-(void)switcherViewControllerDidCollapse:(id)arg1;

@end

