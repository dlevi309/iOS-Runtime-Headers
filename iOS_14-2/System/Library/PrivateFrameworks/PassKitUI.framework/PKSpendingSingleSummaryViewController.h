/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UICollectionViewController.h>
#import <libobjc.A.dylib/PKPaymentDataProviderDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/PKSpendingSummaryFooterViewDelegate.h>
#import <libobjc.A.dylib/PKAccountServiceAccountResolutionControllerDelegate.h>
#import <libobjc.A.dylib/PKSpendingSummaryResponder.h>

@protocol PKSpendingSingleSummaryViewControllerDelegate;
@class PKTransactionSource, PKAccount, PKAccountService, PKSpendingSummaryFooterView, PKSpendingSummary, NSDate, NSCalendar, NSArray, NSDateFormatter, PKTransactionGroupItemPresenter, PKSpendingSummaryPresenter, PKDashboardTitleHeaderView, PKDashboardFooterTextView, PKAccountServiceAccountResolutionController, PKSpendingSummaryLayout, UIGestureRecognizer, NSString;

@interface PKSpendingSingleSummaryViewController : UICollectionViewController <PKPaymentDataProviderDelegate, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate, PKSpendingSummaryFooterViewDelegate, PKAccountServiceAccountResolutionControllerDelegate, PKSpendingSummaryResponder> {

	PKTransactionSource* _transactionSource;
	PKAccount* _account;
	PKAccountService* _accountService;
	unsigned long long _feature;
	PKSpendingSummaryFooterView* _currentFooter;
	BOOL _footerNeedsConfiguration;
	PKSpendingSummary* _summary;
	unsigned long long _summaryType;
	NSDate* _startDate;
	NSDate* _endDate;
	BOOL _hasTransactions;
	NSCalendar* _currentCalendar;
	double _transitionAlpha;
	NSArray* _currentMonthTransactions;
	NSArray* _upcomingScheduledPayments;
	NSDateFormatter* _formatterMonth;
	NSDateFormatter* _formatterFullMonth;
	NSDateFormatter* _formatterDay;
	NSDateFormatter* _formatterYear;
	PKTransactionGroupItemPresenter* _transactionGroupPresenter;
	PKSpendingSummaryPresenter* _summaryPresenter;
	PKDashboardTitleHeaderView* _sampleHeaderView;
	PKDashboardFooterTextView* _sampleFooterView;
	PKAccountServiceAccountResolutionController* _resolutionController;
	PKSpendingSummaryLayout* _layout;
	BOOL _isLowEndDevice;
	BOOL _visible;
	id<PKSpendingSingleSummaryViewControllerDelegate> _scrollingDelegate;
	UIGestureRecognizer* _gestureRecognizerRequiredToFail;
	long long _contentInsetAdjustmentBehavior;
	unsigned long long _selectionType;
	UIEdgeInsets _contentInset;

}

@property (assign,nonatomic,__weak) id<PKSpendingSingleSummaryViewControllerDelegate> scrollingDelegate;              //@synthesize scrollingDelegate=_scrollingDelegate - In the implementation block
@property (nonatomic,readonly) PKSpendingSummary * summary;                                                           //@synthesize summary=_summary - In the implementation block
@property (nonatomic,retain) UIGestureRecognizer * gestureRecognizerRequiredToFail;                                   //@synthesize gestureRecognizerRequiredToFail=_gestureRecognizerRequiredToFail - In the implementation block
@property (assign,nonatomic) long long contentInsetAdjustmentBehavior;                                                //@synthesize contentInsetAdjustmentBehavior=_contentInsetAdjustmentBehavior - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;                                                               //@synthesize contentInset=_contentInset - In the implementation block
@property (assign,nonatomic) unsigned long long selectionType;                                                        //@synthesize selectionType=_selectionType - In the implementation block
@property (assign,getter=isVisible,nonatomic) BOOL visible;                                                           //@synthesize visible=_visible - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3 ;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(id)footer;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(UIEdgeInsets)contentInset;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)setScrollingDelegate:(id<PKSpendingSingleSummaryViewControllerDelegate>)arg1 ;
-(void)setVisible:(BOOL)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(id)initWithTransationSource:(id)arg1 account:(id)arg2 transactionGroupPresenter:(id)arg3 summaryPresenter:(id)arg4 currentMonthTransactions:(id)arg5 upcomingScheduledPayments:(id)arg6 ;
-(void)setGestureRecognizerRequiredToFail:(UIGestureRecognizer *)arg1 ;
-(void)_accountsChanged:(id)arg1 ;
-(void)setSummary:(id)arg1 swap:(BOOL)arg2 ;
-(void)setAlphaForTransition:(double)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)setSelectionType:(unsigned long long)arg1 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(PKSpendingSummary *)summary;
-(BOOL)isVisible;
-(void)viewDidLoad;
-(long long)contentInsetAdjustmentBehavior;
-(void)accountServiceAccountResolutionController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(BOOL)arg3 ;
-(unsigned long long)selectionType;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)setContentInsetAdjustmentBehavior:(long long)arg1 ;
-(id)indexPathForSummary;
-(void)_configureHeaderView:(id)arg1 inSection:(unsigned long long)arg2 ;
-(void)_configureFooterView:(id)arg1 inSection:(unsigned long long)arg2 ;
-(void)_configureFooter;
-(unsigned long long)_aggregateCellAtIndex:(unsigned long long)arg1 ;
-(long long)_numberOfNonSpendingTransactionTypeRowsEnabled;
-(void)_applyMaskToCell:(id)arg1 firstInSection:(BOOL)arg2 lastInSection:(BOOL)arg3 ;
-(unsigned long long)_nonSpendingTransactionTypeForRow:(long long)arg1 ;
-(id)_nonSpendingTransactionGroupForType:(unsigned long long)arg1 ;
-(BOOL)_hasHeaderForSection:(unsigned long long)arg1 ;
-(BOOL)_hasFooterForSection:(unsigned long long)arg1 ;
-(void)buttonTappedInFooterView:(id)arg1 ;
-(id<PKSpendingSingleSummaryViewControllerDelegate>)scrollingDelegate;
-(UIGestureRecognizer *)gestureRecognizerRequiredToFail;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)dealloc;
@end

