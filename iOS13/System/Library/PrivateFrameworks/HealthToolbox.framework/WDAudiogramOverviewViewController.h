/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthUI/HKTableViewController.h>
#import <libobjc.A.dylib/HKSwitchTableViewCellDelegate.h>
#import <libobjc.A.dylib/WDAppSwooshTableViewCellDelegate.h>
#import <libobjc.A.dylib/SKStoreProductViewControllerDelegate.h>
#import <libobjc.A.dylib/WDUserActivityResponder.h>

@class HKDisplayType, WDProfile, HKAudiogramChartViewController, NSArray, NSString;

@interface WDAudiogramOverviewViewController : HKTableViewController <HKSwitchTableViewCellDelegate, WDAppSwooshTableViewCellDelegate, SKStoreProductViewControllerDelegate, WDUserActivityResponder> {

	HKDisplayType* _displayType;
	WDProfile* _profile;
	HKAudiogramChartViewController* _audiogramChartViewController;
	NSArray* _sectionToRows;

}

@property (nonatomic,readonly) HKDisplayType * displayType;                                                //@synthesize displayType=_displayType - In the implementation block
@property (nonatomic,readonly) WDProfile * profile;                                                        //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) HKAudiogramChartViewController * audiogramChartViewController;              //@synthesize audiogramChartViewController=_audiogramChartViewController - In the implementation block
@property (nonatomic,retain) NSArray * sectionToRows;                                                      //@synthesize sectionToRows=_sectionToRows - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HKDisplayType *)displayType;
-(WDProfile *)profile;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)productViewControllerDidFinish:(id)arg1 ;
-(id)_descriptionCell;
-(void)applyChangeActivity:(id)arg1 ;
-(id)applyTransitionActivity:(id)arg1 ;
-(void)switchCellValueChanged:(id)arg1 value:(BOOL)arg2 ;
-(id)initWithDisplayType:(id)arg1 profile:(id)arg2 ;
-(void)_rebuildSections;
-(void)_queryForAudiogramChartSamples;
-(void)_updateActivityForViewDidAppear;
-(BOOL)_shouldShowAppsRow;
-(void)setSectionToRows:(NSArray *)arg1 ;
-(NSArray *)sectionToRows;
-(long long)_rowTypeForIndexPath:(id)arg1 ;
-(id)_audiogramChartCell;
-(id)_addToFavoritesCell;
-(id)_showAllDataCell;
-(id)_sourcesAndAccessCell;
-(id)_recommendedAppsCell;
-(BOOL)_sectionNumber:(long long)arg1 containsRowType:(long long)arg2 ;
-(void)_pushShowAllDataViewController;
-(void)_pushSourcesAndAccessViewController;
-(void)_displayAppWithStoreID:(id)arg1 ;
-(HKAudiogramChartViewController *)audiogramChartViewController;
-(BOOL)_isDisplayTypeFavorited;
-(void)_updateAudiogramSamples:(id)arg1 error:(id)arg2 ;
-(void)appsCell:(id)arg1 showStorePageWithStoreID:(id)arg2 ;
@end

