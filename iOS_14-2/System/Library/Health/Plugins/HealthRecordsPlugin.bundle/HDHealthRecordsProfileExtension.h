/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <HealthRecordsPlugin/HealthRecordsPlugin-Structs.h>
#import <libobjc.A.dylib/HDClinicalAccountStateObserver.h>
#import <libobjc.A.dylib/HDProfileExtension.h>
#import <libobjc.A.dylib/HDHealthRecordsProfileExtension.h>

@protocol HDHealthRecordsProfileExtension
@required
-(BOOL)isSupportedFHIRVersionString:(id)arg1;
-(void)registerHealthRecordsSupportedChangeObserver:(id)arg1;
-(void)removeAccountEventObserver:(id)arg1;
-(void)unregisterHealthRecordsSupportedChangeObserver:(id)arg1;
-(void)addAccountEventObserver:(id)arg1;
-(BOOL)deviceConfigurationSupportsHealthRecords:(BOOL*)arg1 error:(id*)arg2;
-(BOOL)hasAccounts:(BOOL*)arg1 error:(id*)arg2;
-(BOOL)isSupportedFHIRResourceType:(id)arg1 FHIRVersionString:(id)arg2;

@end


@protocol HDHealthDaemon;
@class NSLocale, HKObserverSet, HRSSupportedFHIRConfiguration, HDProfile, HDClinicalAccountManager, HDClinicalAnalyticsManager, HDClinicalDailyAnalyticsManager, HDHealthRecordsAPIReminderRegistry, HDClinicalIngestionManager, HDClinicalProviderServiceManager, HDClinicalOptInStudy, HDClinicalOptInDataCollectionManager, HDClinicalOptInDataUploadManager, HDMedicalCodingDataManager, NSString;

@interface HDHealthRecordsProfileExtension : NSObject <HDClinicalAccountStateObserver, HDProfileExtension, HDHealthRecordsProfileExtension> {

	id<HDHealthDaemon> _healthDeamon;
	NSLocale* _lastKnownLocale;
	long long _lastKnownSupportedStatus;
	HKObserverSet* _chrSupportedObservers;
	HKObserverSet* _accountEventObservers;
	HRSSupportedFHIRConfiguration* _supportedFHIRConfiguration;
	os_unfair_lock_s _ivarLock;
	HDProfile* _profile;
	HDClinicalAccountManager* _accountManager;
	HDClinicalAnalyticsManager* _analyticsManager;
	HDClinicalDailyAnalyticsManager* _dailyAnalyticsManager;
	HDHealthRecordsAPIReminderRegistry* _APIReminderRegistry;
	HDClinicalIngestionManager* _ingestionManager;
	HDClinicalProviderServiceManager* _providerServiceManager;
	HDClinicalOptInStudy* _optInStudy;
	HDClinicalOptInDataCollectionManager* _optInDataCollectionManager;
	HDClinicalOptInDataUploadManager* _optInDataUploadManager;
	HDMedicalCodingDataManager* _medicalCodingDataManager;
	HRSSupportedFHIRConfiguration* _unitTesting_supportedFHIRConfigurationOverride;

}

