/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@protocol NSCloudKitMirroringDelegateProgressProvider;
@class NSString, NSNumber, CKContainerOptions, CKScheduler, CKNotificationListener, PFCloudKitMetricsClient, PFCloudKitContainerProvider, PFCloudKitStoreMonitorProvider, PFCloudKitMetadataPurger, CKOperationConfiguration, NSObject;

@interface NSCloudKitMirroringDelegateOptions : NSObject {

	BOOL _initializeSchema;
	BOOL _useDeviceToDeviceEncryption;
	BOOL _automaticallyDownloadFileBackedFutures;
	BOOL _automaticallyScheduleImportAndExportOperations;
	BOOL _skipCloudKitSetup;
	BOOL _useDaemon;
	BOOL _useTestDaemon;
	BOOL _preserveLegacyRecordMetadataBehavior;
	NSString* _containerIdentifier;
	NSNumber* _ckAssetThresholdBytes;
	NSNumber* _operationMemoryThresholdBytes;
	CKContainerOptions* _containerOptions;
	CKScheduler* _scheduler;
	CKNotificationListener* _notificationListener;
	PFCloudKitMetricsClient* _metricsClient;
	PFCloudKitContainerProvider* _containerProvider;
	PFCloudKitStoreMonitorProvider* _storeMonitorProvider;
	PFCloudKitMetadataPurger* _metadataPurger;
	NSString* _apsConnectionMachServiceName;
	CKOperationConfiguration* _defaultOperationConfiguration;
	long long _databaseScope;
	NSObject*<NSCloudKitMirroringDelegateProgressProvider> _progressProvider;

}

