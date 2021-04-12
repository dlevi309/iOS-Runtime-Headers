/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(NSPersistentStoreCoordinator *)coordinator;
-(id)initWithCoordinator:(id)arg1 ;
-(void)registerQueryGeneration:(id)arg1 forRemoteGeneration:(id)arg2 ;
-(id)localGenerationForRemoteGeneration:(id)arg1 ;
-(void)releaseQueryGenerationForRemoteGeneration:(id)arg1 ;
-(id)inverseIsToOnePrefetchRequestForRelationshipNamed:(id)arg1 onEntity:(id)arg2 ;
-(id)manyToOnePrefetchRequestForRelationshipNamed:(id)arg1 onEntity:(id)arg2 ;
-(id)manyToManyPrefetchRequestsForRelationshipNamed:(id)arg1 onEntity:(id)arg2 ;
@end

