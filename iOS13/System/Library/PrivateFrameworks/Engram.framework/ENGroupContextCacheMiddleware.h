/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Engram.framework/Engram
*/


@protocol ENGroupContextCacheMiddleware <ENGroupContextMiddleware>
@required
-(long long)middlewareCacheCostForContext:(id)arg1;
-(void)groupContext:(id)arg1 cacheGroup:(id)arg2 completion:(/*^block*/id)arg3;
-(void)groupContext:(id)arg1 cachedGroupWithID:(id)arg2 completion:(/*^block*/id)arg3;
-(void)groupContext:(id)arg1 latestCachedGroupWithStableID:(id)arg2 completion:(/*^block*/id)arg3;
-(void)groupContext:(id)arg1 fetchAllKnownGroups:(/*^block*/id)arg2;
-(void)deleteAllKnownGroupsForGroupContext:(id)arg1 completion:(/*^block*/id)arg2;
-(void)deleteCachedValueForForGroupContext:(id)arg1 withGroupID:(id)arg2 completion:(/*^block*/id)arg3;

@end

