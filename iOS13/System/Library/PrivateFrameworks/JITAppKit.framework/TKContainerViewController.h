/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/JITAppKit.framework/JITAppKit
*/

#import <UIKitCore/UIViewController.h>

@class TKKeyPathObserver, UINavigationItem, UIViewController;

@interface TKContainerViewController : UIViewController {

	TKKeyPathObserver* _observer;
	UINavigationItem* _childNavigationItem;
	BOOL _appearing;
	UIViewController* _childViewController;

}

@property (nonatomic,retain) UIViewController * childViewController;              //@synthesize childViewController=_childViewController - In the implementation block
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(unsigned long long)edgesForExtendedLayout;
-(BOOL)automaticallyAdjustsScrollViewInsets;
-(UIViewController *)childViewController;
-(void)setChildViewController:(UIViewController *)arg1 ;
-(void)observeChild;
-(void)updateInternals:(id)arg1 ;
@end

