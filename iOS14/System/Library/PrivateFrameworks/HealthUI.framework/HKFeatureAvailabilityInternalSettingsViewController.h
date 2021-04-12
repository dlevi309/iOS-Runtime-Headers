/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKTableViewController.h>

@class HKHealthStore, HKFeatureAvailabilityInternalSettingsConfiguration, NPSManager, NSUserDefaults;

@interface HKFeatureAvailabilityInternalSettingsViewController : HKTableViewController {

	BOOL _deletingSamples;
	HKHealthStore* _healthStore;
	HKFeatureAvailabilityInternalSettingsConfiguration* _configuration;
	NPSManager* _syncManager;
	NSUserDefaults* _userDefaults;

}

@property (nonatomic,readonly) HKHealthStore * healthStore;                                                     //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,readonly) HKFeatureAvailabilityInternalSettingsConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) NPSManager * syncManager;                                                        //@synthesize syncManager=_syncManager - In the implementation block
@property (nonatomic,readonly) NSUserDefaults * userDefaults;                                                   //@synthesize userDefaults=_userDefaults - In the implementation block
@property (assign,getter=isDeletingSamples,nonatomic) BOOL deletingSamples;                                     //@synthesize deletingSamples=_deletingSamples - In the implementation block
-(HKHealthStore *)healthStore;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(NSUserDefaults *)userDefaults;
-(HKFeatureAvailabilityInternalSettingsConfiguration *)configuration;
-(void)viewDidLoad;
-(NPSManager *)syncManager;
-(id)initWithHealthStore:(id)arg1 configuration:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(long long)_offsetSectionForSection:(long long)arg1 ;
-(BOOL)_featureEnabled;
-(id)_buttonCellForTableView:(id)arg1 ;
-(BOOL)isDeletingSamples;
-(void)_enableFeature:(BOOL)arg1 ;
-(void)setDeletingSamples:(BOOL)arg1 ;
@end

