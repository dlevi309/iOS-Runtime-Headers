/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/PKPeerPaymentAssociatedAccountSetupDelegate.h>

@protocol PKPassLibraryDataProvider;
@class PKPaymentService, PKPeerPaymentService, PKPeerPaymentAccount, NSArray, PKFamilyMember, NSString;

@interface PKPeerPaymentFamilyCircleViewController : UITableViewController <PKPeerPaymentAssociatedAccountSetupDelegate> {

	PKPaymentService* _paymentService;
	PKPeerPaymentService* _peerPaymentService;
	PKPeerPaymentAccount* _account;
	BOOL _loadingFamily;
	NSArray* _sortedRows;
	PKFamilyMember* _viewer;
	id<PKPassLibraryDataProvider> _passLibraryDataProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)viewDidLoad;
-(id)initWithFamilyMembers:(id)arg1 altDSIDToImageData:(id)arg2 ;
-(void)_processFamilyMembers:(id)arg1 ;
-(void)_processAltDSIDToImageData:(id)arg1 ;
-(id)initWithPKFamilyMembers:(id)arg1 altDSIDToImageData:(id)arg2 passLibraryDataProvider:(id)arg3 ;
-(void)_loadFamilyIfNecessary;
-(void)_peerPaymentAccountChanged:(id)arg1 ;
-(void)_handleRowTapped:(id)arg1 ;
-(id)_pendingInvitations;
-(void)_reloadSortedRows;
-(id)_dsidsMissingImages;
-(void)_loadFamilyMembers;
-(void)_loadFamilyMemberImagesForDSIDs:(id)arg1 ;
-(id)_familyMemberWithDSID:(id)arg1 ;
-(id)initWithFamilyMembers:(id)arg1 ;
-(void)addPeerPaymentAssociatedAccountSetupCompletedWithSucess:(BOOL)arg1 updatedAccount:(id)arg2 forFamilyMember:(id)arg3 ;
-(void)addPeerPaymentAssociatedAccountDidSkipSetupForFamilyMember:(id)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
@end

