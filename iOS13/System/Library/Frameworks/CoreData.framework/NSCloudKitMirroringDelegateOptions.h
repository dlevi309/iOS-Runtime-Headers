/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSString, NSNumber, CKContainerOptions, CKScheduler, CKNotificationListener, PFCloudKitContainerProvider, PFCloudKitStoreMonitorProvider, PFCloudKitMetricsClient, PFCloudKitMetadataPurger;

@interface NSCloudKitMirroringDelegateOptions : NSObject {

	NSString* _containerIdentifier;
	NSNumber* _ckAssetThresholdBytes;
	BOOL _initializeSchema;
	BOOL _automaticallyDownloadFileBackedFutures;
	BOOL _automaticallyScheduleImportAndExportOperations;
	NSNumber* _operationMemoryThresholdBytes;
	CKContainerOptions* _containerOptions;
	CKScheduler* _scheduler;
	CKNotificationListener* _notificationListener;
	BOOL _skipCloudKitSetup;
	PFCloudKitContainerProvider* _containerProvider;
	PFCloudKitStoreMonitorProvider* _storeMonitorProvider;
	PFCloudKitMetricsClient* _metricsClient;
	PFCloudKitMetadataPurger* _metadataPurger;
	NSString* _apsConnectionMachServiceName;
	BOOL _useDeviceToDeviceEncryption;
	BOOL _useDaemon;
	BOOL _useTestDaemon;
	BOOL _preserveLegacyRecordMetadataBehavior;

}

@property (nonatomic,retain) CKScheduler * scheduler;                                            //@synthesize scheduler=_scheduler - In the implementation block
@property (nonatomic,retain) CKNotificationListener * notificationListener;                      //@synthesize notificationListener=_notificationListener - In the implementation block
@property (assign,nonatomic) BOOL skipCloudKitSetup;                                             //@synthesize skipCloudKitSetup=_skipCloudKitSetup - In the implementation block
@property (nonatomic,retain) PFCloudKitContainerProvider * containerProvider;                    //@synthesize containerProvider=_containerProvider - In the implementation block
@property (nonatomic,retain) PFCloudKitStoreMonitorProvider * storeMonitorProvider;              //@synthesize storeMonitorProvider=_storeMonitorProvider - In the implementation block
@property (nonatomic,retain) PFCloudKitMetricsClient * metricsClient;                            //@synthesize metricsClient=_metricsClient - In the implementation block
@property (nonatomic,retain) PFCloudKitMetadataPurger * metadataPurger;                          //@synthesize metadataPurger=_metadataPurger - In the implementation block
@property (assign,nonatomic) BOOL useDaemon;                                                     //@synthesize useDaemon=_useDaemon - In the implementation block
@property (assign,nonatomic) BOOL useTestDaemon;                                                 //@synthesize useTestDaemon=_useTestDaemon - In the implementation block
@property (assign,nonatomic) BOOL useDeviceToDeviceEncryption;                                   //@synthesize useDeviceToDeviceEncryption=_useDeviceToDeviceEncryption - In the implementation block
@property (nonatomic,retain) NSString * containerIdentifier;                                     //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (nonatomic,retain) NSNumber * ckAssetThresholdBytes;                                   //@synthesize ckAssetThresholdBytes=_ckAssetThresholdBytes - In the implementation block
@property (assign,nonatomic) BOOL initializeSchema;                                              //@synthesize initializeSchema=_initializeSchema - In the implementation block
@property (nonatomic,retain) CKContainerOptions * containerOptions;                              //@synthesize containerOptions=_containerOptions - In the implementation block
@property (assign,nonatomic) BOOL useEncryptedStorage; 
@property (nonatomic,retain) NSNumber * operationMemoryThresholdBytes;                           //@synthesize operationMemoryThresholdBytes=_operationMemoryThresholdBytes - In the implementation block
@property (assign,nonatomic) BOOL automaticallyDownloadFileBackedFutures;                        //@synthesize automaticallyDownloadFileBackedFutures=_automaticallyDownloadFileBackedFutures - In the implementation block
@property (assign,nonatomic) BOOL automaticallyScheduleImportAndExportOperations;                //@synthesize automaticallyScheduleImportAndExportOperations=_automaticallyScheduleImportAndExportOperations - In the implementation block
@property (assign,nonatomic) BOOL preserveLegacyRecordMetadataBehavior;                          //@synthesize preserveLegacyRecordMetadataBehavior=_preserveLegacyRecordMetadataBehavior - In the implementation block
@property (nonatomic,retain) NSString * apsConnectionMachServiceName;                            //@synthesize apsConnectionMachServiceName=_apsConnectionMachServiceName - In the implementation block
-(id)init;
-(void)dealloc;
-(id)description;
-(id)copy;
-(NSString *)containerIdentifier;
-(void)setUseEncryptedStorage:(BOOL)arg1 ;
-(void)setCkAssetThresholdBytes:(NSNumber *)arg1 ;
-(void)setContainerIdentifier:(NSString *)arg1 ;
-(void)setContainerOptions:(CKContainerOptions *)arg1 ;
-(BOOL)useDeviceToDeviceEncryption;
-(id)initWithCloudKitContainerOptions:(id)arg1 ;
-(id)initWithContainerIdentifier:(id)arg1 ;
-(PFCloudKitContainerProvider *)containerProvider;
-(CKScheduler *)scheduler;
-(void)setContainerProvider:(PFCloudKitContainerProvider *)arg1 ;
-(void)setAutomaticallyScheduleImportAndExportOperations:(BOOL)arg1 ;
-(void)setUseDaemon:(BOOL)arg1 ;
-(PFCloudKitMetricsClient *)metricsClient;
-(BOOL)skipCloudKitSetup;
-(CKContainerOptions *)containerOptions;
-(void)setScheduler:(CKScheduler *)arg1 ;
-(NSNumber *)operationMemoryThresholdBytes;
-(NSNumber *)ckAssetThresholdBytes;
-(BOOL)preserveLegacyRecordMetadataBehavior;
-(PFCloudKitMetadataPurger *)metadataPurger;
-(BOOL)automaticallyDownloadFileBackedFutures;
-(BOOL)useTestDaemon;
-(BOOL)automaticallyScheduleImportAndExportOperations;
-(CKNotificationListener *)notificationListener;
-(NSString *)apsConnectionMachServiceName;
-(PFCloudKitStoreMonitorProvider *)storeMonitorProvider;
-(BOOL)useDaemon;
-(void)setSkipCloudKitSetup:(BOOL)arg1 ;
-(void)setUseDeviceToDeviceEncryption:(BOOL)arg1 ;
-(BOOL)useEncryptedStorage;
-(void)setApsConnectionMachServiceName:(NSString *)arg1 ;
-(void)setInitializeSchema:(BOOL)arg1 ;
-(BOOL)initializeSchema;
-(void)setOperationMemoryThresholdBytes:(NSNumber *)arg1 ;
-(void)setAutomaticallyDownloadFileBackedFutures:(BOOL)arg1 ;
-(void)setNotificationListener:(CKNotificationListener *)arg1 ;
-(void)setMetricsClient:(PFCloudKitMetricsClient *)arg1 ;
-(void)setStoreMonitorProvider:(PFCloudKitStoreMonitorProvider *)arg1 ;
-(void)setMetadataPurger:(PFCloudKitMetadataPurger *)arg1 ;
-(void)setUseTestDaemon:(BOOL)arg1 ;
-(void)setPreserveLegacyRecordMetadataBehavior:(BOOL)arg1 ;
@end

