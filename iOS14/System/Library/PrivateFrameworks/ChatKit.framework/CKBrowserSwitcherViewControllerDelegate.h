/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol CKBrowserSwitcherViewControllerDelegate <NSObject>
@optional
-(void)switcherViewControllerDidSelectAppManager:(id)arg1 shouldRestoreAppSwitcher:(BOOL)arg2;
-(void)switcherViewControllerDidSelectAppStore:(id)arg1 shouldRestoreAppSwitcher:(BOOL)arg2;
-(void)switcherViewController:(id)arg1 didSelectPluginAtIndexPath:(id)arg2;
-(void)switcherViewController:(id)arg1 hasUpdatedLastTouchDate:(id)arg2;
-(BOOL)switcherViewControllerShouldShowIconAndTitleWhenCompact:(id)arg1;

@required
-(void)switcherViewControllerDidFinishSwitching:(id)arg1 toViewController:(id)arg2;
-(void)switcherViewControllerDidCollapse:(id)arg1;

@end

