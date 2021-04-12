/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
*/

#import <libobjc.A.dylib/APSConnectionDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSMutableArray, NSPersistentStore, NSPersistentStoreCoordinator, NSManagedObjectContext, NSString, CKContainer, CKRecordZone, CKRecordZoneSubscription, CKDatabase, NSObject, APSConnection, NSError, NSURL;

@interface AXSSCloudKitHelper : NSObject <APSConnectionDelegate> {

	NSMutableArray* _accumulatedQueuedData;
	BOOL _observeLocalDatabaseChanges;
	BOOL _isProtectedDataAvailable;
	NSPersistentStore* _observedStore;
	NSPersistentStoreCoordinator* _observedCoordinator;
	NSManagedObjectContext* _managedObjectContext;
	NSString* _containerIdentifier;
	CKContainer* _container;
	CKRecordZone* _zone;
	CKRecordZoneSubscription* _zoneSubscription;
	CKDatabase* _database;
	NSObject*<OS_dispatch_queue> _cloudkitQueue;
	NSObject*<OS_dispatch_semaphore> _cloudKitQueueSemaphore;
	APSConnection* _apsConnection;
	NSError* _lastInitializationError;
	NSURL* _largeBlobDirectoryURL;

}

@property (nonatomic,__weak,readonly) NSPersistentStore * observedStore;                             //@synthesize observedStore=_observedStore - In the implementation block
@property (nonatomic,readonly) NSPersistentStoreCoordinator * observedCoordinator;                   //@synthesize observedCoordinator=_observedCoordinator - In the implementation block
@property (nonatomic,readonly) NSManagedObjectContext * managedObjectContext;                        //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (nonatomic,readonly) NSString * containerIdentifier;                                       //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (nonatomic,readonly) CKContainer * container;                                              //@synthesize container=_container - In the implementation block
@property (nonatomic,readonly) CKRecordZone * zone;                                                  //@synthesize zone=_zone - In the implementation block
@property (nonatomic,readonly) CKRecordZoneSubscription * zoneSubscription;                          //@synthesize zoneSubscription=_zoneSubscription - In the implementation block
@property (nonatomic,readonly) CKDatabase * database;                                                //@synthesize database=_database - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> cloudkitQueue;                           //@synthesize cloudkitQueue=_cloudkitQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_semaphore> cloudKitQueueSemaphore;              //@synthesize cloudKitQueueSemaphore=_cloudKitQueueSemaphore - In the implementation block
@property (nonatomic,readonly) APSConnection * apsConnection;                                        //@synthesize apsConnection=_apsConnection - In the implementation block
@property (nonatomic,readonly) NSError * lastInitializationError;                                    //@synthesize lastInitializationError=_lastInitializationError - In the implementation block
@property (nonatomic,readonly) NSURL * largeBlobDirectoryURL;                                        //@synthesize largeBlobDirectoryURL=_largeBlobDirectoryURL - In the implementation block
@property (assign,nonatomic) BOOL observeLocalDatabaseChanges;                                       //@synthesize observeLocalDatabaseChanges=_observeLocalDatabaseChanges - In the implementation block
@property (assign,nonatomic) BOOL isProtectedDataAvailable;                                          //@synthesize isProtectedDataAvailable=_isProtectedDataAvailable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(CKRecordZone *)zone;
-(CKContainer *)container;
-(void)_setContainer:(id)arg1 ;
-(CKDatabase *)database;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4 ;
-(void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3 ;
-(NSString *)containerIdentifier;
-(id)recordType;
-(NSManagedObjectContext *)managedObjectContext;
-(void)logMessage:(id)arg1 ;
-(BOOL)isProtectedDataAvailable;
-(NSError *)lastInitializationError;
-(BOOL)_checkAccountStatus:(id*)arg1 ;
-(BOOL)_createZoneIfNecessary:(id*)arg1 ;
-(void)_setDatabase:(id)arg1 ;
-(NSURL *)largeBlobDirectoryURL;
-(void)managedObjectContextDidSave:(id)arg1 ;
-(NSPersistentStore *)observedStore;
-(void)_setObservedStore:(id)arg1 observedCoordinator:(id)arg2 ;
-(void)fetchChangesAndUpdateObservedStore;
-(NSObject*<OS_dispatch_semaphore>)cloudKitQueueSemaphore;
-(NSPersistentStoreCoordinator *)observedCoordinator;
-(id)apsEnvironment;
-(APSConnection *)apsConnection;
-(void)setIsProtectedDataAvailable:(BOOL)arg1 ;
-(void)setObserveLocalDatabaseChanges:(BOOL)arg1 ;
-(id)initWithContainerIdentifier:(id)arg1 zoneName:(id)arg2 ;
-(void)observeChangesForManagedContext:(id)arg1 ;
-(void)_initializeCloudkitForObservedStore;
-(void)openTransactionWithLabel:(id)arg1 andExecuteWorkBlock:(/*^block*/id)arg2 ;
-(BOOL)_setupZoneSubscriptionIfNecessary:(id*)arg1 ;
-(BOOL)_createSchemaIfNecessary:(id*)arg1 ;
-(BOOL)_setupPushConnection:(id*)arg1 ;
-(void)beginWatchingForChanges;
-(id)zoneCreatedKey;
-(id)testRecordForSchemaCreation:(id)arg1 ;
-(id)zoneSubscriptionKey;
-(Class)managedObjectClass;
-(id)serverChangeTokenMetadataKey;
-(void)processAccumulatedChangesForServerChangeToken:(id)arg1 withAccumulatedUpdates:(id)arg2 andDeletes:(id)arg3 inTransaction:(id)arg4 ;
-(void)_processAccumulatedQueueData;
-(void)processServerUpdateChanges:(id)arg1 moc:(id)arg2 recordNameToManagedObject:(id)arg3 ;
-(void)processLocalChangesAndPush;
-(void)clearRecordsForPurging:(id)arg1 ;
-(void)retrieveLocalChangesForCloud:(/*^block*/id)arg1 ;
-(id)cloudKitPushTopic;
-(BOOL)shouldExportManagedObject:(id)arg1 ;
-(id)createCKRecordFromObject:(id)arg1 ;
-(void)_setApsConnection:(id)arg1 ;
-(CKRecordZoneSubscription *)zoneSubscription;
-(NSObject*<OS_dispatch_queue>)cloudkitQueue;
-(BOOL)observeLocalDatabaseChanges;
@end