@property (nonatomic,copy) HRSSupportedFHIRConfiguration * unitTesting_supportedFHIRConfigurationOverride;              //@synthesize unitTesting_supportedFHIRConfigurationOverride=_unitTesting_supportedFHIRConfigurationOverride - In the implementation block
@property (nonatomic,__weak,readonly) HDProfile * profile;                                                              //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) HDClinicalAccountManager * accountManager;                                               //@synthesize accountManager=_accountManager - In the implementation block
@property (nonatomic,readonly) HDClinicalAnalyticsManager * analyticsManager;                                           //@synthesize analyticsManager=_analyticsManager - In the implementation block
@property (nonatomic,readonly) HDClinicalDailyAnalyticsManager * dailyAnalyticsManager;                                 //@synthesize dailyAnalyticsManager=_dailyAnalyticsManager - In the implementation block
@property (nonatomic,readonly) HDHealthRecordsAPIReminderRegistry * APIReminderRegistry;                                //@synthesize APIReminderRegistry=_APIReminderRegistry - In the implementation block
@property (nonatomic,readonly) HDClinicalIngestionManager * ingestionManager;                                           //@synthesize ingestionManager=_ingestionManager - In the implementation block
@property (nonatomic,readonly) HDClinicalProviderServiceManager * providerServiceManager;                               //@synthesize providerServiceManager=_providerServiceManager - In the implementation block
@property (nonatomic,readonly) HDClinicalOptInStudy * optInStudy;                                                       //@synthesize optInStudy=_optInStudy - In the implementation block
@property (nonatomic,readonly) HDClinicalOptInDataCollectionManager * optInDataCollectionManager;                       //@synthesize optInDataCollectionManager=_optInDataCollectionManager - In the implementation block
@property (nonatomic,readonly) HDClinicalOptInDataUploadManager * optInDataUploadManager;                               //@synthesize optInDataUploadManager=_optInDataUploadManager - In the implementation block
@property (nonatomic,readonly) HDMedicalCodingDataManager * medicalCodingDataManager;                                   //@synthesize medicalCodingDataManager=_medicalCodingDataManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HDClinicalAccountManager *)accountManager;
-(BOOL)isSupportedFHIRVersionString:(id)arg1 ;
-(id)createHealthRecordsClinicalAccountManager;
-(void)registerHealthRecordsSupportedChangeObserver:(id)arg1 ;
-(id)createHealthRecordsAPIReminderRegistry;
-(id)_supportedFHIRConfiguration;
-(void)_ivarLock_updateHealthRecordsSupportedStatus;
-(id)initWithProfile:(id)arg1 ;
-(HDClinicalOptInDataUploadManager *)optInDataUploadManager;
-(void)_notifyHealthRecordsSupportedChangeObservers;
-(HDClinicalIngestionManager *)ingestionManager;
-(void)_ivarLock_determineHealthRecordsSupportedStatusIfNeeded;
-(HRSSupportedFHIRConfiguration *)unitTesting_supportedFHIRConfigurationOverride;
-(void)_ivarLock_registerAsAccountStateObserverIfNeeded;
-(void)_notifyAccountEventObserversOfEvent:(unsigned long long)arg1 ;
-(HDHealthRecordsAPIReminderRegistry *)APIReminderRegistry;
-(id)createHealthRecordsXPCServiceClient;
-(void)unitTesting_triggerLocaleDidChangeNotification;
-(void)setUnitTesting_supportedFHIRConfigurationOverride:(HRSSupportedFHIRConfiguration *)arg1 ;
-(HDClinicalAnalyticsManager *)analyticsManager;
-(BOOL)_isHealthRecordsSupportedLocale:(id)arg1 ;
-(void)removeAccountEventObserver:(id)arg1 ;
-(HDProfile *)profile;
-(void)_localeDidChange:(id)arg1 ;
-(HDClinicalOptInStudy *)optInStudy;
-(void)unregisterHealthRecordsSupportedChangeObserver:(id)arg1 ;
-(id)_retrieveSupportedFHIRConfigurationWithError:(id*)arg1 ;
-(void)unitTesting_replaceHealthRecordsPluginAndSetCompleteScheduledExtractionHandler:(/*^block*/id)arg1 ;
-(void)addAccountEventObserver:(id)arg1 ;
-(HDClinicalDailyAnalyticsManager *)dailyAnalyticsManager;
-(HDClinicalProviderServiceManager *)providerServiceManager;
-(void)accountManager:(id)arg1 account:(id)arg2 didChangeState:(long long)arg3 ;
-(BOOL)deviceConfigurationSupportsHealthRecords:(BOOL*)arg1 error:(id*)arg2 ;
-(void)_ivarLock_unregisterAsAccountStateObserverIfAppropriate;
-(HDMedicalCodingDataManager *)medicalCodingDataManager;
-(BOOL)hasAccounts:(BOOL*)arg1 error:(id*)arg2 ;
-(BOOL)isSupportedFHIRResourceType:(id)arg1 FHIRVersionString:(id)arg2 ;
-(HDClinicalOptInDataCollectionManager *)optInDataCollectionManager;
@end

