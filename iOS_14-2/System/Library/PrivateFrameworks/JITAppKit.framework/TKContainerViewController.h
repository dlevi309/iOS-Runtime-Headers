/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(UIViewController *)childViewController;
-(void)setChildViewController:(UIViewController *)arg1 ;
-(unsigned long long)edgesForExtendedLayout;
-(void)viewDidLoad;
-(void)dealloc;
-(void)observeChild;
-(void)updateInternals:(id)arg1 ;
@end

