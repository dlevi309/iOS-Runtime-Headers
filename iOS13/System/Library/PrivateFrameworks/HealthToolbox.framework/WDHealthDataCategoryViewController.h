/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthToolbox/HealthToolbox-Structs.h>
#import <HealthUI/HKViewController.h>
#import <libobjc.A.dylib/HKDateCacheObserver.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/SKStoreProductViewControllerDelegate.h>
#import <libobjc.A.dylib/WDAppSwooshTableViewCellDelegate.h>
#import <libobjc.A.dylib/WDCurrentValueTableViewCellDelegate.h>
#import <libobjc.A.dylib/WDFavoriteDisplayTypesControllerObserver.h>
#import <libobjc.A.dylib/HKInteractiveChartViewObserver.h>
#import <libobjc.A.dylib/HKSampleTypeDateRangeControllerObserver.h>
#import <libobjc.A.dylib/WDUserActivityResponder.h>

@class UITableView, HKNavigationController, NSDate, NSMutableDictionary, NSDictionary, NSMutableArray, NSString, WDHealthDataCategoryVideoDataProvider, HKActivitySummaryQuery, HKActivitySummary, SKStoreProductViewController, WDAppSwooshTableViewCell, NSArray, WDProfile, HKDisplayCategory, WDContextChartViewController;

@interface WDHealthDataCategoryViewController : HKViewController <HKDateCacheObserver, UITableViewDataSource, UITableViewDelegate, SKStoreProductViewControllerDelegate, WDAppSwooshTableViewCellDelegate, WDCurrentValueTableViewCellDelegate, WDFavoriteDisplayTypesControllerObserver, HKInteractiveChartViewObserver, HKSampleTypeDateRangeControllerObserver, WDUserActivityResponder> {

	UITableView* _tableView;
	HKNavigationController* _monthNavController;
	NSDate* _selectedDate;
	NSMutableDictionary* _dashboardChartItems;
	NSMutableDictionary* _dashboardUnitsInSections;
	NSDictionary* _displayTypesByTypeCodes;
	NSDictionary* _latestSummaries;
	NSMutableDictionary* _rowsForWDCategorySection;
	NSMutableArray* _categoryDetailSectionTypes;
	NSString* _categoryImportanceText;
	BOOL _firstTimeExperienceCompleted;
	BOOL _showingVideoCell;
	WDHealthDataCategoryVideoDataProvider* _videoDataProvider;
	HKActivitySummaryQuery* _activitySummaryQuery;
	HKActivitySummary* _activitySummary;
	NSDate* _latestActivitySummaryDate;
	SKStoreProductViewController* _storePageViewController;
	WDAppSwooshTableViewCell* _swooshCell;
	NSMutableDictionary* _interactiveChartControllers;
	NSArray* _displayTypes;
	WDProfile* _profile;
	HKDisplayCategory* _category;
	WDContextChartViewController* _contextChartViewController;

}

