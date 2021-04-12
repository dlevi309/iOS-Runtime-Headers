/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
*/

#import <libobjc.A.dylib/SCKOperationThrottlerDelegate.h>
#import <libobjc.A.dylib/NSFilePresenter.h>
#import <libobjc.A.dylib/SCKDatabaseStoreCoordinator.h>
#import <libobjc.A.dylib/SCKDatabaseStore.h>

@protocol OS_dispatch_queue, SCKOperationThrottler, OS_dispatch_source;
@class NSURL, NSOperationQueue, NSSet, NSDate, CKServerChangeToken, NSFileCoordinator, NSObject, NSHashTable, NSMutableDictionary, NSString;

@interface SCKDatabaseJSONStore : NSObject <SCKOperationThrottlerDelegate, NSFilePresenter, SCKDatabaseStoreCoordinator, SCKDatabaseStore> {

	BOOL _cloudBackupEnabled;
	BOOL _loadedFromDisk;
	BOOL _havePendingChanges;
	unsigned _lastKnownStoreChangeTag;
	NSDate* _lastSyncDate;
	NSDate* _lastDirtyDate;
	CKServerChangeToken* _serverChangeToken;
	NSURL* _presentedItemURL;
	NSOperationQueue* _presentedItemOperationQueue;
	NSFileCoordinator* _fileCoordinator;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSHashTable* _observers;
	NSMutableDictionary* _zoneStoresByName;
	NSMutableDictionary* _foreignZoneDictsByName;
	NSObject*<OS_dispatch_queue> _workQueue;
	id<SCKOperationThrottler> _saveThrottler;
	NSObject*<OS_dispatch_source> _changeListenerSource;
	NSSet* _allowedCommandClasses;
	NSURL* _storeURL;
	unsigned long long _diskReadCount;
	unsigned long long _diskWriteCount;

}

