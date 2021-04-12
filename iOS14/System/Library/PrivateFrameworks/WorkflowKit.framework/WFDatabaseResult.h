/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@protocol OS_dispatch_queue;
@class NSArray, WFDatabase, NSError, NSPredicate, NSObject, NSHashTable, NSNumber, WFDatabaseResultFetchOperation, NSSet, WFCoreDataResultState;

@interface WFDatabaseResult : NSObject {

	NSArray* _descriptors;
	WFDatabase* _database;
	NSError* _fetchError;
	NSPredicate* _searchPredicate;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSHashTable* _observersTable;
	NSNumber* _cachedCount;
	WFDatabaseResultFetchOperation* _fetchOperation;
	NSSet* _relationshipKeysAffectingDescriptors;
	NSSet* _lastFetchedObjectIDs;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                             //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> callbackQueue;                     //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,readonly) NSHashTable * observersTable;                                   //@synthesize observersTable=_observersTable - In the implementation block
@property (nonatomic,retain) NSNumber * cachedCount;                                           //@synthesize cachedCount=_cachedCount - In the implementation block
@property (nonatomic,readonly) NSArray * observers; 
@property (nonatomic,readonly) WFDatabaseResultFetchOperation * fetchOperation;                //@synthesize fetchOperation=_fetchOperation - In the implementation block
@property (nonatomic,copy,readonly) NSSet * relationshipKeysAffectingDescriptors;              //@synthesize relationshipKeysAffectingDescriptors=_relationshipKeysAffectingDescriptors - In the implementation block
@property (nonatomic,copy) NSSet * lastFetchedObjectIDs;                                       //@synthesize lastFetchedObjectIDs=_lastFetchedObjectIDs - In the implementation block
@property (nonatomic,readonly) WFDatabase * database;                                          //@synthesize database=_database - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) NSError * fetchError;                                           //@synthesize fetchError=_fetchError - In the implementation block
@property (nonatomic,readonly) NSArray * descriptors;                                          //@synthesize descriptors=_descriptors - In the implementation block
@property (nonatomic,copy) NSPredicate * searchPredicate;                                      //@synthesize searchPredicate=_searchPredicate - In the implementation block
@property (nonatomic,readonly) WFCoreDataResultState * state; 
-(void)addObserver:(id)arg1 ;
-(NSArray *)descriptors;
-(NSArray *)observers;
-(unsigned long long)count;
-(NSError *)fetchError;
-(void)setSearchPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)searchPredicate;
-(id)description;
-(WFDatabaseResultFetchOperation *)fetchOperation;
-(void)setCachedCount:(NSNumber *)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(WFCoreDataResultState *)state;
-(NSObject*<OS_dispatch_queue>)queue;
-(WFDatabase *)database;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(NSNumber *)cachedCount;
-(void)invalidateCacheWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSHashTable *)observersTable;
-(id)initWithDatabase:(id)arg1 fetchOperation:(id)arg2 ;
-(id)initWithDatabase:(id)arg1 fetchOperation:(id)arg2 relationshipKeysAffectingDescriptors:(id)arg3 ;
-(id)initWithDatabase:(id)arg1 fetchRequest:(id)arg2 ;
-(id)initWithDatabase:(id)arg1 fetchRequest:(id)arg2 relationshipKeysAffectingDescriptors:(id)arg3 ;
-(id)descriptorsIfLoaded;
-(void)notifyObserversAboutChange:(id)arg1 fromPreviousDescriptors:(id)arg2 ;
-(NSSet *)relationshipKeysAffectingDescriptors;
-(NSSet *)lastFetchedObjectIDs;
-(void)setLastFetchedObjectIDs:(NSSet *)arg1 ;
@end

