/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthUI/HKTableViewController.h>
#import <libobjc.A.dylib/HKSwitchTableViewCellDelegate.h>
#import <libobjc.A.dylib/WDFavoriteDisplayTypesControllerObserver.h>
#import <libobjc.A.dylib/WDUserActivityResponder.h>

@protocol WDDataListViewControllerDataProvider;
@class HKDisplayType, WDProfile, NSString;

@interface WDHeartEventOverviewViewController : HKTableViewController <HKSwitchTableViewCellDelegate, WDFavoriteDisplayTypesControllerObserver, WDUserActivityResponder> {

	HKDisplayType* _displayType;
	WDProfile* _profile;
	id<WDDataListViewControllerDataProvider> _dataProvider;
	long long _visibleSampleCount;
	long long _totalSampleCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)applyChangeActivity:(id)arg1 ;
-(id)applyTransitionActivity:(id)arg1 ;
-(void)switchCellValueChanged:(id)arg1 value:(BOOL)arg2 ;
-(id)initWithDisplayType:(id)arg1 profile:(id)arg2 ;
-(id)_heartEventType;
-(void)_updateActivityForViewDidAppear;
-(BOOL)_isDisplayTypeFavorited;
-(void)_addActivityForAction:(long long)arg1 newResponder:(id)arg2 ;
-(void)_reloadAllData;
-(void)_recomputeTotalSampleCount;
-(id)_cellForShowAll;
-(id)_cellForDataSourcesAndAccess;
-(id)_pushShowAllViewController;
-(id)_pushDataSourcesAndAccessController;
-(id)_cellForDescription;
-(BOOL)_doesActiveWatchSupportHeartRateMotionContexts;
-(id)_cellForSampleAtIndexPath:(id)arg1 ;
-(id)_cellForFavoriteSwitch;
-(void)_pushSampleDetailViewControllerForIndexPath:(id)arg1 ;
@end

