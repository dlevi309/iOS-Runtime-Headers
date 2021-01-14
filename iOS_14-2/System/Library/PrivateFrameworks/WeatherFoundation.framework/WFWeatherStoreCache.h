/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/


@protocol OS_dispatch_queue;
@class NSURL, NSTimer, NSObject, NSMutableDictionary, NSMutableSet;

@interface WFWeatherStoreCache : NSObject {

	NSURL* _URL;
	NSTimer* _cacheStoreTimer;
	NSObject*<OS_dispatch_queue> _cacheConcurrentQueue;
	NSMutableDictionary* _cacheForDomain;
	NSMutableSet* _dirtyCacheDomains;

}

@property (nonatomic,retain) NSTimer * cacheStoreTimer;                            //@synthesize cacheStoreTimer=_cacheStoreTimer - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> cacheConcurrentQueue;              //@synthesize cacheConcurrentQueue=_cacheConcurrentQueue - In the implementation block
@property (retain) NSMutableDictionary * cacheForDomain;                           //@synthesize cacheForDomain=_cacheForDomain - In the implementation block
@property (retain) NSMutableSet * dirtyCacheDomains;                               //@synthesize dirtyCacheDomains=_dirtyCacheDomains - In the implementation block
@property (nonatomic,copy) NSURL * URL;                                            //@synthesize URL=_URL - In the implementation block
+(BOOL)removeObjectsFromCache:(id)arg1 passingTest:(/*^block*/id)arg2 ;
+(id)wf_masterDomains;
+(id)createCacheIfNecessary:(id)arg1 error:(id*)arg2 ;
-(void)cache:(id)arg1 withinDomain:(id)arg2 date:(id)arg3 forKey:(id)arg4 expiration:(id)arg5 synchronous:(BOOL)arg6 ;
-(void)executeTransaction:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)cacheConcurrentQueue;
-(id)init;
-(id)initWithURL:(id)arg1 ;
-(id)cachedObjectWithinDomain:(id)arg1 forKey:(id)arg2 ;
-(void)cache:(id)arg1 withinDomain:(id)arg2 forKey:(id)arg3 expiration:(id)arg4 ;
-(void)setURL:(NSURL *)arg1 ;
-(void)removeObjectWithinDomain:(id)arg1 forKey:(id)arg2 ;
-(void)_concurrentQueue_barrier_writeCacheDictionaryToFile;
-(void)_ensureDomainIsLoaded:(id)arg1 ;
-(id)cachedObjectWithinDomain:(id)arg1 forKey:(id)arg2 staleness:(unsigned long long)arg3 ;
-(BOOL)_loadDomain:(id)arg1 ;
-(void)setCacheForDomain:(NSMutableDictionary *)arg1 ;
-(BOOL)_concurrentQueue_barrier_loadDomain:(id)arg1 ;
-(void)writeCacheDictionaryToFile;
-(void)_concurrentQueue_barrier_deleteOldDataFromCache;
-(void)setDirtyCacheDomains:(NSMutableSet *)arg1 ;
-(id)_loadedCacheDomains;
-(void)setCacheStoreTimer:(NSTimer *)arg1 ;
-(void)_markDomainDirty:(id)arg1 ;
-(NSTimer *)cacheStoreTimer;
-(void)_concurrentQueue_barrier_shrinkDomain:(id)arg1 ;
-(void)setCacheConcurrentQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)deleteOldDataFromCache:(id)arg1 allowedStaleness:(unsigned long long)arg2 ;
-(void)removeAllObjects;
-(NSMutableSet *)dirtyCacheDomains;
-(NSURL *)URL;
-(void)_startCacheStoreTimer;
-(id)_dirtyCacheDomains;
-(void)_concurrentQueue_barrier_deleteOldDataFromCache:(id)arg1 allowedStaleness:(unsigned long long)arg2 ;
-(void)_concurrentQueue_barrier_removeObjectWithinDomain:(id)arg1 forKey:(id)arg2 ;
-(void)_stopCacheStoreTimer;
-(void)_shrinkDomain:(id)arg1 ;
-(void)dealloc;
-(NSMutableDictionary *)cacheForDomain;
-(void)cache:(id)arg1 withinDomain:(id)arg2 forKey:(id)arg3 ;
@end

