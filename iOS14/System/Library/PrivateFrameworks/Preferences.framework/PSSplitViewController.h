/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setViewControllers:(id)arg1 ;
-(id<PSSplitViewControllerNavigationDelegate>)navigationDelegate;
-(id)categoryController;
-(unsigned long long)supportedInterfaceOrientations;
-(id)childViewControllerForStatusBarStyle;
-(void)setupControllerForToolbar:(id)arg1 ;
-(PSRootController *)containerNavigationController;
-(void)setNavigationDelegate:(id<PSSplitViewControllerNavigationDelegate>)arg1 ;
-(void)showInitialViewController:(id)arg1 ;
-(void)setContainerNavigationController:(PSRootController *)arg1 ;
-(void)popRecursivelyToRootController;
@end

