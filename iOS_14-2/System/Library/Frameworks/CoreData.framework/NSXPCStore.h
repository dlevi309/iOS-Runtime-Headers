/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSIncrementalStore.h>
#import <libobjc.A.dylib/NSSQLModelProvider.h>
#import <libobjc.A.dylib/NSCoreDataKeyedArchivingDelegate.h>

@class NSDictionary, NSGenerationalRowCache, NSString, NSXPCStoreConnectionManager, NSSQLModel, NSSQLCore, NSXPCStoreNotificationObserver;

@interface NSXPCStore : NSIncrementalStore <NSSQLModelProvider, NSCoreDataKeyedArchivingDelegate> {

	NSDictionary* _metadata;
	NSGenerationalRowCache* _cache;
	NSString* _fileBackedFuturesDirectory;
	NSXPCStoreConnectionManager* _connectionManager;
	NSSQLModel* _model;
	NSSQLCore* _core;
	NSString* _sanityCheckToken;
	NSXPCStoreNotificationObserver* _observer;
	NSString* _remoteStoreChangedNotificationName;
	os_unfair_lock_s _stateLock;

}

@property (copy,readonly) NSString * remoteStoreChangedNotificationName;              //@synthesize remoteStoreChangedNotificationName=_remoteStoreChangedNotificationName - In the implementation block
+(BOOL)_allowCoreDataFutures;
+(void)initialize;
+(int)debugDefault;
+(BOOL)_isOnExtendedTimeout;
+(id)replacementObjectForXPCConnection:(id)arg1 encoder:(id)arg2 object:(id)arg3 ;
+(void)setDebugDefault:(int)arg1 ;
+(id)archiver:(id)arg1 willEncodeObject:(id)arg2 ;
-(id)initWithPersistentStoreCoordinator:(id)arg1 configurationName:(id)arg2 URL:(id)arg3 options:(id)arg4 ;
-(id)objectIDFactoryForEntity:(id)arg1 ;
-(id)entityForEntityDescription:(id)arg1 ;
-(void)freeQueryGenerationWithIdentifier:(id)arg1 ;
-(id)_newObjectIDForEntityDescription:(id)arg1 pk:(long long)arg2 ;
-(BOOL)supportsConcurrentRequestHandling;
-(id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4 ;
-(Class)_objectIDClass;
-(BOOL)loadMetadata:(id*)arg1 ;
-(id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(id)currentChangeToken;
-(BOOL)load:(id*)arg1 ;
-(id)newObjectIDForEntity:(id)arg1 pk:(long long)arg2 ;
-(id)newForeignKeyID:(long long)arg1 entity:(id)arg2 ;
-(id)obtainPermanentIDsForObjects:(id)arg1 error:(id*)arg2 ;
-(Class)objectIDFactoryForSQLEntity:(id)arg1 ;
-(id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(void)willRemoveFromPersistentStoreCoordinator:(id)arg1 ;
-(BOOL)_allowCoreDataFutures;
-(id)currentQueryGeneration;
-(void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1 generation:(id)arg2 ;
-(void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1 generation:(id)arg2 ;
-(void)disconnect;
-(id)ancillaryModels;
-(id)sqlCore;
-(id)fileBackedFuturesDirectory;
-(id)_storeInfoForEntityDescription:(id)arg1 ;
-(id)model;
-(NSString *)remoteStoreChangedNotificationName;
-(void)_setMetadata:(id)arg1 includeVersioning:(BOOL)arg2 ;
-(void)_freeQueryGenerationWithIdentifier:(id)arg1 ;
-(id)_cachedRowForObjectWithID:(id)arg1 generation:(id)arg2 ;
-(void)cacheContents:(id)arg1 ofRelationship:(id)arg2 onObjectWithID:(id)arg3 generation:(id)arg4 ;
-(id)executeBatchDeleteRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(id)ancillarySQLModels;
-(id)_createAndCacheRowForObjectWithID:(id)arg1 propertyValues:(id)arg2 inContext:(id)arg3 error:(id*)arg4 ;
-(void)setURL:(id)arg1 ;
-(id)unarchiver:(id)arg1 didDecodeObject:(id)arg2 ;
-(void)_clearCachedRowForObjectWithID:(id)arg1 generation:(id)arg2 ;
-(void)cacheContents:(id)arg1 ofRelationship:(id)arg2 onObjectWithID:(id)arg3 withTimestamp:(double)arg4 generation:(id)arg5 ;
-(id)replacementObjectForXPCConnection:(id)arg1 encoder:(id)arg2 object:(id)arg3 ;
-(id)decodeValue:(id)arg1 forRelationship:(id)arg2 onSource:(id)arg3 inContext:(id)arg4 error:(id*)arg5 ;
-(id)executeBatchUpdateRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(void)_commitChangesForRequestContext:(id)arg1 ;
-(void)setMetadata:(id)arg1 ;
-(void)cacheFetchedRows:(id)arg1 forManagedObjects:(id)arg2 generation:(id)arg3 ;
-(id)connectionManager;
-(id)executeSaveRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(void)decodePrefetchArray:(id)arg1 forSources:(id)arg2 context:(id)arg3 ;
-(id)executeFetchRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(void)setSQLCore:(id)arg1 ;
-(id)executePersistentHistoryRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(id)type;
-(id)serviceName;
-(BOOL)supportsGenerationalQuerying;
-(id)sendMessage:(id)arg1 fromContext:(id)arg2 interrupts:(unsigned long long*)arg3 error:(id*)arg4 ;
-(id)reopenQueryGenerationWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(void)setIdentifier:(id)arg1 ;
-(void)_setSanityCheckToken:(id)arg1 ;
-(id)metadata;
-(id)decodeResults:(id)arg1 forFetch:(id)arg2 context:(id)arg3 error:(id*)arg4 ;
-(id)_cachedRowForRelationship:(id)arg1 onObjectWithID:(id)arg2 generation:(id)arg3 ;
-(id)_rawMetadata__;
-(void)setupRemoteStoreObserver;
-(id)decodeResults:(id)arg1 forFaultOfObjectWithID:(id)arg2 context:(id)arg3 error:(id*)arg4 ;
-(void)dealloc;
-(id)_executeSaveRequestForContext:(id)arg1 error:(id*)arg2 ;
-(void)decodePrefetchResult:(id)arg1 forSources:(id)arg2 context:(id)arg3 ;
-(id)executeBatchInsertRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(id)_sanityCheckToken;
@end

