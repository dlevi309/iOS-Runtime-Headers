/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKPaymentSetupTableViewController.h>

@protocol PKPaymentSetupViewControllerDelegate;
@class PKTableHeaderView, PKLinkedAppView, PKPaymentSetupProduct;

@interface PKPaymentCardUnsupportedViewController : PKPaymentSetupTableViewController {

	PKTableHeaderView* _headerView;
	PKLinkedAppView* _appViewCell;
	PKPaymentSetupProduct* _product;
	id<PKPaymentSetupViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) PKPaymentSetupProduct * product;                                //@synthesize product=_product - In the implementation block
@property (assign,nonatomic) id<PKPaymentSetupViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<PKPaymentSetupViewControllerDelegate>)delegate;
-(void)setDelegate:(id<PKPaymentSetupViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(unsigned long long)edgesForExtendedLayout;
-(void)_done:(id)arg1 ;
-(void)setProduct:(PKPaymentSetupProduct *)arg1 ;
-(PKPaymentSetupProduct *)product;
-(id)initWithUnsupportedProduct:(id)arg1 context:(long long)arg2 delegate:(id)arg3 ;
-(void)_updateViewsWithProduct:(id)arg1 ;
@end

