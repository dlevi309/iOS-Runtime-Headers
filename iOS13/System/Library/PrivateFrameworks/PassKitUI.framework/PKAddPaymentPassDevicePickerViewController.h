/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <UIKitCore/UITableViewController.h>

@protocol PKAddPaymentPassDevicePickerDelegate;
@class PKTableHeaderView, NSArray, PKAddPaymentPassRequestConfiguration;

@interface PKAddPaymentPassDevicePickerViewController : UITableViewController {

	PKTableHeaderView* _headerView;
	NSArray* _webServices;
	PKAddPaymentPassRequestConfiguration* _configuration;
	id<PKAddPaymentPassDevicePickerDelegate> _delegate;

}

@property (assign,nonatomic) id<PKAddPaymentPassDevicePickerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<PKAddPaymentPassDevicePickerDelegate>)delegate;
-(void)setDelegate:(id<PKAddPaymentPassDevicePickerDelegate>)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)initWithPaymentWebServices:(id)arg1 configuration:(id)arg2 ;
-(void)reloadContentFromWebServices;
@end

