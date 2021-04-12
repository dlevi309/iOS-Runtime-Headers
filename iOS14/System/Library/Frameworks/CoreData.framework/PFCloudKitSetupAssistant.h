/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@protocol OS_dispatch_semaphore;
@class NSCloudKitMirroringDelegateOptions, CKRecordZone, CKContainer, CKDatabase, CKDatabaseSubscription, NSURL, NSObject, PFCloudKitStoreMonitor, NSPersistentCloudKitContainerEvent, NSCloudKitMirroringDelegateSetupRequest, CKRecordID;

@interface PFCloudKitSetupAssistant : NSObject {

	NSCloudKitMirroringDelegateOptions* _mirroringOptions;
	CKRecordZone* _recordZone;
	CKContainer* _container;
	CKDatabase* _database;
	CKDatabaseSubscription* _databaseSubscription;
	NSURL* _largeBlobDirectoryURL;
	NSObject*<OS_dispatch_semaphore> _cloudKitSemaphore;
	PFCloudKitStoreMonitor* _storeMonitor;
	NSPersistentCloudKitContainerEvent* _setupEvent;
	NSCloudKitMirroringDelegateSetupRequest* _setupRequest;
	CKRecordID* _currentUserRecordID;

}

@property (nonatomic,readonly) NSCloudKitMirroringDelegateSetupRequest * setupRequest;              //@synthesize setupRequest=_setupRequest - In the implementation block
@property (nonatomic,readonly) NSCloudKitMirroringDelegateOptions * mirroringOptions;               //@synthesize mirroringOptions=_mirroringOptions - In the implementation block
@property (nonatomic,readonly) CKRecordZone * recordZone;                                           //@synthesize recordZone=_recordZone - In the implementation block
@property (nonatomic,readonly) CKContainer * container;                                             //@synthesize container=_container - In the implementation block
@property (nonatomic,readonly) CKDatabase * database;                                               //@synthesize database=_database - In the implementation block
@property (nonatomic,readonly) CKDatabaseSubscription * databaseSubscription;                       //@synthesize databaseSubscription=_databaseSubscription - In the implementation block
@property (nonatomic,readonly) CKRecordID * currentUserRecordID;                                    //@synthesize currentUserRecordID=_currentUserRecordID - In the implementation block
@property (nonatomic,readonly) NSURL * largeBlobDirectoryURL;                                       //@synthesize largeBlobDirectoryURL=_largeBlobDirectoryURL - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_semaphore> cloudKitSemaphore;                  //@synthesize cloudKitSemaphore=_cloudKitSemaphore - In the implementation block
@property (nonatomic,readonly) PFCloudKitStoreMonitor * storeMonitor;                               //@synthesize storeMonitor=_storeMonitor - In the implementation block
@property (nonatomic,readonly) NSPersistentCloudKitContainerEvent * setupEvent;                     //@synthesize setupEvent=_setupEvent - In the implementation block
-(NSCloudKitMirroringDelegateSetupRequest *)setupRequest;
-(BOOL)_initializeAssetStorageURLError:(id*)arg1 ;
-(BOOL)_checkAndInitializeMetadata:(id*)arg1 ;
-(void)_setDatabase:(id)arg1 ;
-(BOOL)_checkAndTruncateEventHistoryIfNeededWithManagedObjectContext:(id)arg1 error:(id*)arg2 ;
-(CKRecordID *)currentUserRecordID;
-(BOOL)_initializeCloudKitForObservedStore:(id*)arg1 ;
-(id)initWithSetupRequest:(id)arg1 mirroringOptions:(id)arg2 observedStore:(id)arg3 zone:(id)arg4 ;
-(CKRecordZone *)recordZone;
-(NSPersistentCloudKitContainerEvent *)setupEvent;
-(CKDatabaseSubscription *)databaseSubscription;
-(NSObject*<OS_dispatch_semaphore>)cloudKitSemaphore;
-(BOOL)_setupDatabaseSubscriptionIfNecessary:(id*)arg1 ;
-(BOOL)_saveZone:(id)arg1 error:(id*)arg2 ;
-(void)_setContainer:(id)arg1 ;
-(BOOL)_checkIfZoneExists:(id)arg1 error:(id*)arg2 ;
-(void)_setStoreMonitor:(id)arg1 ;
-(NSURL *)largeBlobDirectoryURL;
-(BOOL)_deleteZone:(id)arg1 error:(id*)arg2 ;
-(CKDatabase *)database;
-(void)configureSetupOperation:(id)arg1 ;
-(BOOL)_checkAccountStatus:(id*)arg1 ;
-(BOOL)_checkUserIdentity:(id*)arg1 ;
-(void)_setRecordZone:(id)arg1 ;
-(PFCloudKitStoreMonitor *)storeMonitor;
-(NSCloudKitMirroringDelegateOptions *)mirroringOptions;
-(CKContainer *)container;
-(BOOL)_createZoneIfNecessary:(id*)arg1 ;
-(void)dealloc;
-(BOOL)_shouldAttemptRecoveryForZone:(id)arg1 byDeletingExistingZone:(BOOL*)arg2 afterError:(id)arg3 ;
@end

