/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBHLibraryViewControllerObserver <NSObject>
@optional
-(void)libraryViewController:(id)arg1 willDismissSearchController:(id)arg2;
-(void)libraryViewController:(id)arg1 willLaunchIcon:(id)arg2 fromLocation:(id)arg3;
-(void)libraryViewController:(id)arg1 willPresentSearchController:(id)arg2;
-(void)libraryViewControllerRequestsDismissal:(id)arg1;
-(void)libraryViewControllerWillPresent:(id)arg1;
-(void)libraryViewControllerDidPresent:(id)arg1;
-(void)libraryViewControllerWillDismiss:(id)arg1;
-(void)libraryViewControllerDidDismiss:(id)arg1;
-(void)libraryViewController:(id)arg1 willPresentFolderController:(id)arg2;
-(void)libraryViewController:(id)arg1 willDismissFolderController:(id)arg2;
-(void)libraryViewController:(id)arg1 didPresentSearchController:(id)arg2;
-(void)libraryViewController:(id)arg1 didDismissSearchController:(id)arg2;

@end

