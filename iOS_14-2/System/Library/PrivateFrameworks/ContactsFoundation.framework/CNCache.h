/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/


@protocol CNScheduler;
@class NSArray, NSMutableDictionary, NSMutableArray;

@interface CNCache : NSObject {

	NSArray* _boundingStrategies;
	id<CNScheduler> _resourceScheduler;
	NSMutableDictionary* _storage;
	NSMutableArray* _didEvictHandlers;
	NSArray* _evictedKeysAndValues;

}

@property (nonatomic,copy,readonly) NSArray * boundingStrategies;              //@synthesize boundingStrategies=_boundingStrategies - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> resourceScheduler;              //@synthesize resourceScheduler=_resourceScheduler - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * storage;                  //@synthesize storage=_storage - In the implementation block
@property (nonatomic,readonly) NSMutableArray * didEvictHandlers;              //@synthesize didEvictHandlers=_didEvictHandlers - In the implementation block
@property (nonatomic,copy) NSArray * evictedKeysAndValues;                     //@synthesize evictedKeysAndValues=_evictedKeysAndValues - In the implementation block
@property (copy,readonly) NSArray * allKeys; 
@property (copy,readonly) NSArray * allObjects; 
+(id)atomicCache;
+(id)cache;
+(id)atomicCacheScheduler;
+(id)boundingStrategyWithTTL:(double)arg1 renewalOptions:(unsigned long long)arg2 timeProvider:(id)arg3 ;
+(id)nonatomicCacheScheduler;
+(id)boundingStrategyWithCapacity:(unsigned long long)arg1 ;
+(id)boundingStrategyWithTTL:(double)arg1 ;
-(id)objectForKey:(id)arg1 onCacheMiss:(/*^block*/id)arg2 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(NSMutableArray *)didEvictHandlers;
-(void)resourceLock_validateKey:(id)arg1 ;
-(id)init;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(id<CNScheduler>)resourceScheduler;
-(NSMutableDictionary *)storage;
-(void)setEvictedKeysAndValues:(NSArray *)arg1 ;
-(void)callDidEvictHandlersIfNecessary;
-(id)initWithBoundingStrategies:(id)arg1 resourceScheduler:(id)arg2 ;
-(void)addDidEvictHandler:(/*^block*/id)arg1 ;
-(void)resourceLock_evictObjectsForKeys:(id)arg1 ;
-(void)performWithResourceLock:(/*^block*/id)arg1 ;
-(void)resourceLock_willSetObject:(id)arg1 forKey:(id)arg2 ;
-(NSArray *)allObjects;
-(id)description;
-(id)resultWithResourceLock:(/*^block*/id)arg1 ;
-(void)resourceLock_setObject:(id)arg1 forKey:(id)arg2 ;
-(id)objectForKey:(id)arg1 ;
-(void)removeAllObjects;
-(void)resourceLock_validateAllKeys;
-(void)resourceLock_willAccessKey:(id)arg1 ;
-(id)initWithResourceScheduler:(id)arg1 ;
-(NSArray *)evictedKeysAndValues;
-(NSArray *)allKeys;
-(void)resourceLock_evictObjectForKey:(id)arg1 ;
-(NSArray *)boundingStrategies;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end

