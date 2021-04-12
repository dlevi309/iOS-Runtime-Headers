/*
* Generated on Thursday, January 14, 2021 at 2:27:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


@protocol UISplitViewControllerDelegate
@optional
-(BOOL)splitViewController:(id)arg1 collapseSecondaryViewController:(id)arg2 ontoPrimaryViewController:(id)arg3;
-(id)splitViewController:(id)arg1 separateSecondaryViewControllerFromPrimaryViewController:(id)arg2;
-(void)splitViewController:(id)arg1 willHideViewController:(id)arg2 withBarButtonItem:(id)arg3 forPopoverController:(id)arg4;
-(void)splitViewController:(id)arg1 willShowViewController:(id)arg2 invalidatingBarButtonItem:(id)arg3;
-(long long)splitViewController:(id)arg1 displayModeForExpandingToProposedDisplayMode:(long long)arg2;
-(long long)splitViewController:(id)arg1 topColumnForCollapsingToProposedTopColumn:(long long)arg2;
-(void)splitViewController:(id)arg1 popoverController:(id)arg2 willPresentViewController:(id)arg3;
-(long long)splitViewControllerPreferredInterfaceOrientationForPresentation:(id)arg1;
-(BOOL)splitViewController:(id)arg1 shouldHideViewController:(id)arg2 inOrientation:(long long)arg3;
-(void)splitViewControllerInteractivePresentationGestureWillBegin:(id)arg1;
-(void)splitViewControllerInteractivePresentationGestureDidEnd:(id)arg1;
-(id)primaryViewControllerForCollapsingSplitViewController:(id)arg1;
-(id)primaryViewControllerForExpandingSplitViewController:(id)arg1;
-(BOOL)splitViewController:(id)arg1 showDetailViewController:(id)arg2 sender:(id)arg3;
-(unsigned long long)splitViewControllerSupportedInterfaceOrientations:(id)arg1;
-(BOOL)splitViewController:(id)arg1 showViewController:(id)arg2 sender:(id)arg3;
-(void)splitViewController:(id)arg1 willChangeToDisplayMode:(long long)arg2;
-(long long)targetDisplayModeForActionInSplitViewController:(id)arg1;
-(void)splitViewController:(id)arg1 willShowColumn:(long long)arg2;
-(void)splitViewController:(id)arg1 willHideColumn:(long long)arg2;
-(void)splitViewControllerDidCollapse:(id)arg1;
-(void)splitViewControllerDidExpand:(id)arg1;

@end

