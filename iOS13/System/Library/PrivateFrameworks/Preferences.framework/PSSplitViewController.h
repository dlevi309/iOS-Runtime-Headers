/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <UIKitCore/UISplitViewController.h>

@protocol PSSplitViewControllerNavigationDelegate;
@class PSRootController;

@interface PSSplitViewController : UISplitViewController {

	id<PSSplitViewControllerNavigationDelegate> _navigationDelegate;
	PSRootController* _containerNavigationController;

}

@property (nonatomic,retain) PSRootController * containerNavigationController;                                   //@synthesize containerNavigationController=_containerNavigationController - In the implementation block
@property (assign,nonatomic,__weak) id<PSSplitViewControllerNavigationDelegate> navigationDelegate;              //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
-(unsigned long long)supportedInterfaceOrientations;
-(void)setViewControllers:(id)arg1 ;
-(id)childViewControllerForStatusBarStyle;
-(void)setNavigationDelegate:(id<PSSplitViewControllerNavigationDelegate>)arg1 ;
-(id<PSSplitViewControllerNavigationDelegate>)navigationDelegate;
-(void)popRecursivelyToRootController;
-(PSRootController *)containerNavigationController;
-(void)setupControllerForToolbar:(id)arg1 ;
-(void)showInitialViewController:(id)arg1 ;
-(id)categoryController;
-(void)setContainerNavigationController:(PSRootController *)arg1 ;
@end

