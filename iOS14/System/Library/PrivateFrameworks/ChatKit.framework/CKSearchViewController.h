/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKScrollViewController.h>
#import <libobjc.A.dylib/CKSearchResultsTitleHeaderCellDelegate.h>
#import <UIKit/UIContextMenuInteractionDelegate.h>
#import <UIKit/UICollectionViewDragDelegate.h>
#import <UIKit/UISearchResultsUpdating.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <libobjc.A.dylib/CKSearchControllerDelegate.h>

@protocol CKContainerSearchControllerDelegate;
@class NSArray, NSString, CKSearchCollectionView, UICollectionViewDiffableDataSource, UICollectionViewCompositionalLayout, NSMutableSet, IMTimingCollection, UIContextMenuInteraction;

@interface CKSearchViewController : CKScrollViewController <CKSearchResultsTitleHeaderCellDelegate, UIContextMenuInteractionDelegate, UICollectionViewDragDelegate, UISearchResultsUpdating, UICollectionViewDelegate, CKSearchControllerDelegate> {

	BOOL _insetCollectionViewForMacToolbar;
	BOOL _searchInProgress;
	BOOL _isInitialLoad;
	id<CKContainerSearchControllerDelegate> _delegate;
	unsigned long long _mode;
	NSArray* _searchControllers;
	NSString* _searchText;
	CKSearchCollectionView* _collectionView;
	UICollectionViewDiffableDataSource* _dataSource;
	UICollectionViewCompositionalLayout* _collectionViewLayout;
	/*^block*/id _performAfterInitialLoadBlock;
	NSMutableSet* _searchCompleteControllerSet;
	IMTimingCollection* _timingCollection;
	UIContextMenuInteraction* _contextMenuInteraction;

}

