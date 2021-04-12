/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@protocol OS_dispatch_queue;
#import <StoreServices/StoreServices-Structs.h>
@class NSObject, SSVURLCacheConfiguration;

@interface SSVURLCache : NSObject {

	NSObject*<OS_dispatch_queue> _accessSerialQueue;
	CFURLStorageSessionRef _cacheStorageSession;
	SSVURLCacheConfiguration* _configuration;
	CFURLCacheRef _urlCache;

}
-(id)init;
-(void)dealloc;
-(id)initWithConfiguration:(id)arg1 ;
-(id)cachedResponseForRequest:(id)arg1 ;
-(void)storeCachedResponse:(id)arg1 forRequest:(id)arg2 ;
-(void)removeAllCachedResponses;
-(id)cachedConnectionResponseForRequestProperties:(id)arg1 cachedResponse:(id*)arg2 ;
-(void)storeConnectionResponse:(id)arg1 forRequestProperties:(id)arg2 userInfo:(id)arg3 ;
-(id)cachedConnectionResponseForRequestProperties:(id)arg1 ;
-(void)configureRequest:(id)arg1 ;
-(void)loadMemoryCacheFromDisk;
-(void)saveMemoryCacheToDisk;
-(void)storeConnectionResponse:(id)arg1 forRequestProperties:(id)arg2 ;
@end

