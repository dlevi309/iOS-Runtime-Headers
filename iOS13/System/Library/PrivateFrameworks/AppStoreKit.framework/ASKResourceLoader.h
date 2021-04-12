/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
*/


@class NSOperationQueue, NSMutableDictionary, NSMapTable, ASKResourceCache;

@interface ASKResourceLoader : NSObject {

	long long _requestCountMap[3];
	BOOL _isInBackground;
	NSOperationQueue* _accessQueue;
	NSOperationQueue* _notificationQueue;
	NSOperationQueue* _requestQueue;
	NSMutableDictionary* _pendingOperations;
	NSMapTable* _requestsByCacheKey;
	ASKResourceCache* _cachedResources;

}

@property (nonatomic,readonly) NSMutableDictionary * pendingOperations;              //@synthesize pendingOperations=_pendingOperations - In the implementation block
@property (nonatomic,readonly) NSMapTable * requestsByCacheKey;                      //@synthesize requestsByCacheKey=_requestsByCacheKey - In the implementation block
@property (nonatomic,readonly) ASKResourceCache * cachedResources;                   //@synthesize cachedResources=_cachedResources - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * accessQueue;                       //@synthesize accessQueue=_accessQueue - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * notificationQueue;                 //@synthesize notificationQueue=_notificationQueue - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * requestQueue;                      //@synthesize requestQueue=_requestQueue - In the implementation block
@property (nonatomic,readonly) BOOL isIdle; 
@property (nonatomic,readonly) BOOL isInBackground;                                  //@synthesize isInBackground=_isInBackground - In the implementation block
-(id)init;
-(void)dealloc;
-(id)description;
-(NSOperationQueue *)accessQueue;
-(NSOperationQueue *)notificationQueue;
-(void)_commonInit;
-(void)cancelAllRequests;
-(NSOperationQueue *)requestQueue;
-(BOOL)isInBackground;
-(NSMutableDictionary *)pendingOperations;
-(BOOL)isIdle;
-(void)enterForeground;
-(void)enterBackground;
-(BOOL)loadResourceWithRequest:(id)arg1 reason:(long long)arg2 ;
-(BOOL)isIdleForReason:(long long)arg1 ;
-(void)removeAllCachedResources;
-(ASKResourceCache *)cachedResources;
-(NSMapTable *)requestsByCacheKey;
-(id)requestKeyForCacheKey:(id)arg1 ;
-(void)postDidLoadAllForReason:(long long)arg1 ;
-(void)reprioritizeOperations;
-(void)updateLoadReason:(long long)arg1 forOperation:(id)arg2 ;
-(long long)currentQualityOfService;
-(void)finishLoadForRequest:(id)arg1 withResource:(id)arg2 error:(id)arg3 ;
-(void)postDidBeginLoadingIfIdle;
-(void)postDidIdleIfIdle;
-(id)initWithRequestQueue:(id)arg1 accessQueue:(id)arg2 notificationQueue:(id)arg3 cacheLimit:(long long)arg4 ;
-(id)initWithParentResourceLoader:(id)arg1 ;
-(void)addResource:(id)arg1 forCacheKey:(id)arg2 ;
-(id)cachedResourcesForCacheKey:(id)arg1 ;
-(void)cancelRequestForCacheKey:(id)arg1 ;
-(BOOL)setReason:(long long)arg1 forRequestWithKey:(id)arg2 ;
@end

