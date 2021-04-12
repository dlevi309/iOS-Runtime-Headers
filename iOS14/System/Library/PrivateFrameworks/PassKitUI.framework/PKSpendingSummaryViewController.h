/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PKSpendingSummaryFetcherObserver.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/PKSpendingSingleSummaryViewControllerDelegate.h>

@protocol OS_dispatch_source, PKSpendingSummaryViewControllerDelegate;
@class PKTransactionSource, PKAccount, PKPaymentPass, PKSpendingSummaryFetcher, NSCalendar, NSArray, NSString, UIScrollView, NSMutableSet, NSMutableDictionary, NSIndexSet, PKSpendingSummaryFooterContainer, NSObject;

@interface PKSpendingSummaryViewController : UIViewController <PKSpendingSummaryFetcherObserver, UIScrollViewDelegate, PKSpendingSingleSummaryViewControllerDelegate> {

	PKTransactionSource* _transactionSource;
	PKAccount* _account;
	PKPaymentPass* _pass;
	PKSpendingSummaryFetcher* _summaryFetcher;
	NSCalendar* _currentCalendar;
	NSArray* _weeks;
	NSArray* _months;
	NSArray* _years;
	NSString* _navTitle;
	NSArray* _currentDataSet;
	unsigned long long _currentSummaryType;
	unsigned long long _numberOfItems;
	double _currentWidth;
	double _currentHeight;
	BOOL _transitioningMode;
	BOOL _isScrolling;
	BOOL _isDragging;
	BOOL _hasPrefetchedLeft;
	BOOL _hasPrefetchedRight;
	UIScrollView* _scrollView;
	double _collectionViewVerticalOffset;
	CGRect _previousBounds;
	NSArray* _currentMonthTransactions;
	NSMutableSet* _unusedVCs;
	NSArray* _summaryVCs;
	NSMutableDictionary* _indicesToVCMapping;
	NSMutableDictionary* _nonVisibleIndicesToVCMapping;
	NSIndexSet* _visibleIndices;
	unsigned long long _primaryIndex;
	PKSpendingSummaryFooterContainer* _footerView;
	NSMutableDictionary* _pendingCollectionViewUpdates;
	BOOL _isLowEndDevice;
	NSObject*<OS_dispatch_source> _scrollTimer;
	os_unfair_lock_s _lockUpdate;
	NSMutableDictionary* _pendingUpdates;
	unsigned long long _selectionType;
	id<PKSpendingSummaryViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PKSpendingSummaryViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)invalidatedSpendingSummaryOfType:(unsigned long long)arg1 startingWithDate:(id)arg2 ;
-(id<PKSpendingSummaryViewControllerDelegate>)delegate;
-(id)initWithTransactionSource:(id)arg1 account:(id)arg2 fetcher:(id)arg3 weeks:(id)arg4 months:(id)arg5 years:(id)arg6 type:(unsigned long long)arg7 unit:(unsigned long long)arg8 currentMonthTransactions:(id)arg9 upcomingScheduledPayments:(id)arg10 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)_changeModeTo:(unsigned long long)arg1 ;
-(double)_startOfItemAtIndex:(unsigned long long)arg1 ;
-(void)_loadSummariesForContentOffset:(CGPoint)arg1 ;
-(id)_dequeueVCForIndex:(unsigned long long)arg1 ;
-(void)_layoutCollectionViews;
-(double)_yPositionForNonPrimaryVCs;
-(void)_reportTappedButtonWithTag:(id)arg1 ;
-(unsigned long long)_newDataSetIndexAfterTransitionFromMode:(unsigned long long)arg1 toMode:(unsigned long long)arg2 ;
-(void)_reloadDataForVCAtIndex:(unsigned long long)arg1 swap:(BOOL)arg2 ;
-(void)_reloadPendingVCs;
-(void)_updatePrimaryViewScrolling;
-(BOOL)_canReloadVCs;
-(id)_dequeueNonVisibleVCForIndex:(unsigned long long)arg1 ;
-(id)_visibileIndicesAtContentOffset:(CGPoint)arg1 ;
-(void)_retireVCForIndex:(unsigned long long)arg1 ;
-(void)_updateAlphaAndFooterDuringTransition;
-(unsigned long long)_indexAtContentOffset:(CGPoint)arg1 ;
-(void)_switchPrimaryIndexToIndex:(unsigned long long)arg1 ;
-(void)_scrollViewStoppedScrolling;
-(id)_recoverUnusedVC;
-(double)_endOfItemAtIndex:(unsigned long long)arg1 ;
-(void)spendingSingleSummaryViewController:(id)arg1 scrollViewDidScroll:(id)arg2 ;
-(void)spendingSingleSummaryViewController:(id)arg1 changedSelection:(unsigned long long)arg2 ;
-(unsigned long long)_primaryIndexAtOffset:(CGPoint)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)_updateScrollViewContentSize;
-(void)setDelegate:(id<PKSpendingSummaryViewControllerDelegate>)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(double)_transitionProgress;
-(void)dealloc;
-(void)invalidatedSummariesAvailable;
@end

