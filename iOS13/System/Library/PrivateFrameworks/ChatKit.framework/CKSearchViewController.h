/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKScrollViewController.h>
#import <libobjc.A.dylib/CKSearchResultsTitleHeaderCellDelegate.h>
#import <libobjc.A.dylib/_UIContextMenuInteractionDelegate.h>
#import <UIKit/UISearchResultsUpdating.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <libobjc.A.dylib/CKSearchControllerDelegate.h>

@protocol CKContainerSearchControllerDelegate;
@class NSArray, NSString, CKSearchCollectionView, UICollectionViewDiffableDataSource, UICollectionViewCompositionalLayout, NSMutableSet, IMTimingCollection, _UIContextMenuInteraction;

@interface CKSearchViewController : CKScrollViewController <CKSearchResultsTitleHeaderCellDelegate, _UIContextMenuInteractionDelegate, UISearchResultsUpdating, UICollectionViewDelegate, CKSearchControllerDelegate> {

	BOOL _isInitialLoad;
	BOOL _suppressNextReloadAnimation;
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
	_UIContextMenuInteraction* _contextMenuInteraction;

}

@property (nonatomic,retain) NSArray * searchControllers;                                             //@synthesize searchControllers=_searchControllers - In the implementation block
@property (nonatomic,copy) NSString * searchText;                                                     //@synthesize searchText=_searchText - In the implementation block
@property (nonatomic,retain) CKSearchCollectionView * collectionView;                                 //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) UICollectionViewDiffableDataSource * dataSource;                         //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) UICollectionViewCompositionalLayout * collectionViewLayout;              //@synthesize collectionViewLayout=_collectionViewLayout - In the implementation block
@property (assign,nonatomic) BOOL isInitialLoad;                                                      //@synthesize isInitialLoad=_isInitialLoad - In the implementation block
@property (assign,nonatomic) BOOL suppressNextReloadAnimation;                                        //@synthesize suppressNextReloadAnimation=_suppressNextReloadAnimation - In the implementation block
@property (nonatomic,copy) id performAfterInitialLoadBlock;                                           //@synthesize performAfterInitialLoadBlock=_performAfterInitialLoadBlock - In the implementation block
@property (nonatomic,retain) NSMutableSet * searchCompleteControllerSet;                              //@synthesize searchCompleteControllerSet=_searchCompleteControllerSet - In the implementation block
@property (nonatomic,retain) IMTimingCollection * timingCollection;                                   //@synthesize timingCollection=_timingCollection - In the implementation block
@property (nonatomic,retain) _UIContextMenuInteraction * contextMenuInteraction;                      //@synthesize contextMenuInteraction=_contextMenuInteraction - In the implementation block
@property (assign,nonatomic,__weak) id<CKContainerSearchControllerDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long mode;                                                 //@synthesize mode=_mode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<CKContainerSearchControllerDelegate>)delegate;
-(void)setDelegate:(id<CKContainerSearchControllerDelegate>)arg1 ;
-(void)setMode:(unsigned long long)arg1 ;
-(unsigned long long)mode;
-(UICollectionViewDiffableDataSource *)dataSource;
-(void)setDataSource:(UICollectionViewDiffableDataSource *)arg1 ;
-(void)loadView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(CKSearchCollectionView *)collectionView;
-(void)setCollectionViewLayout:(UICollectionViewCompositionalLayout *)arg1 ;
-(void)reloadData;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(NSString *)searchText;
-(void)setCollectionView:(CKSearchCollectionView *)arg1 ;
-(UICollectionViewCompositionalLayout *)collectionViewLayout;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4 ;
-(_UIContextMenuInteraction *)contextMenuInteraction;
-(id)scrollView;
-(void)viewLayoutMarginsDidChange;
-(BOOL)contextMenuInteractionShouldBegin:(id)arg1 ;
-(id)contextMenuInteraction:(id)arg1 previewForHighlightingAtLocation:(CGPoint)arg2 ;
-(id)contextMenuInteraction:(id)arg1 actionsForMenuAtLocation:(CGPoint)arg2 withSuggestedActions:(id)arg3 ;
-(void)setSearchText:(NSString *)arg1 ;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(BOOL)_isInternalInstall;
-(void)searchWithText:(id)arg1 ;
-(BOOL)isInitialLoad;
-(id)searchController:(id)arg1 conversationForChatGUID:(id)arg2 ;
-(void)searchControllerContentsDidChange:(id)arg1 ;
-(void)deleteMessageItem:(id)arg1 ;
-(UIEdgeInsets)parentMarginInsetsForSearchController:(id)arg1 ;
-(void)cancelCurrentQuery;
-(void)searchEnded;
-(id)layoutSectionForSection:(long long)arg1 withEnvironment:(id)arg2 ;
-(id)cellForItemInCollectionView:(id)arg1 atIndexPath:(id)arg2 withIdentifier:(id)arg3 ;
-(void)setTimingCollection:(IMTimingCollection *)arg1 ;
-(IMTimingCollection *)timingCollection;
-(void)searchController:(id)arg1 requestsItemDeletionAtIndexPath:(id)arg2 ;
-(void)deleteTransferGUID:(id)arg1 ;
-(void)setContextMenuInteraction:(_UIContextMenuInteraction *)arg1 ;
-(id)initWithSearchControllerClasses:(id)arg1 ;
-(id)containerTraitCollectionForController:(id)arg1 ;
-(void)searchResultsTitleCellShowAllButtonTapped:(id)arg1 ;
-(double)containerWidthForController:(id)arg1 ;
-(BOOL)_currentModeIsDetails;
-(void)searchController:(id)arg1 requestsPresentationOfShareController:(id)arg2 atRect:(CGRect)arg3 ;
-(NSArray *)searchControllers;
-(void)setSearchControllers:(NSArray *)arg1 ;
-(void)_searchImmediately;
-(NSMutableSet *)searchCompleteControllerSet;
-(id)globalLayoutConfiguration;
-(void)_registerCells;
-(id)_identifiersToAppendForResults:(id)arg1 ;
-(Class)_searchResultsHeaderClass;
-(BOOL)_needsIndexing;
-(void)_configureIndexingCell:(id)arg1 ;
-(id)_newSnapshotForCurrentControllerState;
-(id)headerBoundryItemsForController:(id)arg1 withEnvironment:(id)arg2 ;
-(id)footerBoundryItemsForController:(id)arg1 withEnvironment:(id)arg2 ;
-(void)setIsInitialLoad:(BOOL)arg1 ;
-(void)setSearchCompleteControllerSet:(NSMutableSet *)arg1 ;
-(id)cellForSupplementryItemInCollectionView:(id)arg1 atIndexPath:(id)arg2 forSupplementryViewKind:(id)arg3 ;
-(id)performAfterInitialLoadBlock;
-(void)setPerformAfterInitialLoadBlock:(id)arg1 ;
-(void)setSuppressNextReloadAnimation:(BOOL)arg1 ;
-(id)_layoutSectionForController:(id)arg1 withEnvironment:(id)arg2 ;
-(BOOL)suppressNextReloadAnimation;
-(void)searchController:(id)arg1 requestsPresentationOfAlertController:(id)arg2 atRect:(CGRect)arg3 ;
-(void)viewWillDissapeaer:(BOOL)arg1 ;
@end

