/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/


@class HKConceptStore, HKHealthStore, HKHealthRecordsStore, HKUCUMUnitDisplayConverter, WDClinicalSourcesDataProvider, WDMedicalRecordCountProvider, HKSampleTypeUpdateController, HKDateCache, WDClinicalSampleAccountsLoader, HRWDUserActivityManager;

@interface HRProfile : NSObject {

	HKConceptStore* _conceptStore;
	HKHealthStore* _healthStore;
	HKHealthRecordsStore* _healthRecordsStore;
	HKUCUMUnitDisplayConverter* _ucumDisplayConverter;
	WDClinicalSourcesDataProvider* _clinicalSourcesDataProvider;
	WDMedicalRecordCountProvider* _medicalRecordCountProvider;
	HKSampleTypeUpdateController* _updateController;
	HKDateCache* _dateCache;
	WDClinicalSampleAccountsLoader* _clinicalSampleAccountsLoader;

}

@property (nonatomic,readonly) HKHealthStore * healthStore;                                                     //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,readonly) HKHealthRecordsStore * healthRecordsStore;                                       //@synthesize healthRecordsStore=_healthRecordsStore - In the implementation block
@property (nonatomic,readonly) HKConceptStore * conceptStore; 
@property (nonatomic,readonly) HKUCUMUnitDisplayConverter * ucumDisplayConverter;                               //@synthesize ucumDisplayConverter=_ucumDisplayConverter - In the implementation block
@property (nonatomic,readonly) WDClinicalSourcesDataProvider * clinicalSourcesDataProvider;                     //@synthesize clinicalSourcesDataProvider=_clinicalSourcesDataProvider - In the implementation block
@property (nonatomic,readonly) WDMedicalRecordCountProvider * medicalRecordCountProvider;                       //@synthesize medicalRecordCountProvider=_medicalRecordCountProvider - In the implementation block
@property (nonatomic,readonly) HKSampleTypeUpdateController * updateController;                                 //@synthesize updateController=_updateController - In the implementation block
@property (nonatomic,readonly) HKDateCache * dateCache;                                                         //@synthesize dateCache=_dateCache - In the implementation block
@property (nonatomic,readonly) HRWDUserActivityManager * userActivityManager; 
@property (assign,nonatomic,__weak) WDClinicalSampleAccountsLoader * clinicalSampleAccountsLoader;              //@synthesize clinicalSampleAccountsLoader=_clinicalSampleAccountsLoader - In the implementation block
+(id)sharedInstance;
-(HKHealthStore *)healthStore;
-(HKDateCache *)dateCache;
-(id)_initWithHealthStore:(id)arg1 ;
-(HKConceptStore *)conceptStore;
-(HRWDUserActivityManager *)userActivityManager;
-(HKHealthRecordsStore *)healthRecordsStore;
-(WDClinicalSourcesDataProvider *)clinicalSourcesDataProvider;
-(void)setClinicalSampleAccountsLoader:(WDClinicalSampleAccountsLoader *)arg1 ;
-(HKUCUMUnitDisplayConverter *)ucumDisplayConverter;
-(HKSampleTypeUpdateController *)updateController;
-(id)_initWithHealthRecordsStore:(id)arg1 ;
-(WDMedicalRecordCountProvider *)medicalRecordCountProvider;
-(WDClinicalSampleAccountsLoader *)clinicalSampleAccountsLoader;
@end

