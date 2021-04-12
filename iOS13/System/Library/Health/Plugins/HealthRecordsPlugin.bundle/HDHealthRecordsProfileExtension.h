/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <HealthRecordsPlugin/HealthRecordsPlugin-Structs.h>
#import <libobjc.A.dylib/HDXPCListenerDelegate.h>
#import <libobjc.A.dylib/HDClinicalAccountStateObserver.h>
#import <libobjc.A.dylib/HDProfileExtension.h>
#import <libobjc.A.dylib/HDHealthRecordsProfileExtension.h>

@protocol HDHealthRecordsProfileExtension
@required
-(BOOL)deviceConfigurationSupportsHealthRecords:(BOOL*)arg1 error:(id*)arg2;
-(void)registerHealthRecordsSupportedChangeObserver:(id)arg1;
-(void)unregisterHealthRecordsSupportedChangeObserver:(id)arg1;
-(BOOL)hasAccounts:(BOOL*)arg1 error:(id*)arg2;
-(void)addAccountEventObserver:(id)arg1;
-(void)removeAccountEventObserver:(id)arg1;

@end


@protocol HDHealthDaemon;
@class NSLocale, HKObserverSet, HDProfile, HDXPCListener, HDClinicalAccountManager, HDClinicalAnalyticsManager, HDHealthRecordsAPIReminderRegistry, HDClinicalIngestionManager, HDClinicalProviderServiceManager, HDClinicalOptInStudy, HDClinicalOptInDataCollectionManager, HDClinicalOptInDataUploadManager, HDMedicalCodingDataManager, NSString;

@interface HDHealthRecordsProfileExtension : NSObject <HDXPCListenerDelegate, HDClinicalAccountStateObserver, HDProfileExtension, HDHealthRecordsProfileExtension> {

	id<HDHealthDaemon> _healthDeamon;
	NSLocale* _lastKnownLocale;
	long long _lastKnownSupportedStatus;
	HKObserverSet* _chrSupportedObservers;
	HKObserverSet* _accountEventObservers;
	os_unfair_lock_s _ivarLock;
	HDProfile* _profile;
	HDXPCListener* _listener;
	HDClinicalAccountManager* _accountManager;
	HDClinicalAnalyticsManager* _analyticsManager;
	HDHealthRecordsAPIReminderRegistry* _APIReminderRegistry;
	HDClinicalIngestionManager* _ingestionManager;
	HDClinicalProviderServiceManager* _providerServiceManager;
	HDClinicalOptInStudy* _optInStudy;
	HDClinicalOptInDataCollectionManager* _optInDataCollectionManager;
	HDClinicalOptInDataUploadManager* _optInDataUploadManager;
	HDMedicalCodingDataManager* _medicalCodingDataManager;

}

@property (nonatomic,__weak,readonly) HDProfile * profile;                                                     //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) HDXPCListener * listener;                                                       //@synthesize listener=_listener - In the implementation block
@property (nonatomic,readonly) HDClinicalAccountManager * accountManager;                                      //@synthesize accountManager=_accountManager - In the implementation block
@property (nonatomic,readonly) HDClinicalAnalyticsManager * analyticsManager;                                  //@synthesize analyticsManager=_analyticsManager - In the implementation block
@property (nonatomic,readonly) HDHealthRecordsAPIReminderRegistry * APIReminderRegistry;                       //@synthesize APIReminderRegistry=_APIReminderRegistry - In the implementation block
@property (nonatomic,readonly) HDClinicalIngestionManager * ingestionManager;                                  //@synthesize ingestionManager=_ingestionManager - In the implementation block
@property (nonatomic,readonly) HDClinicalProviderServiceManager * providerServiceManager;                      //@synthesize providerServiceManager=_providerServiceManager - In the implementation block
@property (nonatomic,readonly) HDClinicalOptInStudy * optInStudy;                                              //@synthesize optInStudy=_optInStudy - In the implementation block
@property (nonatomic,readonly) HDClinicalOptInDataCollectionManager * optInDataCollectionManager;              //@synthesize optInDataCollectionManager=_optInDataCollectionManager - In the implementation block
@property (nonatomic,readonly) HDClinicalOptInDataUploadManager * optInDataUploadManager;                      //@synthesize optInDataUploadManager=_optInDataUploadManager - In the implementation block
@property (nonatomic,readonly) HDMedicalCodingDataManager * medicalCodingDataManager;                          //@synthesize medicalCodingDataManager=_medicalCodingDataManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HDXPCListener *)listener;
-(HDProfile *)profile;
-(id)initWithProfile:(id)arg1 ;
-(void)_localeDidChange:(id)arg1 ;
-(HDClinicalAccountManager *)accountManager;
-(id)listenerEndpointForClient:(id)arg1 error:(id*)arg2 ;
-(id)exportObjectForListener:(id)arg1 client:(id)arg2 error:(id*)arg3 ;
-(BOOL)deviceConfigurationSupportsHealthRecords:(BOOL*)arg1 error:(id*)arg2 ;
-(void)registerHealthRecordsSupportedChangeObserver:(id)arg1 ;
-(void)unregisterHealthRecordsSupportedChangeObserver:(id)arg1 ;
-(BOOL)hasAccounts:(BOOL*)arg1 error:(id*)arg2 ;
-(void)addAccountEventObserver:(id)arg1 ;
-(void)removeAccountEventObserver:(id)arg1 ;
-(HDClinicalIngestionManager *)ingestionManager;
-(HDClinicalProviderServiceManager *)providerServiceManager;
-(HDClinicalOptInDataCollectionManager *)optInDataCollectionManager;
-(HDClinicalAnalyticsManager *)analyticsManager;
-(HDClinicalOptInDataUploadManager *)optInDataUploadManager;
-(HDHealthRecordsAPIReminderRegistry *)APIReminderRegistry;
-(void)accountManager:(id)arg1 account:(id)arg2 didChangeState:(long long)arg3 ;
-(HDClinicalOptInStudy *)optInStudy;
-(id)createHealthRecordsXPCServiceClient;
-(id)createHealthRecordsClinicalAccountManager;
-(id)createHealthRecordsAPIReminderRegistry;
-(BOOL)_isHealthRecordsSupportedLocale:(id)arg1 ;
-(void)_ivarLock_updateHealthRecordsSupportedStatus;
-(void)_ivarLock_determineHealthRecordsSupportedStatusIfNeeded;
-(void)_ivarLock_registerAsAccountStateObserverIfNeeded;
-(void)_ivarLock_unregisterAsAccountStateObserverIfAppropriate;
-(void)_notifyHealthRecordsSupportedChangeObservers;
-(void)_notifyAccountEventObserversOfEvent:(unsigned long long)arg1 ;
-(void)unitTesting_triggerLocaleDidChangeNotification;
-(void)unitTesting_replaceHealthRecordsPluginAndSetCompleteScheduledExtractionHandler:(/*^block*/id)arg1 ;
-(HDMedicalCodingDataManager *)medicalCodingDataManager;
@end

