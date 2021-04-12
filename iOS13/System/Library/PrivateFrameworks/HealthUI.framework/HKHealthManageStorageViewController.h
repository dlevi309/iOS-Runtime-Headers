/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <Preferences/PSListController.h>

@class UIProgressHUD, HKHealthStore;

@interface HKHealthManageStorageViewController : PSListController {

	long long _status;
	UIProgressHUD* _spinnerView;
	HKHealthStore* _healthStore;

}

@property (nonatomic,readonly) HKHealthStore * healthStore;              //@synthesize healthStore=_healthStore - In the implementation block
-(id)init;
-(HKHealthStore *)healthStore;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)specifiers;
-(void)showSpinnerMessage:(id)arg1 ;
-(void)hideSpinner;
-(void)_loadCloudSyncStorageStatus;
-(void)confirmDisable:(id)arg1 ;
-(void)_disableAndDelete:(id)arg1 ;
@end

