/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@protocol OS_dispatch_semaphore;
@class NSCloudKitMirroringDelegateOptions, CKRecordZone, CKContainer, CKDatabase, CKDatabaseSubscription, NSURL, NSObject, PFCloudKitStoreMonitor;

@interface PFCloudKitSetupAssistant : NSObject {

	NSCloudKitMirroringDelegateOptions* _mirroringOptions;
	CKRecordZone* _recordZone;
	CKContainer* _container;
	CKDatabase* _database;
	CKDatabaseSubscription* _databaseSubscription;
	NSURL* _largeBlobDirectoryURL;
	NSObject*<OS_dispatch_semaphore> _cloudKitSemaphore;
	PFCloudKitStoreMonitor* storeMonitor;
	PFCloudKitStoreMonitor* _storeMonitor;

}

@property (nonatomic,readonly) NSCloudKitMirroringDelegateOptions * mirroringOptions;              //@synthesize mirroringOptions=_mirroringOptions - In the implementation block
@property (nonatomic,readonly) CKRecordZone * recordZone;                                          //@synthesize recordZone=_recordZone - In the implementation block
@property (nonatomic,readonly) CKContainer * container;                                            //@synthesize container=_container - In the implementation block
@property (nonatomic,readonly) CKDatabase * database;                                              //@synthesize database=_database - In the implementation block
@property (nonatomic,readonly) CKDatabaseSubscription * databaseSubscription;                      //@synthesize databaseSubscription=_databaseSubscription - In the implementation block
@property (nonatomic,readonly) NSURL * largeBlobDirectoryURL;                                      //@synthesize largeBlobDirectoryURL=_largeBlobDirectoryURL - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_semaphore> cloudKitSemaphore;                 //@synthesize cloudKitSemaphore=_cloudKitSemaphore - In the implementation block
@property (nonatomic,readonly) PFCloudKitStoreMonitor * storeMonitor;                              //@synthesize storeMonitor=_storeMonitor - In the implementation block
-(void)dealloc;
-(CKContainer *)container;
-(void)_setContainer:(id)arg1 ;
-(CKDatabase *)database;
-(CKRecordZone *)recordZone;
-(NSCloudKitMirroringDelegateOptions *)mirroringOptions;
-(BOOL)_checkAndInitializeMetadata:(id*)arg1 ;
-(BOOL)_checkAccountStatus:(id*)arg1 ;
-(BOOL)_checkUserIdentity:(id*)arg1 ;
-(BOOL)_createZoneIfNecessary:(id*)arg1 ;
-(BOOL)_setupDatabaseSubscriptionIfNecessary:(id*)arg1 ;
-(BOOL)_initializeAssetStorageURLError:(id*)arg1 ;
-(BOOL)_saveZone:(id)arg1 error:(id*)arg2 ;
-(BOOL)_shouldAttemptRecoveryForZone:(id)arg1 byDeletingExistingZone:(BOOL*)arg2 afterError:(id)arg3 ;
-(BOOL)_deleteZone:(id)arg1 error:(id*)arg2 ;
-(id)initWithMirroringOptions:(id)arg1 observedStore:(id)arg2 zone:(id)arg3 databaseSubscription:(id)arg4 ;
-(BOOL)_initializeCloudKitForObservedStore:(id*)arg1 ;
-(void)_setDatabase:(id)arg1 ;
-(void)_setStoreMonitor:(id)arg1 ;
-(CKDatabaseSubscription *)databaseSubscription;
-(NSURL *)largeBlobDirectoryURL;
-(NSObject*<OS_dispatch_semaphore>)cloudKitSemaphore;
-(PFCloudKitStoreMonitor *)storeMonitor;
@end

