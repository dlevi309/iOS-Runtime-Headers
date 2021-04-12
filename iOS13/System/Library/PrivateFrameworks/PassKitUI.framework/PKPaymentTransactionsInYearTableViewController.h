/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/CNAvatarViewDelegate.h>
#import <libobjc.A.dylib/_UIContextMenuInteractionDelegate.h>
#import <libobjc.A.dylib/PKDashboardTransactionFetcherDelegate.h>

@protocol PKPaymentDataProvider;
@class NSDate, NSCalendar, NSArray, PKPaymentPass, PKPaymentTransactionCellController, PKPeerPaymentContactResolver, PKPeerPaymentController, NSDateFormatter, PKDashboardTransactionFetcher, PKPaymentTransactionDetailsFactory, NSString;

@interface PKPaymentTransactionsInYearTableViewController : UITableViewController <CNAvatarViewDelegate, _UIContextMenuInteractionDelegate, PKDashboardTransactionFetcherDelegate> {

	NSDate* _dateFromYear;
	NSCalendar* _calendar;
	NSArray* _transactionsByMonth;
	NSArray* _instantWithdrawalFeesTransactionGroups;
	PKPaymentPass* _paymentPass;
	id<PKPaymentDataProvider> _paymentServiceDataProvider;
	PKPaymentTransactionCellController* _transactionCellController;
	PKPeerPaymentContactResolver* _contactResolver;
	PKPeerPaymentController* _peerPaymentController;
	NSDateFormatter* _transactionMonthFormatter;
	NSDateFormatter* _withdrawalFeeMonthYearFormatter;
	long long _detailViewStyle;
	PKDashboardTransactionFetcher* _transactionFetcher;
	PKPaymentTransactionDetailsFactory* _transactionDetailsFactory;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)contextMenuInteractionShouldBegin:(id)arg1 ;
-(id)contextMenuInteraction:(id)arg1 previewForHighlightingAtLocation:(CGPoint)arg2 ;
-(id)contextMenuInteraction:(id)arg1 actionsForMenuAtLocation:(CGPoint)arg2 withSuggestedActions:(id)arg3 ;
-(id)presentingViewControllerForAvatarView:(id)arg1 ;
-(long long)_sectionTypeForSection:(long long)arg1 ;
-(id)initWithDateFromYear:(id)arg1 calendar:(id)arg2 paymentPass:(id)arg3 detailViewStyle:(long long)arg4 paymentServiceDataProvider:(id)arg5 contactResolver:(id)arg6 peerPaymentController:(id)arg7 ;
-(void)transactionsChanged:(id)arg1 ;
-(id)_transactionsInYearTitleString;
-(void)_fetchDataWithCompletion:(/*^block*/id)arg1 ;
-(id)_withdrawalFeeMonthYearFormatter;
-(id)_transactionMonthFormatter;
-(id)_transactionDetailViewControllerForTransaction:(id)arg1 ;
-(void)_updateWithTransactions:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

