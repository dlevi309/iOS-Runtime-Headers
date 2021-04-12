/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthUI/HKTableViewController.h>
#import <libobjc.A.dylib/WDAppSwooshTableViewCellDelegate.h>
#import <libobjc.A.dylib/SKStoreProductViewControllerDelegate.h>
#import <libobjc.A.dylib/WDUserActivityResponder.h>

@class HKDisplayType, WDProfile, WDDocumentListDataProvider, NSMutableArray, WDAppSwooshTableViewCell, UIFont, NSString;

@interface WDDocumentOverviewViewController : HKTableViewController <WDAppSwooshTableViewCellDelegate, SKStoreProductViewControllerDelegate, WDUserActivityResponder> {

	HKDisplayType* _displayType;
	WDProfile* _profile;
	WDDocumentListDataProvider* _dataProvider;
	NSMutableArray* _sectionTypes;
	NSMutableArray* _reportRowTypes;
	WDAppSwooshTableViewCell* _recommendedAppsCell;
	long long _totalReportCount;
	UIFont* _bodyFont;

}

@property (nonatomic,readonly) HKDisplayType * displayType;                               //@synthesize displayType=_displayType - In the implementation block
@property (nonatomic,readonly) WDProfile * profile;                                       //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) WDDocumentListDataProvider * dataProvider;                 //@synthesize dataProvider=_dataProvider - In the implementation block
@property (nonatomic,retain) NSMutableArray * sectionTypes;                               //@synthesize sectionTypes=_sectionTypes - In the implementation block
@property (nonatomic,retain) NSMutableArray * reportRowTypes;                             //@synthesize reportRowTypes=_reportRowTypes - In the implementation block
@property (nonatomic,retain) WDAppSwooshTableViewCell * recommendedAppsCell;              //@synthesize recommendedAppsCell=_recommendedAppsCell - In the implementation block
@property (assign,nonatomic) long long totalReportCount;                                  //@synthesize totalReportCount=_totalReportCount - In the implementation block
@property (nonatomic,retain) UIFont * bodyFont;                                           //@synthesize bodyFont=_bodyFont - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(HKDisplayType *)displayType;
-(WDProfile *)profile;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(WDDocumentListDataProvider *)dataProvider;
-(UIFont *)bodyFont;
-(void)productViewControllerDidFinish:(id)arg1 ;
-(void)applyChangeActivity:(id)arg1 ;
-(id)applyTransitionActivity:(id)arg1 ;
-(id)initWithDisplayTypes:(id)arg1 profile:(id)arg2 title:(id)arg3 category:(id)arg4 ;
-(void)setBodyFont:(UIFont *)arg1 ;
-(void)_updateActivityForViewDidAppear;
-(BOOL)_shouldShowAppsRow;
-(void)appsCell:(id)arg1 showStorePageWithStoreID:(id)arg2 ;
-(void)_reloadAllData;
-(void)_pushShowAllViewController;
-(void)_startRecommendedAppsEngine;
-(void)_installSections;
-(void)_recomputeTotalReportCount;
-(void)_handleAppSectionVisibility;
-(void)_mobileAssetDataNotification:(id)arg1 ;
-(void)_storeDataNotification:(id)arg1 ;
-(id)_reportItemCellForTableView:(id)arg1 row:(long long)arg2 ;
-(id)_reportShowAllCellForTableView:(id)arg1 forIndexPath:(id)arg2 ;
-(id)_reportAccessCellForTableView:(id)arg1 forIndexPath:(id)arg2 ;
-(void)_pushReportDetailViewControllerForIndexPath:(id)arg1 ;
-(void)_pushAccessViewController;
-(id)_reportSectionCellForTableView:(id)arg1 forIndexPath:(id)arg2 ;
-(id)_appSectionCellForTableView:(id)arg1 row:(long long)arg2 ;
-(id)_descriptionSectionCellForTableView:(id)arg1 row:(long long)arg2 ;
-(void)_selectReportRowForIndexPath:(id)arg1 ;
-(double)_reportSectionRowHeight:(long long)arg1 ;
-(double)_reportSectionEstimatedRowHeight:(long long)arg1 ;
-(NSMutableArray *)sectionTypes;
-(void)setSectionTypes:(NSMutableArray *)arg1 ;
-(NSMutableArray *)reportRowTypes;
-(void)setReportRowTypes:(NSMutableArray *)arg1 ;
-(WDAppSwooshTableViewCell *)recommendedAppsCell;
-(void)setRecommendedAppsCell:(WDAppSwooshTableViewCell *)arg1 ;
-(long long)totalReportCount;
-(void)setTotalReportCount:(long long)arg1 ;
@end

