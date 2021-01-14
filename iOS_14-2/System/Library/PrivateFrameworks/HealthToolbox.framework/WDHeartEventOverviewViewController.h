/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)applyChangeActivity:(id)arg1 ;
-(id)applyTransitionActivity:(id)arg1 ;
-(void)viewDidLoad;
-(void)switchCellValueChanged:(id)arg1 value:(BOOL)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)initWithDisplayType:(id)arg1 profile:(id)arg2 ;
-(void)_reloadAllData;
-(void)_updateActivityForViewDidAppear;
-(void)_recomputeTotalSampleCount;
-(BOOL)_isDisplayTypeFavorited;
-(BOOL)_doesActiveWatchSupportHeartRateMotionContexts;
-(void)_addActivityForAction:(long long)arg1 newResponder:(id)arg2 ;
-(id)_heartEventType;
-(id)_cellForShowAll;
-(id)_cellForSampleAtIndexPath:(id)arg1 ;
-(id)_cellForFavoriteSwitch;
-(id)_cellForDataSourcesAndAccess;
-(id)_cellForDescription;
-(id)_pushShowAllViewController;
-(void)_pushSampleDetailViewControllerForIndexPath:(id)arg1 ;
-(id)_pushDataSourcesAndAccessController;
@end

