/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UICollectionViewController.h>
#import <libobjc.A.dylib/CNAvatarViewDelegate.h>
#import <libobjc.A.dylib/PKAccountServiceObserver.h>
#import <libobjc.A.dylib/PKSearchServiceObserver.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <libobjc.A.dylib/PKWorldRegionUpdaterObserver.h>
#import <libobjc.A.dylib/PKForegroundActiveArbiterObserver.h>
#import <UIKit/UISearchResultsUpdating.h>

@protocol PKPaymentDataProvider, OS_dispatch_queue, OS_dispatch_source;
@class PKDashboardTitleHeaderView, PKSearchSuggestionCollectionViewCell, PKDashboardPaymentTransactionItemPresenter, PKTransactionGroupItemPresenter, PKTransactionGroupThumbnailPresenter, PKWorldRegionUpdater, PKSearchService, PKAccountService, PKPassLibrary, NSMutableDictionary, PKTransactionSource, NSString, NSMutableOrderedSet, PKSearchQuery, NSObject, NSArray, PKTransactionHistoryViewController, UILabel;

@interface PKSearchResultsViewController : UICollectionViewController <CNAvatarViewDelegate, PKAccountServiceObserver, PKSearchServiceObserver, UICollectionViewDelegateFlowLayout, PKWorldRegionUpdaterObserver, PKForegroundActiveArbiterObserver, UISearchResultsUpdating> {

	PKDashboardTitleHeaderView* _sampleHeaderView;
	PKSearchSuggestionCollectionViewCell* _sampleSuggestionCell;
	PKDashboardPaymentTransactionItemPresenter* _transactionPresenter;
	PKTransactionGroupItemPresenter* _transactionGroupPresenter;
	PKTransactionGroupThumbnailPresenter* _thumbnailPresenter;
	PKWorldRegionUpdater* _regionUpdater;
	PKSearchService* _searchService;
	PKAccountService* _accountService;
	PKPassLibrary* _passLibrary;
	id<PKPaymentDataProvider> _paymentDataProvider;
	NSMutableDictionary* _accountsPerIdentifier;
	PKTransactionSource* _transactionSource;
	os_unfair_lock_s _lockQuery;
	NSString* _currentQueryIdentifier;
	NSMutableOrderedSet* _lastQueries;
	PKSearchQuery* _queryForCurrentResults;
	BOOL _queryInProgress;
	NSMutableDictionary* _lastResultsPerQueryIdentifier;
	NSObject*<OS_dispatch_queue> _queuePrepareResults;
	NSArray* _transactions;
	NSArray* _categories;
	NSArray* _merchants;
	NSArray* _locations;
	NSArray* _people;
	NSArray* _suggestions;
	NSMutableDictionary* _passesForResults;
	BOOL _hasReceivedResults;
	BOOL _hasLoadedRequiredData;
	unsigned long long _presentationCounter;
	unsigned long long _seeAllPresentationCounter;
	PKTransactionHistoryViewController* _seeAllHistoryVC;
	NSObject*<OS_dispatch_source> _seeAllPresentationTimer;
	BOOL _queryHasNoResults;
	BOOL _fullResultsNotAvailable;
	BOOL _hasSearchableContent;
	UILabel* _noResultsTitleLabel;
	UILabel* _noResultsBodyLabel;
	BOOL _queryIsReplay;
	BOOL _keyboardVisible;
	CGRect _keyboardFrame;
	BOOL _usingThumbnailLayout;
	BOOL _atNaturalRestingBounds;
	BOOL _isScrolling;
	SCD_Struct_PK5 _foregroundActiveState;
	/*^block*/id _pendingPreflightCompletion;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3 ;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(id)presentingViewControllerForAvatarView:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(void)foregroundActiveArbiter:(id)arg1 didUpdateForegroundActiveState:(SCD_Struct_PK5)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)invalidateSearchResults;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)keyboardWillChange:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(double)_thumbnailInset;
-(void)_scrollViewStoppedScrolling;
-(void)accountRemoved:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)_updateLayoutForKeyboardAction:(/*^block*/id)arg1 ;
-(void)_updateAccounts;
-(id)_thumbnailLayout;
-(id)_queryWithIdentifier:(id)arg1 ;
-(void)_updateUIIfPossibleWithResults:(id)arg1 query:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_initiateSeeAllPresentationForQuery:(id)arg1 ;
-(void)_configureSuggestionCell:(id)arg1 withSuggestion:(id)arg2 ;
-(id)_resultsLayout;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)preflightWithCompletion:(/*^block*/id)arg1 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(void)_updateUIWithResults:(id)arg1 forQuery:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_saveResults:(id)arg1 forQuery:(id)arg2 ;
-(BOOL)_isQueryIdentifierMatchingCurrentQuery:(id)arg1 ;
-(void)_udpateOrPresentSeeAllViewControllerForQuery:(id)arg1 groups:(id)arg2 transactions:(id)arg3 ;
-(BOOL)_updateGroup:(id)arg1 withRegion:(id)arg2 ;
-(id)_historyViewControllerForQuery:(id)arg1 groups:(id)arg2 headerGroup:(id)arg3 ;
-(void)_seeAllHeaderGroupForQuery:(id)arg1 groups:(id)arg2 transactions:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)viewDidLoad;
-(void)searchDidCompleteWithError:(id)arg1 results:(id)arg2 forIdentifier:(id)arg3 ;
-(void)worldRegionUpdated:(id)arg1 updatedRegion:(id)arg2 ;
-(void)accountAdded:(id)arg1 ;
-(id)_searchController;
-(void)keyboardWillShow:(id)arg1 ;
-(void)accountChanged:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
-(id)initWithPaymentDataProvider:(id)arg1 transactionSource:(id)arg2 ;
-(void)_configureHeaderView:(id)arg1 inSection:(unsigned long long)arg2 ;
-(void)_applyMaskToCell:(id)arg1 firstInSection:(BOOL)arg2 lastInSection:(BOOL)arg3 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(long long)_numberOfItemsInSection:(long long)arg1 ;
-(double)_thumbnailSpacing;
@end

