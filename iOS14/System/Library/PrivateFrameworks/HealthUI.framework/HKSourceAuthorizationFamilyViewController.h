/*
* Generated on Thursday, January 14, 2021 at 2:24:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKTableViewController.h>

@class HKSource, HKClinicalSourceAuthorizationController, HKSourceAuthorizationController, UIViewController, HKHealthStore;

@interface HKSourceAuthorizationFamilyViewController : HKTableViewController {

	HKSource* _source;
	HKClinicalSourceAuthorizationController* _clinicalAuthorizationController;
	HKSourceAuthorizationController* _healthDataAuthorizationController;
	UIViewController* _clinicalAuthorizationSettingsViewController;
	UIViewController* _healthDataAuthorizationSettingsViewController;
	HKHealthStore* _healthStore;

}

@property (nonatomic,readonly) HKHealthStore * healthStore;                                                          //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,copy,readonly) HKSource * source;                                                               //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) HKClinicalSourceAuthorizationController * clinicalAuthorizationController;              //@synthesize clinicalAuthorizationController=_clinicalAuthorizationController - In the implementation block
@property (nonatomic,retain) HKSourceAuthorizationController * healthDataAuthorizationController;                    //@synthesize healthDataAuthorizationController=_healthDataAuthorizationController - In the implementation block
@property (nonatomic,retain) UIViewController * clinicalAuthorizationSettingsViewController;                         //@synthesize clinicalAuthorizationSettingsViewController=_clinicalAuthorizationSettingsViewController - In the implementation block
@property (nonatomic,retain) UIViewController * healthDataAuthorizationSettingsViewController;                       //@synthesize healthDataAuthorizationSettingsViewController=_healthDataAuthorizationSettingsViewController - In the implementation block
-(HKHealthStore *)healthStore;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)init;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(HKSource *)source;
-(void)_reloadAuthorizationSettings;
-(HKClinicalSourceAuthorizationController *)clinicalAuthorizationController;
-(HKSourceAuthorizationController *)healthDataAuthorizationController;
-(id)_createFamilyCell;
-(id)_valueStringForAnyCategoryEnabled:(BOOL)arg1 ;
-(UIViewController *)clinicalAuthorizationSettingsViewController;
-(UIViewController *)healthDataAuthorizationSettingsViewController;
-(id)initWithHealthStore:(id)arg1 source:(id)arg2 ;
-(void)setClinicalAuthorizationController:(HKClinicalSourceAuthorizationController *)arg1 ;
-(void)setHealthDataAuthorizationController:(HKSourceAuthorizationController *)arg1 ;
-(void)setClinicalAuthorizationSettingsViewController:(UIViewController *)arg1 ;
-(void)setHealthDataAuthorizationSettingsViewController:(UIViewController *)arg1 ;
@end

