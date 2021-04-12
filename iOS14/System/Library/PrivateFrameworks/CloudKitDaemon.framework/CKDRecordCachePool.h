/*
* Generated on Thursday, January 14, 2021 at 2:26:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface CKDRecordCachePool : NSObject {

	NSMutableDictionary* _pools;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _recordExpiryQueue;

}

@property (nonatomic,retain) NSMutableDictionary * pools;                                 //@synthesize pools=_pools - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                          //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> recordExpiryQueue;              //@synthesize recordExpiryQueue=_recordExpiryQueue - In the implementation block
+(id)sharedPool;
+(void)performWithClientContext:(id)arg1 scope:(long long)arg2 block:(/*^block*/id)arg3 ;
-(id)init;
-(NSMutableDictionary *)pools;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)acquireCacheWithContext:(id)arg1 scope:(long long)arg2 ;
-(void)releaseCache:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)recordExpiryQueue;
-(void)_purgeRecordCachesForApplicationContainerPaths:(id)arg1 expiryDate:(id)arg2 ;
-(id)_poolForContext:(id)arg1 ;
-(void)setPools:(NSMutableDictionary *)arg1 ;
-(void)setRecordExpiryQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

