/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/


@protocol TSPComponentDelegate <NSObject>
@required
-(BOOL)isActive;
-(id)context;
-(id)objectForIdentifier:(long long)arg1;
-(void)cacheComponent:(id)arg1 isDiscardingContent:(BOOL)arg2;
-(BOOL)shouldKeepAllCachedObjectsInMemory;
-(void)flushComponent:(id)arg1 isDiscardingContent:(BOOL)arg2;
-(void)continueCacheOperationUsingBlock:(/*^block*/id)arg1;
-(void)performCacheOperationUsingBlock:(/*^block*/id)arg1;
-(void)didModifyFlushedComponent:(id)arg1 forObject:(id)arg2;

@end

