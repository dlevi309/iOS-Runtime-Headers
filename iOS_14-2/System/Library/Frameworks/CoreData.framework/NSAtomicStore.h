/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSPersistentStore.h>

@class NSMutableDictionary;

@interface NSAtomicStore : NSPersistentStore {

	NSMutableDictionary* _nodeCache;
	NSMutableDictionary* _entityCache;
	NSMutableDictionary* _storeMetadata;
	long long _nextReference;
	void* _reserved4;
	void* _reserved5;

}
+(void)initialize;
+(id)metadataForPersistentStoreWithURL:(id)arg1 error:(id*)arg2 ;
-(id)initWithPersistentStoreCoordinator:(id)arg1 configurationName:(id)arg2 URL:(id)arg3 options:(id)arg4 ;
-(id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4 ;
-(id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(void)_didLoadMetadata;
-(BOOL)load:(id*)arg1 ;
-(id)obtainPermanentIDsForObjects:(id)arg1 error:(id*)arg2 ;
-(void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1 ;
-(id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)save:(id*)arg1 ;
-(void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1 ;
-(void)_preflightCrossCheck;
-(void)addCacheNodes:(id)arg1 ;
-(void)updateCacheNode:(id)arg1 fromManagedObject:(id)arg2 ;
-(void)_deleteNodeFromMainCache:(id)arg1 ;
-(id)init;
-(void)_insertNodeIntoMainCache:(id)arg1 ;
-(void)_addObject:(id)arg1 ;
-(id)_retainedObjectIDForEntity:(id)arg1 referenceObject:(id)arg2 ;
-(id)executeSaveChangesRequest:(id)arg1 withContext:(id)arg2 ;
-(void)_registerCacheNode:(id)arg1 ;
-(void)_insertNodeIntoEntityCache:(id)arg1 ;
-(id)_retrieveNodesSatisfyingRequest:(id)arg1 ;
-(id)objectIDForEntity:(id)arg1 referenceObject:(id)arg2 ;
-(void)setMetadata:(id)arg1 ;
-(void)_removeObject:(id)arg1 ;
-(void)_deleteNodeFromEntityCache:(id)arg1 ;
-(id)executeCountRequest:(id)arg1 withContext:(id)arg2 ;
-(id)cacheNodes;
-(void)_updateObject:(id)arg1 ;
-(void)willRemoveCacheNodes:(id)arg1 ;
-(id)newReferenceObjectForManagedObject:(id)arg1 ;
-(id)_getNewIDForObject:(id)arg1 ;
-(id)executeFetchRequest:(id)arg1 withContext:(id)arg2 ;
-(id)_retrieveNodeForObjectID:(id)arg1 ;
-(id)_retrieveNodeForObject:(id)arg1 ;
-(id)referenceObjectForObjectID:(id)arg1 ;
-(void)_storeNextReferenceInMetadata;
-(id)metadata;
-(id)_rawMetadata__;
-(id)cacheNodeForObjectID:(id)arg1 ;
-(void)dealloc;
-(id)newCacheNodeForManagedObject:(id)arg1 ;
@end

