/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKSectionTableViewController.h>
#import <libobjc.A.dylib/CNAvatarViewDelegate.h>
#import <libobjc.A.dylib/_UIContextMenuInteractionDelegate.h>
#import <libobjc.A.dylib/PKDashboardTransactionFetcherDelegate.h>

@protocol PKPaymentDataProvider;
@class PKFamilyMember, PKPeerPaymentAccount, PKPeerPaymentWebService, PKTransactionSource, PKDashboardTransactionFetcher, PKPaymentTransactionDetailsFactory, PKPeerPaymentContactResolver, PKPaymentTransactionCellController, NSDateFormatter, NSString, NSArray;

@interface PKFamilyMemberTransactionsViewController : PKSectionTableViewController <CNAvatarViewDelegate, _UIContextMenuInteractionDelegate, PKDashboardTransactionFetcherDelegate> {

	PKFamilyMember* _familyMember;
	PKFamilyMember* _viewer;
	PKPeerPaymentAccount* _peerPaymentAccount;
	PKPeerPaymentWebService* _peerPaymentWebService;
	PKTransactionSource* _transactionSource;
	PKDashboardTransactionFetcher* _transactionFetcher;
	PKPaymentTransactionDetailsFactory* _transactionDetailsFactory;
	long long _detailViewStyle;
	PKPeerPaymentContactResolver* _contactResolver;
	id<PKPaymentDataProvider> _paymentServiceDataProvider;
	PKPaymentTransactionCellController* _transactionCellController;
	NSDateFormatter* _formatterYear;
	NSString* _viewerFamilyMemberTypeAnalyticsKey;
	NSArray* _transactionGroups;
	NSArray* _transactions;
	BOOL _allContentIsLoaded;
	BOOL _didBeginReporter;
	BOOL _requestingStatement;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)presentingViewControllerForAvatarView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)contextMenuInteraction:(id)arg1 actionsForMenuAtLocation:(CGPoint)arg2 withSuggestedActions:(id)arg3 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)_updateWithTransactionGroups:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)transactionsChanged:(id)arg1 ;
-(id)contextMenuInteraction:(id)arg1 previewForHighlightingAtLocation:(CGPoint)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)initWithFamilyMember:(id)arg1 viewer:(id)arg2 transactionSource:(id)arg3 peerPaymentAccount:(id)arg4 peerPaymentWebService:(id)arg5 detailViewStyle:(long long)arg6 paymentServiceDataProvider:(id)arg7 ;
-(id)_contactKeysToFetch;
-(void)viewDidLoad;
-(BOOL)shouldMapSection:(unsigned long long)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)transactionViewControllerForTransaction:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)contextMenuInteractionShouldBegin:(id)arg1 ;
-(id)_transactionDetailViewControllerForTransaction:(id)arg1 ;
-(void)_fetchDataWithCompletion:(/*^block*/id)arg1 ;
-(id)_viewControllerForTransactionGroup:(id)arg1 ;
-(void)_didSelectRequestStatementAtIndexPath:(id)arg1 ;
-(void)_reloadTransactionsWithCompletion:(/*^block*/id)arg1 ;
-(void)_reloadTransactionGroupsWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_updateWithTransactions:(id)arg1 ;
@end

