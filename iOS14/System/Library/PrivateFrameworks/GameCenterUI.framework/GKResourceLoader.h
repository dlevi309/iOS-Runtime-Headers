/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/


@class NSOperationQueue, NSMutableDictionary, NSMapTable, GKResourceCache;

@interface GKResourceLoader : NSObject {

	long long _requestCountMap[3];
	BOOL _isInBackground;
	NSOperationQueue* _accessQueue;
	NSOperationQueue* _notificationQueue;
	NSOperationQueue* _requestQueue;
	NSMutableDictionary* _pendingOperations;
	NSMapTable* _requestsByCacheKey;
	GKResourceCache* _cachedResources;

}

@property (nonatomic,readonly) NSMutableDictionary * pendingOperations;              //@synthesize pendingOperations=_pendingOperations - In the implementation block
@property (nonatomic,readonly) NSMapTable * requestsByCacheKey;                      //@synthesize requestsByCacheKey=_requestsByCacheKey - In the implementation block
@property (nonatomic,readonly) GKResourceCache * cachedResources;                    //@synthesize cachedResources=_cachedResources - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * accessQueue;                       //@synthesize accessQueue=_accessQueue - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * notificationQueue;                 //@synthesize notificationQueue=_notificationQueue - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * requestQueue;                      //@synthesize requestQueue=_requestQueue - In the implementation block
@property (nonatomic,readonly) BOOL isIdle; 
@property (nonatomic,readonly) BOOL isInBackground;                                  //@synthesize isInBackground=_isInBackground - In the implementation block
-(NSMutableDictionary *)pendingOperations;
-(BOOL)isIdle;
-(NSOperationQueue *)requestQueue;
-(void)enterBackground;
-(void)postDidIdleIfIdle;
-(id)init;
-(BOOL)setReason:(long long)arg1 forRequestWithKey:(id)arg2 ;
-(void)enterForeground;
-(void)postDidLoadAllForReason:(long long)arg1 ;
-(void)cancelAllRequests;
-(id)requestKeyForCacheKey:(id)arg1 ;
-(BOOL)isIdleForReason:(long long)arg1 ;
-(void)reprioritizeOperations;
-(id)cachedResourcesForCacheKey:(id)arg1 ;
-(NSOperationQueue *)notificationQueue;
-(void)finishLoadForRequest:(id)arg1 withResource:(id)arg2 error:(id)arg3 ;
-(id)description;
-(void)postDidBeginLoadingIfIdle;
-(NSOperationQueue *)accessQueue;
-(void)updateLoadReason:(long long)arg1 forOperation:(id)arg2 ;
-(id)initWithParentResourceLoader:(id)arg1 ;
-(long long)currentQualityOfService;
-(BOOL)loadResourceWithRequest:(id)arg1 reason:(long long)arg2 ;
-(void)_commonInit;
-(BOOL)isInBackground;
-(void)removeResourcesForCacheKey:(id)arg1 ;
-(void)addResource:(id)arg1 forCacheKey:(id)arg2 ;
-(NSMapTable *)requestsByCacheKey;
-(void)cancelRequestForCacheKey:(id)arg1 ;
-(void)removeAllCachedResources;
-(id)initWithRequestQueue:(id)arg1 accessQueue:(id)arg2 notificationQueue:(id)arg3 cacheLimit:(long long)arg4 ;
-(GKResourceCache *)cachedResources;
-(void)dealloc;
@end

