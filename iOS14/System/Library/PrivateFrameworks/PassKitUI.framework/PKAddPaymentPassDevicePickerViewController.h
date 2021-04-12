/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <UIKitCore/UITableViewController.h>

@protocol PKAddPaymentPassDevicePickerDelegate;
@class PKTableHeaderView, NSArray, PKAddPaymentPassRequestConfiguration;

@interface PKAddPaymentPassDevicePickerViewController : UITableViewController {

	PKTableHeaderView* _headerView;
	NSArray* _webServices;
	PKAddPaymentPassRequestConfiguration* _configuration;
	BOOL _viewHasAppeared;
	BOOL _sentViewHasAppearedEvent;
	id<PKAddPaymentPassDevicePickerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PKAddPaymentPassDevicePickerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)viewWillLayoutSubviews;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id<PKAddPaymentPassDevicePickerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setDelegate:(id<PKAddPaymentPassDevicePickerDelegate>)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(id)initWithPaymentWebServices:(id)arg1 configuration:(id)arg2 ;
-(void)reloadContentFromWebServices;
-(void)noteNavigationUserInterfaceDidDisappear;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

