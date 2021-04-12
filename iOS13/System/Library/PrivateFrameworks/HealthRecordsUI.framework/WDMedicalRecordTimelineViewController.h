/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <HealthUI/HKTableViewController.h>
#import <UIKit/UISearchControllerDelegate.h>
#import <UIKit/UISearchResultsUpdating.h>
#import <HealthRecordsUI/HealthRecordsUI.FilterSettingsViewControllerDelegate.h>
#import <libobjc.A.dylib/HKHealthRecordsStoreIngestionStateListener.h>
#import <libobjc.A.dylib/HKHealthRecordsStoreAccountStateChangeListener.h>
#import <libobjc.A.dylib/HKConceptStoreObserver.h>
#import <libobjc.A.dylib/HKCloudSyncObserverDelegate.h>
#import <libobjc.A.dylib/HRTimelineHeaderViewDelegate.h>

@protocol HRRecordViewControllerFactory;
@class WDMedicalRecordDisplayItemProvider, HRProfile, NSPredicate, NSUUID, HKClinicalAccount, WDMedicalRecordCategory, NSSet, HKConcept, NSArray, UISearchController, NSTimer, HROverlayRoomViewController, HKViewTableViewCell, WDMedicalRecordStandaloneCell, UIButton, HRContentStatusView, HRContentStatusCell, HKCloudSyncObserver, NSHashTable, NSString;

@interface WDMedicalRecordTimelineViewController : HKTableViewController <UISearchControllerDelegate, UISearchResultsUpdating, HealthRecordsUI.FilterSettingsViewControllerDelegate, HKHealthRecordsStoreIngestionStateListener, HKHealthRecordsStoreAccountStateChangeListener, HKConceptStoreObserver, HKCloudSyncObserverDelegate, HRTimelineHeaderViewDelegate> {

	BOOL _loadingNextPage;
	BOOL _showSearchBar;
	BOOL _showsFilterControl;
	BOOL _enableReconnect;
	BOOL _queryReturned;
	BOOL _chartabilityDetermined;
	BOOL _cloudSyncActive;
	WDMedicalRecordDisplayItemProvider* _displayItemProvider;
	HRProfile* _profile;
	id<HRRecordViewControllerFactory> _factory;
	NSPredicate* _accountPredicate;
	NSPredicate* _searchPredicate;
	NSUUID* _accountId;
	HKClinicalAccount* _account;
	WDMedicalRecordCategory* _category;
	NSSet* _categories;
	NSSet* _accounts;
	HKConcept* _concept;
	NSUUID* _highlightedRecordId;
	NSArray* _preloadedRecords;
	id _medicalRecordSearchController;
	UISearchController* _navigationSearchController;
	NSTimer* _searchThrottleTimer;
	HROverlayRoomViewController* _chartViewController;
	HKViewTableViewCell* _chartCell;
	WDMedicalRecordStandaloneCell* _removedRecordsCell;
	UIButton* _filterButton;
	HRContentStatusView* _contentStatusView;
	HRContentStatusCell* _contentStatusCell;
	long long _ingestionState;
	unsigned long long _indexManagerState;
	HKCloudSyncObserver* _cloudSyncObserver;
	NSHashTable* _floatingSectionHeaders;

}

