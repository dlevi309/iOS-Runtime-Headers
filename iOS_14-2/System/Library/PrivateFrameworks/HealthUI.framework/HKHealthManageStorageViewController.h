/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <Preferences/PSListController.h>

@class UIProgressHUD, HKCloudSyncControl, HKHealthStore;

@interface HKHealthManageStorageViewController : PSListController {

	long long _status;
	UIProgressHUD* _spinnerView;
	HKCloudSyncControl* _cloudSyncControl;
	HKHealthStore* _healthStore;

}

@property (nonatomic,readonly) HKHealthStore * healthStore;              //@synthesize healthStore=_healthStore - In the implementation block
-(HKHealthStore *)healthStore;
-(id)specifiers;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)hideSpinner;
-(void)showSpinnerMessage:(id)arg1 ;
-(void)_loadCloudSyncStorageStatus;
-(void)confirmDisable:(id)arg1 ;
-(void)_disableAndDelete:(id)arg1 ;
@end