@property (nonatomic,retain) NSArray * searchControllers;                                             //@synthesize searchControllers=_searchControllers - In the implementation block
@property (nonatomic,copy) NSString * searchText;                                                     //@synthesize searchText=_searchText - In the implementation block
@property (assign,nonatomic) BOOL searchInProgress;                                                   //@synthesize searchInProgress=_searchInProgress - In the implementation block
@property (nonatomic,retain) CKSearchCollectionView * collectionView;                                 //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) UICollectionViewDiffableDataSource * dataSource;                         //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) UICollectionViewCompositionalLayout * collectionViewLayout;              //@synthesize collectionViewLayout=_collectionViewLayout - In the implementation block
@property (assign,nonatomic) BOOL isInitialLoad;                                                      //@synthesize isInitialLoad=_isInitialLoad - In the implementation block
@property (nonatomic,copy) id performAfterInitialLoadBlock;                                           //@synthesize performAfterInitialLoadBlock=_performAfterInitialLoadBlock - In the implementation block
@property (nonatomic,retain) NSMutableSet * searchCompleteControllerSet;                              //@synthesize searchCompleteControllerSet=_searchCompleteControllerSet - In the implementation block
@property (nonatomic,retain) IMTimingCollection * timingCollection;                                   //@synthesize timingCollection=_timingCollection - In the implementation block
@property (nonatomic,retain) UIContextMenuInteraction * contextMenuInteraction;                       //@synthesize contextMenuInteraction=_contextMenuInteraction - In the implementation block
@property (assign,nonatomic,__weak) id<CKContainerSearchControllerDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long mode;                                                 //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) BOOL insetCollectionViewForMacToolbar;                                   //@synthesize insetCollectionViewForMacToolbar=_insetCollectionViewForMacToolbar - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isInitialLoad;
-(void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4 ;
-(void)setIsInitialLoad:(BOOL)arg1 ;
-(id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(CGPoint)arg2 ;
-(void)viewWillLayoutSubviews;
-(id)collectionView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3 ;
-(BOOL)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(unsigned long long)mode;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(void)setCollectionView:(CKSearchCollectionView *)arg1 ;
-(void)contextMenuInteraction:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3 ;
-(UIContextMenuInteraction *)contextMenuInteraction;
-(UIEdgeInsets)parentMarginInsetsForSearchController:(id)arg1 ;
-(id<CKContainerSearchControllerDelegate>)delegate;
-(void)findNext;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)cancelCurrentQuery;
-(id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2 ;
-(void)searchEnded;
-(void)setSearchControllers:(NSArray *)arg1 ;
-(NSArray *)searchControllers;
-(void)_searchImmediately;
-(id)layoutSectionForController:(id)arg1 withEnvironment:(id)arg2 ;
-(void)setSearchInProgress:(BOOL)arg1 ;
-(NSMutableSet *)searchCompleteControllerSet;
-(id)globalLayoutConfiguration;
-(id)_identifiersToAppendForResults:(id)arg1 ;
-(Class)_searchResultsHeaderClass;
-(BOOL)_needsIndexing;
-(void)_configureIndexingCell:(id)arg1 ;
-(void)_searchResultHeaderButtonTapped:(id)arg1 ;
-(CKSearchCollectionView *)collectionView;
-(id)_newSnapshotForCurrentControllerState;
-(id)headerBoundryItemsForController:(id)arg1 withEnvironment:(id)arg2 ;
-(id)footerBoundryItemsForController:(id)arg1 withEnvironment:(id)arg2 ;
-(UICollectionViewDiffableDataSource *)dataSource;
-(void)setMode:(unsigned long long)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)setSearchCompleteControllerSet:(NSMutableSet *)arg1 ;
-(id)performAfterInitialLoadBlock;
-(id)cellForSupplementryItemInCollectionView:(id)arg1 atIndexPath:(id)arg2 forSupplementryViewKind:(id)arg3 ;
-(BOOL)insetCollectionViewForMacToolbar;
-(void)setPerformAfterInitialLoadBlock:(id)arg1 ;
-(id)_layoutSectionForController:(id)arg1 withEnvironment:(id)arg2 ;
-(BOOL)searchInProgress;
-(BOOL)_hasSelectedItemAtIndexPath:(id*)arg1 ;
-(void)findPrevious;
-(long long)rowIndexFindNextForIndex:(long long)arg1 numberOfTotalItems:(long long)arg2 ;
-(void)_selectItemForFindAtIndexPath:(id)arg1 ;
-(long long)rowIndexFindPreviousForIndex:(long long)arg1 numberOfTotalItems:(long long)arg2 ;
-(void)searchController:(id)arg1 requestsPresentationOfAlertController:(id)arg2 atRect:(CGRect)arg3 ;
-(void)_registerCells;
-(id)layoutSectionForSection:(long long)arg1 withEnvironment:(id)arg2 ;
-(void)searchResultsTitleCellShowAllButtonTapped:(id)arg1 ;
-(void)setDelegate:(id<CKContainerSearchControllerDelegate>)arg1 ;
-(void)setDataSource:(UICollectionViewDiffableDataSource *)arg1 ;
-(void)viewLayoutMarginsDidChange;
-(double)containerWidthForController:(id)arg1 ;
-(NSString *)searchText;
-(BOOL)_currentModeIsDetails;
-(void)searchController:(id)arg1 requestsPresentationOfShareController:(id)arg2 atRect:(CGRect)arg3 ;
-(void)reloadData;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)cellForItemInCollectionView:(id)arg1 atIndexPath:(id)arg2 withIdentifier:(id)arg3 ;
-(void)setInsetCollectionViewForMacToolbar:(BOOL)arg1 ;
-(void)searchWithText:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setCollectionViewLayout:(UICollectionViewCompositionalLayout *)arg1 ;
-(void)setSearchText:(NSString *)arg1 ;
-(void)setTimingCollection:(IMTimingCollection *)arg1 ;
-(IMTimingCollection *)timingCollection;
-(void)searchController:(id)arg1 requestsItemDeletionAtIndexPath:(id)arg2 ;
-(void)deleteTransferGUID:(id)arg1 ;
-(UICollectionViewCompositionalLayout *)collectionViewLayout;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)setContextMenuInteraction:(UIContextMenuInteraction *)arg1 ;
-(void)loadView;
-(id)searchController:(id)arg1 conversationForChatGUID:(id)arg2 ;
-(void)searchControllerContentsDidChange:(id)arg1 ;
-(void)deleteMessageItem:(id)arg1 ;
-(id)initWithSearchControllerClasses:(id)arg1 ;
-(BOOL)conversationSearchHasResult;
-(double)widthForDeterminingAvatarVisibility;
-(BOOL)contextMenuInteractionShouldBegin:(id)arg1 ;
-(UIEdgeInsets)navigationBarInsetsWithoutPalette;
-(id)scrollView;
-(void)viewDidLayoutSubviews;
-(id)containerTraitCollectionForController:(id)arg1 ;
-(BOOL)_isInternalInstall;
-(void)dealloc;
@end

