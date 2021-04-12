/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UICollectionViewController.h>
#import <libobjc.A.dylib/_GKStateMachineDelegate.h>
#import <libobjc.A.dylib/GKCollectionViewDataSourceDelegate.h>
#import <UIKit/UISearchBarDelegate.h>
#import <UIKit/UITextFieldDelegate.h>
#import <libobjc.A.dylib/GKSegmentedSectionDataSourceEventHandler.h>

@protocol UICollectionViewDataSource, OS_dispatch_queue;
@class GKColorPalette, GKPlaceholderView, UINavigationController, GKSearchBar, NSString, GKLoadableContentStateMachine, UICollectionViewLayout, UIActivityIndicatorView, NSMapTable, NSObject, NSUUID, GKSwipeToEditStateMachine;

@interface GKCollectionViewController : UICollectionViewController <_GKStateMachineDelegate, GKCollectionViewDataSourceDelegate, UISearchBarDelegate, UITextFieldDelegate, GKSegmentedSectionDataSourceEventHandler> {

	BOOL _skipLoadAfterViewDidLoad;
	BOOL _shouldSlideInContents;
	BOOL _showSupplementaryViewsWhileLoading;
	BOOL _readyToDisplayData;
	BOOL _active;
	BOOL _hasViewFactories;
	BOOL _didSlideIn;
	GKColorPalette* _colorPalette;
	id<UICollectionViewDataSource> _dataSource;
	GKPlaceholderView* _placeholderView;
	UINavigationController* _placeholderNavigationController;
	GKSearchBar* _activeSearchBar;
	NSString* _currentSearchText;
	GKLoadableContentStateMachine* _loadingMachine;
	UICollectionViewLayout* _defaultLayout;
	UIActivityIndicatorView* _loadingIndicatorView;
	long long _previousOrientation;
	long long _appearCount;
	NSMapTable* _reusableViewsIHaveSeen;
	NSObject*<OS_dispatch_queue> _batchUpdateQueue;
	long long _batchUpdateCount;
	NSUUID* _currentUpdateID;
	GKSwipeToEditStateMachine* _swipeStateMachine;

}

