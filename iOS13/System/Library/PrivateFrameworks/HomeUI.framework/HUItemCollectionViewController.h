/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUCollectionViewController.h>
#import <libobjc.A.dylib/HFExecutionEnvironmentObserver.h>
#import <libobjc.A.dylib/HFItemManagerDelegate.h>
#import <libobjc.A.dylib/HUItemManagerContainer.h>
#import <libobjc.A.dylib/HUItemPresentationContainer.h>
#import <libobjc.A.dylib/HUPreloadableViewController.h>

@protocol NACancelable;
@class HFItemManager, HFItem, NSMutableSet, NSMutableArray, NSHashTable, NSString;

@interface HUItemCollectionViewController : HUCollectionViewController <HFExecutionEnvironmentObserver, HFItemManagerDelegate, HUItemManagerContainer, HUItemPresentationContainer, HUPreloadableViewController> {

	BOOL _wantsPreferredContentSize;
	BOOL _hasFinishedInitialLoad;
	BOOL _viewVisible;
	BOOL _visibilityUpdatesEnabled;
	HFItemManager* _itemManager;
	NSMutableSet* _registeredCellClasses;
	NSMutableArray* _foregroundUpdateFutures;
	NSMutableArray* _viewVisibleFutures;
	id<NACancelable> _deferredVisibilityUpdate;
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
@property (nonatomic,retain) NSHashTable * childViewControllersAtViewWillAppearTime;                 //@synthesize childViewControllersAtViewWillAppearTime=_childViewControllersAtViewWillAppearTime - In the implementation block
@property (nonatomic,retain) NSHashTable * childViewControllersAtViewWillDisappearTime;              //@synthesize childViewControllersAtViewWillDisappearTime=_childViewControllersAtViewWillDisappearTime - In the implementation block
@property (assign,nonatomic) BOOL wantsPreferredContentSize;                                         //@synthesize wantsPreferredContentSize=_wantsPreferredContentSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) HFItem * hu_presentedItem; 
+(unsigned long long)updateMode;
-(NSString *)description;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)_updateTitle;
-(HFItemManager *)itemManager;
-(void)setItemManager:(HFItemManager *)arg1 ;
-(void)setViewVisible:(BOOL)arg1 ;
-(BOOL)isViewVisible;
-(void)executionEnvironmentRunningStateDidChange:(id)arg1 ;
-(void)itemManager:(id)arg1 didChangeSourceItem:(id)arg2 ;
-(void)itemManager:(id)arg1 didUpdateResultsForSourceItem:(id)arg2 ;
-(void)itemManager:(id)arg1 didUpdateResultsForItem:(id)arg2 atIndexPath:(id)arg3 ;
-(void)itemManager:(id)arg1 didChangeOverallLoadingState:(unsigned long long)arg2 ;
-(id)itemManager:(id)arg1 futureToUpdateItems:(id)arg2 itemUpdateOptions:(id)arg3 ;
-(void)itemManagerDidFinishUpdate:(id)arg1 ;
-(void)itemManager:(id)arg1 performUpdateRequest:(id)arg2 ;
-(void)itemManager:(id)arg1 didRemoveSections:(id)arg2 ;
-(void)itemManager:(id)arg1 didInsertSections:(id)arg2 ;
-(void)itemManager:(id)arg1 didMoveSection:(long long)arg2 toSection:(long long)arg3 ;
-(void)itemManager:(id)arg1 didRemoveItem:(id)arg2 atIndexPath:(id)arg3 ;
-(void)itemManager:(id)arg1 didInsertItem:(id)arg2 atIndexPath:(id)arg3 ;
-(void)itemManager:(id)arg1 didMoveItem:(id)arg2 fromIndexPath:(id)arg3 toIndexPath:(id)arg4 ;
-(void)configureCell:(id)arg1 forItem:(id)arg2 ;
-(id)initWithItemManager:(id)arg1 collectionViewLayout:(id)arg2 ;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(id)hu_preloadContent;
-(id)childViewControllersToPreload;
-(void)recursivelyDisableItemUpdates:(BOOL)arg1 withReason:(id)arg2 ;
-(BOOL)automaticallyUpdatesViewControllerTitle;
-(void)setChildViewControllersAtViewWillDisappearTime:(NSHashTable *)arg1 ;
-(void)setChildViewControllersAtViewWillAppearTime:(NSHashTable *)arg1 ;
-(NSHashTable *)childViewControllersAtViewWillAppearTime;
-(NSHashTable *)childViewControllersAtViewWillDisappearTime;
-(BOOL)isLayoutDependentOnItemState;
-(void)setWantsPreferredContentSize:(BOOL)arg1 ;
-(CGSize)preferredContentSizeForCollectionViewContentSize:(CGSize)arg1 ;
-(BOOL)wantsPreferredContentSize;
-(HFItem *)hu_presentedItem;
-(BOOL)visibilityUpdatesEnabled;
-(void)setVisibilityUpdatesEnabled:(BOOL)arg1 ;
-(void)setDeferredVisibilityUpdate:(id<NACancelable>)arg1 ;
-(NSMutableArray *)viewVisibleFutures;
-(BOOL)hasFinishedInitialLoad;
-(void)setHasFinishedInitialLoad:(BOOL)arg1 ;
-(id<NACancelable>)deferredVisibilityUpdate;
-(NSMutableSet *)registeredCellClasses;
-(NSMutableArray *)foregroundUpdateFutures;
-(void)performBatchCollectionViewUpdatesForUpdateRequest:(id)arg1 reloadOnly:(BOOL)arg2 ;
-(void)setForegroundUpdateFutures:(NSMutableArray *)arg1 ;
@end

