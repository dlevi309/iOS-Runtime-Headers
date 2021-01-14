/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/


@class HKConceptStore, HRHealthRecordsMigrator, HKHealthStore, HKHealthRecordsStore, HKUCUMUnitDisplayConverter, WDClinicalSourcesDataProvider, HKSampleTypeUpdateController, HKDateCache, WDClinicalSampleAccountsLoader, WDClinicalOnboardingManager, HRWDUserActivityManager;

@interface HRProfile : NSObject {

	HKConceptStore* _conceptStore;
	HRHealthRecordsMigrator* _migrator;
	HKHealthStore* _healthStore;
	HKHealthRecordsStore* _healthRecordsStore;
	HKUCUMUnitDisplayConverter* _ucumDisplayConverter;
	WDClinicalSourcesDataProvider* _clinicalSourcesDataProvider;
	HKSampleTypeUpdateController* _updateController;
	HKDateCache* _dateCache;
	WDClinicalSampleAccountsLoader* _clinicalSampleAccountsLoader;
	WDClinicalOnboardingManager* _onboardingManager;

}

@property (nonatomic,readonly) HKHealthStore * healthStore;                                                     //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,readonly) HKHealthRecordsStore * healthRecordsStore;                                       //@synthesize healthRecordsStore=_healthRecordsStore - In the implementation block
@property (nonatomic,readonly) HKConceptStore * conceptStore; 
@property (nonatomic,readonly) HKUCUMUnitDisplayConverter * ucumDisplayConverter;                               //@synthesize ucumDisplayConverter=_ucumDisplayConverter - In the implementation block
@property (nonatomic,readonly) WDClinicalSourcesDataProvider * clinicalSourcesDataProvider;                     //@synthesize clinicalSourcesDataProvider=_clinicalSourcesDataProvider - In the implementation block
@property (nonatomic,readonly) HKSampleTypeUpdateController * updateController;                                 //@synthesize updateController=_updateController - In the implementation block
@property (nonatomic,readonly) HKDateCache * dateCache;                                                         //@synthesize dateCache=_dateCache - In the implementation block
@property (nonatomic,readonly) HRWDUserActivityManager * userActivityManager; 
@property (assign,nonatomic,__weak) WDClinicalSampleAccountsLoader * clinicalSampleAccountsLoader;              //@synthesize clinicalSampleAccountsLoader=_clinicalSampleAccountsLoader - In the implementation block
@property (nonatomic,readonly) WDClinicalOnboardingManager * onboardingManager;                                 //@synthesize onboardingManager=_onboardingManager - In the implementation block
+(id)userProfileWithProfileIdentifier:(id)arg1 ;
-(HKHealthStore *)healthStore;
-(HKDateCache *)dateCache;
-(HKHealthRecordsStore *)healthRecordsStore;
-(WDClinicalSourcesDataProvider *)clinicalSourcesDataProvider;
-(void)setClinicalSampleAccountsLoader:(WDClinicalSampleAccountsLoader *)arg1 ;
-(unsigned long long)hash;
-(HKUCUMUnitDisplayConverter *)ucumDisplayConverter;
-(id)_initWithHealthStore:(id)arg1 ;
-(id)initWithHealthStore:(id)arg1 profileIdentifier:(id)arg2 ;
-(HRWDUserActivityManager *)userActivityManager;
-(HKSampleTypeUpdateController *)updateController;
-(WDClinicalSampleAccountsLoader *)clinicalSampleAccountsLoader;
-(WDClinicalOnboardingManager *)onboardingManager;
-(BOOL)isEqual:(id)arg1 ;
-(HKConceptStore *)conceptStore;
@end