@property (nonatomic,retain) HRProfile * profile;                                                   //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) id<HRRecordViewControllerFactory> factory;                             //@synthesize factory=_factory - In the implementation block
@property (nonatomic,retain) NSPredicate * accountPredicate;                                        //@synthesize accountPredicate=_accountPredicate - In the implementation block
@property (nonatomic,retain) NSPredicate * searchPredicate;                                         //@synthesize searchPredicate=_searchPredicate - In the implementation block
@property (nonatomic,retain) NSUUID * accountId;                                                    //@synthesize accountId=_accountId - In the implementation block
@property (nonatomic,retain) HKClinicalAccount * account;                                           //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) WDMedicalRecordCategory * category;                                    //@synthesize category=_category - In the implementation block
@property (nonatomic,retain) NSSet * categories;                                                    //@synthesize categories=_categories - In the implementation block
@property (nonatomic,retain) NSSet * accounts;                                                      //@synthesize accounts=_accounts - In the implementation block
@property (nonatomic,retain) HKConcept * concept;                                                   //@synthesize concept=_concept - In the implementation block
@property (nonatomic,retain) NSUUID * highlightedRecordId;                                          //@synthesize highlightedRecordId=_highlightedRecordId - In the implementation block
@property (nonatomic,copy) NSArray * preloadedRecords;                                              //@synthesize preloadedRecords=_preloadedRecords - In the implementation block
@property (nonatomic,retain) WDMedicalRecordDisplayItemProvider * displayItemProvider;              //@synthesize displayItemProvider=_displayItemProvider - In the implementation block
@property (assign,nonatomic) BOOL loadingNextPage;                                                  //@synthesize loadingNextPage=_loadingNextPage - In the implementation block
@property (assign,nonatomic) BOOL showSearchBar;                                                    //@synthesize showSearchBar=_showSearchBar - In the implementation block
@property (assign,nonatomic) BOOL showsFilterControl;                                               //@synthesize showsFilterControl=_showsFilterControl - In the implementation block
@property (assign,nonatomic) BOOL enableReconnect;                                                  //@synthesize enableReconnect=_enableReconnect - In the implementation block
@property (nonatomic,retain) id medicalRecordSearchController;                                      //@synthesize medicalRecordSearchController=_medicalRecordSearchController - In the implementation block
@property (nonatomic,retain) UISearchController * navigationSearchController;                       //@synthesize navigationSearchController=_navigationSearchController - In the implementation block
@property (nonatomic,retain) NSTimer * searchThrottleTimer;                                         //@synthesize searchThrottleTimer=_searchThrottleTimer - In the implementation block
@property (nonatomic,retain) HROverlayRoomViewController * chartViewController;                     //@synthesize chartViewController=_chartViewController - In the implementation block
@property (nonatomic,retain) HKViewTableViewCell * chartCell;                                       //@synthesize chartCell=_chartCell - In the implementation block
@property (nonatomic,retain) WDMedicalRecordStandaloneCell * removedRecordsCell;                    //@synthesize removedRecordsCell=_removedRecordsCell - In the implementation block
@property (nonatomic,retain) UIButton * filterButton;                                               //@synthesize filterButton=_filterButton - In the implementation block
@property (nonatomic,retain) HRContentStatusView * contentStatusView;                               //@synthesize contentStatusView=_contentStatusView - In the implementation block
@property (nonatomic,retain) HRContentStatusCell * contentStatusCell;                               //@synthesize contentStatusCell=_contentStatusCell - In the implementation block
@property (assign,nonatomic) BOOL queryReturned;                                                    //@synthesize queryReturned=_queryReturned - In the implementation block
@property (assign,nonatomic) BOOL chartabilityDetermined;                                           //@synthesize chartabilityDetermined=_chartabilityDetermined - In the implementation block
@property (assign,nonatomic) long long ingestionState;                                              //@synthesize ingestionState=_ingestionState - In the implementation block
@property (assign,nonatomic) unsigned long long indexManagerState;                                  //@synthesize indexManagerState=_indexManagerState - In the implementation block
@property (nonatomic,retain) HKCloudSyncObserver * cloudSyncObserver;                               //@synthesize cloudSyncObserver=_cloudSyncObserver - In the implementation block
@property (assign,nonatomic) BOOL cloudSyncActive;                                                  //@synthesize cloudSyncActive=_cloudSyncActive - In the implementation block
@property (nonatomic,retain) NSHashTable * floatingSectionHeaders;                                  //@synthesize floatingSectionHeaders=_floatingSectionHeaders - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(WDMedicalRecordCategory *)category;
-(void)setCategory:(WDMedicalRecordCategory *)arg1 ;
-(HKClinicalAccount *)account;
-(void)setAccount:(HKClinicalAccount *)arg1 ;
-(HRProfile *)profile;
-(void)setProfile:(HRProfile *)arg1 ;
-(NSSet *)accounts;
-(id<HRRecordViewControllerFactory>)factory;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)_reloadData;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)setFactory:(id<HRRecordViewControllerFactory>)arg1 ;
-(NSSet *)categories;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(void)setCategories:(NSSet *)arg1 ;
-(void)setAccounts:(NSSet *)arg1 ;
-(NSUUID *)accountId;
-(void)setAccountId:(NSUUID *)arg1 ;
-(HKConcept *)concept;
-(void)conceptStore:(id)arg1 indexManagerDidChangeState:(unsigned long long)arg2 ;
-(void)cloudSyncObserver:(id)arg1 syncDidStartWithProgress:(id)arg2 ;
-(void)cloudSyncObserverStatusUpdated:(id)arg1 status:(id)arg2 ;
-(void)cloudSyncObserverSyncCompleted:(id)arg1 ;
-(void)cloudSyncObserver:(id)arg1 syncFailedWithError:(id)arg2 ;
-(void)healthRecordsStore:(id)arg1 ingestionStateDidUpdateTo:(long long)arg2 ;
-(void)healthRecordsStore:(id)arg1 accountDidChange:(id)arg2 changeType:(long long)arg3 ;
-(void)setSearchPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)searchPredicate;
-(void)_tapToRadar:(id)arg1 ;
-(UIButton *)filterButton;
-(void)setFilterButton:(UIButton *)arg1 ;
-(void)setConcept:(HKConcept *)arg1 ;
-(id)initWithProfile:(id)arg1 factory:(id)arg2 account:(id)arg3 showInitialSearchBar:(BOOL)arg4 enableReconnect:(BOOL)arg5 ;
-(WDMedicalRecordDisplayItemProvider *)displayItemProvider;
-(void)_removeSystemStatusObservers;
-(void)setFloatingSectionHeaders:(NSHashTable *)arg1 ;
-(void)_determineConceptChartabilityAndInsertChartIfNeeded;
-(BOOL)_isRemovedRecordsTimeline;
-(void)_configureBarButtonItems;
-(void)_updateTableHeaderView;
-(void)setContentStatusCell:(HRContentStatusCell *)arg1 ;
-(void)setContentStatusView:(HRContentStatusView *)arg1 ;
-(void)_setupSystemStatusObservers;
-(void)_updateSystemStatusViewAfterDelay:(BOOL)arg1 ;
-(void)_setupDisplayItemProvider;
-(void)_postAWDMetricForTimelineCategory;
-(void)_startCollectingData;
-(void)_reloadDataWithNotification:(id)arg1 ;
-(NSHashTable *)floatingSectionHeaders;
-(void)_updateSystemStatusView;
-(void)_reloadDataWithDelay:(double)arg1 ;
-(BOOL)showsFilterControl;
-(void)_filterButtonTapped:(id)arg1 ;
-(void)_updateFilterButtonImage;
-(BOOL)_shouldShowReconnectCell;
-(HKViewTableViewCell *)chartCell;
-(BOOL)_shouldShowInlineSystemStatusSection;
-(id)_adjustedIndexPathForRecordId:(id)arg1 ;
-(UISearchController *)navigationSearchController;
-(void)_installSearchController;
-(void)_uninstallSearchController;
-(NSArray *)preloadedRecords;
-(id)_sampleTypesToDisplay;
-(id)_filterFromCurrentPredicates;
-(void)setDisplayItemProvider:(WDMedicalRecordDisplayItemProvider *)arg1 ;
-(NSPredicate *)accountPredicate;
-(void)setLoadingNextPage:(BOOL)arg1 ;
-(NSUUID *)highlightedRecordId;
-(void)setQueryReturned:(BOOL)arg1 ;
-(void)_updateTableViewGroups;
-(BOOL)loadingNextPage;
-(void)_scrollToHighlightedRecordIfNeeded;
-(void)setMedicalRecordSearchController:(id)arg1 ;
-(void)setNavigationSearchController:(UISearchController *)arg1 ;
-(BOOL)queryReturned;
-(BOOL)chartabilityDetermined;
-(HROverlayRoomViewController *)chartViewController;
-(void)_scrollToRecordWithUUID:(id)arg1 animated:(BOOL)arg2 ;
-(void)setHighlightedRecordId:(NSUUID *)arg1 ;
-(void)setChartViewController:(HROverlayRoomViewController *)arg1 ;
-(void)setChartCell:(HKViewTableViewCell *)arg1 ;
-(void)setChartabilityDetermined:(BOOL)arg1 ;
-(id)_headerViewForTitle:(id)arg1 ;
-(long long)_sectionTypeForSectionIndex:(long long)arg1 ;
-(id)_adjustedTimelineItemIndexPathForIndexPath:(id)arg1 ;
-(void)setCloudSyncObserver:(HKCloudSyncObserver *)arg1 ;
-(BOOL)cloudSyncActive;
-(long long)ingestionState;
-(unsigned long long)indexManagerState;
-(BOOL)_hasDisplayableStatus;
-(id)_systemStatusDisplay;
-(BOOL)_shouldShowRemovedRecords;
-(HRContentStatusView *)contentStatusView;
-(HRContentStatusCell *)contentStatusCell;
-(void)setIngestionState:(long long)arg1 ;
-(void)setIndexManagerState:(unsigned long long)arg1 ;
-(void)setCloudSyncActive:(BOOL)arg1 ;
-(void)_postAWDMetricForCategoryType:(int)arg1 ;
-(NSTimer *)searchThrottleTimer;
-(void)setSearchThrottleTimer:(NSTimer *)arg1 ;
-(void)_searchControllerHasQueryChange:(id)arg1 ;
-(id)medicalRecordSearchController;
-(id)_indexPathForReconnectCell;
-(BOOL)enableReconnect;
-(long long)_adjustTimelineItemSectionWithSection:(long long)arg1 ;
-(id)_tableView:(id)arg1 sourceCellForRow:(long long)arg2 ;
-(BOOL)_displayItemShouldBeTappable:(id)arg1 ;
-(void)_performActionForCellsSharingRecordsInTableView:(id)arg1 atIndexPath:(id)arg2 action:(/*^block*/id)arg3 ;
-(id)initWithProfile:(id)arg1 factory:(id)arg2 preloadedRecords:(id)arg3 ;
-(void)_postAWDMetricForDetailCategory;
-(void)filterSettingsViewControllerWithDidSelectCategories:(id)arg1 accounts:(id)arg2 ;
-(void)headerViewDidBeginFloating:(id)arg1 ;
-(void)headerViewDidEndFloating:(id)arg1 ;
-(id)initWithProfile:(id)arg1 factory:(id)arg2 showInitialSearchBar:(BOOL)arg3 ;
-(id)initWithProfile:(id)arg1 factory:(id)arg2 accountId:(id)arg3 showInitialSearchBar:(BOOL)arg4 enableReconnect:(BOOL)arg5 ;
-(id)initWithProfile:(id)arg1 factory:(id)arg2 category:(id)arg3 showInitialSearchBar:(BOOL)arg4 ;
-(id)initWithProfile:(id)arg1 factory:(id)arg2 concept:(id)arg3 category:(id)arg4 highlightedRecordId:(id)arg5 ;
-(void)_assertSearchControllerStatus;
-(void)_setupSearchController;
-(void)_removeSearchController;
-(BOOL)_indexPathIsReconnectCell:(id)arg1 ;
-(void)setAccountPredicate:(NSPredicate *)arg1 ;
-(void)setPreloadedRecords:(NSArray *)arg1 ;
-(BOOL)showSearchBar;
-(void)setShowSearchBar:(BOOL)arg1 ;
-(void)setShowsFilterControl:(BOOL)arg1 ;
-(void)setEnableReconnect:(BOOL)arg1 ;
-(WDMedicalRecordStandaloneCell *)removedRecordsCell;
-(void)setRemovedRecordsCell:(WDMedicalRecordStandaloneCell *)arg1 ;
-(HKCloudSyncObserver *)cloudSyncObserver;
@end

