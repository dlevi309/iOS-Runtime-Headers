/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@protocol UISplitViewControllerDelegate
@optional
-(BOOL)splitViewController:(id)arg1 shouldHideViewController:(id)arg2 inOrientation:(long long)arg3;
-(void)splitViewController:(id)arg1 willShowViewController:(id)arg2 invalidatingBarButtonItem:(id)arg3;
-(void)splitViewController:(id)arg1 willHideViewController:(id)arg2 withBarButtonItem:(id)arg3 forPopoverController:(id)arg4;
-(void)splitViewController:(id)arg1 popoverController:(id)arg2 willPresentViewController:(id)arg3;
-(BOOL)splitViewController:(id)arg1 showViewController:(id)arg2 sender:(id)arg3;
-(BOOL)splitViewController:(id)arg1 showDetailViewController:(id)arg2 sender:(id)arg3;
-(BOOL)splitViewController:(id)arg1 collapseSecondaryViewController:(id)arg2 ontoPrimaryViewController:(id)arg3;
-(id)splitViewController:(id)arg1 separateSecondaryViewControllerFromPrimaryViewController:(id)arg2;
-(id)primaryViewControllerForCollapsingSplitViewController:(id)arg1;
-(id)primaryViewControllerForExpandingSplitViewController:(id)arg1;
-(unsigned long long)splitViewControllerSupportedInterfaceOrientations:(id)arg1;
-(long long)splitViewControllerPreferredInterfaceOrientationForPresentation:(id)arg1;
-(void)splitViewController:(id)arg1 willChangeToDisplayMode:(long long)arg2;
-(long long)targetDisplayModeForActionInSplitViewController:(id)arg1;

@end
