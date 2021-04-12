/*
* Generated on Thursday, January 14, 2021 at 2:28:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchToShareCore.framework/SearchToShareCore
*/

#import <SearchToShareCore/SearchToShareCore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIViewControllerPreviewingDelegate.h>
#import <libobjc.A.dylib/STSResultDetailViewControllerDelegate.h>
#import <libobjc.A.dylib/MFMailComposeViewControllerDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <libobjc.A.dylib/STSLoadMoreFooterDelegate.h>
#import <libobjc.A.dylib/STSSearchModelDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <libobjc.A.dylib/STSGridLayoutDelegate.h>
#import <libobjc.A.dylib/STSZKWBrowserHeaderViewDelegate.h>
#import <UIKit/UISearchBarDelegate.h>

@protocol UIViewControllerPreviewing, OS_dispatch_queue, STSPickerSelectionDelegate;
@class STSSearchModel, NSUUID, NSMutableArray, NSMutableSet, NSArray, NSIndexPath, STSMailComposeViewController, STSDetailTransitionAnimator, NSObject, SFSearchResult, UIColor, NSString, STSPickerView;

@interface STSPicker : UIViewController <UIViewControllerPreviewingDelegate, STSResultDetailViewControllerDelegate, MFMailComposeViewControllerDelegate, UIViewControllerTransitioningDelegate, STSLoadMoreFooterDelegate, STSSearchModelDelegate, UICollectionViewDataSource, STSGridLayoutDelegate, STSZKWBrowserHeaderViewDelegate, UISearchBarDelegate> {

	STSSearchModel* _searchModel;
	NSUUID* _lastSearchId;
	NSMutableArray* _displayedResults;
	NSMutableSet* _queuedImageURLs;
	unsigned long long _sectionsTag;
	long long _lastInsertedIndexesCount;
	NSMutableSet* _lastInsertedIndexesWaitingToLoad;
	NSArray* _visiblePredictions;
	NSIndexPath* _detailResultIndexPath;
	NSIndexPath* _activeDownloadIndexPath;
	double _activeDownloadProgress;
	id<UIViewControllerPreviewing> _previewingContext;
	STSMailComposeViewController* _feedbackMailComposer;
	STSDetailTransitionAnimator* _detailTransitionAnimator;
	BOOL _isLoadingMoreResults;
	BOOL _needsReloadAfterLayout;
	BOOL _showSuggestions;
	BOOL _isScrolling;
	BOOL _isSnapShotting;
	NSObject*<OS_dispatch_queue> _displayedResultsQueue;
	SFSearchResult* _previewingSearchResult;
	NSMutableSet* _visibleResultsSent;
	CGPoint _startScrollPosition;
	BOOL _debugMode;
	UIColor* _originalColor;
	NSMutableArray* _debugItems;
	NSString* _currentQuery;
	id<STSPickerSelectionDelegate> _selectionDelegate;
	NSString* _headerCellReuseIdentifier;

}

@property (nonatomic,retain) STSPickerView * view; 
@property (assign,nonatomic,__weak) id<STSPickerSelectionDelegate> selectionDelegate;              //@synthesize selectionDelegate=_selectionDelegate - In the implementation block
@property (nonatomic,readonly) STSPickerView * pickerView; 
@property (nonatomic,readonly) NSArray * querySuggestions; 
@property (nonatomic,readonly) NSString * headerCellReuseIdentifier;                               //@synthesize headerCellReuseIdentifier=_headerCellReuseIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2 ;
-(NSArray *)querySuggestions;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)_handleLongPress:(id)arg1 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(long long)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)didReceiveMemoryWarning;
-(id)snapshotImage;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)previewingContext:(id)arg1 commitViewController:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id<STSPickerSelectionDelegate>)selectionDelegate;
-(void)setSelectionDelegate:(id<STSPickerSelectionDelegate>)arg1 ;
-(void)loadView;
-(STSPickerView *)pickerView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)willResignActiveWithConversation:(id)arg1 ;
-(void)willTransitionToPresentationStyle:(unsigned long long)arg1 ;
-(void)sendVisibleResultsFeedback;
-(void)detailViewControllerDidSelectProviderLink:(id)arg1 ;
-(void)detailViewControllerDidInsert:(id)arg1 ;
-(void)updateContentOffset:(double)arg1 ;
-(void)_reportFeedbackDisplayedResultsDidScroll:(BOOL)arg1 ;
-(void)_handleDebugGesture:(id)arg1 ;
-(void)_fetchImageWithURL:(id)arg1 priority:(long long)arg2 forCollectionView:(id)arg3 atIndexPath:(id)arg4 ;
-(void)_updatePredictedSuggestionsForSize:(CGSize)arg1 ;
-(id)_noticeTextForSearchError:(id)arg1 ;
-(void)_presentNoticeWithText:(id)arg1 ;
-(void)_cancelActiveDownload;
-(void)_presentDetailViewControllerForIndexPath:(id)arg1 ;
-(id)getTapToRadarPunchOut:(id)arg1 ;
-(id)_loadMoreFooter;
-(void)_beginDownloadingResultAtIndexPath:(id)arg1 ;
-(void)_loadMoreResultsIfNecessary;
-(id)_detailViewControllerForIndexPath:(id)arg1 ;
-(void)loadMoreFooterDidTapLogo;
-(void)searchModelUpdatedPredictedSuggestions:(id)arg1 ;
-(void)searchModel:(id)arg1 insertedResultsAtIndexPaths:(id)arg2 removedResultsAtIndexPaths:(id)arg3 ;
-(void)headerViewDidSelectSearchButton:(id)arg1 ;
-(void)headerDidSelectCancelButton:(id)arg1 ;
-(void)headerView:(id)arg1 didSelectSuggestionButtonAtIndex:(unsigned long long)arg2 ;
-(void)headerView:(id)arg1 didSearchFor:(id)arg2 ;
-(void)headerView:(id)arg1 didRequestCompletion:(id)arg2 ;
-(void)headerViewDidDeleteText;
-(id)initWithSearchModel:(id)arg1 showSuggestions:(BOOL)arg2 ;
-(void)performZKWSearchQuery;
-(void)performSearchWithQueryString:(id)arg1 requestType:(long long)arg2 ;
-(void)cancelImageDownloads;
-(void)resetContent;
-(NSString *)headerCellReuseIdentifier;
@end

