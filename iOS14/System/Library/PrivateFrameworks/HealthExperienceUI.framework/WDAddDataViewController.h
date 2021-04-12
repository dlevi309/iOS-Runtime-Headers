/*
* Generated on Thursday, January 14, 2021 at 2:24:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI
*/

#import <HealthUI/HKTableViewController.h>

@class HKDisplayType, HKHealthStore, HKUnitPreferenceController, HKDateCache, HKManualEntryValidationController, NSArray, NSDictionary, NSDate;

@interface WDAddDataViewController : HKTableViewController {

	HKDisplayType* _displayType;
	HKHealthStore* _healthStore;
	HKUnitPreferenceController* _unitController;
	HKDateCache* _dateCache;
	HKManualEntryValidationController* _validationController;
	NSArray* _tableViewCellsBySection;
	NSDictionary* _manualEntryItems;
	NSDate* _initialStartDate;

}

@property (nonatomic,retain) NSDate * initialStartDate;              //@synthesize initialStartDate=_initialStartDate - In the implementation block
@property (assign,nonatomic) BOOL savingEnabled; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)reloadManualEntryItems;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(long long)numberOfSections;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)addButtonTapped:(id)arg1 ;
-(void)setInitialStartDate:(NSDate *)arg1 ;
-(void)viewDidLoad;
-(NSDate *)initialStartDate;
-(void)cancelButtonTapped:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDisplayType:(id)arg1 healthStore:(id)arg2 unitController:(id)arg3 initialStartDate:(id)arg4 dateCache:(id)arg5 ;
-(id)defaultMetadata;
-(id)manualEntryItemsForSection:(long long)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)validateMaximumAllowedDurationFor:(id)arg1 endDate:(id)arg2 competion:(/*^block*/id)arg3 ;
-(void)reloadManualEntryItemsAndReloadTableView:(BOOL)arg1 ;
-(void)setSavingEnabled:(BOOL)arg1 ;
-(void)validateDataWithCompletion:(/*^block*/id)arg1 ;
-(void)saveHKObjectWithCompletion:(/*^block*/id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)defaultEditingItem;
-(id)generateHKObjects;
-(void)_loadTableViewCellsBySectionIfNecessary;
-(void)_dataValidated;
-(void)_showValidationConfirmAlertWithErrorString:(id)arg1 ;
-(void)_showValidationErrorAlertWithErrorString:(id)arg1 ;
-(BOOL)savingEnabled;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

