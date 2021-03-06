/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthUI/HKTableViewController.h>

@class HKHealthStore, HKHeartRhythmAvailability, HKKeyValueDomain, NPSManager;

@interface WDAtrialFibrillationInternalSettingsViewController : HKTableViewController {

	BOOL _deletingSamples;
	HKHealthStore* _healthStore;
	HKHeartRhythmAvailability* _heartRhythmAvailability;
	HKKeyValueDomain* _keyValueDomain;
	NPSManager* _nanoPreferenceSyncManager;

}

@property (nonatomic,readonly) HKHealthStore * healthStore;                                      //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,readonly) HKHeartRhythmAvailability * heartRhythmAvailability;              //@synthesize heartRhythmAvailability=_heartRhythmAvailability - In the implementation block
@property (nonatomic,readonly) HKKeyValueDomain * keyValueDomain;                                //@synthesize keyValueDomain=_keyValueDomain - In the implementation block
@property (nonatomic,readonly) NPSManager * nanoPreferenceSyncManager;                           //@synthesize nanoPreferenceSyncManager=_nanoPreferenceSyncManager - In the implementation block
@property (assign,nonatomic) BOOL deletingSamples;                                               //@synthesize deletingSamples=_deletingSamples - In the implementation block
-(HKHealthStore *)healthStore;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)initWithHealthStore:(id)arg1 ;
-(HKKeyValueDomain *)keyValueDomain;
-(HKHeartRhythmAvailability *)heartRhythmAvailability;
-(void)setDeletingSamples:(BOOL)arg1 ;
-(NPSManager *)nanoPreferenceSyncManager;
-(id)_buttonCellForTableView:(id)arg1 text:(id)arg2 ;
-(BOOL)deletingSamples;
-(void)_resetOnboarding;
-(void)_deleteAllSamples;
-(void)_fakeNewAnalyzedSample;
-(void)_addNewSample;
@end

