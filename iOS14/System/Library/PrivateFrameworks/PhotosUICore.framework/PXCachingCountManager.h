/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol OS_dispatch_queue;
@class NSObject, NSCache;

@interface PXCachingCountManager : NSObject {

	NSObject*<OS_dispatch_queue> _stateQueue;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSCache* _cache;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> stateQueue;              //@synthesize stateQueue=_stateQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;               //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSCache * cache;                                      //@synthesize cache=_cache - In the implementation block
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSCache *)cache;
-(id)init;
-(void)setStateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setCache:(NSCache *)arg1 ;
-(void)requestCountForAssetCollection:(id)arg1 fetchOptions:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(NSObject*<OS_dispatch_queue>)stateQueue;
@end

