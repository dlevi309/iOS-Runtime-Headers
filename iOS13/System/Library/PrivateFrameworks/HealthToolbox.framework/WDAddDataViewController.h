/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthUI/HKTableViewController.h>
#import <libobjc.A.dylib/WDUserActivityResponder.h>

@class HKDisplayType, WDProfile, HKUnitPreferenceController, NSArray, NSDictionary, NSDate, NSString;

@interface WDAddDataViewController : HKTableViewController <WDUserActivityResponder> {

	HKDisplayType* _displayType;
	WDProfile* _profile;
	HKUnitPreferenceController* _unitController;
	NSArray* _tableViewCellsBySection;
	NSDictionary* _manualEntryItems;
	NSDate* _initialStartDate;

}

@property (nonatomic,retain) NSDate * initialStartDate;              //@synthesize initialStartDate=_initialStartDate - In the implementation block
@property (assign,nonatomic) BOOL savingEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(long long)numberOfSections;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(NSDate *)initialStartDate;
-(void)setInitialStartDate:(NSDate *)arg1 ;
-(void)cancelButtonTapped:(id)arg1 ;
-(void)addButtonTapped:(id)arg1 ;
-(void)applyChangeActivity:(id)arg1 ;
-(id)applyTransitionActivity:(id)arg1 ;
-(id)initWithDisplayType:(id)arg1 profile:(id)arg2 unitController:(id)arg3 initialStartDate:(id)arg4 ;
-(id)defaultMetadata;
-(id)manualEntryItemsForSection:(long long)arg1 ;
-(void)_updateActivityForViewDidAppear;
-(void)setSavingEnabled:(BOOL)arg1 ;
-(void)validateDataWithCompletion:(/*^block*/id)arg1 ;
-(void)validateMaximumAllowedDurationFor:(id)arg1 endDate:(id)arg2 competion:(/*^block*/id)arg3 ;
-(id)generateHKObjects;
-(void)_loadTableViewCellsBySectionIfNecessary;
-(id)defaultEditingItem;
-(void)_dataValidated;
-(void)_showValidationConfirmAlertWithErrorString:(id)arg1 ;
-(void)_showValidationErrorAlertWithErrorString:(id)arg1 ;
-(void)saveHKObjectWithCompletion:(/*^block*/id)arg1 ;
-(void)reloadManualEntryItemsAndReloadTableView:(BOOL)arg1 ;
-(BOOL)savingEnabled;
-(void)reloadManualEntryItems;
@end