@property (assign,nonatomic) BOOL skipLoadAfterViewDidLoad; 
@property (nonatomic,retain) GKLoadableContentStateMachine * loadingMachine;                        //@synthesize loadingMachine=_loadingMachine - In the implementation block
@property (nonatomic,retain) UICollectionViewLayout * defaultLayout;                                //@synthesize defaultLayout=_defaultLayout - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * loadingIndicatorView;                        //@synthesize loadingIndicatorView=_loadingIndicatorView - In the implementation block
@property (assign,nonatomic) long long previousOrientation;                                         //@synthesize previousOrientation=_previousOrientation - In the implementation block
@property (assign) BOOL active;                                                                     //@synthesize active=_active - In the implementation block
@property (assign) BOOL hasViewFactories;                                                           //@synthesize hasViewFactories=_hasViewFactories - In the implementation block
@property (assign) BOOL didSlideIn;                                                                 //@synthesize didSlideIn=_didSlideIn - In the implementation block
@property (assign) long long appearCount;                                                           //@synthesize appearCount=_appearCount - In the implementation block
@property (nonatomic,retain) NSMapTable * reusableViewsIHaveSeen;                                   //@synthesize reusableViewsIHaveSeen=_reusableViewsIHaveSeen - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> batchUpdateQueue;                         //@synthesize batchUpdateQueue=_batchUpdateQueue - In the implementation block
@property (assign) long long batchUpdateCount;                                                      //@synthesize batchUpdateCount=_batchUpdateCount - In the implementation block
@property (retain) NSUUID * currentUpdateID;                                                        //@synthesize currentUpdateID=_currentUpdateID - In the implementation block
@property (nonatomic,retain) GKSwipeToEditStateMachine * swipeStateMachine;                         //@synthesize swipeStateMachine=_swipeStateMachine - In the implementation block
@property (nonatomic,retain) id<UICollectionViewDataSource> dataSource;                             //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) GKColorPalette * colorPalette;                                         //@synthesize colorPalette=_colorPalette - In the implementation block
@property (assign,nonatomic) BOOL shouldSlideInContents;                                            //@synthesize shouldSlideInContents=_shouldSlideInContents - In the implementation block
@property (assign,nonatomic) BOOL showSupplementaryViewsWhileLoading;                               //@synthesize showSupplementaryViewsWhileLoading=_showSupplementaryViewsWhileLoading - In the implementation block
@property (nonatomic,readonly) NSString * loadingState; 
@property (nonatomic,readonly) BOOL readyToDisplayData;                                             //@synthesize readyToDisplayData=_readyToDisplayData - In the implementation block
@property (nonatomic,retain) GKPlaceholderView * placeholderView;                                   //@synthesize placeholderView=_placeholderView - In the implementation block
@property (nonatomic,retain) UINavigationController * placeholderNavigationController;              //@synthesize placeholderNavigationController=_placeholderNavigationController - In the implementation block
@property (nonatomic,retain) GKSearchBar * activeSearchBar;                                         //@synthesize activeSearchBar=_activeSearchBar - In the implementation block
@property (nonatomic,retain) NSString * currentSearchText;                                          //@synthesize currentSearchText=_currentSearchText - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_shouldForwardViewWillTransitionToSize;
+(id)_initializeSafeCategoryFromValidationManager;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4 ;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(BOOL)active;
-(NSString *)currentSearchText;
-(void)setActive:(BOOL)arg1 ;
-(void)setPlaceholderView:(GKPlaceholderView *)arg1 ;
-(void)searchBarCancelButtonClicked:(id)arg1 ;
-(void)segmentedSectionDataSource:(id)arg1 inSection:(unsigned long long)arg2 didSelectDataSourceWithIndex:(long long)arg3 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(GKPlaceholderView *)placeholderView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setNeedsReload;
-(void)configureViewFactories;
-(id)collectionView;
-(void)dataSource:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2 ;
-(void)dataSource:(id)arg1 didRemoveItemsAtIndexPaths:(id)arg2 ;
-(void)dataSource:(id)arg1 didRefreshItemsAtIndexPaths:(id)arg2 ;
-(void)dataSource:(id)arg1 didMoveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)dataSource:(id)arg1 didInsertSections:(id)arg2 ;
-(void)dataSource:(id)arg1 didRemoveSections:(id)arg2 ;
-(void)dataSource:(id)arg1 didRefreshSections:(id)arg2 ;
-(void)dataSource:(id)arg1 didMoveSection:(long long)arg2 toSection:(long long)arg3 ;
-(void)dataSourceDidReloadData:(id)arg1 ;
-(void)dataSource:(id)arg1 performBatchUpdate:(/*^block*/id)arg2 complete:(/*^block*/id)arg3 ;
-(id<UICollectionViewDataSource>)dataSource;
-(long long)appearCount;
-(void)configureDataSource;
-(void)setShouldSlideInContents:(BOOL)arg1 ;
-(void)setDefaultLayout:(UICollectionViewLayout *)arg1 ;
-(void)didEnterRefreshingState;
-(void)didExitRefreshingState;
-(void)setColorPalette:(GKColorPalette *)arg1 ;
-(void)_gkSetContentsNeedUpdateWithHandler:(/*^block*/id)arg1 ;
-(GKColorPalette *)colorPalette;
-(id)_gkRecursiveDescription;
-(void)setDataSource:(id<UICollectionViewDataSource>)arg1 ;
-(void)viewLayoutMarginsDidChange;
-(void)swipeToDeleteCell:(id)arg1 ;
-(BOOL)didSlideIn;
-(void)willDismissActionSheetFromCell:(id)arg1 ;
-(void)setReusableViewsIHaveSeen:(NSMapTable *)arg1 ;
-(void)loadDataWithCompletionHandlerAndError:(/*^block*/id)arg1 ;
-(void)setPreviousOrientation:(long long)arg1 ;
-(void)updateLayoutGuideOffsets;
-(void)clearSelectionHighlight;
-(BOOL)shouldSlideInContents;
-(BOOL)showSupplementaryViewsWhileLoading;
-(long long)previousOrientation;
-(void)stopLoadingIndicatorWithoutAnimation;
-(id)defaultColorPalette;
-(void)setCurrentSearchText:(NSString *)arg1 ;
-(UIActivityIndicatorView *)loadingIndicatorView;
-(void)setLoadingIndicatorView:(UIActivityIndicatorView *)arg1 ;
-(void)viewDidLoad;
-(void)hidePlaceholderAnimated:(BOOL)arg1 ;
-(void)updateDynamicColumnCountsForViewSize:(CGSize)arg1 ;
-(void)_systemContentSizeSettingDidChange;
-(void)setActiveSearchBar:(GKSearchBar *)arg1 ;
-(void)clearButtonPressed:(id)arg1 ;
-(id)currentSearchTerms;
-(void)_finishUpdates:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_applyUpdates:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)batchUpdateQueue;
-(void)didDisplayData;
-(void)_loadDataWithCompletionHandlerAndError:(/*^block*/id)arg1 ;
-(void)setCurrentUpdateID:(NSUUID *)arg1 ;
-(id)footerViewAboveShowMoreViewAtIndexPath:(id)arg1 ;
-(double)showMoreTextMarginAtIndexPath:(id)arg1 ;
-(void)showPlaceholderWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 animated:(BOOL)arg4 block:(/*^block*/id)arg5 ;
-(void)slideInContents;
-(void)_reallyStartLoadingIndicator;
-(id)initWithCollectionViewLayout:(id)arg1 ;
-(void)showCollectionView;
-(void)setIsReadyToDisplayData:(BOOL)arg1 ;
-(void)didBecomeReadyToDisplayData;
-(UINavigationController *)placeholderNavigationController;
-(void)addPlaceholderViewToView:(id)arg1 ;
-(void)setPlaceholderNavigationController:(UINavigationController *)arg1 ;
-(void)didTouchShowMore:(id)arg1 ;
-(id)gkDataSource;
-(void)dataSource:(id)arg1 didUpdatePlaceholderVisibility:(BOOL)arg2 ;
-(void)dataSourceDidMoveSectionsWithItems:(id)arg1 ;
-(void)updateSelectionHighlight;
-(id)nearestSelectableIndexPath:(id)arg1 ;
-(void)_gkRefreshContentsForDataType:(unsigned)arg1 userInfo:(id)arg2 ;
-(BOOL)_gkShouldRefreshContentsForDataType:(unsigned)arg1 userInfo:(id)arg2 ;
-(void)applyShowMoreLayoutAttributesForShowMoreView:(id)arg1 atIndexPath:(id)arg2 ;
-(void)didExitNoContentState;
-(void)stateDidChangeFromNoContentStateToLoadingState;
-(void)stateDidChangeFromErrorStateToLoadingState;
-(void)stateDidChangeFromLoadedStateToLoadingState;
-(void)stateDidChangeFromNilToLoadingState;
-(void)didExitErrorState;
-(void)completeWhenReadyToDisplayData:(/*^block*/id)arg1 ;
-(void)setShowSupplementaryViewsWhileLoading:(BOOL)arg1 ;
-(BOOL)readyToDisplayData;
-(GKSearchBar *)activeSearchBar;
-(void)searchBarTextDidBeginEditing:(id)arg1 ;
-(void)searchBarSearchButtonClicked:(id)arg1 ;
-(BOOL)hasViewFactories;
-(void)setHasViewFactories:(BOOL)arg1 ;
-(void)setDidSlideIn:(BOOL)arg1 ;
-(void)setAppearCount:(long long)arg1 ;
-(NSMapTable *)reusableViewsIHaveSeen;
-(void)setBatchUpdateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(long long)batchUpdateCount;
-(void)setBatchUpdateCount:(long long)arg1 ;
-(NSUUID *)currentUpdateID;
-(GKSwipeToEditStateMachine *)swipeStateMachine;
-(void)setSwipeStateMachine:(GKSwipeToEditStateMachine *)arg1 ;
-(void)shutActionPaneAnimated:(BOOL)arg1 ;
-(void)setSkipLoadAfterViewDidLoad:(BOOL)arg1 ;
-(BOOL)skipLoadAfterViewDidLoad;
-(GKLoadableContentStateMachine *)loadingMachine;
-(void)didEnterLoadedState;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)searchBarTextDidEndEditing:(id)arg1 ;
-(void)updateMetrics;
-(void)stateWillChange;
-(void)stateDidChange;
-(void)didEnterLoadingState;
-(void)didExitLoadingState;
-(void)didEnterNoContentState;
-(void)didEnterErrorState;
-(UICollectionViewLayout *)defaultLayout;
-(void)didExitLoadedState;
-(void)setLoadingMachine:(GKLoadableContentStateMachine *)arg1 ;
-(void)startLoadingIndicator;
-(void)stopLoadingIndicator;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)loadView;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(BOOL)searchBarShouldBeginEditing:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)invalidateSearch;
-(void)dealloc;
-(void)refreshContentsForDataType:(unsigned)arg1 userInfo:(id)arg2 updateNotifier:(id)arg3 ;
-(NSString *)loadingState;
-(BOOL)hasLoaded;
@end

