/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
*/

#import <Widgets/Widgets-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol WGWidgetListEditViewControllerDataSource, WGWidgetListEditViewControllerDelegate;
@class UINavigationController, UITableViewController, NSMutableArray, NSArray, NSString;

@interface WGWidgetListEditViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {

	UINavigationController* _navigationController;
	UITableViewController* _tableViewController;
	NSMutableArray* _enabledTodayItemIDs;
	NSMutableArray* _favoriteItemIDs;
	NSMutableArray* _disabledItemIDs;
	NSArray* _groupIDs;
	double _contentMinY;
	NSArray* _originalFavoriteItemIDs;
	BOOL _dismissingDueToInterfaceAction;
	BOOL _showsPinSection;
	BOOL _showsFavorites;
	BOOL _widgetsPinnedOriginally;
	BOOL _widgetsPinned;
	id<WGWidgetListEditViewControllerDataSource> _dataSource;
	id<WGWidgetListEditViewControllerDelegate> _delegate;
	id _statusBarColorAssertion;

}

@property (assign,setter=_setDismissingDueToInterfaceAction:,getter=_isDismissingDueToInterfaceAction,nonatomic) BOOL dismissingDueToInterfaceAction;              //@synthesize dismissingDueToInterfaceAction=_dismissingDueToInterfaceAction - In the implementation block
@property (setter=_setStatusBarColorAssertion:,getter=_statusBarColorAssertion,nonatomic,retain) id statusBarColorAssertion;                                       //@synthesize statusBarColorAssertion=_statusBarColorAssertion - In the implementation block
@property (assign,nonatomic) BOOL showsPinSection;                                                                                                                 //@synthesize showsPinSection=_showsPinSection - In the implementation block
@property (assign,nonatomic) BOOL showsFavorites;                                                                                                                  //@synthesize showsFavorites=_showsFavorites - In the implementation block
@property (assign,getter=wereWidgetsPinnedOriginally,nonatomic) BOOL widgetsPinnedOriginally;                                                                      //@synthesize widgetsPinnedOriginally=_widgetsPinnedOriginally - In the implementation block
@property (assign,getter=areWidgetsPinned,nonatomic) BOOL widgetsPinned;                                                                                           //@synthesize widgetsPinned=_widgetsPinned - In the implementation block
@property (assign,nonatomic,__weak) id<WGWidgetListEditViewControllerDataSource> dataSource;                                                                       //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<WGWidgetListEditViewControllerDelegate> delegate;                                                                           //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<WGWidgetListEditViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WGWidgetListEditViewControllerDelegate>)arg1 ;
-(id<WGWidgetListEditViewControllerDataSource>)dataSource;
-(void)setDataSource:(id<WGWidgetListEditViewControllerDataSource>)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(void)_loadItems;
-(long long)_layoutMode;
-(void)_cancelWidgetListEditView;
-(void)_dismissWidgetListEditView;
-(void)_acknowledgeItemsSavingItemState:(BOOL)arg1 ;
-(BOOL)showsFavorites;
-(BOOL)areWidgetsPinned;
-(BOOL)showsPinSection;
-(BOOL)showsFavoritesSection;
-(long long)todaySection;
-(long long)favoritesSection;
-(long long)disabledWidgetsSection;
-(long long)pinSection;
-(void)pinSwitchChanaged:(id)arg1 ;
-(id)_itemIdentifierForIndexPath:(id)arg1 ;
-(id)_indexPathForItemWithIdentifier:(id)arg1 ;
-(BOOL)_isNewItem:(id)arg1 ;
-(unsigned long long)_indexForInsertingItemWithIdentifier:(id)arg1 intoArray:(id)arg2 ;
-(long long)_indexOfFirstEnabledWidgetInSection:(unsigned long long)arg1 ;
-(long long)_indexOfLastEnabledWidgetInSection:(unsigned long long)arg1 ;
-(id)_itemIdentifiersInSection:(unsigned long long)arg1 ;
-(void)_enableItemAtIndexPath:(id)arg1 inTableView:(id)arg2 ;
-(void)_disableItemAtIndexPath:(id)arg1 inTableView:(id)arg2 ;
-(id)_widgetListEditViewTableHeaderView;
-(void)_saveItemState;
-(void)_saveItemArrangement;
-(void)_acknowledgeItemsAndResetNewWidgetsCount;
-(void)_setDismissingDueToInterfaceAction:(BOOL)arg1 ;
-(void)_dismissDueToInterfaceActionAndAcknowledgeItemsSavingItemState:(BOOL)arg1 ;
-(id)_enabledItemIdentifiersForGroupID:(id)arg1 ;
-(long long)_compareItemWithIdentifier:(id)arg1 andItemWithIdentifierConsideringIsNew:(id)arg2 ;
-(BOOL)wereWidgetsPinnedOriginally;
-(unsigned long long)_sectionIndexForGroupKey:(id)arg1 ;
-(void)setWidgetsPinned:(BOOL)arg1 ;
-(id)_groupKeyForSectionAtIndex:(unsigned long long)arg1 ;
-(BOOL)_isDismissingDueToInterfaceAction;
-(id)_statusBarColorAssertion;
-(void)_setStatusBarColorAssertion:(id)arg1 ;
-(void)setShowsPinSection:(BOOL)arg1 ;
-(void)setShowsFavorites:(BOOL)arg1 ;
-(void)setWidgetsPinnedOriginally:(BOOL)arg1 ;
@end

