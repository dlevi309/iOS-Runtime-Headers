/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@protocol OS_os_transaction;
@class NSPersistentStoreCoordinator, NSSQLitePrefetchRequestCache, NSMutableDictionary, NSObject;

@interface NSXPCStoreServerPerConnectionCache : NSObject {

	NSPersistentStoreCoordinator* _coordinator;
	NSSQLitePrefetchRequestCache* _prefetchRequestCache;
	NSMutableDictionary* _generationTokenMap;
	NSObject*<OS_os_transaction> _transaction;

}

@property (nonatomic,readonly) NSPersistentStoreCoordinator * coordinator;              //@synthesize coordinator=_coordinator - In the implementation block
-(void)registerQueryGeneration:(id)arg1 forRemoteGeneration:(id)arg2 ;
-(id)initWithCoordinator:(id)arg1 ;
-(id)manyToOnePrefetchRequestForRelationshipNamed:(id)arg1 onEntity:(id)arg2 ;
-(void)releaseQueryGenerationForRemoteGeneration:(id)arg1 ;
-(id)localGenerationForRemoteGeneration:(id)arg1 ;
-(id)manyToManyPrefetchRequestsForRelationshipNamed:(id)arg1 onEntity:(id)arg2 ;
-(id)inverseIsToOnePrefetchRequestForRelationshipNamed:(id)arg1 onEntity:(id)arg2 ;
-(void)dealloc;
-(NSPersistentStoreCoordinator *)coordinator;
@end

