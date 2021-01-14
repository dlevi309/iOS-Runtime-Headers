/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUCollectionViewController.h>
#import <libobjc.A.dylib/HFExecutionEnvironmentObserver.h>
#import <UIKit/UICollectionViewDataSourcePrefetching.h>
#import <libobjc.A.dylib/HFItemManagerDelegate.h>
#import <libobjc.A.dylib/HUItemManagerContainer.h>
#import <libobjc.A.dylib/HUItemPresentationContainer.h>
#import <libobjc.A.dylib/HUPreloadableViewController.h>

@protocol NACancelable;
@class HFItemManager, HFItem, NSMutableSet, NSMutableArray, NSHashTable, NSString;

@interface HUItemCollectionViewController : HUCollectionViewController <HFExecutionEnvironmentObserver, UICollectionViewDataSourcePrefetching, HFItemManagerDelegate, HUItemManagerContainer, HUItemPresentationContainer, HUPreloadableViewController> {

	BOOL _wantsPreferredContentSize;
	BOOL _suppressCollectionViewUpdatesForReorderCommit;
	BOOL _hasFinishedInitialLoad;
	BOOL _viewVisible;
	BOOL _visibilityUpdatesEnabled;
	HFItemManager* _itemManager;
	NSMutableSet* _registeredCellClasses;
	NSMutableArray* _foregroundUpdateFutures;
	NSMutableArray* _viewVisibleFutures;
	id<NACancelable> _deferredVisibilityUpdate;
	id<NACancelable> _iconPreloadCancelable;
	NSHashTable* _childViewControllersAtViewWillAppearTime;
	NSHashTable* _childViewControllersAtViewWillDisappearTime;

}

