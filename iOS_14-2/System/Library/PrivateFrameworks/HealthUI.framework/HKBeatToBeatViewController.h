/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKTableViewController.h>

@class HKHealthStore, HKDisplayTypeController, HKUnitPreferenceController, NSArray;

@interface HKBeatToBeatViewController : HKTableViewController {

	HKHealthStore* _healthStore;
	HKDisplayTypeController* _displayTypeController;
	HKUnitPreferenceController* _unitController;
	NSArray* _bpmPoints;

}

@property (nonatomic,retain) HKHealthStore * healthStore;                                  //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,retain) HKDisplayTypeController * displayTypeController;              //@synthesize displayTypeController=_displayTypeController - In the implementation block
@property (nonatomic,retain) HKUnitPreferenceController * unitController;                  //@synthesize unitController=_unitController - In the implementation block
@property (nonatomic,retain) NSArray * bpmPoints;                                          //@synthesize bpmPoints=_bpmPoints - In the implementation block
-(HKHealthStore *)healthStore;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(HKUnitPreferenceController *)unitController;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
-(void)viewDidLoad;
-(HKDisplayTypeController *)displayTypeController;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)setUnitController:(HKUnitPreferenceController *)arg1 ;
-(void)setDisplayTypeController:(HKDisplayTypeController *)arg1 ;
-(id)initWithHeartbeatSeriesSample:(id)arg1 healthStore:(id)arg2 displayTypeController:(id)arg3 unitController:(id)arg4 ;
-(id)initWithHRVSample:(id)arg1 healthStore:(id)arg2 displayTypeController:(id)arg3 unitController:(id)arg4 ;
-(id)_initWithHealthStore:(id)arg1 displayTypeController:(id)arg2 unitController:(id)arg3 ;
-(void)_addHeartbeatSeriesSample:(id)arg1 ;
-(id)_displayStringForInstantaneousBPM:(double)arg1 ;
-(id)_displayStringForTime:(double)arg1 ;
-(NSArray *)bpmPoints;
-(void)setBpmPoints:(NSArray *)arg1 ;
@end

