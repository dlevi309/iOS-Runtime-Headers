/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@protocol MPMediaLibraryDataProviderPrivate, OS_dispatch_queue;
#import <MediaPlayer/MediaPlayer-Structs.h>
@class NSObject, NSMutableArray;

@interface MPMediaEntityCache : NSObject {

	id<MPMediaLibraryDataProviderPrivate> _mediaLibraryDataProvider;
	BOOL _mediaLibraryDataProviderRespondsToSupportsEntityChangeTrackingMethod;
	opaque_pthread_rwlock_t _rwlock;
	os_unfair_lock_s _entityCacheMapLock;
	NSObject*<OS_dispatch_queue> _deallocLaterQueue;
	CFDictionaryRef _concreteEntitiesByDataProviderEntityClass;
	NSMutableArray* _entityTemporaryReferences;

}
-(id)initWithMediaLibraryDataProvider:(id)arg1 ;
-(void)removeEntityWithIdentifier:(long long)arg1 dataProviderEntityClass:(Class)arg2 ;
-(id)itemWithIdentifier:(long long)arg1 loadEntityBlock:(/*^block*/id)arg2 ;
-(void)_performWithExclusiveAccessForDataProviderEntityClass:(Class)arg1 block:(/*^block*/id)arg2 ;
-(void)_clearSomeGlobalEntityTemporaryReferences;
-(void)updatePropertyValuesInEntityWithIdentifier:(long long)arg1 dataProviderEntityClass:(Class)arg2 deleted:(BOOL)arg3 ;
-(id)_entityWithIdentifier:(long long)arg1 mediaEntityType:(long long)arg2 collectionGroupingType:(long long)arg3 loadEntityBlock:(/*^block*/id)arg4 ;
-(map<long long, MPMediaEntity<MPCacheableConcreteMediaEntity> *__weak, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, MPMediaEntity<MPCacheableConcreteMediaEntity> *__weak> > >*)_entityMapForDataProviderEntityClass:(Class)arg1 ;
-(id)itemWithIdentifier:(long long)arg1 ;
-(id)collectionWithIdentifier:(long long)arg1 grouping:(long long)arg2 loadEntityBlock:(/*^block*/id)arg3 ;
-(void)_performWithSharedAccessForDataProviderEntityClass:(Class)arg1 block:(/*^block*/id)arg2 ;
@end

