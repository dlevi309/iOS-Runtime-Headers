/*
* Generated on Thursday, January 14, 2021 at 2:22:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
*/


@protocol OS_dispatch_queue;
#import <ShareSheet/ShareSheet-Structs.h>
@class NSObject, _UIMatchingExtensionsResult, NSMutableDictionary, NSMutableArray;

@interface _UIActivityApplicationExtensionsCache : NSObject {

	BOOL _primed;
	unsigned long long _cacheMisses;
	unsigned long long _cacheHits;
	os_unfair_lock_s _cacheLock;
	BOOL _cacheEnabled;
	BOOL _precached;
	NSObject*<OS_dispatch_queue> _registrationQueue;
	NSObject*<OS_dispatch_queue> _primedExtensionsQueue;
	_UIMatchingExtensionsResult* _primedExtensionsResult;
	NSMutableDictionary* _cachedResults;
	NSMutableDictionary* _extensionMatchTokens;
	NSMutableArray* _continuousDiscoveryRequests;

}

@property (retain) NSObject*<OS_dispatch_queue> primedExtensionsQueue;                //@synthesize primedExtensionsQueue=_primedExtensionsQueue - In the implementation block
@property (retain) _UIMatchingExtensionsResult * primedExtensionsResult;              //@synthesize primedExtensionsResult=_primedExtensionsResult - In the implementation block
@property (retain) NSMutableDictionary * cachedResults;                               //@synthesize cachedResults=_cachedResults - In the implementation block
@property (retain) NSMutableDictionary * extensionMatchTokens;                        //@synthesize extensionMatchTokens=_extensionMatchTokens - In the implementation block
@property (retain) NSMutableArray * continuousDiscoveryRequests;                      //@synthesize continuousDiscoveryRequests=_continuousDiscoveryRequests - In the implementation block
+(id)sharedExtensionsCache;
-(id)init;
-(void)registerPendingContinuousExtensionsDiscovery;
-(void)setCachedResults:(NSMutableDictionary *)arg1 ;
-(void)setExtensionMatchTokens:(NSMutableDictionary *)arg1 ;
-(void)setContinuousDiscoveryRequests:(NSMutableArray *)arg1 ;
-(void)setPrimedExtensionsQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableDictionary *)cachedResults;
-(void)_cacheMatchingExtensionsResult:(id)arg1 cacheKey:(id)arg2 ;
-(NSMutableDictionary *)extensionMatchTokens;
-(void)_cacheMatchingExtensions:(id)arg1 cacheKey:(id)arg2 error:(id)arg3 ;
-(NSMutableArray *)continuousDiscoveryRequests;
-(void)_runContinuousExtensionDiscovery:(id)arg1 cacheKey:(id)arg2 ;
-(id)_getCachedMatchingExtensionsResultWithCacheKey:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)primedExtensionsQueue;
-(void)_clearCacheResults;
-(void)_delayContinuousExtensionsDiscoveryRequest:(id)arg1 cacheKey:(id)arg2 ;
-(void)primeExtensionsResultWithMatchingAttributes:(id)arg1 ;
-(id)getExtensionsResultWithMatchingAttributes:(id)arg1 ;
-(_UIMatchingExtensionsResult *)primedExtensionsResult;
-(void)setPrimedExtensionsResult:(_UIMatchingExtensionsResult *)arg1 ;
-(id)reportExtensionsCacheResult;
@end

