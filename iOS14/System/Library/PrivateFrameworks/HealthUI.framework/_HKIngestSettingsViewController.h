/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKTableViewController.h>
#import <libobjc.A.dylib/HKSwitchTableViewCellDelegate.h>

@class HKHealthServicesManager, HKDisplayTypeController, NSMutableArray, NSUUID, HKHealthStore;

@interface _HKIngestSettingsViewController : HKTableViewController <HKSwitchTableViewCellDelegate> {

	HKHealthServicesManager* _healthServicesManager;
	HKDisplayTypeController* _displayTypeController;
	NSMutableArray* _dataTypeNames;
	BOOL _deviceEnabled;
	BOOL _deviceFound;
	NSUUID* _deviceIdentifier;
	HKHealthStore* _healthStore;

}

@property (nonatomic,copy) NSUUID * deviceIdentifier;                  //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,retain) HKHealthStore * healthStore;              //@synthesize healthStore=_healthStore - In the implementation block
-(NSUUID *)deviceIdentifier;
-(void)setDeviceIdentifier:(NSUUID *)arg1 ;
-(HKHealthStore *)healthStore;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
-(void)viewDidLoad;
-(void)switchCellValueChanged:(id)arg1 value:(BOOL)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)fetchEnabledStatusForPeripheral;
-(id)_initWithHealthStore:(id)arg1 displayTypeController:(id)arg2 useInsetStyling:(BOOL)arg3 ;
-(void)reloadData:(id)arg1 ;
@end

