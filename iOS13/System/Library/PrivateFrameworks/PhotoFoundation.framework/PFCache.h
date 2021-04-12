/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(unsigned long long)count;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)statistics;
-(id)initWithPolicy:(id)arg1 ;
-(void)_removeObjectForKey:(id)arg1 notify:(BOOL)arg2 ;
-(void)removeObjectForKeyWithoutNotification:(id)arg1 ;
-(void)removeObject:(id)arg1 forKey:(id)arg2 ;
-(void)_setEntry:(id)arg1 forKey:(id)arg2 ;
-(id)setObject:(id)arg1 forKeyIfNotPresent:(id)arg2 ;
-(void)enumerateCacheEntriesUsingBlock:(/*^block*/id)arg1 ;
-(id)willBeRemovedFromCacheHandler;
-(void)setWillBeRemovedFromCacheHandler:(id)arg1 ;
@end

