/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthUI/HKTableViewController.h>
#import <UIKit/UISearchResultsUpdating.h>
#import <UIKit/UISearchControllerDelegate.h>
#import <libobjc.A.dylib/WDHealthDataTopLevelCategoryTableViewCellDelegate.h>
#import <libobjc.A.dylib/HKTabBarTapObserver.h>
#import <libobjc.A.dylib/WDUserActivityResponder.h>
#import <libobjc.A.dylib/HKScrollPerformanceTestable.h>

@class WDProfile, NSString, NSMutableArray, UIImage, UISearchBar, UIColor, WDHealthDataTopLevelCategoryTableViewCell, HKDisplayCategory, NSDate, NSArray, UIFont, HKBadge;

@interface WDHealthDataViewController : HKTableViewController <UISearchResultsUpdating, UISearchControllerDelegate, WDHealthDataTopLevelCategoryTableViewCellDelegate, HKTabBarTapObserver, WDUserActivityResponder, HKScrollPerformanceTestable> {

	WDProfile* _profile;
	NSString* _searchString;
	NSMutableArray* _searchResults;
	UIImage* _allIcon;
	UISearchBar* _searchBar;
	UIColor* _healthKeyColor;
	WDHealthDataTopLevelCategoryTableViewCell* _topLevelCategoryCell;
	HKDisplayCategory* _displayedCategory;
	NSDate* _initialStartDate;
	NSArray* _prearrangedTopLevelDataCategories;
	NSArray* _sortedSecondaryDataCategories;
	UIFont* _bodyFont;
	HKBadge* _healthRecordsBadge;

}

@property (nonatomic,copy) NSArray * prearrangedTopLevelDataCategories;                            //@synthesize prearrangedTopLevelDataCategories=_prearrangedTopLevelDataCategories - In the implementation block
@property (nonatomic,copy) NSArray * sortedSecondaryDataCategories;                                //@synthesize sortedSecondaryDataCategories=_sortedSecondaryDataCategories - In the implementation block
@property (nonatomic,retain) UIFont * bodyFont;                                                    //@synthesize bodyFont=_bodyFont - In the implementation block
@property (nonatomic,copy) HKBadge * healthRecordsBadge;                                           //@synthesize healthRecordsBadge=_healthRecordsBadge - In the implementation block
@property (getter=shouldShowSearchResults,nonatomic,readonly) BOOL showSearchResults; 
@property (nonatomic,readonly) HKDisplayCategory * displayedCategory;                              //@synthesize displayedCategory=_displayedCategory - In the implementation block
@property (nonatomic,retain) NSDate * initialStartDate;                                            //@synthesize initialStartDate=_initialStartDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)activitiesForLevelLocators:(id)arg1 startAt:(unsigned long long)arg2 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)willDismissSearchController:(id)arg1 ;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(void)_localeDidChange:(id)arg1 ;
-(UIFont *)bodyFont;
-(NSDate *)initialStartDate;
-(void)setInitialStartDate:(NSDate *)arg1 ;
-(void)applyChangeActivity:(id)arg1 ;
-(id)applyTransitionActivity:(id)arg1 ;
-(id)uniqueUserActivityType;
-(void)setBodyFont:(UIFont *)arg1 ;
-(void)_updateActivityForViewDidAppear;
-(id)_createPrearrangedTopLevelDataCategories;
-(id)_createSortedSecondaryDataCategories;
-(void)_displayTypeStringsChanged:(id)arg1 ;
-(void)setSortedSecondaryDataCategories:(NSArray *)arg1 ;
-(void)setupSearchResultsController;
-(void)_updateHealthRecordsBadge;
-(void)_registerForBadgesDidUpdateNotification;
-(void)setHealthRecordsBadge:(HKBadge *)arg1 ;
-(id)_indexPathForCategory:(id)arg1 ;
-(id)_prearrangedTopLevelDisplayCategoryIdentifiers;
-(id)_categoryTitleForDisplayCategory:(id)arg1 ;
-(HKBadge *)healthRecordsBadge;
-(NSArray *)prearrangedTopLevelDataCategories;
-(NSArray *)sortedSecondaryDataCategories;
-(BOOL)shouldShowSearchResults;
-(id)tableView:(id)arg1 searchCellForRowAtIndexPath:(id)arg2 ;
-(id)_badgeForDisplayCategory:(id)arg1 ;
-(id)listIconForDisplayCategory:(id)arg1 ;
-(id)_pushDisplayTypeDetailViewControllerForDisplayType:(id)arg1 animated:(BOOL)arg2 ;
-(void)_addActivityForDisplayType:(id)arg1 newResponder:(id)arg2 ;
-(void)_postAWDMetricForTappingIntoHealthRecords;
-(id)_pushDisplayCategoryViewControllerForDisplayCategory:(id)arg1 animated:(BOOL)arg2 ;
-(void)_presentProfileViewController;
-(id)_viewControllerForCategory:(id)arg1 displayTypes:(id)arg2 title:(id)arg3 ;
-(id)_pushDisplayCategoryViewControllerWithDisplayTypes:(id)arg1 title:(id)arg2 showListIcon:(BOOL)arg3 category:(id)arg4 animated:(BOOL)arg5 ;
-(void)_addActivityForDisplayCategory:(id)arg1 newResponder:(id)arg2 ;
-(BOOL)_shouldShowHealthRecords;
-(BOOL)_filterDisplayTypeForSearching:(id)arg1 ;
-(id)_handlePushCategoryActivity:(id)arg1 ;
-(id)_handlePushDisplayTypeActivity:(id)arg1 ;
-(void)topLevelCategoryCell:(id)arg1 showHealthDataCategory:(id)arg2 ;
-(void)didChangeToAnotherTab;
-(void)testScrollPerformanceWithTestName:(id)arg1 iterations:(int)arg2 delta:(int)arg3 options:(id)arg4 ;
-(HKDisplayCategory *)displayedCategory;
-(void)setPrearrangedTopLevelDataCategories:(NSArray *)arg1 ;
@end