@property (nonatomic,retain) HFItemManager * itemManager;                                            //@synthesize itemManager=_itemManager - In the implementation block
@property (assign,nonatomic) BOOL hasFinishedInitialLoad;                                            //@synthesize hasFinishedInitialLoad=_hasFinishedInitialLoad - In the implementation block
@property (nonatomic,readonly) NSMutableSet * registeredCellClasses;                                 //@synthesize registeredCellClasses=_registeredCellClasses - In the implementation block
@property (nonatomic,retain) NSMutableArray * foregroundUpdateFutures;                               //@synthesize foregroundUpdateFutures=_foregroundUpdateFutures - In the implementation block
@property (assign,getter=isViewVisible,nonatomic) BOOL viewVisible;                                  //@synthesize viewVisible=_viewVisible - In the implementation block
@property (nonatomic,readonly) NSMutableArray * viewVisibleFutures;                                  //@synthesize viewVisibleFutures=_viewVisibleFutures - In the implementation block
@property (assign,nonatomic) BOOL visibilityUpdatesEnabled;                                          //@synthesize visibilityUpdatesEnabled=_visibilityUpdatesEnabled - In the implementation block
@property (nonatomic,retain) id<NACancelable> deferredVisibilityUpdate;                              //@synthesize deferredVisibilityUpdate=_deferredVisibilityUpdate - In the implementation block
@property (nonatomic,retain) id<NACancelable> iconPreloadCancelable;                                 //@synthesize iconPreloadCancelable=_iconPreloadCancelable - In the implementation block
@property (nonatomic,retain) NSHashTable * childViewControllersAtViewWillAppearTime;                 //@synthesize childViewControllersAtViewWillAppearTime=_childViewControllersAtViewWillAppearTime - In the implementation block
@property (nonatomic,retain) NSHashTable * childViewControllersAtViewWillDisappearTime;              //@synthesize childViewControllersAtViewWillDisappearTime=_childViewControllersAtViewWillDisappearTime - In the implementation block
@property (assign,nonatomic) BOOL wantsPreferredContentSize;                                         //@synthesize wantsPreferredContentSize=_wantsPreferredContentSize - In the implementation block
@property (assign,nonatomic) BOOL suppressCollectionViewUpdatesForReorderCommit;                     //@synthesize suppressCollectionViewUpdatesForReorderCommit=_suppressCollectionViewUpdatesForReorderCommit - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) HFItem * hu_presentedItem; 
+(unsigned long long)updateMode;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_updateTitle;
-(void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)itemManager:(id)arg1 didUpdateResultsForSourceItem:(id)arg2 ;
-(void)itemManager:(id)arg1 didUpdateResultsForItem:(id)arg2 atIndexPath:(id)arg3 ;
-(id)hu_preloadContent;
-(id)childViewControllersToPreload;
-(id)initWithItemManager:(id)arg1 collectionViewLayout:(id)arg2 ;
-(void)setWantsPreferredContentSize:(BOOL)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(CGSize)preferredContentSizeForCollectionViewContentSize:(CGSize)arg1 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(NSString *)description;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(HFItemManager *)itemManager;
-(BOOL)isViewVisible;
-(void)viewDidLoad;
-(void)configureCell:(id)arg1 forItem:(id)arg2 ;
-(id)itemManager:(id)arg1 futureToUpdateItems:(id)arg2 itemUpdateOptions:(id)arg3 ;
-(void)itemManagerDidFinishUpdate:(id)arg1 ;
-(void)itemManager:(id)arg1 performUpdateRequest:(id)arg2 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)itemManager:(id)arg1 didChangeHome:(id)arg2 ;
-(void)itemManager:(id)arg1 didChangeSourceItem:(id)arg2 ;
-(void)setViewVisible:(BOOL)arg1 ;
-(void)setItemManager:(HFItemManager *)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)executionEnvironmentRunningStateDidChange:(id)arg1 ;
-(void)itemManager:(id)arg1 didRemoveSections:(id)arg2 ;
-(void)itemManager:(id)arg1 didInsertSections:(id)arg2 ;
-(void)itemManager:(id)arg1 didMoveSection:(long long)arg2 toSection:(long long)arg3 ;
-(void)itemManager:(id)arg1 didRemoveItem:(id)arg2 atIndexPath:(id)arg3 ;
-(void)itemManager:(id)arg1 didInsertItem:(id)arg2 atIndexPath:(id)arg3 ;
-(void)itemManager:(id)arg1 didMoveItem:(id)arg2 fromIndexPath:(id)arg3 toIndexPath:(id)arg4 ;
-(void)setSuppressCollectionViewUpdatesForReorderCommit:(BOOL)arg1 ;
-(void)recursivelyDisableItemUpdates:(BOOL)arg1 withReason:(id)arg2 ;
-(BOOL)automaticallyUpdatesViewControllerTitle;
-(void)setChildViewControllersAtViewWillDisappearTime:(NSHashTable *)arg1 ;
-(void)setChildViewControllersAtViewWillAppearTime:(NSHashTable *)arg1 ;
-(NSHashTable *)childViewControllersAtViewWillAppearTime;
-(NSHashTable *)childViewControllersAtViewWillDisappearTime;
-(BOOL)isLayoutDependentOnItemState;
-(BOOL)wantsPreferredContentSize;
-(HFItem *)hu_presentedItem;
-(BOOL)visibilityUpdatesEnabled;
-(void)setVisibilityUpdatesEnabled:(BOOL)arg1 ;
-(void)setDeferredVisibilityUpdate:(id<NACancelable>)arg1 ;
-(NSMutableArray *)viewVisibleFutures;
-(void)_cancelIconPreload;
-(BOOL)hasFinishedInitialLoad;
-(void)setHasFinishedInitialLoad:(BOOL)arg1 ;
-(id<NACancelable>)deferredVisibilityUpdate;
-(NSMutableSet *)registeredCellClasses;
-(NSMutableArray *)foregroundUpdateFutures;
-(void)performBatchCollectionViewUpdatesForUpdateRequest:(id)arg1 reloadOnly:(BOOL)arg2 ;
-(void)_preloadIconsIfNeeded;
-(BOOL)suppressCollectionViewUpdatesForReorderCommit;
-(void)setIconPreloadCancelable:(id<NACancelable>)arg1 ;
-(id<NACancelable>)iconPreloadCancelable;
-(void)setForegroundUpdateFutures:(NSMutableArray *)arg1 ;
@end

