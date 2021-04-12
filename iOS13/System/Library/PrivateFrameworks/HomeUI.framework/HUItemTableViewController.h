/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUTableViewController.h>
#import <libobjc.A.dylib/HFExecutionEnvironmentObserver.h>
#import <libobjc.A.dylib/HFItemManagerDelegate.h>
#import <libobjc.A.dylib/HUItemManagerContainer.h>
#import <libobjc.A.dylib/HUItemPresentationContainer.h>
#import <libobjc.A.dylib/HUPreloadableViewController.h>

@protocol NACancelable;
@class HUItemTableViewScrollDestination, HFItemManager, NSMutableSet, NSMutableArray, NSMapTable, HUGridLayoutOptions, NSString, HFItem;

@interface HUItemTableViewController : HUTableViewController <HFExecutionEnvironmentObserver, HFItemManagerDelegate, HUItemManagerContainer, HUItemPresentationContainer, HUPreloadableViewController> {

	BOOL _wantsPreferredContentSize;
	BOOL _viewHasAppeared;
	BOOL _hasForcedLoadingVisibleCells;
	BOOL _hasFinishedInitialLoad;
	BOOL _automaticallyUpdatesViewControllerTitle;
	BOOL _visibilityUpdatesEnabled;
	BOOL _shouldUseAlternateCellColor;
	unsigned long long _appearState;
	HUItemTableViewScrollDestination* _pendingScrollDestination;
	HFItemManager* _itemManager;
	NSMutableSet* _internalItemModuleControllers;
	NSMutableArray* _foregroundUpdateFutures;
	NSMutableSet* _registeredCellClasses;
	id<NACancelable> _deferredVisibilityUpdate;
	NSMapTable* _textFieldToCellMap;
	HUGridLayoutOptions* _gridLayoutOptions;

}

