/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (nonatomic,retain) PKPaymentSetupProduct * product;                                       //@synthesize product=_product - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaymentSetupViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)_done:(id)arg1 ;
-(id<PKPaymentSetupViewControllerDelegate>)delegate;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)initWithUnsupportedProduct:(id)arg1 context:(long long)arg2 delegate:(id)arg3 ;
-(void)setProduct:(PKPaymentSetupProduct *)arg1 ;
-(void)setDelegate:(id<PKPaymentSetupViewControllerDelegate>)arg1 ;
-(void)_updateViewsWithProduct:(id)arg1 ;
-(unsigned long long)edgesForExtendedLayout;
-(PKPaymentSetupProduct *)product;
-(void)viewDidLoad;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)dealloc;
@end

