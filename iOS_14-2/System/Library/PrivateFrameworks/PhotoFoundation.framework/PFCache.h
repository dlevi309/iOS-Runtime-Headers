/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMapTable, PFCachePolicy, PFCacheStatistics;

@interface PFCache : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMapTable* _contents;
	PFCachePolicy* _policy;
	PFCacheStatistics* _statistics;
	/*^block*/id _willBeRemovedFromCacheHandler;

}

@property (copy) id willBeRemovedFromCacheHandler;              //@synthesize willBeRemovedFromCacheHandler=_willBeRemovedFromCacheHandler - In the implementation block
-(id)init;
-(id)statistics;
-(id)initWithPolicy:(id)arg1 ;
-(void)_removeObjectForKey:(id)arg1 notify:(BOOL)arg2 ;
-(void)removeObjectForKeyWithoutNotification:(id)arg1 ;
-(void)_setEntry:(id)arg1 forKey:(id)arg2 ;
-(id)setObject:(id)arg1 forKeyIfNotPresent:(id)arg2 ;
-(void)enumerateCacheEntriesUsingBlock:(/*^block*/id)arg1 ;
-(id)willBeRemovedFromCacheHandler;
-(void)setWillBeRemovedFromCacheHandler:(id)arg1 ;
-(unsigned long long)count;
-(void)removeObjectForKey:(id)arg1 ;
-(id)description;
-(id)objectForKey:(id)arg1 ;
-(void)removeAllObjects;
-(void)removeObject:(id)arg1 forKey:(id)arg2 ;
-(void)dealloc;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end