@property (assign,nonatomic) unsigned long long appearState;                                           //@synthesize appearState=_appearState - In the implementation block
@property (assign,nonatomic) BOOL viewHasAppeared;                                                     //@synthesize viewHasAppeared=_viewHasAppeared - In the implementation block
@property (assign,nonatomic) BOOL hasForcedLoadingVisibleCells;                                        //@synthesize hasForcedLoadingVisibleCells=_hasForcedLoadingVisibleCells - In the implementation block
@property (nonatomic,retain) HUItemTableViewScrollDestination * pendingScrollDestination;              //@synthesize pendingScrollDestination=_pendingScrollDestination - In the implementation block
@property (nonatomic,retain) HFItemManager * itemManager;                                              //@synthesize itemManager=_itemManager - In the implementation block
@property (nonatomic,readonly) NSMutableSet * internalItemModuleControllers;                           //@synthesize internalItemModuleControllers=_internalItemModuleControllers - In the implementation block
@property (assign,nonatomic) BOOL hasFinishedInitialLoad;                                              //@synthesize hasFinishedInitialLoad=_hasFinishedInitialLoad - In the implementation block
@property (nonatomic,retain) NSMutableArray * foregroundUpdateFutures;                                 //@synthesize foregroundUpdateFutures=_foregroundUpdateFutures - In the implementation block
@property (nonatomic,readonly) NSMutableSet * registeredCellClasses;                                   //@synthesize registeredCellClasses=_registeredCellClasses - In the implementation block
@property (assign,nonatomic) BOOL automaticallyUpdatesViewControllerTitle;                             //@synthesize automaticallyUpdatesViewControllerTitle=_automaticallyUpdatesViewControllerTitle - In the implementation block
@property (assign,nonatomic) BOOL visibilityUpdatesEnabled;                                            //@synthesize visibilityUpdatesEnabled=_visibilityUpdatesEnabled - In the implementation block
@property (nonatomic,retain) id<NACancelable> deferredVisibilityUpdate;                                //@synthesize deferredVisibilityUpdate=_deferredVisibilityUpdate - In the implementation block
@property (nonatomic,readonly) NSMapTable * textFieldToCellMap;                                        //@synthesize textFieldToCellMap=_textFieldToCellMap - In the implementation block
@property (nonatomic,retain) HUGridLayoutOptions * gridLayoutOptions;                                  //@synthesize gridLayoutOptions=_gridLayoutOptions - In the implementation block
@property (assign,nonatomic) BOOL shouldUseAlternateCellColor;                                         //@synthesize shouldUseAlternateCellColor=_shouldUseAlternateCellColor - In the implementation block
@property (assign,nonatomic) BOOL wantsPreferredContentSize;                                           //@synthesize wantsPreferredContentSize=_wantsPreferredContentSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) HFItem * hu_presentedItem; 
+(BOOL)adoptsDefaultGridLayoutMargins;
+(unsigned long long)updateMode;
-(NSString *)description;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)_updateTitle;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textFieldShouldClear:(id)arg1 ;
-(void)textFieldDidChange:(id)arg1 ;
-(HFItemManager *)itemManager;
-(void)setItemManager:(HFItemManager *)arg1 ;
-(BOOL)viewHasAppeared;
-(void)setViewHasAppeared:(BOOL)arg1 ;
-(void)setAppearState:(unsigned long long)arg1 ;
-(unsigned long long)appearState;
-(void)executionEnvironmentRunningStateDidChange:(id)arg1 ;
-(void)itemManager:(id)arg1 didChangeSourceItem:(id)arg2 ;
-(void)itemManager:(id)arg1 didUpdateItemModules:(id)arg2 ;
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
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(id)textFieldForVisibleItem:(id)arg1 ;
-(id)moduleController:(id)arg1 presentViewControllerForRequest:(id)arg2 ;
-(id)moduleController:(id)arg1 dismissViewControllerForRequest:(id)arg2 ;
-(BOOL)shouldManageTextFieldForItem:(id)arg1 ;
-(id)placeholderTextForTextField:(id)arg1 item:(id)arg2 ;
-(id)currentTextForTextField:(id)arg1 item:(id)arg2 ;
-(void)textDidChange:(id)arg1 forTextField:(id)arg2 item:(id)arg3 ;
-(void)textFieldDidEndEditing:(id)arg1 item:(id)arg2 ;
-(id)hu_preloadContent;
-(id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 ;
-(id)buildItemModuleControllerForModule:(id)arg1 ;
-(BOOL)shouldHideSeparatorsForCell:(id)arg1 indexPath:(id)arg2 ;
-(BOOL)shouldHideHeaderAboveSection:(long long)arg1 ;
-(BOOL)shouldHideFooterBelowSection:(long long)arg1 ;
-(id)defaultTextForTextField:(id)arg1 item:(id)arg2 ;
-(void)textFieldDidBeginEditing:(id)arg1 item:(id)arg2 ;
-(id)childViewControllersToPreload;
-(void)recursivelyDisableItemUpdates:(BOOL)arg1 withReason:(id)arg2 ;
-(id)_visibleCellForItem:(id)arg1 ;
-(id)moduleController:(id)arg1 textFieldForVisibleItem:(id)arg2 ;
-(id)presentingViewControllerForModuleController:(id)arg1 ;
-(void)reloadCellForItems:(id)arg1 ;
-(BOOL)automaticallyUpdatesViewControllerTitle;
-(id)itemModuleControllers;
-(unsigned long long)automaticDisablingReasonsForItem:(id)arg1 ;
-(id)itemTableHeaderView;
-(id)itemTableHeaderMessage;
-(id)moduleControllerForItem:(id)arg1 ;
-(BOOL)bypassInitialItemUpdateReload;
-(void)setWantsPreferredContentSize:(BOOL)arg1 ;
-(void)scrollToItem:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)wantsPreferredContentSize;
-(void)highlightItemAnimated:(id)arg1 ;
-(HFItem *)hu_presentedItem;
-(BOOL)visibilityUpdatesEnabled;
-(void)setVisibilityUpdatesEnabled:(BOOL)arg1 ;
-(void)setDeferredVisibilityUpdate:(id<NACancelable>)arg1 ;
-(BOOL)hasFinishedInitialLoad;
-(void)setHasFinishedInitialLoad:(BOOL)arg1 ;
-(id<NACancelable>)deferredVisibilityUpdate;
-(NSMutableSet *)registeredCellClasses;
-(NSMutableArray *)foregroundUpdateFutures;
-(void)setForegroundUpdateFutures:(NSMutableArray *)arg1 ;
-(void)setAutomaticallyUpdatesViewControllerTitle:(BOOL)arg1 ;
-(BOOL)alwaysUseDeltaTableViewUpdatesAfterViewHasAppeared;
-(void)setShouldUseAlternateCellColor:(BOOL)arg1 ;
-(void)_updateTableHeaderAndFooter;
-(HUGridLayoutOptions *)gridLayoutOptions;
-(void)setGridLayoutOptions:(HUGridLayoutOptions *)arg1 ;
-(HUItemTableViewScrollDestination *)pendingScrollDestination;
-(void)_scrollToDestination:(id)arg1 ;
-(void)setPendingScrollDestination:(HUItemTableViewScrollDestination *)arg1 ;
-(void)_updatePreferredContentSizeIfNecessary;
-(void)_updateLayoutMarginsForCells:(id)arg1 ;
-(void)_performCommonUpdateForCell:(id)arg1 item:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4 ;
-(id)itemTableFooterMessage;
-(NSMapTable *)textFieldToCellMap;
-(id)itemTableFooterView;
-(BOOL)shouldUseAlternateCellColor;
-(void)_dispatchUpdateForCell:(id)arg1 item:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4 ;
-(BOOL)_shouldHideHeaderForSection:(long long)arg1 ;
-(BOOL)_shouldHideFooterForSection:(long long)arg1 ;
-(BOOL)hasForcedLoadingVisibleCells;
-(void)setHasForcedLoadingVisibleCells:(BOOL)arg1 ;
-(long long)_rowAnimationForOperationType:(unsigned long long)arg1 item:(id)arg2 ;
-(void)highlightItemAnimated:(id)arg1 duration:(double)arg2 ;
-(id)_itemForTextField:(id)arg1 ;
-(void)_transformViewControllerForRequest:(id)arg1 ;
-(NSMutableSet *)internalItemModuleControllers;
@end