@property (nonatomic,retain) CKScheduler * scheduler;                                                                     //@synthesize scheduler=_scheduler - In the implementation block
@property (nonatomic,retain) CKNotificationListener * notificationListener;                                               //@synthesize notificationListener=_notificationListener - In the implementation block
@property (assign,nonatomic) BOOL skipCloudKitSetup;                                                                      //@synthesize skipCloudKitSetup=_skipCloudKitSetup - In the implementation block
@property (nonatomic,retain) PFCloudKitContainerProvider * containerProvider;                                             //@synthesize containerProvider=_containerProvider - In the implementation block
@property (nonatomic,retain) PFCloudKitStoreMonitorProvider * storeMonitorProvider;                                       //@synthesize storeMonitorProvider=_storeMonitorProvider - In the implementation block
@property (nonatomic,retain) PFCloudKitMetricsClient * metricsClient;                                                     //@synthesize metricsClient=_metricsClient - In the implementation block
@property (nonatomic,retain) PFCloudKitMetadataPurger * metadataPurger;                                                   //@synthesize metadataPurger=_metadataPurger - In the implementation block
@property (assign,nonatomic) BOOL useDaemon;                                                                              //@synthesize useDaemon=_useDaemon - In the implementation block
@property (assign,nonatomic) BOOL useTestDaemon;                                                                          //@synthesize useTestDaemon=_useTestDaemon - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<NSCloudKitMirroringDelegateProgressProvider> progressProvider;              //@synthesize progressProvider=_progressProvider - In the implementation block
@property (nonatomic,retain) CKOperationConfiguration * defaultOperationConfiguration;                                    //@synthesize defaultOperationConfiguration=_defaultOperationConfiguration - In the implementation block
@property (nonatomic,retain) NSString * containerIdentifier;                                                              //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (nonatomic,retain) NSNumber * ckAssetThresholdBytes;                                                            //@synthesize ckAssetThresholdBytes=_ckAssetThresholdBytes - In the implementation block
@property (assign,nonatomic) BOOL initializeSchema;                                                                       //@synthesize initializeSchema=_initializeSchema - In the implementation block
@property (nonatomic,retain) CKContainerOptions * containerOptions;                                                       //@synthesize containerOptions=_containerOptions - In the implementation block
@property (assign,nonatomic) BOOL useEncryptedStorage; 
@property (assign,nonatomic) BOOL useDeviceToDeviceEncryption;                                                            //@synthesize useDeviceToDeviceEncryption=_useDeviceToDeviceEncryption - In the implementation block
@property (nonatomic,retain) NSNumber * operationMemoryThresholdBytes;                                                    //@synthesize operationMemoryThresholdBytes=_operationMemoryThresholdBytes - In the implementation block
@property (assign,nonatomic) BOOL automaticallyDownloadFileBackedFutures;                                                 //@synthesize automaticallyDownloadFileBackedFutures=_automaticallyDownloadFileBackedFutures - In the implementation block
@property (assign,nonatomic) BOOL automaticallyScheduleImportAndExportOperations;                                         //@synthesize automaticallyScheduleImportAndExportOperations=_automaticallyScheduleImportAndExportOperations - In the implementation block
@property (assign,nonatomic) BOOL preserveLegacyRecordMetadataBehavior;                                                   //@synthesize preserveLegacyRecordMetadataBehavior=_preserveLegacyRecordMetadataBehavior - In the implementation block
@property (nonatomic,retain) NSString * apsConnectionMachServiceName;                                                     //@synthesize apsConnectionMachServiceName=_apsConnectionMachServiceName - In the implementation block
@property (assign,nonatomic) long long databaseScope;                                                                     //@synthesize databaseScope=_databaseScope - In the implementation block
-(CKContainerOptions *)containerOptions;
-(void)setDefaultOperationConfiguration:(CKOperationConfiguration *)arg1 ;
-(CKOperationConfiguration *)defaultOperationConfiguration;
-(id)init;
-(void)setUseEncryptedStorage:(BOOL)arg1 ;
-(BOOL)automaticallyScheduleImportAndExportOperations;
-(void)setContainerProvider:(PFCloudKitContainerProvider *)arg1 ;
-(BOOL)automaticallyDownloadFileBackedFutures;
-(BOOL)useDaemon;
-(BOOL)skipCloudKitSetup;
-(BOOL)preserveLegacyRecordMetadataBehavior;
-(void)setDatabaseScope:(long long)arg1 ;
-(void)setUseDaemon:(BOOL)arg1 ;
-(CKNotificationListener *)notificationListener;
-(NSString *)containerIdentifier;
-(PFCloudKitStoreMonitorProvider *)storeMonitorProvider;
-(void)setAutomaticallyDownloadFileBackedFutures:(BOOL)arg1 ;
-(void)setCkAssetThresholdBytes:(NSNumber *)arg1 ;
-(void)setContainerIdentifier:(NSString *)arg1 ;
-(id)description;
-(void)setAutomaticallyScheduleImportAndExportOperations:(BOOL)arg1 ;
-(id)initWithCloudKitContainerOptions:(id)arg1 ;
-(void)setInitializeSchema:(BOOL)arg1 ;
-(id)copy;
-(BOOL)initializeSchema;
-(void)setOperationMemoryThresholdBytes:(NSNumber *)arg1 ;
-(void)setScheduler:(CKScheduler *)arg1 ;
-(PFCloudKitMetadataPurger *)metadataPurger;
-(void)setMetadataPurger:(PFCloudKitMetadataPurger *)arg1 ;
-(NSNumber *)operationMemoryThresholdBytes;
-(void)setNotificationListener:(CKNotificationListener *)arg1 ;
-(void)setSkipCloudKitSetup:(BOOL)arg1 ;
-(void)setStoreMonitorProvider:(PFCloudKitStoreMonitorProvider *)arg1 ;
-(NSString *)apsConnectionMachServiceName;
-(void)setContainerOptions:(CKContainerOptions *)arg1 ;
-(void)setUseDeviceToDeviceEncryption:(BOOL)arg1 ;
-(void)setProgressProvider:(NSObject*<NSCloudKitMirroringDelegateProgressProvider>)arg1 ;
-(PFCloudKitContainerProvider *)containerProvider;
-(long long)databaseScope;
-(void)setMetricsClient:(PFCloudKitMetricsClient *)arg1 ;
-(id)initWithContainerIdentifier:(id)arg1 ;
-(BOOL)useDeviceToDeviceEncryption;
-(PFCloudKitMetricsClient *)metricsClient;
-(void)setApsConnectionMachServiceName:(NSString *)arg1 ;
-(NSObject*<NSCloudKitMirroringDelegateProgressProvider>)progressProvider;
-(NSNumber *)ckAssetThresholdBytes;
-(BOOL)useTestDaemon;
-(void)setUseTestDaemon:(BOOL)arg1 ;
-(void)dealloc;
-(void)setPreserveLegacyRecordMetadataBehavior:(BOOL)arg1 ;
-(CKScheduler *)scheduler;
-(BOOL)useEncryptedStorage;
@end

