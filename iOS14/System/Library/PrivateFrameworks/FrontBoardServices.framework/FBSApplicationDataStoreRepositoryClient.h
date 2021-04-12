/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <FrontBoardServices/FBSServiceFacilityClient.h>
#import <libobjc.A.dylib/FBSApplicationDataStoreRepositoryClient.h>

@protocol FBSApplicationDataStoreRepositoryClient <NSObject>
@required
-(void)removePrefetchedKeys:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)addObserver:(id)arg1;
-(void)removeAllObjectsForApplication:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)setObject:(id)arg1 forKey:(id)arg2 forApplication:(id)arg3 withCompletion:(/*^block*/id)arg4;
-(id)availableDataStores;
-(void)addPrefetchedKeys:(id)arg1;
-(id)objectForKey:(id)arg1 forApplication:(id)arg2;
-(void)removeObjectForKey:(id)arg1 forApplication:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)synchronizeWithCompletion:(/*^block*/id)arg1;
-(BOOL)prefetchedObjectIfAvailableForKey:(id)arg1 application:(id)arg2 outObject:(id*)arg3;
-(void)removeObserver:(id)arg1;
-(void)invalidate;

@end


@class NSCountedSet, NSMutableDictionary, NSHashTable, NSString;

@interface FBSApplicationDataStoreRepositoryClient : FBSServiceFacilityClient <FBSApplicationDataStoreRepositoryClient> {

	os_unfair_lock_s _prefetchedDataLock;
	NSCountedSet* _prefetchedKeys;
	NSMutableDictionary* _prefetchedKeyValues;
	NSMutableDictionary* _pendingChangesToPrefetchedKeys;
	os_unfair_lock_s _observersLock;
	NSHashTable* _observers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)removePrefetchedKeys:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)addObserver:(id)arg1 ;
-(void)_sendMessageType:(int)arg1 withMessage:(/*^block*/id)arg2 withReplyHandler:(/*^block*/id)arg3 waitForReply:(BOOL)arg4 ;
-(void)removeAllObjectsForApplication:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 forApplication:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(id)init;
-(id)availableDataStores;
-(void)addPrefetchedKeys:(id)arg1 ;
-(id)objectForKey:(id)arg1 forApplication:(id)arg2 ;
-(void)removeObjectForKey:(id)arg1 forApplication:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)handleMessage:(id)arg1 withType:(long long)arg2 ;
-(void)_handleValueChanged:(id)arg1 ;
-(void)synchronizeWithCompletion:(/*^block*/id)arg1 ;
-(id)_observers;
-(void)fireCompletion:(/*^block*/id)arg1 result:(id)arg2 error:(id)arg3 ;
-(id)clientCallbackQueue;
-(void)_handleStoreInvalidated:(id)arg1 ;
-(BOOL)prefetchedObjectIfAvailableForKey:(id)arg1 application:(id)arg2 outObject:(id*)arg3 ;
-(void)fireCompletion:(/*^block*/id)arg1 error:(id)arg2 ;
-(id)_allPrefetchedChangesInFlightForApplication:(id)arg1 ;
-(BOOL)_isChangeInFlightForPrefetchedKey:(id)arg1 application:(id)arg2 ;
-(void)_sendPrefetchedKeys:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)removeObserver:(id)arg1 ;
-(void)invalidate;
-(void)_setPrefetchedObjectIfNecessary:(id)arg1 forKey:(id)arg2 application:(id)arg3 ;
-(void)_setChangeInFlight:(BOOL)arg1 forPrefetchedKey:(id)arg2 application:(id)arg3 ;
@end

