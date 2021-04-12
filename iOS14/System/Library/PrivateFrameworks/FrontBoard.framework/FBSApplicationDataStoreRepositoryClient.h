/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/


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

