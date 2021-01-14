/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)removeAllCachedResponses;
-(void)storeCachedResponse:(id)arg1 forRequest:(id)arg2 ;
-(id)initWithConfiguration:(id)arg1 ;
-(id)cachedConnectionResponseForRequestProperties:(id)arg1 cachedResponse:(id*)arg2 ;
-(void)storeConnectionResponse:(id)arg1 forRequestProperties:(id)arg2 userInfo:(id)arg3 ;
-(id)cachedConnectionResponseForRequestProperties:(id)arg1 ;
-(void)loadMemoryCacheFromDisk;
-(void)saveMemoryCacheToDisk;
-(void)storeConnectionResponse:(id)arg1 forRequestProperties:(id)arg2 ;
-(void)configureRequest:(id)arg1 ;
-(id)cachedResponseForRequest:(id)arg1 ;
-(void)dealloc;
@end

