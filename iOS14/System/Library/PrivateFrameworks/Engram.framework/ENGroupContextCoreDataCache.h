/*
* Generated on Thursday, January 14, 2021 at 2:27:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Engram.framework/Engram
*/

#import <libobjc.A.dylib/ENGroupContextCacheMiddleware.h>

@protocol OS_dispatch_queue;
@class NSObject, NSPersistentContainer, NSString;

@interface ENGroupContextCoreDataCache : NSObject <ENGroupContextCacheMiddleware> {

	NSObject*<OS_dispatch_queue> _queue;
	NSPersistentContainer* _container;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSPersistentContainer * container;               //@synthesize container=_container - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadWithCompletion:(/*^block*/id)arg1 ;
-(long long)middlewareCacheCostForContext:(id)arg1 ;
-(void)groupContext:(id)arg1 cacheGroup:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)groupContext:(id)arg1 cachedGroupWithID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)groupContext:(id)arg1 latestCachedGroupWithStableID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)groupContext:(id)arg1 fetchAllKnownGroups:(/*^block*/id)arg2 ;
-(void)deleteAllKnownGroupsForGroupContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteCachedValueForForGroupContext:(id)arg1 withGroupID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setContainer:(NSPersistentContainer *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSPersistentContainer *)container;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithType:(unsigned long long)arg1 containerURL:(id)arg2 queue:(id)arg3 ;
-(void)_groupFromCypher:(id)arg1 groupID:(id)arg2 applicationData:(id)arg3 context:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)initOnDiskCacheWithContainerURL:(id)arg1 Queue:(id)arg2 ;
-(id)initInMemoryCacheWithQueue:(id)arg1 ;
@end

