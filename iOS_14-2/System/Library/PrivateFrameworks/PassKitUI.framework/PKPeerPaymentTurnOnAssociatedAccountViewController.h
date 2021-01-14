/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <UIKitCore/UITableViewController.h>

@protocol PKPassLibraryDataProvider, PKPeerPaymentAssociatedAccountSetupDelegate;
@class PKFamilyMember;

@interface PKPeerPaymentTurnOnAssociatedAccountViewController : UITableViewController {

	PKFamilyMember* _familyMember;
	PKFamilyMember* _viewer;
	long long _context;
	id<PKPassLibraryDataProvider> _passLibraryDataProvider;
	id<PKPeerPaymentAssociatedAccountSetupDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PKPeerPaymentAssociatedAccountSetupDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id<PKPeerPaymentAssociatedAccountSetupDelegate>)delegate;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setDelegate:(id<PKPeerPaymentAssociatedAccountSetupDelegate>)arg1 ;
-(void)viewDidLoad;
-(id)initWithFamilyMember:(id)arg1 viewer:(id)arg2 delegate:(id)arg3 passLibraryDataProvider:(id)arg4 context:(long long)arg5 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
@end

