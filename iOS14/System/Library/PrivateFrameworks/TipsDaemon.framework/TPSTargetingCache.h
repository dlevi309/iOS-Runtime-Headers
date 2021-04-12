/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsDaemon.framework/TipsDaemon
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface TPSTargetingCache : NSObject {

	NSMutableDictionary* _cacheResultDictionary;
	NSObject*<OS_dispatch_queue> _syncQueue;

}

@property (nonatomic,retain) NSMutableDictionary * cacheResultDictionary;              //@synthesize cacheResultDictionary=_cacheResultDictionary - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> syncQueue;                   //@synthesize syncQueue=_syncQueue - In the implementation block
-(NSObject*<OS_dispatch_queue>)syncQueue;
-(id)init;
-(void)setSyncQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)reset;
-(long long)cacheResultForIdentifier:(id)arg1 ;
-(void)addCacheResult:(long long)arg1 forIdentifier:(id)arg2 ;
-(NSMutableDictionary *)cacheResultDictionary;
-(void)setCacheResultDictionary:(NSMutableDictionary *)arg1 ;
@end

