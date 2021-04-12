/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <libobjc.A.dylib/PFCloudKitExporterDelegate.h>
#import <libobjc.A.dylib/NSPersistentStoreMirroringDelegate.h>

@protocol OS_dispatch_semaphore, OS_dispatch_queue;
@class NSCloudKitMirroringDelegateOptions, NSString, NSObject, CKRecordZone, CKDatabaseSubscription, CKContainer, CKDatabase, CKScheduler, CKNotificationListener, NSError, PFCloudKitExporterOptions, CDDCloudKitClient, NSSQLCore, NSPersistentStoreCoordinator, PFCloudKitThrottledNotificationObserver, NSCloudKitMirroringRequestManager, NSPersistentStore;

@interface NSCloudKitMirroringDelegate : NSObject <PFCloudKitExporterDelegate, NSPersistentStoreMirroringDelegate> {

	NSCloudKitMirroringDelegateOptions* _options;
	NSString* _ckDatabaseName;
	NSObject*<OS_dispatch_semaphore> _cloudKitQueueSemaphore;
	NSObject*<OS_dispatch_queue> _cloudKitQueue;
	CKRecordZone* _recordZone;
	CKDatabaseSubscription* _databaseSubscription;
	CKContainer* _container;
	CKDatabase* _database;
	CKScheduler* _scheduler;
	CKNotificationListener* _notificationListener;
	NSError* _lastInitializationError;
	BOOL _hadObservedStore;
	BOOL _successfullyInitialized;
	PFCloudKitExporterOptions* _exporterOptions;
	CDDCloudKitClient* _coredatadClient;
	NSSQLCore* _observedStore;
	NSPersistentStoreCoordinator* _observedCoordinator;
	PFCloudKitThrottledNotificationObserver* _accountChangeObserver;
	PFCloudKitThrottledNotificationObserver* _appActivateLifecycleObserver;
	PFCloudKitThrottledNotificationObserver* _appDeactivateLifecycleObserver;
	NSCloudKitMirroringRequestManager* _requestManager;

}