@property (nonatomic,readonly) UITableView * tableView;                                              //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) NSArray * displayTypes;                                                 //@synthesize displayTypes=_displayTypes - In the implementation block
@property (nonatomic,readonly) WDProfile * profile;                                                  //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) HKDisplayCategory * category;                                           //@synthesize category=_category - In the implementation block
@property (nonatomic,retain) WDContextChartViewController * contextChartViewController;              //@synthesize contextChartViewController=_contextChartViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)activitiesForLevelLocators:(id)arg1 startAt:(unsigned long long)arg2 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(HKDisplayCategory *)category;
-(void)setCategory:(HKDisplayCategory *)arg1 ;
-(WDProfile *)profile;
-(id)_categoryName;
-(void)loadView;
-(UITableView *)tableView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)_localeDidChange:(id)arg1 ;
-(id)_cellForRowAtIndexPath:(id)arg1 ;
-(void)_significantTimeChange:(id)arg1 ;
-(void)productViewControllerDidFinish:(id)arg1 ;
-(void)favoriteDisplayTypesControllerDidUpdate:(id)arg1 ;
-(void)applyChangeActivity:(id)arg1 ;
-(id)applyTransitionActivity:(id)arg1 ;
-(NSArray *)displayTypes;
-(void)setDisplayTypes:(NSArray *)arg1 ;
-(id)_chartCell;
-(id)initWithDisplayTypes:(id)arg1 profile:(id)arg2 title:(id)arg3 category:(id)arg4 ;
-(void)_updateActivityForViewDidAppear;
-(void)_displayAppWithStoreID:(id)arg1 ;
-(void)appsCell:(id)arg1 showStorePageWithStoreID:(id)arg2 ;
-(void)_displayTypeStringsChanged:(id)arg1 ;
-(void)_addActivityForDisplayType:(id)arg1 newResponder:(id)arg2 ;
-(id)_handlePushDisplayTypeActivity:(id)arg1 ;
-(void)_setupFirstTimeExperience;
-(void)_setupDisplayTypesByTypeCodes;
-(void)_setupDefaultUnitSections;
-(void)_setupRowsInUse;
-(void)_setupObservers;
-(void)_loadStoreData:(id)arg1 ;
-(BOOL)_isActivityCategory;
-(void)_setupSummariesAnimated:(BOOL)arg1 ;
-(void)_setupActivitySummaryQueryWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_shouldShowChartSection;
-(BOOL)_shouldShowFavoritesSection;
-(BOOL)_shouldShowTodaySection;
-(BOOL)_shouldShowThisWeekSection;
-(BOOL)_shouldShowThisMonthSection;
-(BOOL)_shouldShowThisYearSection;
-(BOOL)_shouldShowOlderSection;
-(BOOL)_shouldShowInfoSection;
-(BOOL)_shouldShowAppsSection;
-(BOOL)_shouldShowNoRecordedDataSection;
-(BOOL)_shouldShowHiddenSection;
-(void)_unitPreferencesDidUpdate:(id)arg1 ;
-(void)_showAppsRowIfNecessary:(id)arg1 ;
-(id)_createSummariesFromDisplayTypes:(id)arg1 ;
-(void)_updateTableViewFromSummaries:(id)arg1 animated:(BOOL)arg2 ;
-(void)_setupDashboardChartItems;
-(WDContextChartViewController *)contextChartViewController;
-(unsigned long long)_categoryDetailSectionForTableViewSection:(long long)arg1 ;
-(unsigned long long)_categoryDetailSectionForTableViewIndexPath:(id)arg1 ;
-(id)_titleCellWithHeaderType:(long long)arg1 ;
-(id)_activityWidgetTodayCell;
-(id)_summaryDataCellWithChart:(BOOL)arg1 ;
-(id)_appSwooshCell;
-(id)_noRecordedDataCell;
-(id)_interactiveChartControllerForDisplayType:(id)arg1 ;
-(unsigned long long)_tableViewSectionForCategoryDetailSection:(unsigned long long)arg1 ;
-(id)_favoritedDisplayTypesSetForCurrentCategory;
-(id)_summaryDictionaryByTypeCodes:(id)arg1 ;
-(void)_filterSummariesIntoSections:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateLatestSummariesWithNewSummaries:(id)arg1 ;
-(id)_tableViewIndexPathsToDeleteFromLatestSummaries:(id)arg1 ;
-(id)_modelIndexPathsToAddFromLatestSummaries:(id)arg1 ;
-(id)_rowCountPerSectionForCategorySections:(id)arg1 ;
-(id)_tableViewSectionsFromCategoryDetailSections;
-(id)_tableViewIndexPathsFromModelIndexPaths:(id)arg1 ;
-(void)_deleteEmptySectionsWithOldTableViewSections:(id)arg1 oldCategorySectionRowCounts:(id)arg2 newSectionRowCounts:(id)arg3 ;
-(void)_insertEmptySectionsFromOldCategorySectionRowCounts:(id)arg1 newSectionRowCounts:(id)arg2 ;
-(BOOL)_isHeartCategory;
-(BOOL)_isSummaryTypeCodeInHiddenSection:(long long)arg1 ;
-(id)_promotedDisplayTypesForCurrentCategory;
-(id)_currentIndexPathForHKDataTypeCode:(long long)arg1 ;
-(BOOL)_isSummaryInHiddenSection:(id)arg1 ;
-(id)_reuseIdentifierForIndexPath:(id)arg1 ;
-(void)_configureCell:(id)arg1 atIndexPath:(id)arg2 forTableView:(id)arg3 ;
-(BOOL)_isVideoCellAtIndexPath:(id)arg1 ;
-(long long)_detailTimeScopeForCategorySection:(unsigned long long)arg1 displayType:(id)arg2 ;
-(id)_pushControllerForDisplayType:(id)arg1 displayDate:(id)arg2 animated:(BOOL)arg3 ;
-(void)dateCacheDidUpdate:(id)arg1 onNotification:(id)arg2 ;
-(void)updateHeight:(double)arg1 forCell:(id)arg2 ;
-(void)sampleTypeDateRangeController:(id)arg1 didUpdateDateRanges:(id)arg2 ;
-(long long)_displayTimeScopeForCategorySection:(unsigned long long)arg1 ;
-(void)_showChartRowIfNecessary;
-(void)setContextChartViewController:(WDContextChartViewController *)arg1 ;
@end

