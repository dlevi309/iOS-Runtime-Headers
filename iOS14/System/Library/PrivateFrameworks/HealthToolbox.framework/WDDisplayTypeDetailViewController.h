/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthToolbox/HealthToolbox-Structs.h>
#import <HealthUI/HKTableViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/HKInteractiveChartViewObserver.h>
#import <libobjc.A.dylib/WDSourceOrderObserver.h>
#import <libobjc.A.dylib/WDUserActivityResponder.h>

@class HKDisplayType, HKDisplayCategory, HKNavigationController, NSDate, _UINavigationControllerPalette, HKTimeScopeControl, NSSet, WDProfile, NSMutableArray, UIFont, HKInteractiveChartViewController, NSString;

@interface WDDisplayTypeDetailViewController : HKTableViewController <UITableViewDataSource, UITableViewDelegate, HKInteractiveChartViewObserver, WDSourceOrderObserver, WDUserActivityResponder> {

	HKDisplayType* _displayType;
	HKDisplayCategory* _displayCategory;
	HKNavigationController* _monthNavController;
	NSDate* _selectedDate;
	_UINavigationControllerPalette* _palette;
	HKTimeScopeControl* _timeSpanControl;
	NSSet* _availableUnits;
	BOOL _inLandscapeMode;
	WDProfile* _profile;
	NSMutableArray* _sections;
	UIFont* _bodyFont;
	HKInteractiveChartViewController* _interactiveChartViewController;

}

@property (nonatomic,retain) UIFont * bodyFont;                                                                //@synthesize bodyFont=_bodyFont - In the implementation block
@property (nonatomic,readonly) HKInteractiveChartViewController * interactiveChartViewController;              //@synthesize interactiveChartViewController=_interactiveChartViewController - In the implementation block
@property (nonatomic,retain) WDProfile * profile;                                                              //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) NSMutableArray * sections;                                                        //@synthesize sections=_sections - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setSections:(NSMutableArray *)arg1 ;
-(void)setProfile:(WDProfile *)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setBodyFont:(UIFont *)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(NSMutableArray *)sections;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)applyChangeActivity:(id)arg1 ;
-(id)applyTransitionActivity:(id)arg1 ;
-(WDProfile *)profile;
-(void)viewDidLoad;
-(void)_localeDidChange:(id)arg1 ;
-(UIFont *)bodyFont;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_setupObservers;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)_unitPreferencesDidUpdate:(id)arg1 ;
-(void)_updateActivityForViewDidAppear;
-(void)_addActivityForAction:(long long)arg1 newResponder:(id)arg2 ;
-(void)_displayTypeStringsChanged:(id)arg1 ;
-(BOOL)_canSelectUnitsRow;
-(id)_selectedUnitCellText;
-(void)_timeFrameForChartsChanged:(id)arg1 ;
-(id)_showAddDataVC:(id)arg1 ;
-(void)calculateSections;
-(void)addSectionWithItems:(id)arg1 ;
-(void)addSectionWithItem:(id)arg1 ;
-(BOOL)_shouldShowUnitsRow;
-(void)_detachPaletteIfNecessary;
-(void)_configureCell:(id)arg1 forTableView:(id)arg2 ;
-(id)_showAllDataVC:(id)arg1 ;
-(void)_changeTimeScope:(long long)arg1 ;
-(void)sourceOrderUpdatedWithOrder:(id)arg1 dataType:(id)arg2 ;
-(id)initWithDisplayType:(id)arg1 displayCategory:(id)arg2 profile:(id)arg3 displayDate:(id)arg4 ;
-(void)_attachPaletteIfNecessary;
-(HKInteractiveChartViewController *)interactiveChartViewController;
@end

