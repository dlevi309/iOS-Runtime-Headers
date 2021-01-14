/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <FrontBoard/FrontBoard-Structs.h>
#import <libobjc.A.dylib/FBSApplicationDataStoreRepositoryClient.h>

@protocol FBApplicationDataStoreRepository, OS_dispatch_queue;
@class NSCountedSet, NSMutableDictionary, NSObject, NSHashTable, NSString;

@interface FBApplicationDataStoreInProcessRepositoryClient : NSObject <FBSApplicationDataStoreRepositoryClient> {

	id<FBApplicationDataStoreRepository> _dataStore;
	NSCountedSet* _prefetchedKeys;
	NSMutableDictionary* _prefetchedKeyValues;
	NSObject*<OS_dispatch_queue> _prefetchQueue;
	NSObject*<OS_dispatch_queue> _clientCalloutQueue;
	os_unfair_lock_s _observersLock;
	NSHashTable* _observersLock_observers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDataStore:(id)arg1 ;
-(void)removePrefetchedKeys:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)addObserver:(id)arg1 ;
-(void)_valueChanged:(id)arg1 ;
-(void)_repositoryInvalidated:(id)arg1 ;
-(void)_prefetchQueue_updateNotificationListeners;
-(void)removeAllObjectsForApplication:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 forApplication:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(id)init;
-(id)availableDataStores;
-(void)addPrefetchedKeys:(id)arg1 ;
-(id)objectForKey:(id)arg1 forApplication:(id)arg2 ;
-(void)removeObjectForKey:(id)arg1 forApplication:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)synchronizeWithCompletion:(/*^block*/id)arg1 ;
-(id)_observers;
-(BOOL)prefetchedObjectIfAvailableForKey:(id)arg1 application:(id)arg2 outObject:(id*)arg3 ;
-(void)objectForKey:(id)arg1 forApplication:(id)arg2 withResult:(/*^block*/id)arg3 ;
-(id)_prefetchQueue_prefetchedKeysForApplication:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)_updateNotificationListeners;
-(void)_updateCacheIfNecessaryWithObject:(id)arg1 forKey:(id)arg2 forApplication:(id)arg3 ;
-(void)invalidate;
-(void)_invalidateCacheIfObjectIsNotEqual:(id)arg1 forKey:(id)arg2 forApplication:(id)arg3 ;
@end

