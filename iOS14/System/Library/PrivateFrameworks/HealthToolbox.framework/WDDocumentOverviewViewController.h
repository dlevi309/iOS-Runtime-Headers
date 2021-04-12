/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthUI/HKTableViewController.h>
#import <libobjc.A.dylib/WDUserActivityResponder.h>

@class HKDisplayType, WDProfile, WDDocumentListDataProvider, NSMutableArray, UIFont, NSString;

@interface WDDocumentOverviewViewController : HKTableViewController <WDUserActivityResponder> {

	HKDisplayType* _displayType;
	WDProfile* _profile;
	WDDocumentListDataProvider* _dataProvider;
	NSMutableArray* _sectionTypes;
	NSMutableArray* _reportRowTypes;
	long long _totalReportCount;
	UIFont* _bodyFont;

}

@property (nonatomic,readonly) HKDisplayType * displayType;                            //@synthesize displayType=_displayType - In the implementation block
@property (nonatomic,readonly) WDProfile * profile;                                    //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) WDDocumentListDataProvider * dataProvider;              //@synthesize dataProvider=_dataProvider - In the implementation block
@property (nonatomic,retain) NSMutableArray * sectionTypes;                            //@synthesize sectionTypes=_sectionTypes - In the implementation block
@property (nonatomic,retain) NSMutableArray * reportRowTypes;                          //@synthesize reportRowTypes=_reportRowTypes - In the implementation block
@property (assign,nonatomic) long long totalReportCount;                               //@synthesize totalReportCount=_totalReportCount - In the implementation block
@property (nonatomic,retain) UIFont * bodyFont;                                        //@synthesize bodyFont=_bodyFont - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(HKDisplayType *)displayType;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(void)setBodyFont:(UIFont *)arg1 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(WDDocumentListDataProvider *)dataProvider;
-(void)applyChangeActivity:(id)arg1 ;
-(id)applyTransitionActivity:(id)arg1 ;
-(WDProfile *)profile;
-(void)viewDidLoad;
-(UIFont *)bodyFont;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)dealloc;
-(void)_reloadAllData;
-(void)_updateActivityForViewDidAppear;
-(void)_pushShowAllViewController;
-(void)_installSections;
-(void)_recomputeTotalReportCount;
-(id)_reportItemCellForTableView:(id)arg1 row:(long long)arg2 ;
-(id)_reportShowAllCellForTableView:(id)arg1 forIndexPath:(id)arg2 ;
-(id)_reportAccessCellForTableView:(id)arg1 forIndexPath:(id)arg2 ;
-(void)_pushReportDetailViewControllerForIndexPath:(id)arg1 ;
-(void)_pushAccessViewController;
-(id)_reportSectionCellForTableView:(id)arg1 forIndexPath:(id)arg2 ;
-(id)_descriptionSectionCellForTableView:(id)arg1 row:(long long)arg2 ;
-(void)_selectReportRowForIndexPath:(id)arg1 ;
-(double)_reportSectionRowHeight:(long long)arg1 ;
-(double)_reportSectionEstimatedRowHeight:(long long)arg1 ;
-(id)initWithDisplayTypes:(id)arg1 profile:(id)arg2 title:(id)arg3 category:(id)arg4 ;
-(NSMutableArray *)sectionTypes;
-(void)setSectionTypes:(NSMutableArray *)arg1 ;
-(NSMutableArray *)reportRowTypes;
-(void)setReportRowTypes:(NSMutableArray *)arg1 ;
-(long long)totalReportCount;
-(void)setTotalReportCount:(long long)arg1 ;
@end

