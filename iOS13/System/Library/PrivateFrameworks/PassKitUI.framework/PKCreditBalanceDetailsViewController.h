/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UICollectionViewController.h>
#import <libobjc.A.dylib/PKAccountServiceObserver.h>

@class PKPaymentPass, PKAccount, PKCreditAccountStatement, PKBalanceSummaryFetcher, PKCreditAccountSummary, PKPaymentWebService, PKDashboardTransactionFetcher, PKDashboardBalancePresenter, PKDashboardBalanceSummaryItemPresenter, PKDashboardBalanceItem, PKDashboardBalanceSummaryItem, NSArray, PKBalanceSummary, NSDictionary, NSDateFormatter, PKDashboardTitleHeaderView, PKDashboardFooterTextView, NSString;

@interface PKCreditBalanceDetailsViewController : UICollectionViewController <PKAccountServiceObserver> {

	PKPaymentPass* _paymentPass;
	PKAccount* _account;
	unsigned long long _feature;
	PKCreditAccountStatement* _statement;
	PKCreditAccountStatement* _previousStatement;
	PKBalanceSummaryFetcher* _fetcher;
	PKCreditAccountSummary* _accountSummary;
	PKPaymentWebService* _webService;
	PKDashboardTransactionFetcher* _transactionFetcher;
	PKDashboardBalancePresenter* _balancePresenter;
	PKDashboardBalanceSummaryItemPresenter* _balanceSummaryItemPresenter;
	PKDashboardBalanceItem* _balanceItem;
	PKDashboardBalanceSummaryItem* _lastStatementSummaryItem;
	PKDashboardBalanceSummaryItem* _currentSpendingSummaryItem;
	PKDashboardBalanceSummaryItem* _interestSummaryItem;
	PKDashboardBalanceSummaryItem* _paymentsAndCreditsSummaryItem;
	PKDashboardBalanceSummaryItem* _paymentsSummaryItem;
	PKDashboardBalanceSummaryItem* _creditsSummaryItem;
	PKDashboardBalanceSummaryItem* _dailyCashSummaryItem;
	PKDashboardBalanceSummaryItem* _installmentBalanceSummaryItem;
	PKDashboardBalanceSummaryItem* _creditLimitSummaryItem;
	PKDashboardBalanceSummaryItem* _totalBalanceSummaryItem;
	PKDashboardBalanceSummaryItem* _availableCreditSummaryItem;
	NSArray* _totalBalanceItems;
	NSArray* _usageItems;
	PKDashboardBalanceSummaryItem* _statementDownloadSummaryItem;
	PKDashboardBalanceSummaryItem* _exportTransactionDataSummaryItem;
	NSArray* _buttonItems;
	PKBalanceSummary* _balanceSummary;
	NSArray* _statements;
	NSDictionary* _statementsByYear;
	NSArray* _sortedYears;
	NSDateFormatter* _monthYearFormatter;
	NSDateFormatter* _dateFormatter;
	PKDashboardTitleHeaderView* _sampleHeaderView;
	PKDashboardFooterTextView* _sampleFooterView;
	NSArray* _sectionMap;
	unsigned long long _numberOfStaticSections;
	long long _style;
	NSString* _pageTagForAnalyticsReporting;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)_reloadData;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3 ;
-(unsigned long long)_sectionForIndex:(unsigned long long)arg1 ;
-(void)statementsChangedForAccountIdentifier:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 paymentPass:(id)arg2 webService:(id)arg3 account:(id)arg4 statement:(id)arg5 previousStatements:(id)arg6 ;
-(BOOL)_shouldInset;
-(void)showStatement:(id)arg1 style:(long long)arg2 ;
-(void)_reportEventForPassIfNecessary:(id)arg1 ;
-(id)_createSummaryItemOfType:(unsigned long long)arg1 ;
-(id)_summaryItemForIndexPath:(id)arg1 ;
-(BOOL)_hasHeaderForSectionIndex:(unsigned long long)arg1 ;
-(void)_configureHeaderView:(id)arg1 inSectionIndex:(unsigned long long)arg2 ;
-(BOOL)_hasFooterForSectionIndex:(unsigned long long)arg1 ;
-(void)_configureFooterView:(id)arg1 inSectionIndex:(unsigned long long)arg2 ;
-(void)_updateStatements;
-(void)_sortStatementsForPresentation;
@end