@property (nonatomic,retain) NSFileCoordinator * fileCoordinator;                              //@synthesize fileCoordinator=_fileCoordinator - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> accessQueue;                         //@synthesize accessQueue=_accessQueue - In the implementation block
@property (assign,nonatomic) BOOL loadedFromDisk;                                              //@synthesize loadedFromDisk=_loadedFromDisk - In the implementation block
@property (assign,nonatomic) unsigned lastKnownStoreChangeTag;                                 //@synthesize lastKnownStoreChangeTag=_lastKnownStoreChangeTag - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                                          //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * zoneStoresByName;                           //@synthesize zoneStoresByName=_zoneStoresByName - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * foreignZoneDictsByName;                     //@synthesize foreignZoneDictsByName=_foreignZoneDictsByName - In the implementation block
@property (assign,nonatomic) BOOL havePendingChanges;                                          //@synthesize havePendingChanges=_havePendingChanges - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                           //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) id<SCKOperationThrottler> saveThrottler;                          //@synthesize saveThrottler=_saveThrottler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> changeListenerSource;               //@synthesize changeListenerSource=_changeListenerSource - In the implementation block
@property (nonatomic,retain) NSSet * allowedCommandClasses;                                    //@synthesize allowedCommandClasses=_allowedCommandClasses - In the implementation block
@property (nonatomic,copy,readonly) NSURL * storeURL;                                          //@synthesize storeURL=_storeURL - In the implementation block
@property (nonatomic,readonly) unsigned long long diskReadCount;                               //@synthesize diskReadCount=_diskReadCount - In the implementation block
@property (nonatomic,readonly) unsigned long long diskWriteCount;                              //@synthesize diskWriteCount=_diskWriteCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSURL * presentedItemURL;                                            //@synthesize presentedItemURL=_presentedItemURL - In the implementation block
@property (retain,readonly) NSOperationQueue * presentedItemOperationQueue;                    //@synthesize presentedItemOperationQueue=_presentedItemOperationQueue - In the implementation block
@property (copy,readonly) NSURL * primaryPresentedItemURL; 
@property (readonly) NSSet * observedPresentedItemUbiquityAttributes; 
@property (nonatomic,readonly) id<SCKDatabaseStore> underlyingStore; 
@property (nonatomic,copy) NSDate * lastSyncDate;                                              //@synthesize lastSyncDate=_lastSyncDate - In the implementation block
@property (nonatomic,copy) NSDate * lastDirtyDate;                                             //@synthesize lastDirtyDate=_lastDirtyDate - In the implementation block
@property (nonatomic,copy) CKServerChangeToken * serverChangeToken;                            //@synthesize serverChangeToken=_serverChangeToken - In the implementation block
@property (assign,getter=isCloudBackupEnabled,nonatomic) BOOL cloudBackupEnabled;              //@synthesize cloudBackupEnabled=_cloudBackupEnabled - In the implementation block
+(id)preferredFileURLForSchema:(id)arg1 parentDirectoryURL:(id)arg2 ;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSURL *)presentedItemURL;
-(NSOperationQueue *)presentedItemOperationQueue;
-(id<SCKOperationThrottler>)saveThrottler;
-(void)setForeignZoneDictsByName:(NSMutableDictionary *)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)writeWithAccessor:(/*^block*/id)arg1 ;
-(void)setServerChangeToken:(CKServerChangeToken *)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSDate *)lastDirtyDate;
-(id)initWithSchema:(id)arg1 parentDirectoryURL:(id)arg2 allowedCommands:(id)arg3 ;
-(NSHashTable *)observers;
-(void)writeZone:(id)arg1 withAccessor:(/*^block*/id)arg2 ;
-(void)setFileCoordinator:(NSFileCoordinator *)arg1 ;
-(BOOL)_reloadIfNeededFromFileURL:(id)arg1 ;
-(void)setLastSyncDate:(NSDate *)arg1 ;
-(void)setSaveThrottler:(id<SCKOperationThrottler>)arg1 ;
-(unsigned)lastKnownStoreChangeTag;
-(void)_applyCloudBackupEnabledPropertyToStoreURL;
-(NSURL *)storeURL;
-(void)setHavePendingChanges:(BOOL)arg1 ;
-(BOOL)flushToDiskWithTimeout:(double)arg1 ;
-(void)setZoneStoresByName:(NSMutableDictionary *)arg1 ;
-(void)_listenForChangesToFileURL:(id)arg1 ;
-(id)_encodeDate:(id)arg1 ;
-(void)setLastKnownStoreChangeTag:(unsigned)arg1 ;
-(NSMutableDictionary *)foreignZoneDictsByName;
-(void)readZone:(id)arg1 withAccessor:(/*^block*/id)arg2 ;
-(BOOL)isCloudBackupEnabled;
-(NSSet *)allowedCommandClasses;
-(NSObject*<OS_dispatch_source>)changeListenerSource;
-(id)initWithSchema:(id)arg1 fileURL:(id)arg2 allowedCommands:(id)arg3 ;
-(unsigned long long)diskReadCount;
-(void)setObservers:(NSHashTable *)arg1 ;
-(id)_decodeCodableObjectOfClasses:(id)arg1 from:(id)arg2 error:(id*)arg3 ;
-(NSMutableDictionary *)zoneStoresByName;
-(void)setAllowedCommandClasses:(NSSet *)arg1 ;
-(id)initWithSchema:(id)arg1 fileURL:(id)arg2 ;
-(NSDate *)lastSyncDate;
-(void)removeObserver:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(void)setLoadedFromDisk:(BOOL)arg1 ;
-(void)_loadFromFileURL:(id)arg1 ;
-(void)_saveIfNeededToFileURL:(id)arg1 ;
-(void)readWithAccessor:(/*^block*/id)arg1 ;
-(id<SCKDatabaseStore>)underlyingStore;
-(void)setChangeListenerSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(unsigned long long)diskWriteCount;
-(id)_decodeCodableObjectOfClass:(Class)arg1 from:(id)arg2 error:(id*)arg3 ;
-(void)setCloudBackupEnabled:(BOOL)arg1 ;
-(id)_decodeDate:(id)arg1 ;
-(void)operationThrottlerPerformOperation:(id)arg1 ;
-(BOOL)loadedFromDisk;
-(BOOL)havePendingChanges;
-(void)setLastDirtyDate:(NSDate *)arg1 ;
-(void)_saveToFileURL:(id)arg1 ;
-(void)reloadWithAccessor:(/*^block*/id)arg1 ;
-(NSFileCoordinator *)fileCoordinator;
-(id)_encodeCodableObject:(id)arg1 ;
-(CKServerChangeToken *)serverChangeToken;
-(void)savePresentedItemChangesWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithSchema:(id)arg1 parentDirectoryURL:(id)arg2 ;
-(void)setAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)zoneStoreForSchema:(id)arg1 ;
@end

