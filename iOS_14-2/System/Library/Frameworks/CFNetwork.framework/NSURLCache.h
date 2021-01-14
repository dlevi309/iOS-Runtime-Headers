/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/


#import <CFNetwork/CFNetwork-Structs.h>
@class NSURLCacheInternal;

@interface NSURLCache : NSObject {

	NSURLCacheInternal* _internal;

}

@property (assign) unsigned long long memoryCapacity; 
@property (assign) unsigned long long diskCapacity; 
@property (readonly) unsigned long long currentMemoryUsage; 
@property (readonly) unsigned long long currentDiskUsage; 
+(id)sharedURLCache;
+(void)setSharedURLCache:(id)arg1 ;
-(id)_diskCacheDefaultPath;
-(unsigned long long)currentMemoryUsage;
-(unsigned long long)memoryCapacity;
-(void)removeCachedResponsesSinceDate:(id)arg1 ;
-(id)init;
-(void)removeAllCachedResponses;
-(void)flushWithCompletion:(/*^block*/id)arg1 ;
-(void)setMemoryCapacity:(unsigned long long)arg1 ;
-(unsigned long long)currentDiskUsage;
-(void)storeCachedResponse:(id)arg1 forDataTask:(id)arg2 ;
-(void)_nscfBridgeURLCacheRemoveAllCachedResponses;
-(unsigned long long)diskCapacity;
-(void)_nscfBridgeURLCacheSetMemoryCapacity:(long long)arg1 ;
-(void)setDiskCapacity:(unsigned long long)arg1 ;
-(void)storeCachedResponse:(id)arg1 forRequest:(id)arg2 ;
-(id)_initVaryHeaderEnabledWithPath:(id)arg1 ;
-(id)_initWithMemoryCapacity:(unsigned long long)arg1 diskCapacity:(unsigned long long)arg2 relativePath:(id)arg3 ;
-(id)_varyStateForURL:(id)arg1 ;
-(void)_nscfBridgeURLCacheSetDiskCapacity:(long long)arg1 ;
-(void)getCachedResponseForDataTask:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)cachedResponseForRequest:(id)arg1 ;
-(long long)_nscfBridgeURLCacheCurrentDiskUsage;
-(void)_nscfBridgeURLCacheRemoveCachedResponseForRequest:(id)arg1 ;
-(id)initWithMemoryCapacity:(unsigned long long)arg1 diskCapacity:(unsigned long long)arg2 diskPath:(id)arg3 ;
-(void)_updateVaryState:(id)arg1 forURL:(id)arg2 ;
-(id)_initWithIdentifier:(id)arg1 memoryCapacity:(long long)arg2 diskCapacity:(long long)arg3 private:(BOOL)arg4 ;
-(id)_cacheDirectory;
-(long long)_nscfBridgeURLCacheDiskCapacity;
-(void)removeCachedResponseForRequest:(id)arg1 ;
-(id)_initWithExistingCFURLCache:(CFURLCache*)arg1 ;
-(CFCachedURLResponse*)_nscfBridgeURLCacheCopyResponseForRequest:(CFURLRequestRef)arg1 ;
-(id)initWithMemoryCapacity:(unsigned long long)arg1 diskCapacity:(unsigned long long)arg2 directoryURL:(id)arg3 ;
-(void)_nscfBridgeURLCacheStoreCachedResponse:(CFCachedURLResponse*)arg1 forRequest:(CFURLRequestRef)arg2 ;
-(BOOL)_isVaryHeaderSupportEnabled;
-(long long)_nscfBridgeURLCacheCurrentMemoryUsage;
-(const CFURLCache*)_CFURLCache;
-(void)removeCachedResponseForDataTask:(id)arg1 ;
-(long long)_nscfBridgeURLCacheMemoryCapacity;
-(void)dealloc;
@end

