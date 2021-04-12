/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/


@protocol FBSApplicationDataStoreRepositoryClient <NSObject>
@required
-(void)invalidate;
-(void)addObserver:(id)arg1;
-(void)removeObserver:(id)arg1;
-(void)addPrefetchedKeys:(id)arg1;
-(BOOL)prefetchedObjectIfAvailableForKey:(id)arg1 application:(id)arg2 outObject:(id*)arg3;
-(void)removeObjectForKey:(id)arg1 forApplication:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)removePrefetchedKeys:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)synchronizeWithCompletion:(/*^block*/id)arg1;
-(id)availableDataStores;
-(id)objectForKey:(id)arg1 forApplication:(id)arg2;
-(void)setObject:(id)arg1 forKey:(id)arg2 forApplication:(id)arg3 withCompletion:(/*^block*/id)arg4;
-(void)removeAllObjectsForApplication:(id)arg1 withCompletion:(/*^block*/id)arg2;

@end