@property (nonatomic,copy,readonly) NSCloudKitMirroringDelegateOptions * options;                      //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) NSString * ckDatabaseName;                                              //@synthesize ckDatabaseName=_ckDatabaseName - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_semaphore> cloudKitQueueSemaphore;                //@synthesize cloudKitQueueSemaphore=_cloudKitQueueSemaphore - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> cloudKitQueue;                             //@synthesize cloudKitQueue=_cloudKitQueue - In the implementation block
@property (nonatomic,readonly) CKRecordZone * recordZone;                                              //@synthesize recordZone=_recordZone - In the implementation block
@property (nonatomic,readonly) CKDatabaseSubscription * databaseSubscription;                          //@synthesize databaseSubscription=_databaseSubscription - In the implementation block
@property (nonatomic,readonly) CKContainer * container;                                                //@synthesize container=_container - In the implementation block
@property (nonatomic,readonly) CKDatabase * database;                                                  //@synthesize database=_database - In the implementation block
@property (nonatomic,readonly) CKScheduler * scheduler;                                                //@synthesize scheduler=_scheduler - In the implementation block
@property (nonatomic,readonly) CKNotificationListener * notificationListener;                          //@synthesize notificationListener=_notificationListener - In the implementation block
@property (nonatomic,readonly) NSError * lastInitializationError;                                      //@synthesize lastInitializationError=_lastInitializationError - In the implementation block
@property (nonatomic,__weak,readonly) NSPersistentStore * observedStore;                               //@synthesize observedStore=_observedStore - In the implementation block
@property (nonatomic,__weak,readonly) NSPersistentStoreCoordinator * observedCoordinator;              //@synthesize observedCoordinator=_observedCoordinator - In the implementation block
@property (nonatomic,readonly) BOOL hadObservedStore;                                                  //@synthesize hadObservedStore=_hadObservedStore - In the implementation block
@property (nonatomic,readonly) BOOL successfullyInitialized;                                           //@synthesize successfullyInitialized=_successfullyInitialized - In the implementation block
@property (nonatomic,readonly) PFCloudKitExporterOptions * exporterOptions;                            //@synthesize exporterOptions=_exporterOptions - In the implementation block
@property (nonatomic,retain,readonly) NSCloudKitMirroringRequestManager * requestManager;              //@synthesize requestManager=_requestManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(BOOL)checkAndCreateDirectoryAtURL:(id)arg1 wipeIfExists:(BOOL)arg2 error:(id*)arg3 ;
+(id)cloudKitMetadataTransformerName;
+(id)cloudKitMachServiceName;
+(id)createCloudKitServerWithMachServiceName:(id)arg1 andStorageDirectoryPath:(id)arg2 ;
+(BOOL)isFirstPartyContainerIdentifier:(id)arg1 ;
+(id)stringForResetReason:(unsigned long long)arg1 ;
+(BOOL)checkForCloudKitTablesInStoreAtURL:(id)arg1 withPersistentStoreCoordinator:(id)arg2 withConfiguration:(id)arg3 ;
+(id)makeACopyOfTheStoreAtURL:(id)arg1 withCoordinator:(id)arg2 error:(id*)arg3 ;
+(void)printMetadataForStoreAtURL:(id)arg1 withConfiguration:(id)arg2 operateOnACopy:(BOOL)arg3 ;
+(void)printRepresentativeSchemaForModelAtURL:(id)arg1 orStoreAtURL:(id)arg2 withConfiguration:(id)arg3 ;
+(BOOL)checkIfContentsOfStore:(id)arg1 matchContentsOfStore:(id)arg2 error:(id*)arg3 ;
-(void)dealloc;
-(NSCloudKitMirroringDelegateOptions *)options;
-(CKContainer *)container;
-(id)initWithOptions:(id)arg1 ;
-(void)_setContainer:(id)arg1 ;
-(CKDatabase *)database;
-(CKRecordZone *)recordZone;
-(id)initWithCloudKitContainerOptions:(id)arg1 ;
-(BOOL)validateManagedObjectModel:(id)arg1 forUseWithStoreWithDescription:(id)arg2 error:(id*)arg3 ;
-(void)persistentStoreCoordinator:(id)arg1 didSuccessfullyAddPersistentStore:(id)arg2 withDescription:(id)arg3 ;
-(void)tearDown;
-(CKScheduler *)scheduler;
-(NSError *)lastInitializationError;
-(id)executeMirroringRequest:(id)arg1 error:(id*)arg2 ;
-(void)_setDatabase:(id)arg1 ;
-(CKDatabaseSubscription *)databaseSubscription;
-(void)logResetSyncNotification:(id)arg1 ;
-(void)exporter:(id)arg1 willScheduleOperations:(id)arg2 ;
-(void)_respondToAccountOrIdentityChangeNotification:(id)arg1 ;
-(void)_respondToApplicationActivationNotification:(id)arg1 ;
-(void)_respondToApplicationDeactivationNotification:(id)arg1 ;
-(CKNotificationListener *)notificationListener;
-(void)removeNotificationRegistrations;
-(void)observeChangesForStore:(id)arg1 inPersistentStoreCoordinator:(id)arg2 ;
-(void)_openTransactionWithLabel:(id)arg1 andExecuteWorkBlock:(/*^block*/id)arg2 ;
-(void)_setUpCloudKitIntegration;
-(NSCloudKitMirroringRequestManager *)requestManager;
-(void)checkAndExecuteNextRequest;
-(void)resetAfterError:(id)arg1 andKeepContainer:(BOOL)arg2 ;
-(void)coordinatorWillRemoveStore:(id)arg1 ;
-(void)storesDidChange:(id)arg1 ;
-(void)ckAccountOrIdentityChangedHandler:(id)arg1 ;
-(void)managedObjectContextSaved:(id)arg1 ;
-(void)remoteStoreDidChange:(id)arg1 ;
-(void)_scheduleAutomatedExportWithLabel:(id)arg1 activity:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_scheduleAutomatedImportWithLabel:(id)arg1 activity:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)checkAndScheduleImportIfNecessary:(BOOL)arg1 ;
-(void)applicationDidActivate:(id)arg1 ;
-(void)applicationWillDeactivate:(id)arg1 ;
-(id)newActivityWithIdentifier:(id)arg1 ;
-(void)_enqueueRequest:(id)arg1 ;
-(void)_performFetchRecordsRequest:(id)arg1 ;
-(void)_performImportWithRequest:(id)arg1 ;
-(void)_performExportWithRequest:(id)arg1 ;
-(void)_performResetZoneRequest:(id)arg1 ;
-(void)_performMetadataResetRequest:(id)arg1 ;
-(void)_performSetupRequest:(id)arg1 ;
-(void)_performDelegateResetRequest:(id)arg1 ;
-(void)_performSchemaInitializationRequest:(id)arg1 ;
-(void)_performSerializationRequest:(id)arg1 ;
-(void)_performExportProgressRequest:(id)arg1 ;
-(void)resetAfterError:(id)arg1 ;
-(void)_finishedRequest:(id)arg1 withResult:(id)arg2 ;
-(void)_beginWatchingForChanges;
-(BOOL)recoverFromError:(id)arg1 ;
-(void)_requestAbortedNotInitialized:(id)arg1 ;
-(void)_requestEncounteredRecoverableError:(id)arg1 withResult:(id)arg2 ;
-(void)_requestEncounteredUnrecoverableError:(id)arg1 withResult:(id)arg2 ;
-(BOOL)_recoverFromPartialError:(id)arg1 withMonitor:(id)arg2 ;
-(BOOL)_recoverFromError:(id)arg1 withMonitor:(id)arg2 ;
-(void)postWillResetNotificationForError:(id)arg1 ;
-(void)postDidResetNotificationForError:(id)arg1 ;
-(void)_postResetSyncNotificationWithName:(id)arg1 forError:(id)arg2 ;
-(id)resetNotificationUserInfoForError:(id)arg1 ;
-(void)scheduleExportWithMonitor:(id)arg1 ;
-(NSPersistentStore *)observedStore;
-(BOOL)_dateExceedsSchedulingThreshold:(id)arg1 ;
-(void)_executeRequest:(id)arg1 ;
-(void)handleErrorInResult:(id)arg1 ;
-(void)finishedAutomatedRequestWithResult:(id)arg1 ;
-(BOOL)_createSchemaWithMonitor:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)_setObservedStore:(id)arg1 observedCoordinator:(id)arg2 ;
-(void)_setZone:(id)arg1 ;
-(void)_setAccountNotificationBackoffInterval:(long long)arg1 ;
-(void)_setRequestManager:(id)arg1 ;
-(void)_setAppActivateObserver:(id)arg1 ;
-(void)_setAppDeactivateObserver:(id)arg1 ;
-(void)checkForNewChanges;
-(void)fetchChangesAndUpdateObservedStore;
-(NSString *)ckDatabaseName;
-(NSObject*<OS_dispatch_semaphore>)cloudKitQueueSemaphore;
-(NSObject*<OS_dispatch_queue>)cloudKitQueue;
-(NSPersistentStoreCoordinator *)observedCoordinator;
-(BOOL)successfullyInitialized;
-(PFCloudKitExporterOptions *)exporterOptions;
-(BOOL)hadObservedStore;
@end

