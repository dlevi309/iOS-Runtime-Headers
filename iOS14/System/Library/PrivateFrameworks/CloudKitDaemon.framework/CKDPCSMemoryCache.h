/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@protocol OS_dispatch_queue, OS_dispatch_source, NSObject;
@class NSMutableDictionary, NSObject;

@interface CKDPCSMemoryCache : NSObject {

	BOOL _memoryStatusChanged;
	int _fakeMemoryWarningToken;
	unsigned long long _maxEntries;
	double _minAge;
	NSMutableDictionary* _cacheEntries;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_source> _memoryNotificationSource;
	unsigned long long _memoryStatus;
	id<NSObject> _memoryCacheEvictNotificationObserver;
	double _oldestCacheEntry;
	unsigned long long _memoryCacheRequestCount;
	unsigned long long _memoryCacheHitCount;
	unsigned long long _memoryCacheHighwaterCount;
	unsigned long long _memoryCacheDeleteCount;
	unsigned long long _memoryCacheUpdateCount;
	unsigned long long _memoryCacheEvictCount;

}

@property (nonatomic,retain) NSMutableDictionary * cacheEntries;                                  //@synthesize cacheEntries=_cacheEntries - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> accessQueue;                            //@synthesize accessQueue=_accessQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> memoryNotificationSource;              //@synthesize memoryNotificationSource=_memoryNotificationSource - In the implementation block
@property (assign) unsigned long long memoryStatus;                                               //@synthesize memoryStatus=_memoryStatus - In the implementation block
@property (assign) BOOL memoryStatusChanged;                                                      //@synthesize memoryStatusChanged=_memoryStatusChanged - In the implementation block
@property (nonatomic,retain) id<NSObject> memoryCacheEvictNotificationObserver;                   //@synthesize memoryCacheEvictNotificationObserver=_memoryCacheEvictNotificationObserver - In the implementation block
@property (assign) int fakeMemoryWarningToken;                                                    //@synthesize fakeMemoryWarningToken=_fakeMemoryWarningToken - In the implementation block
@property (assign) double oldestCacheEntry;                                                       //@synthesize oldestCacheEntry=_oldestCacheEntry - In the implementation block
@property (assign) unsigned long long memoryCacheRequestCount;                                    //@synthesize memoryCacheRequestCount=_memoryCacheRequestCount - In the implementation block
@property (assign) unsigned long long memoryCacheHitCount;                                        //@synthesize memoryCacheHitCount=_memoryCacheHitCount - In the implementation block
@property (assign) unsigned long long memoryCacheHighwaterCount;                                  //@synthesize memoryCacheHighwaterCount=_memoryCacheHighwaterCount - In the implementation block
@property (assign) unsigned long long memoryCacheDeleteCount;                                     //@synthesize memoryCacheDeleteCount=_memoryCacheDeleteCount - In the implementation block
@property (assign) unsigned long long memoryCacheUpdateCount;                                     //@synthesize memoryCacheUpdateCount=_memoryCacheUpdateCount - In the implementation block
@property (assign) unsigned long long memoryCacheEvictCount;                                      //@synthesize memoryCacheEvictCount=_memoryCacheEvictCount - In the implementation block
@property (assign,nonatomic) unsigned long long maxEntries;                                       //@synthesize maxEntries=_maxEntries - In the implementation block
@property (assign,nonatomic) double minAge;                                                       //@synthesize minAge=_minAge - In the implementation block
+(void)registerEvictionTimer;
+(id)globalEvictQueue;
-(void)setFakeMemoryWarningToken:(int)arg1 ;
-(void)setMemoryCacheEvictCount:(unsigned long long)arg1 ;
-(unsigned long long)_cacheCount;
-(id)init;
-(void)setMemoryCacheUpdateCount:(unsigned long long)arg1 ;
-(BOOL)hasStatusToReport;
-(unsigned long long)memoryCacheEvictCount;
-(void)setMinAge:(double)arg1 ;
-(int)fakeMemoryWarningToken;
-(unsigned long long)maxEntries;
-(void)getPCSDataFromCacheForID:(id)arg1 databaseScope:(long long)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)setMaxEntries:(unsigned long long)arg1 ;
-(unsigned long long)memoryCacheUpdateCount;
-(unsigned long long)memoryCacheRequestCount;
-(NSObject*<OS_dispatch_source>)memoryNotificationSource;
-(void)setMemoryCacheEvictNotificationObserver:(id<NSObject>)arg1 ;
-(void)setMemoryStatus:(unsigned long long)arg1 ;
-(id<NSObject>)memoryCacheEvictNotificationObserver;
-(void)clearCache;
-(BOOL)memoryStatusChanged;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(void)setMemoryCacheDeleteCount:(unsigned long long)arg1 ;
-(void)setMemoryCacheRequestCount:(unsigned long long)arg1 ;
-(double)oldestCacheEntry;
-(void)runCacheEviction;
-(void)setMemoryCacheHighwaterCount:(unsigned long long)arg1 ;
-(void)setPCSData:(id)arg1 forItemID:(id)arg2 databaseScope:(long long)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(double)minAge;
-(unsigned long long)memoryStatus;
-(void)setMemoryNotificationSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setMemoryCacheHitCount:(unsigned long long)arg1 ;
-(void)setCacheEntries:(NSMutableDictionary *)arg1 ;
-(id)CKStatusReportArray;
-(unsigned long long)memoryCacheDeleteCount;
-(void)setOldestCacheEntry:(double)arg1 ;
-(NSMutableDictionary *)cacheEntries;
-(void)setMemoryStatusChanged:(BOOL)arg1 ;
-(void)_lockedEvictEntriesFromCache;
-(unsigned long long)memoryCacheHitCount;
-(unsigned long long)memoryCacheHighwaterCount;
-(void)dealloc;
-(void)setAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

