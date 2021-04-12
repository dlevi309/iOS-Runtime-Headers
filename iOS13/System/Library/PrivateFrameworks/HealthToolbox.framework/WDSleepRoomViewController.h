/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthUI/HKTableViewController.h>
#import <libobjc.A.dylib/HKInteractiveChartViewObserver.h>
#import <libobjc.A.dylib/HKDisplayTypeContextTableViewCellDelegate.h>
#import <libobjc.A.dylib/WDFavoriteDisplayTypesControllerObserver.h>
#import <libobjc.A.dylib/HKSwitchTableViewCellDelegate.h>
#import <libobjc.A.dylib/WDUserActivityResponder.h>

@class WDProfile, HKDisplayType, NSArray, HKSleepChartViewController, WDSleepRoomDataSource, NSMutableDictionary, NSMutableArray, HKDisplayTypeContextTableViewCell, HKDisplayCategory, NSString, NSDate, WDSleepRoomViewControllerState;

@interface WDSleepRoomViewController : HKTableViewController <HKInteractiveChartViewObserver, HKDisplayTypeContextTableViewCellDelegate, WDFavoriteDisplayTypesControllerObserver, HKSwitchTableViewCellDelegate, WDUserActivityResponder> {

	WDProfile* _profile;
	HKDisplayType* _displayType;
	NSArray* _tableSections;
	HKSleepChartViewController* _interactiveChartViewController;
	WDSleepRoomDataSource* _sleepRoomDataSource;
	NSMutableDictionary* _rowsForWDHealthRoomSection;
	NSMutableArray* _sectionTypes;
	long long _currentChartTimeScope;
	HKDisplayTypeContextTableViewCell* _contextCell;
	HKDisplayCategory* _category;
	NSString* _categoryImportanceText;
	unsigned long long _selectedContextIndex;
	NSDate* _displayDate;
	WDSleepRoomViewControllerState* _state;

}

@property (nonatomic,retain) WDProfile * profile;                                                      //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) HKDisplayType * displayType;                                              //@synthesize displayType=_displayType - In the implementation block
@property (nonatomic,retain) NSArray * tableSections;                                                  //@synthesize tableSections=_tableSections - In the implementation block
@property (nonatomic,retain) HKSleepChartViewController * interactiveChartViewController;              //@synthesize interactiveChartViewController=_interactiveChartViewController - In the implementation block
@property (nonatomic,retain) WDSleepRoomDataSource * sleepRoomDataSource;                              //@synthesize sleepRoomDataSource=_sleepRoomDataSource - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * rowsForWDHealthRoomSection;                         //@synthesize rowsForWDHealthRoomSection=_rowsForWDHealthRoomSection - In the implementation block
@property (nonatomic,retain) NSMutableArray * sectionTypes;                                            //@synthesize sectionTypes=_sectionTypes - In the implementation block
@property (assign,nonatomic) long long currentChartTimeScope;                                          //@synthesize currentChartTimeScope=_currentChartTimeScope - In the implementation block
@property (nonatomic,retain) HKDisplayTypeContextTableViewCell * contextCell;                          //@synthesize contextCell=_contextCell - In the implementation block
@property (nonatomic,retain) HKDisplayCategory * category;                                             //@synthesize category=_category - In the implementation block
@property (nonatomic,retain) NSString * categoryImportanceText;                                        //@synthesize categoryImportanceText=_categoryImportanceText - In the implementation block
@property (assign,nonatomic) unsigned long long selectedContextIndex;                                  //@synthesize selectedContextIndex=_selectedContextIndex - In the implementation block
@property (nonatomic,retain) NSDate * displayDate;                                                     //@synthesize displayDate=_displayDate - In the implementation block
@property (nonatomic,retain) WDSleepRoomViewControllerState * state;                                   //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(HKDisplayCategory *)category;
-(void)setCategory:(HKDisplayCategory *)arg1 ;
-(WDSleepRoomViewControllerState *)state;
-(void)setState:(WDSleepRoomViewControllerState *)arg1 ;
-(HKDisplayType *)displayType;
-(void)setDisplayType:(HKDisplayType *)arg1 ;
-(WDProfile *)profile;
-(void)setProfile:(WDProfile *)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)_cellForRowAtIndexPath:(id)arg1 ;
-(void)setDisplayDate:(NSDate *)arg1 ;
-(NSDate *)displayDate;
-(id)_descriptionCell;
-(NSArray *)tableSections;
-(void)setTableSections:(NSArray *)arg1 ;
-(void)favoriteDisplayTypesControllerDidUpdate:(id)arg1 ;
-(void)applyChangeActivity:(id)arg1 ;
-(id)applyTransitionActivity:(id)arg1 ;
-(id)_chartCell;
-(void)switchCellValueChanged:(id)arg1 value:(BOOL)arg2 ;
-(id)initWithDisplayTypes:(id)arg1 profile:(id)arg2 displayDate:(id)arg3 title:(id)arg4 category:(id)arg5 ;
-(void)_updateActivityForViewDidAppear;
-(unsigned long long)_rowTypeForIndexPath:(id)arg1 ;
-(BOOL)_isDisplayTypeFavorited;
-(void)_setupRowsInUse;
-(id)_titleCellWithHeaderType:(long long)arg1 ;
-(id)_reuseIdentifierForIndexPath:(id)arg1 ;
-(void)didUpdateFromDateZoom:(long long)arg1 toDateZoom:(long long)arg2 newVisibleRange:(id)arg3 ;
-(void)didUpdateVisibleValueRange:(id)arg1 changeContext:(long long)arg2 ;
-(void)newDataArrivedWithValueRange:(id)arg1 ;
-(id)_showAddDataVC:(id)arg1 ;
-(void)_addActivityForAction:(long long)arg1 newResponder:(id)arg2 ;
-(HKSleepChartViewController *)interactiveChartViewController;
-(NSMutableArray *)sectionTypes;
-(void)setSectionTypes:(NSMutableArray *)arg1 ;
-(void)setupInteractiveChartController;
-(WDSleepRoomDataSource *)sleepRoomDataSource;
-(unsigned long long)_sectionForTableViewSection:(long long)arg1 ;
-(unsigned long long)_sectionForTableViewIndexPath:(id)arg1 ;
-(id)_accessCell;
-(id)_showAllCell;
-(id)_contextCell;
-(id)_favoriteSwitchCell;
-(void)_configureCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(id)_showAllDataVC;
-(unsigned long long)selectedContextIndex;
-(id)_sleepRoomDescription;
-(void)_updateContextualViews;
-(id)_indexPathForRowType:(unsigned long long)arg1 ;
-(void)setSelectedContextIndex:(unsigned long long)arg1 ;
-(void)contextCell:(id)arg1 didSelectItemAtIndex:(long long)arg2 ;
-(void)setInteractiveChartViewController:(HKSleepChartViewController *)arg1 ;
-(void)setSleepRoomDataSource:(WDSleepRoomDataSource *)arg1 ;
-(NSMutableDictionary *)rowsForWDHealthRoomSection;
-(void)setRowsForWDHealthRoomSection:(NSMutableDictionary *)arg1 ;
-(long long)currentChartTimeScope;
-(void)setCurrentChartTimeScope:(long long)arg1 ;
-(HKDisplayTypeContextTableViewCell *)contextCell;
-(void)setContextCell:(HKDisplayTypeContextTableViewCell *)arg1 ;
-(NSString *)categoryImportanceText;
-(void)setCategoryImportanceText:(NSString *)arg1 ;
@end

