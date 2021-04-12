/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDPQLCache.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface CKDPCSSQLCache : CKDPQLCache {

	NSObject*<OS_dispatch_queue> _recordQueue;
	unsigned long long _cacheRequestCount;
	unsigned long long _cacheHitCount;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> recordQueue;              //@synthesize recordQueue=_recordQueue - In the implementation block
@property (nonatomic,readonly) double earliestValidDate; 
@property (assign) unsigned long long cacheRequestCount;                            //@synthesize cacheRequestCount=_cacheRequestCount - In the implementation block
@property (assign) unsigned long long cacheHitCount;                                //@synthesize cacheHitCount=_cacheHitCount - In the implementation block
+(id)globalPCSSQLCacheEvictionQueue;
+(id)pathForContext:(id)arg1 ;
+(void)registerPCSSQLCacheEvictionActivity;
+(void)evictPCSSQLCachesForKnownClientContexts;
+(void)_evictPCSSQLCachesForAppContainerAccountTuples:(id)arg1 ;
-(unsigned long long)cacheHitCount;
-(void)removePCSDataForItemsInShareWithID:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setCacheRequestCount:(unsigned long long)arg1 ;
-(id)path;
-(void)_lockedSetPCSData:(id)arg1 databaseScope:(long long)arg2 itemType:(unsigned long long)arg3 forID:(id)arg4 ;
-(id)_lockedFetchPCSDataForID:(id)arg1 databaseScope:(long long)arg2 itemType:(unsigned long long)arg3 ofClass:(Class)arg4 ;
-(id)_initWithClientContext:(id)arg1 ;
-(void)setCacheHitCount:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)recordQueue;
-(void)clearCache;
-(void)fetchPCSDataForRecordWithID:(id)arg1 databaseScope:(long long)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)createInitialTablesSQL;
-(void)removePCSDataForItemsInZoneWithID:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setRecordQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)fetchPCSDataForShareWithID:(id)arg1 databaseScope:(long long)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(double)earliestValidDate;
-(id)infoToUpgradeFromVersion:(unsigned long long)arg1 ;
-(unsigned long long)cacheRequestCount;
-(void)fetchPCSDataForZoneWithID:(id)arg1 databaseScope:(long long)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)CKStatusReportArray;
-(void)_setPCSData:(id)arg1 forItemWithID:(id)arg2 databaseScope:(long long)arg3 itemType:(unsigned long long)arg4 withCompletionHandler:(/*^block*/id)arg5 ;
-(void)clearInvalidatedCacheEntriesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setSharePCSData:(id)arg1 forShareWithID:(id)arg2 databaseScope:(long long)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)setZonePCSData:(id)arg1 forZoneWithID:(id)arg2 databaseScope:(long long)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)setRecordPCSData:(id)arg1 forRecordWithID:(id)arg2 databaseScope:(long long)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)dealloc;
@end

